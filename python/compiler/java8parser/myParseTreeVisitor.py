# Generated from java8.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
	from .java8Parser import java8Parser
	from .java8Visitor import java8Visitor
	from .ThreeAddressCode import *
else:
	from java8Parser import java8Parser
	from java8Visitor import java8Visitor
	from ThreeAddressCode import *

global tac
tac = ThreeAddressCode()
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
				localVariableInfo['type'] = self.visitUnanntype(child)
			elif(isinstance(child,self.parser.VariableDeclaratorListContext)):
				#If the reduction is already to a block need not change scope
				localVariableIdentifiers = self.visitVariableDeclaratorList(child)
				for var in localVariableIdentifiers:
					symTable.addSymbol('variables',var,localVariableInfo)
		return
	
	def visitVariableInitializerList(self, ctx:java8Parser.VariableInitializerListContext):
		'''
		variableInitializerList : variableInitializer (',' variableInitializer)*
		;
		'''
		initializer_value = []
		for child in self.__getChildren__(ctx):
			if (java8Parser.ruleNames[ctx.getRuleInde()] == "variableInitializer"):
				initializer_value.append(self.visitVariableInitializer(child))
		return initializer_value

	def visitArrayInitializer(self, ctx:java8Parser.ArrayInitializerContext):
		'''
		arrayInitializer : '{' variableInitializerList? ','? '}'
		;
		'''
		initializer_value = 0
		for child in self.__getChildren__(ctx):
			if (java8Parser.ruleNames[child.getRuleIndex()] == "variableInitializerList"):
				initializer_value = self.visitVariableInitializerList(child)
		return initializer_value

	def visitVariableDeclaratorId(self, ctx:java8Parser.VariableDeclaratorIdContext):
		'''
		variableDeclaratorId : Identifier dims?
		'''
		variable_declarator_id= {"identifier": ctx.getChild(0).getText(), "dims":[]}
		if (ctx.getChildCount() == 2):
			variable_declarator_id["dims"] = self.visitDims(ctx.getChild(1))
		return variable_declarator_id

	def visitVariableInitializer(self, ctx:java8Parser.VariableInitializerListContext):
		'''
		variableInitializer : expression
		|	arrayInitializer
		;
		'''
		child = ctx.getChild(0)
		if (java8Parser.ruleNames[child.getRuleIndex()] == "expression"):
			return self.visitExpression(child)
		elif (java8Parser.ruleNames[child.getRuleIndex()] == "arrayInitializer"):
			return self.visitArrayInitializer(child)

	def visitVariableDeclarator(self, ctx:java8Parser.VariableDeclaratorContext):
		'''
		variableDeclarator : variableDeclaratorId ('=' variableInitializer)?
		;
		'''
		variable_declarator = self.visitVariableDeclaratorId(ctx.getChild(0))
		if (ctx.getChildCount() == 3):
			variable_declarator["value"] = self.visitVariableInitializer(ctx.getChild(2))
		return variable_declarator
			

	def visitVariableDeclaratorList(self,ctx:java8Parser.VariableDeclaratorListContext):
		'''
		variableDeclaratorList : variableDeclarator (',' variableDeclarator)*
		;
		'''
		variable_declarators = []
		for child in self.__getChildren__(ctx):
			if(isinstance(child,self.parser.VariableDeclaratorContext)):
				variable_declarators.append(self.visitVariableDeclarator(child))
		return variable_declarators

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

	def visitDims(self, ctx:java8Parser.DimsContext):
		dims = []
		for child in self.__getChildren__(ctx):
			if (child.getText() == '['):
				dims.append(-1)
		return dims

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
		dtype["type_dims"] = self.visitDims(child1)
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
		return

	# Visit a parse tree produced by java8Parser#unaryExpression.
	def visitUnaryExpression(self, ctx:java8Parser.UnaryExpressionContext):
		'''
		unaryExpression : preIncrementExpression
			| preDecrementExpression
			| '+' unaryExpression
			| '-' unaryExpression
			| unaryExpressionNotPlusMinus
			;
		'''
		children = self.__getChildren__(ctx)
		if isinstance(children[0], self.parser.PreIncrementExpressionContext): #Rule 1
			return self.visitPreIncrementExpression(children[0])
		elif isinstance(children[0], self.parser.PostDecrementExpressionContext): # Rule 2
			return self.visitPreDecrementExpression(children[0])
		elif isinstance(children[0], self.parser.UnaryExpressionNotPlusMinusContext): #Rule 5
			return self.visitUnaryExpressionNotPlusMinus(children[0])
		elif isinstance(children[1], self.parser.UnaryExpressionContext):
			if children[0].getText() == '-':	#Rule 4
				c = self.visitUnaryExpression(children[1])
				temp = symTable.getTemporary()
				tac.append(c['name'], None, temp, 'neg')
			else: # Rule 3
				return self.visitUnaryExpression(children[1])
		return {}

	# Visit a parse tree produced by java8Parser#preIncrementExpression.
	def visitPreIncrementExpression(self, ctx:java8Parser.PreIncrementExpressionContext):
		'''
		preIncrementExpression : '++' unaryExpression
        ;
		'''
		children = self.__getChildren__(ctx)
		c = self.visitUnaryExpression(children[1])
		tac.append(c['name'],1,c['name'],'+')
		return {'name': c['name']}

	# Visit a parse tree produced by java8Parser#preDecrementExpression.
	def visitPreDecrementExpression(self, ctx:java8Parser.PreDecrementExpressionContext):
		'''
		preDecrementExpression : '--' unaryExpression
        ;
		'''
		children = self.__getChildren__(ctx)
		c = self.visitUnaryExpression(children[1])
		tac.append(c['name'],1,c['name'],'-')
		return {'name': c['name']}

	# Visit a parse tree produced by java8Parser#postIncrementExpression.
	def visitPostIncrementExpression(self, ctx:java8Parser.PostIncrementExpressionContext):
		'''
		postIncrementExpression: postfixExpression '++'
	    ;
		'''
		returnobj = {}
		child = self.__getChildren__(ctx)[0]
		childResult = self.visitPostfixExpression(child)
		tempname = symTable.getTemporary()
		tac.append(childResult['name'], None, tempname, '=' )
		tac.append(childResult['name'], 1, childResult['name'], '+' )
		returnobj['name'] = tempname
		return returnobj

	# Visit a parse tree produced by java8Parser#postfixExpression.
	def visitPostfixExpression(self, ctx:java8Parser.PostfixExpressionContext):
		'''
		postfixExpression: (	primary
		|	name
		)
		(	postIncrementExpression__1__postfixExpression
		|	postDecrementExpression__1__postfixExpression
		)*
	    ;
		'''
		children = self.__getChildren__(ctx)
		if(isinstance(children[0], self.parser.NameContext)):
			return self.visitName(children[0])
		# TODO: a = a++ + a++ not working.
		return self.visitChildren(ctx)

	def visitUnaryExpressionNotPlusMinus(self, ctx:java8Parser.UnaryExpressionNotPlusMinusContext):
		'''
		unaryExpressionNotPlusMinus : postfixExpression
                            | '~' unaryExpression
                            | '!' unaryExpression
                            | castExpression
                            ;
		'''
		children = self.__getChildren__(ctx)
		if isinstance(children[0],self.parser.PostfixExpressionContext):
			return self.visitPostfixExpression(children[0])
		elif isinstance(children[0], self.parser.CastExpressionContext):
			return self.visitCastExpression(children[0])
		c = self.visitUnaryExpression(children[1])
		temp = symTable.getTemporary()
		if children[0].getText() == '~':
			tac.append(c['name'], None, temp, 'complement') #Bitwise complement of an integer ~
		else:
			tac.append(c['name'], None, temp, 'invert') #Boolean invert !
		return {'name': temp}


	# Visit a parse tree produced by java8Parser#name.
	def visitName(self, ctx:java8Parser.NameContext):
		'''
		name : Identifier
		|	name '.' Identifier
		;
		'''
		children = self.__getChildren__(ctx)
		if self.__isIdentifier__(children[0]):
			return {'name': children[0].getText()}
		return self.visitChildren(ctx)


	def printSymbolTable(self):
		print(symTable.scopes)

	def printTAC(self):
		print('op1\t\top2\t\tdest\t\toperator')
		print('\n'.join(['\t\t'.join([str(cell) for cell in row]) for row in tac.code]))