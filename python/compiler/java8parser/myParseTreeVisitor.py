# Generated from java8.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
	from .java8Parser import java8Parser
	from .java8Visitor import java8Visitor
	from .SymbolTable import SymbolTable
else:
	from java8Parser import java8Parser
	from java8Visitor import java8Visitor
	from SymbolTable import SymbolTable

symTable = SymbolTable()
# njp = java8Parser()
# This class defines a complete generic visitor for a parse tree produced by java8Parser.
'''
['EMPTY', 'EOF', '__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__',
 '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', 
 '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', 
 '__subclasshook__', '__weakref__', 'accept', 'addChild', 'addErrorNode', 'addTokenNode', 'children', 'copyFrom',
  'depth', 'enterRule', 'exception', 'exitRule', 'getAltNumber', 'getChild', 'getChildCount', 'getChildren', 
  'getPayload', 'getRuleContext', 'getRuleIndex', 'getSourceInterval', 'getText', 'getToken', 'getTokens', 
  'getTypedRuleContext', 'getTypedRuleContexts', 'importDeclaration', 'invokingState', 'isEmpty', 'packageDeclaration', 
  'parentCtx', 'parser', 'removeLastChild', 'setAltNumber', 'start', 'stop', 'toString', 'toStringTree', 'typeDeclaration']
'''
class myParseTreeVisitor(java8Visitor):
	# Visit a parse tree produced by java8Parser#literal.
	def __init__(self,parser,lexer):
		super().__init__()
		self.parser = parser
		self.lexer = lexer
		'''
		Here we will define some auxiliary variables to store
		intermediate values obtained while visiting a tree
		'''
		# CLASS
		# Whenever a class is declared using
		# normalclassDeclaration : modifier* CLASS Identifier typeParameters? superclass? superinterfaces? classBody
		self.classModifiers = []
		self.classIdentifier = None
		# METHOD
		# Whenever a mrthod is declared using
		# 
	
	def __isIdentifier__(self,ctx):
		if(isinstance(ctx, tree.Tree.TerminalNode) and ctx.getSymbol().type == 102):
			return True
		else:
			return False

	def __getChildren__(self,ctx,onlyTerminalNodes = False):
		'''
		Returns all the child in form of a list
		onlyTerminalNodes = 1 will only yield Terminal nodes
		'''
		if(isinstance(ctx, tree.Tree.TerminalNode)):
			return None
		else:
			children = []
			if(onlyTerminalNodes == False):
				for i in range(0,ctx.getChildCount()):
					child = ctx.getChild(i)
					children.append(child)
			else:
				for i in range(0,ctx.getChildCount()):
					child = ctx.getChild(i)
					if(isinstance(ctx, tree.Tree.TerminalNode)):
						children.append(child)
			return children

	def visitNormalclassDeclaration(self, ctx:java8Parser.NormalclassDeclarationContext):
		# normalclassDeclaration : modifier* CLASS Identifier typeParameters? superclass? superinterfaces? classBody
		# child Identifier needs to be activated
		# Currently a class is being visited
		classModifiers = []
		classIdentifier = None
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				classModifiers.append(child.getText())
			elif(self.__isIdentifier__(child)):
				classIdentifier = child.getText()
				symTable.addSymbol('classes',classIdentifier,classModifiers)
			elif(isinstance(child,self.parser.ClassBodyContext)):
				symTable.createNewScope()
				self.visitClassBody(child)
				symTable.closeCurrScope()
		print(symTable.scopes)
		return




del java8Parser