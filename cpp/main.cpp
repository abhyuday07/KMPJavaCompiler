#include <iostream>
#include <antlr4-runtime/antlr4-runtime.h>
#include <antlr4-runtime/antlr4-common.h>
#include "Java8Lexer.h"
#include "Java8Parser.h"
#include <vector>
#include <string>
#include <cstring>
#include <graphviz/gvc.h>
//#include "ImageVisitor.h"

class AST_Node {
private:
    int id;
    std::string text;
    std::string type;
    int rulenumber;
    std::vector<AST_Node*> children;
    AST_Node* parent;
public:
    static int num_nodes;
    static std::vector<AST_Node*> nodes;

    AST_Node(const std::string& tx, const std::string& tp, int rn, AST_Node* par): 
        id(AST_Node::num_nodes), text(tx), type(tp), rulenumber(rn), parent(par) {
        AST_Node::num_nodes++;
        if (par) {par->addChild(this);}
        AST_Node::nodes.push_back(this);
    }

    void addChild(AST_Node* node) {this->children.push_back(node);}
    int getId() {return this->id;}
    const std::string& getText() {return this->text;}
    const std::string& getType() {return this->type;}
    const std::vector<AST_Node*>& getChildren() {return this->children;}
    int getRuleNumber() {return this->rulenumber;}
};

int AST_Node::num_nodes = 0;
std::vector<AST_Node*> AST_Node::nodes;

AST_Node* createAST(antlr4::tree::ParseTree* root, AST_Node* par, bool verbose, Java8Parser& parser, Java8Lexer& lexer) {
    AST_Node* newnode = par;
    // handling the special case of assignment
    if (dynamic_cast<antlr4::ParserRuleContext*>(root)) {
        std::string type = parser.getRuleNames()[dynamic_cast<antlr4::ParserRuleContext*>(root)->getRuleIndex()];
        if (verbose) {std::cout << "Visiting nonterminal " + std::string(type) + "..." << std::endl;}
        if (!type.compare("assignment")) {
            // handling the special case of assignment rule
            // this is an assignment rule hence it must have 3 children
            // also the second child should be of type assignment operator
            assert(root->children.size() == 3);
            int rulenumber = dynamic_cast<antlr4::ParserRuleContext*>(root->children[1])->getRuleIndex();
            std::string child1_type = parser.getRuleNames()[rulenumber];
            newnode = new AST_Node(root->children[1]->getText(), type, rulenumber, par);
            for (int i : {0, 2}) {
                // processing child i
                createAST(root->children[i], newnode, verbose, parser, lexer);
            }
            return newnode;
        }
    }
    if (dynamic_cast<antlr4::tree::TerminalNode*>(root)) {
        newnode = new AST_Node(root->getText(), "Identifier", -1, par);
        return newnode;
    }
    bool is_skipnode = false;
    if (root->children.size() == 1) {
        if (dynamic_cast<antlr4::ParserRuleContext*>(root->children[0])) {
            is_skipnode = true;
        } else if (dynamic_cast<antlr4::tree::TerminalNode*>(root->children[0])) {
            std::string symbolname = 
                lexer.getVocabulary().getSymbolicName(dynamic_cast<antlr4::tree::TerminalNode*>(root->children[0])->getSymbol()->getType());
            if (!symbolname.compare("Identifier")) {
                is_skipnode = true;
            }
        }
    }
    int rulenumber = dynamic_cast<antlr4::ParserRuleContext*>(root)->getRuleIndex();
	std::string type = parser.getRuleNames()[rulenumber];
    if (is_skipnode && verbose) {std::cout << "\tPruning Tree at nonterminal " + std::string(type) + "..." << std::endl;}
    if (!is_skipnode) {
		newnode = new AST_Node(root->getText(), type, rulenumber, par);
    }
	for (antlr4::tree::ParseTree* child : root->children) {
		if (dynamic_cast<antlr4::ParserRuleContext*>(child)) {
			createAST(child, newnode, verbose, parser, lexer);
        } else if (dynamic_cast<antlr4::tree::TerminalNodeImpl*>(child)) {
            std::string symbolname = 
                lexer.getVocabulary().getSymbolicName(dynamic_cast<antlr4::tree::TerminalNodeImpl*>(child)->getSymbol()->getType());
            if (!symbolname.compare("Identifier")) {
                createAST(child, newnode, verbose, parser, lexer);
            }
        }
    }
	return newnode;
}

Agnode_t* createGraph(AST_Node* root, Agraph_t* g) {
    std::string tmp;
    if (root->getChildren().size() == 0) {
        // this is a terminal node
        tmp = root->getText() + '\n' + root->getType() + " (" + std::to_string(root->getId()) + ')';
    } else {
        // this is a nonterminal node
        tmp = std::to_string(root->getRuleNumber()) + ". " + root->getType() + " (" + std::to_string(root->getId()) + ')';
    }
    char* nodename = new char[tmp.size()+1];
    strcpy(nodename, tmp.c_str());
    Agnode_t* parnode = agnode(g, nodename, 1);
	for (AST_Node* child : root->getChildren()) {
		Agnode_t* childnode = createGraph(child, g);
        agedge(g, parnode, childnode, NULL, 1);
    }
    return parnode;
}

int main(int argc, const char* argv[]) {
    bool verbose = true;
    std::ifstream stream;
    stream.open(inputfile.c_str());
    antlr4::ANTLRInputStream input(stream);
    if (verbose) {std::cout << "Parsing program..." << std::endl;}
    Java8Lexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    Java8Parser parser(&tokens);
    if (verbose) {std::cout << "Parsing complete." << std::endl;}
    if (verbose) {std::cout << "Constructing ParseTree..." << std::endl;}
    antlr4::tree::ParseTree* tree = parser.compilationUnit();
    if (verbose) {std::cout << "ParseTree successfully constructed." << std::endl;}
    if (verbose) {std::cout << "Constructing AbstractSyntaxTree..." << std::endl;}
    AST_Node* ast = createAST(tree, NULL, verbose, parser, lexer);
    if (verbose) {std::cout << "AbstractSyntaxTree successfully constructed." << std::endl;}

    //create and render the graph
    char astgraph_name[] = "Abstract Syntax Tree";
    Agraph_t* astgraph = agopen(astgraph_name, Agstrictdirected, 0);
    if (verbose) {std::cout << "Constructing Graph..." << std::endl;}
    Agnode_t* astgraph_root = createGraph(ast, astgraph);
    if (verbose) {std::cout << "Graph successfully constructed." << std::endl;}
    /* set up a graphviz context */
    GVC_t* gvc = gvContext();
    /* parse command line args - minimally argv[0] sets layout engine */
    //gvParseArgs(gvc, argc, argv);
    gvLayout(gvc, astgraph, "dot");
    if (verbose) {std::cout << "Rendering Graph..." << std::endl;}
    gvRenderFilename(gvc, astgraph, "dot", outputfile.c_str());
    if (verbose) {std::cout << "Graph successfully rendered." << std::endl;}
    // system("dot -Tpdf graph.gv >| graph.pdf");
    // system("rm -f graph.gv");
    gvFreeLayout(gvc, astgraph);
    agclose(astgraph);
    return 0;
}