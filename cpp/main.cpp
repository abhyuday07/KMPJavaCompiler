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
    std::vector<AST_Node*> children;
    AST_Node* parent;
public:
    static int num_nodes;
    static std::vector<AST_Node*> nodes;

    AST_Node(const std::string& tx, const std::string& tp, AST_Node* par): 
        id(AST_Node::num_nodes), text(tx), type(tp), parent(par) {
        AST_Node::num_nodes++;
        if (par) {par->addChild(this);}
        AST_Node::nodes.push_back(this);
    }

    void addChild(AST_Node* node) {this->children.push_back(node);}
    int getId() {return this->id;}
    const std::string& getText() {return this->text;}
    const std::string& getType() {return this->type;}
    const std::vector<AST_Node*>& getChildren() {return this->children;}

};

int AST_Node::num_nodes = 0;
std::vector<AST_Node*> AST_Node::nodes;

AST_Node* createAST(antlr4::RuleContext* root, AST_Node* par, Java8Parser& parser) {
    bool is_skipnode = (root->children.size() == 1) && dynamic_cast<antlr4::ParserRuleContext*>(root->children[0]);
    AST_Node* newnode = par;
    if (!is_skipnode) {
		std::string type = parser.getRuleNames()[root->getRuleIndex()];
		newnode = new AST_Node(root->getText(), type, par);
    }
	for (antlr4::tree::ParseTree* child : root->children) {
		if (dynamic_cast<antlr4::RuleContext*>(child)) {
			createAST(dynamic_cast<antlr4::RuleContext*>(child), newnode, parser);
        }
    }
	return newnode;
}

Agnode_t* createGraph(AST_Node* root, Agraph_t* g) {
    std::string tmp = root->getText() + '\n' + root->getType() + " (" + std::to_string(root->getId()) + ')';
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
    std::ifstream stream;
    stream.open(argv[1]);
    antlr4::ANTLRInputStream input(stream);
    Java8Lexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    Java8Parser parser(&tokens);    
    antlr4::RuleContext* tree = parser.compilationUnit();
    AST_Node* ast = createAST(tree, NULL, parser);

    //create and render the graph
    char astgraph_name[] = "Abstract Syntax Tree";
    Agraph_t* astgraph = agopen(astgraph_name, Agstrictdirected, 0);
    Agnode_t* astgraph_root = createGraph(ast, astgraph);
    /* set up a graphviz context */
    GVC_t* gvc = gvContext();
    /* parse command line args - minimally argv[0] sets layout engine */
    //gvParseArgs(gvc, argc, argv);
    gvLayout(gvc, astgraph, "dot");
    gvRenderFilename(gvc, astgraph, "dot", "graph.gv");
    system("dot -Tpdf graph.gv >| graph.pdf");
    system("rm -f graph.gv");
    gvFreeLayout(gvc, astgraph);
    agclose(astgraph);
    return 0;
}