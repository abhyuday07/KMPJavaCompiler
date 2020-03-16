# Generated from java8.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
	from .java8Parser import java8Parser
	from .java8Visitor import java8Visitor
else:
	from java8Parser import java8Parser
	from java8Visitor import java8Visitor
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
	def visitLiteral(self, ctx:java8Parser.LiteralContext):
		print("hello")
		return self.visitChildren(ctx)
	def visitName(self,ctx:java8Parser.NameContext):
		return self.visitChildren(ctx)

del java8Parser