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
		classIdentifier = None
		classInfo = {
			'modifiers': [],
			'type': None,
			'parameters': None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				classInfo['modifiers'].append(child.getText())
			elif(self.__isIdentifier__(child)):
				classIdentifier = child.getText()
				symTable.addSymbol('classes',classIdentifier,classInfo)
			elif(isinstance(child,self.parser.ClassBodyContext)):
				symTable.createNewScope()
				self.visitClassBody(child)
				symTable.closeCurrScope()
		# print(symTable.scopes)
		return
	def visitMethodDeclaration(self, ctx:java8Parser.MethodDeclarationContext):
		# methodDeclaration : modifier* methodHeader methodBody
		methodIdentifier = None
		methodInfo = {
			'modifiers': [],
			'type': None,
			'parameters': None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				methodInfo['modifiers'].append(child.getText())
			elif(isinstance(child,self.parser.MethodHeaderContext)):
				methodIdentifier , methodInfo['type'] , methodInfo['parameters'] = self.visitMethodHeader(child)
				symTable.addSymbol('methods',methodIdentifier,methodInfo)

			elif(isinstance(child,self.parser.MethodBodyContext)):
				#If the reduction is already to a block need not change scope
				self.visitMethodBody(child)
		# print(symTable.scopes)
		return
	def visitMethodHeader(self, ctx:java8Parser.MethodHeaderContext):
		'''
		methodHeader : result methodDeclarator throws_?
		|	typeParameters annotation* result methodDeclarator throws_?
		'''
		methodType = None
		methodIdentifier = None
		methodParameters = None
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ResultContext)):
				methodType = child.getText()
			elif(isinstance(child,self.parser.MethodDeclaratorContext)):
				methodIdentifier, methodParameters = self.visitMethodDeclarator(child)
		return methodIdentifier, methodType, methodParameters

	def visitMethodDeclarator(self, ctx:java8Parser.MethodDeclaratorContext):
		'''
		methodDeclarator : Identifier '(' formalParameterList? ')' dims?
		'''
		methodIdentifier = None
		methodParameters = []
		children = self.__getChildren__(ctx)
		for child in children:
			if(self.__isIdentifier__(child)):
				methodIdentifier = child.getText()
			if(isinstance(child,self.parser.FormalParameterListContext)):
				paramList = child.getText()
				if ',' in paramList:
					methodParameters = paramList.split(',')
				else:
					methodParameters.append(paramList)
		return methodIdentifier, methodParameters

	def visitBlock(self, ctx:java8Parser.BlockContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return

	def visitWhileStatement(self, ctx:java8Parser.WhileStatementContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitWhileStatementNoShortIf(self, ctx:java8Parser.WhileStatementNoShortIfContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitBasicForStatement(self, ctx:java8Parser.BasicForStatementContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitBasicForStatementNoShortIf(self, ctx:java8Parser.BasicForStatementNoShortIfContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitIfThenStatement(self, ctx:java8Parser.IfThenStatementContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitIfThenElseStatement(self, ctx:java8Parser.IfThenElseStatementContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitIfThenElseStatementNoShortIf(self, ctx:java8Parser.IfThenElseStatementNoShortIfContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitSwitchStatement(self, ctx:java8Parser.SwitchStatementContext):
		symTable.createNewScope()
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return

	def visitLocalVariableDeclaration(self, ctx:java8Parser.LocalVariableDeclarationContext):
		'''
		localVariableDeclaration : variableModifier* unanntype variableDeclaratorList
		'''
		localVariableIdentifiers = []
		localVariableInfo = {
			'modifiers': [],
			'type': None,
			'parameters': None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.VariableModifierContext)):
				localVariableInfo['modifiers'].append(child.getText())
			elif(isinstance(child,self.parser.UnanntypeContext)):
				localVariableInfo['type'] = child.getText()
			elif(isinstance(child,self.parser.variableDeclaratorList)):
				#If the reduction is already to a block need not change scope
				localVariableIdentifiers = self.visitVariableDeclaratorList(child)
				for var in localVariableIdentifiers:
					symTable.addSymbol('variables',var,localVariableInfo)
		# print(symTable.scopes)
		return
	def visitVariableDeclaratorList(self,ctx:java8Parser.VariableDeclaratorListContext):
		'''
		variableDeclaratorList : variableDeclarator (',' variableDeclarator)*
		;
		variableDeclarator : variableDeclaratorId ('=' variableInitializer)?
		;
		'''
		variableIdentifiers = []
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.VariableDeclaratorContext)):
				variableIdentifiers.append(child.getChild(0).getText())
		return variableIdentifiers

	def visitUnanntype(self, ctx:java8Parser.UnanntypeContext):
		'''
		unanntype : unannPrimitiveType
				|	unannReferencetype
				;
		'''
		# return type as a dict with keys "type_base" and "type_dims"
		# "type_dims" is a tuple with 1-3 values, each one can be -1 of non-neg
		# if -1, then that means that value has to be interpreted from the initialized value
		return self.visitChildren(ctx)
	
	def visitunannPrimitiveType(self, ctx:java8Parser.UnannPrimitiveTypeContext):
		'''
		unannPrimitiveType : numerictype
				|	BOOLEAN
				;
		'''
		return {"type_base": ctx.getText(), "dims":[]}

	def visitunannReferenceType(self, ctx:java8Parser.UnannReferencetypeContext):
		'''
		unannReferencetype : unannClassOrInterfaceType
				|	unanntypeVariable
				|	unannArraytype
		;
		'''
		return self.visitChildren(ctx)
	
	def visitUnannClassOrInterfaceType(self, ctx:java8Parser.UnannClassOrInterfaceTypeContext):
		return {"type_base": ctx.getText(), "type_dims":[]}

	def visitUnanntypeVariable(self, ctx:java8Parser.UnanntypeVariableContext):
		return {"type_base": ctx.getText(), "type_dims":[]}

	def visitUnannArraytype(self, ctx:java8Parser.UnannArraytypeContext):
		'''
		unannArraytype : unannPrimitiveType dims
				|	unannClassOrInterfaceType dims
				|	unanntypeVariable dims
		;
		'''
		dtype = {"type_base": "", "type_dims":[]}
		child0 = ctx.getChild(0)
		child1 = ctx.getChild(1)
		for child in self.__getChildren__(child1):
			if (child.getText() == '['):
				dtype["type_dims"].append(-1)
		if (java8Parser.ruleNames[child0.getRuleIndex()] == "unannPrimitiveType"):
			dtype["type_base"] = self.visitUnannPrimitiveType(child0)["type_base"]
		elif (java8Parser.ruleNames[child0.getRuleIndex()] == "unannClassOrInterfaceType"):
			dtype["type_base"] = self.visitClassOrInterfaceType(child0)["type_base"]
		elif (java8Parser.ruleNames[child0.getRuleIndex()] == "unanntypeVariable"):
			dtype["type_base"] = self.visitUnanntypeVariable(child0)["type_base"]
		return dtype

	def visitUnannPrimitiveType(self, ctx:java8Parser.UnannPrimitiveTypeContext):
		'''
		unannPrimitiveType : numerictype
				|	BOOLEAN
				;
		'''
		return ctx.getText()

	def visitFieldDeclaration(self, ctx:java8Parser.FieldDeclarationContext):
		'''
		fieldDeclaration : modifier* unanntype variableDeclaratorList ';'
		;
		'''
		fieldIdentifiers = []
		fieldInfo = {
			'modifiers': [],
			'type': None,
			'parameters': None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				fieldInfo['modifiers'].append(child.getText())
			elif(isinstance(child,self.parser.UnanntypeContext)):
				fieldInfo['type'] = self.visitUnanntype(child)
			elif(isinstance(child,self.parser.VariableDeclaratorListContext)):
				#If the reduction is already to a block need not change scope
				fieldIdentifiers = self.visitVariableDeclaratorList(child)
				for var in fieldIdentifiers:
					symTable.addSymbol('variables',var,fieldInfo)
		# print(symTable.scopes)
		return
	def printSymbolTable(self):
		print(symTable.scopes)
#del java8Parser