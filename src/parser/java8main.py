import antlr4
from java8Lexer import java8Lexer
from java8Parser import java8Parser
from java8Visitor import java8Visitor
from graphviz import Digraph

dot = Digraph(comment="Abstract Syntax Tree")


class AST_Node():
	def __init__(self,val = None, parent = None):
		self.val = val
		self.children = []
		self.parent = parent

	def add_children(node):
		self.children.append(node)

class AST_Graph():

	def __init__(self):
		self.root = None

	def add_node(self,val,parnode):
		newnode = AST_Node(val,parnode):
		if (self.root == None):
			self.root = newnode

	def add_children(self,parnode,childnode):
		parnode.add_children(childnode)

def handleExpression(expr):
	type_str = str(type(expr))
	type_str = type_str.split('.')[-1][:-2]
	print(type_str)
	for child in expr.getChildren():
		if isinstance(child, antlr4.tree.Tree.TerminalNode):
			pass
		else:
			handleExpression(child)

def main():
    lexer = java8Lexer(antlr4.StdinStream())
    stream = antlr4.CommonTokenStream(lexer)
    parser = java8Parser(stream)
    tree = parser.compilationUnit()
    handleExpression(tree)

if __name__ == '__main__':
    main()

