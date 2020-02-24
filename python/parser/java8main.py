import antlr4
from java8Lexer import java8Lexer
from java8Parser import java8Parser
from java8Visitor import java8Visitor
from graphviz import Digraph



class AST_Node():
	# static variable num_nodes to count the number of nodes
	num_nodes = 0
	nodes = []
	def __init__(self,text=None, nodetype=None, parent=None):
		self.id = AST_Node.num_nodes
		self.text = text
		self.type = nodetype
		self.children = []
		self.parent = parent
		if not parent == None:
			parent.addChild(self)
		AST_Node.num_nodes += 1
		AST_Node.nodes.append(self)

	def addChild(self, node):
		self.children.append(node)

	def getChildren(self):
		return self.children
	
	def getText(self):
		return self.text

	def getId(self):
		return self.id

	def getType(self):
		return self.type

class AST_Graph():

	def __init__(self):
		self.root = None

	def add_node(self,val,parnode):
		newnode = AST_Node(val,parnode)
		if (self.root == None):
			self.root = newnode

	def add_children(self,parnode,childnode):
		parnode.add_children(childnode)

def createGraph(root, dot):
	dot.node(str(root.getId()), root.getText() + '\n' + root.getType())
	for child in root.getChildren():
		createGraph(child, dot)
		dot.edge(str(root.getId()), str(child.getId()))

def deepCopy(old_root, par):
	# creates a copy of tree using AST_Nodes
	type_str = str(type(old_root)).split('.')[-1][:-2]
	new_rootnode = AST_Node(old_root.getText(), type_str, par)
	if isinstance(old_root, antlr4.tree.Tree.TerminalNode):
		# this is a terminal node, it doesn't have any children
		pass
	else:
		for child in old_root.getChildren():
			deepCopy(child, new_rootnode)
	return new_rootnode

def createAST(root, parent):
	is_skipnode = (root.getChildCount() == 1) and isinstance(root.getChild(0), antlr4.ParserRuleContext)
	if not is_skipnode:
		node_type = java8Parser.ruleNames[root.getRuleIndex()]
		newnode = AST_Node(root.getText(), node_type, parent)
	else:
		newnode = parent
	for child in root.getChildren():
		if isinstance(child, antlr4.RuleContext):
			createAST(child, newnode)
	return newnode



def compressTree(root):
	# this method removes all redundant nodes from the tree
	# nodes which have a single child is a redundant node
	idx = 0
	while idx < len(root.getChildren()):
		child = root.getChildren()[idx]
		if len(child.getChildren()) == 0:
			pass
		elif len(child.getChildren()) == 1:
			root.getChildren()[idx] = child.getChildren()[0]
			idx -= 1
		else:
			compressTree(child)
		idx += 1
	return root

def handleExpression(root):
	print(root.getText())
	print("visiting children...")
	for idx, child in enumerate(root.getChildren()):
		print(idx)
		if len(child.getChildren()) == 0:
			pass
		else:
			handleExpression(child)

def main():
	lexer = java8Lexer(antlr4.StdinStream())
	stream = antlr4.CommonTokenStream(lexer)
	parser = java8Parser(stream)
	tree = parser.compilationUnit()
	#mytree = deepCopy(tree, None)
	#compressTree(mytree)
	AST_root = createAST(tree, None)
	dot = Digraph(comment="Abstract Syntax Tree")
	createGraph(AST_root, dot)
	dot.render('graph', view=True)
	#handleExpression(mytree)

if __name__ == '__main__':
	main()

