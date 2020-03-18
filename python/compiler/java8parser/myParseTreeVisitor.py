# Generated from java8.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
	from .java8Lexer import java8Lexer
	from .java8Parser import java8Parser
	from .java8Visitor import java8Visitor
	from .ThreeAddressCode import *
	from .firstPassTreeVisitor import firstPassTreeVisitor
else:
	from java8Lexer import java8Lexer
	from java8Parser import java8Parser
	from java8Visitor import java8Visitor
	from firstPassTreeVisitor import firstPassTreeVisitor
import json
from graphviz import Digraph
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
	def __init__(self,parser,lexer,tree):
		super().__init__()
		self.parser = parser
		self.lexer = lexer
		fpTreeVisitor = firstPassTreeVisitor(parser,lexer,symTable)
		fpTreeVisitor.visit(tree)
	
	def __isIdentifier__(self,ctx):
		
		if(isinstance(ctx, tree.Tree.TerminalNode) and ctx.getSymbol().type == java8Lexer.Identifier):
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
	def __visitChildren__(self, ctx):
		'''
		Visits all children and returns the results in a list.
		'''
		result = []
		for child in self.__getChildren__(ctx):
			result.append(child.accept(self))
		return result

	def __typecheck__(self,type1, type2):
		#TODO: Fill this.
		return type1
	
	def __errorHandler__(self, str):
		raise Exception(str)

	def visitNormalclassDeclaration(self, ctx:java8Parser.NormalclassDeclarationContext):
		# normalclassDeclaration : modifier* CLASS Identifier typeParameters? superclass? superinterfaces? classBody
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				pass
			elif(self.__isIdentifier__(child)):
				pass
			elif(isinstance(child,self.parser.ClassBodyContext)):
				symTable.invokeScope(ctx)
				self.visitClassBody(child)
				symTable.closeCurrScope()
		return
	def visitMethodDeclaration(self, ctx:java8Parser.MethodDeclarationContext):
		# methodDeclaration : modifier* methodHeader methodBody
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				pass
			elif(isinstance(child,self.parser.MethodHeaderContext)):
				pass
			elif(isinstance(child,self.parser.MethodBodyContext)):
				symTable.invokeScope(ctx)
				self.visitMethodBody(child)
				symTable.closeCurrScope()
		return

	def visitBlock(self, ctx:java8Parser.BlockContext):
		symTable.invokeScope(ctx)
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return

	def visitWhileStatement(self, ctx:java8Parser.WhileStatementContext):
		symTable.invokeScope(ctx)
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitWhileStatementNoShortIf(self, ctx:java8Parser.WhileStatementNoShortIfContext):
		symTable.invokeScope(ctx)
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitBasicForStatement(self, ctx:java8Parser.BasicForStatementContext):
		symTable.invokeScope(ctx)
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitBasicForStatementNoShortIf(self, ctx:java8Parser.BasicForStatementNoShortIfContext):
		symTable.invokeScope(ctx)
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return
	def visitIfThenStatement(self, ctx:java8Parser.IfThenStatementContext):
		'''
		ifThenStatement : IF '(' expression ')' statement
		;
		ifThenElseStatement : IF '(' expression ')' statementNoShortIf ELSE statement
				;
		ifThenElseStatementNoShortIf : IF '(' expression ')' statementNoShortIf ELSE statementNoShortIf
				;
		'''
		symTable.invokeScope(ctx)
		p = self.__getChildren__(ctx)
		exprInfo = self.visitExpression(p[2])
		true_idx = tac.append('','','',exprInfo['name'])
		jump_idx = tac.append('','','','goto')
		true_label = tac.genLabel()
		tac.backpatch([true_idx],true_label)
		tac.backpatch(exprInfo['true_list'],true_label)
		stmtInfo = self.visitStatement(p[4])
		jump_label = tac.genLabel()
		tac.backpatch(exprInfo['false_list'],jump_label)
		tac.backpatch([jump_idx],jump_label)
		symTable.closeCurrScope()
		return
	def visitIfThenElseStatement(self, ctx:java8Parser.IfThenElseStatementContext):
		symTable.invokeScope(ctx)
		p = self.__getChildren__(ctx)
		exprInfo = self.visitExpression(p[2])
		true_idx = tac.append('','','',exprInfo['name'])
		jump_idx = tac.append('','','','goto')
		true_label = tac.genLabel()
		tac.backpatch([true_idx],true_label)
		tac.backpatch(exprInfo['true_list'],true_label)
		stmtInfo = self.visitStatementNoShortIf(p[4])
		jump_label = tac.genLabel()
		tac.backpatch(exprInfo['false_list'],jump_label)
		tac.backpatch([jump_idx],jump_label)
		stmtInfo = self.visitStatement(p[6])
		symTable.closeCurrScope()
		return
	def visitIfThenElseStatementNoShortIf(self, ctx:java8Parser.IfThenElseStatementNoShortIfContext):
		symTable.invokeScope(ctx)
		p = self.__getChildren__(ctx)
		exprInfo = self.visitExpression(p[2])
		true_idx = tac.append('','','',exprInfo['name'])
		jump_idx = tac.append('','','','goto')
		true_label = tac.genLabel()
		tac.backpatch([true_idx],true_label)
		tac.backpatch(exprInfo['true_list'],true_label)
		stmtInfo = self.visitStatementNoShortIf(p[4])
		jump_label = tac.genLabel()
		tac.backpatch(exprInfo['false_list'],jump_label)
		tac.backpatch([jump_idx],jump_label)
		stmtInfo = self.visitStatementNoShortIf(p[6])
		symTable.closeCurrScope()
		return
	def visitSwitchStatement(self, ctx:java8Parser.SwitchStatementContext):
		symTable.invokeScope(ctx)
		self.visitChildren(ctx)
		symTable.closeCurrScope()
		return

	def visitLocalVariableDeclaration(self, ctx:java8Parser.LocalVariableDeclarationContext):
		'''
		localVariableDeclaration : variableModifier* unanntype variableDeclaratorList
		'''
		localVariableInfo = {
			'modifiers': [],
			'type': None,
			'parameters': None,
			'dims' : None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.VariableModifierContext)):
				localVariableInfo['modifiers'].append(child.getText())
			elif(isinstance(child,self.parser.UnanntypeContext)):
				vdType = self.visitUnanntype(child)
				localVariableInfo['type'] = vdType['type_base']
				localVariableInfo['dims'] = vdType['type_dims']
			elif(isinstance(child,self.parser.VariableDeclaratorListContext)):
				vdList = self.visitVariableDeclaratorList(child)
				for var in vdList:
					varIdentifier = var['identifier']
					varInfo = localVariableInfo.copy()
					# Both C-type and Java type dimensions supported
					varInfo['dims'] = var['dims']
					symTable.addSymbol('variables',varIdentifier,varInfo)
		return
	
	def visitVariableInitializerList(self, ctx:java8Parser.VariableInitializerListContext):
		'''
		variableInitializerList : variableInitializer (',' variableInitializer)*
		;
		'''
		initializer_value = []
		for child in self.__getChildren__(ctx):
			if (java8Parser.ruleNames[ctx.getRuleIndex()] == "variableInitializer"):
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
	
	def visitUnannPrimitiveType(self, ctx:java8Parser.UnannPrimitiveTypeContext):
		'''
		unannPrimitiveType : numerictype
				|	BOOLEAN
				;
		'''
		return {"type_base": ctx.getText(), "type_dims":[]}

	def visitUnannReferenceType(self, ctx:java8Parser.UnannReferencetypeContext):
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
			# Not handled
			# pass
			dtype["type_base"] = self.visitUnannClassOrInterfaceType(child0)["type_base"]
		elif (java8Parser.ruleNames[child0.getRuleIndex()] == "unanntypeVariable"):
			dtype["type_base"] = self.visitUnanntypeVariable(child0)["type_base"]
		return dtype

	def visitFieldDeclaration(self, ctx:java8Parser.FieldDeclarationContext):
		'''
		fieldDeclaration : modifier* unanntype variableDeclaratorList ';'
		;
		'''
		fieldIdentifiers = []
		fieldInfo = {
			'modifiers': [],
			'type': None,
			'parameters': None,
			'dims': None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				fieldInfo['modifiers'].append(child.getText())
			elif(isinstance(child,self.parser.UnanntypeContext)):
				fType = self.visitUnanntype(child)
				fieldInfo['type'] = fType['type_base']
				fieldInfo['dims'] = fType['type_dims']
			elif(isinstance(child,self.parser.VariableDeclaratorListContext)):
				#If the reduction is already to a block need not change scope
				fieldIdentifiers = self.visitVariableDeclaratorList(child)
				for var in fieldIdentifiers:
					varIdentifier = var['identifier']
					varInfo = fieldInfo.copy()
					varInfo['dims'] = var['dims']
					# varInfo['value'] = var['value']
					symTable.addSymbol('variables',varIdentifier,varInfo)
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
				if c['type'] not in ['float', 'double', 'long', 'int']:
					self.__errorHandler__("- defined only for int, long, float and double")
				temp = symTable.getTemporary()
				tac.append(c['name'], None, temp, 'neg')
				return {'name':temp, 'type':c['type'],'true_list': [], 'false_list':[]}
			else: # Rule 3
				return self.visitUnaryExpression(children[1])
		assert(False) #Shouldn't reach here

	# Visit a parse tree produced by java8Parser#preIncrementExpression.
	def visitPreIncrementExpression(self, ctx:java8Parser.PreIncrementExpressionContext):
		'''
		preIncrementExpression : '++' unaryExpression
		;
		'''
		children = self.__getChildren__(ctx)
		c = self.visitUnaryExpression(children[1])
		if c.get('type') not in ['long', 'float', 'int', 'double']:
			self.__errorHandler__("++ defined only for int, long, float and double")
		tac.append(c['name'],1,c['name'],'+')
		return {'name': c['name'], 'type':c['type'],'true_list': [], 'false_list':[]}

	# Visit a parse tree produced by java8Parser#preDecrementExpression.
	def visitPreDecrementExpression(self, ctx:java8Parser.PreDecrementExpressionContext):
		'''
		preDecrementExpression : '--' unaryExpression
		;
		'''
		children = self.__getChildren__(ctx)
		if c.get('type') not in ['long', 'float', 'int', 'double']:
			self.__errorHandler__("++ defined only for int, long, float and double")

		c = self.visitUnaryExpression(children[1])
		tac.append(c['name'],1,c['name'],'-')
		return {'name': c['name'], 'type':c['type'],'true_list': [], 'false_list':[]}

	# Visit a parse tree produced by java8Parser#postIncrementExpression.
	def visitPostIncrementExpression(self, ctx:java8Parser.PostIncrementExpressionContext):
		'''
		postIncrementExpression: postfixExpression '++'
		;
		'''
		child = self.__getChildren__(ctx)[0]
		childResult = self.visitPostfixExpression(child)
		tempname = symTable.getTemporary()
		tac.append(childResult['name'], None, tempname, '=' )
		tac.append(childResult['name'], 1, childResult['name'], '+' )
		return {'name':tempname, 'type':childResult['type'],'true_list': [], 'false_list':[]}

	# Visit a parse tree produced by java8Parser#postDecrementExpression.
	def visitPostDecrementExpression(self, ctx:java8Parser.PostDecrementExpressionContext):
		'''
		postDecrementExpression: postfixExpression '--'
		;
		'''
		child = self.__getChildren__(ctx)[0]
		childResult = self.visitPostfixExpression(child)
		tempname = symTable.getTemporary()
		tac.append(childResult['name'], None, tempname, '=' )
		tac.append(childResult['name'], 1, childResult['name'], '-' )
		return {'name':tempname, 'type':childResult['type'],'true_list': [], 'false_list':[]}

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
			#TODO: Write function for castExpression
			return self.visitCastExpression(children[0])
		c = self.visitUnaryExpression(children[1])
		temp = symTable.getTemporary()
		if children[0].getText() == '~':
			if c['type'] not in ['int', 'long']:
				self.__errorHandler__("~ defined only for int, long")
			tac.append(c['name'], None, temp, 'complement') #Bitwise complement of an integer ~
		else:
			if c['type'] != 'boolean':
				self.__errorHandler__("~ defined only for boolean")
			tac.append(c['name'], None, temp, 'invert') #Boolean invert !
		return {'name': temp, 'type': c['type'],'true_list': [], 'false_list':[]}


	# Visit a parse tree produced by java8Parser#expressionStatement.
	def visitExpressionStatement(self, ctx:java8Parser.ExpressionStatementContext):
		'''
		expressionStatement : statementExpression ';'
		;
		'''
		return self.visitStatementExpression(self.__getChildren__(ctx)[0]) #Calling the default function. Default functions result of last child

	# Visit a parse tree produced by java8Parser#assignment.
	def visitAssignment(self, ctx:java8Parser.AssignmentContext):
		'''
		assignment : leftHandSide assignmentOperator expression
		;
		'''

		p = self.__visitChildren__(ctx)
		commonType = self.__typecheck__(p[0].get('type'), p[2]['type'])
		if not commonType:
			self.__errorHandler__("Types don't match")
		if(p[1]['operator'] == '='):
			tac.append(p[2]['name'], None, p[0].get('name'), '=')
			#TODO: How to handle leftHandSide array and field accesses. Now handled only 'name'.
		else:
			tac.append( p[0].get('name'), p[2]['name'],p[0].get('name'), p[1]['operator'][:-1])
		return {'type': commonType, 'name':p[0].get('name'), 'true_list': [], 'false_list' : []}
	
			

	# Visit a parse tree produced by java8Parser#assignmentOperator.
	def visitAssignmentOperator(self, ctx:java8Parser.AssignmentOperatorContext):
		return {'operator': ctx.getText()}

	# Visit a parse tree produced by java8Parser#conditionalExpression.
	def visitConditionalExpression(self, ctx:java8Parser.ConditionalExpressionContext):
		'''
		conditionalExpression : conditionalOrExpression
                      | conditionalOrExpression '?' expression ':' conditionalExpression
                      ;
		'''
		p = self.__getChildren__(ctx)
		if(len(p)==1):
			return self.__handleBinaryExpressions__(p[0])
		else:
			# conditionalOrExpression '?' expression ':' conditionalExpression
			condOrExprInfo = self.visitConditionalOrExpression(p[0])
			# here we will get a true false list along with value in temp
			exprLabel = tac.genLabel()
			exprInfo = self.visitExpression(p[2])
			idx = tac.append('','','','goto')
			condExprLabel = tac.genLabel()
			condExprInfo = self.visitConditionalExpression(p[4])
			print('ci',condOrExprInfo,'ei',exprInfo)
			tac.append(condOrExprInfo['name'],'',exprInfo['name'],'')
			nextLabel = tac.genLabel()
			tac.backpatch([idx],nextLabel)
			tac.backpatch(condOrExprInfo['true_list'],exprLabel)
			tac.backpatch(condOrExprInfo['false_list'],condExprLabel)
			condInfo = condExprInfo.copy()
			condInfo['name'] = exprInfo['name']
			condInfo['type'] = self.__typecheck__(exprInfo['type'],condInfo['type'])
			condInfo['true_list'] += exprInfo['true_list']
			condInfo['false_list'] += exprInfo['false_list']
			return condInfo

	# Visit a parse tree produced by java8Parser#conditionalOrExpression.
	def visitConditionalOrExpression(self, ctx:java8Parser.ConditionalOrExpressionContext):
		'''
		conditionalOrExpression : conditionalAndExpression
                        | conditionalOrExpression '||' conditionalAndExpression
                        ;
        '''
		return self.__handleBinaryExpressions__(ctx)

		# Visit a parse tree produced by java8Parser#conditionalAndExpression.
	def visitConditionalAndExpression(self, ctx:java8Parser.ConditionalAndExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#inclusiveOrExpression.
	def visitInclusiveOrExpression(self, ctx:java8Parser.InclusiveOrExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#exclusiveOrExpression.
	def visitExclusiveOrExpression(self, ctx:java8Parser.ExclusiveOrExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#andExpression.
	def visitAndExpression(self, ctx:java8Parser.AndExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#equalityExpression.
	def visitEqualityExpression(self, ctx:java8Parser.EqualityExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#relationalExpression.
	def visitRelationalExpression(self, ctx:java8Parser.RelationalExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#shiftExpression.
	def visitShiftExpression(self, ctx:java8Parser.ShiftExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#additiveExpression.
	def visitAdditiveExpression(self, ctx:java8Parser.AdditiveExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#multiplicativeExpression.
	def visitMultiplicativeExpression(self, ctx:java8Parser.MultiplicativeExpressionContext):
		return self.__handleBinaryExpressions__(ctx)

	# Visit a parse tree produced by java8Parser#name.
	def visitName(self, ctx:java8Parser.NameContext):
		'''
		name : Identifier
		|	name '.' Identifier
		;
		'''
		children = self.__getChildren__(ctx)
		if self.__isIdentifier__(children[0]):
			symbol = children[0].getText()
			symbolInfo= symTable.lookup('variables', symbol)
			scopeNo = symTable.getScopeOfSymbol('variables', symbol)
			if symbolInfo:
				nameInfo = {'name': symbol, 'type': symbolInfo['type'],'true_list':[],'false_list':[]}
				return nameInfo
			symTable.errorHandler(symbol)
		return self.visitChildren(ctx)

	def __handleMethods__(self,ctx):
		'''
		methodInvocation:	methodName '(' argumentList? ')'
		|	name '.' typeArguments? Identifier '(' argumentList? ')'
		|	name '.' typeArguments? Identifier '(' argumentList? ')'
		|	primary '.' typeArguments? Identifier '(' argumentList? ')'
		|	SUPER '.' typeArguments? Identifier '(' argumentList? ')'
		|	name '.' SUPER '.' typeArguments? Identifier '(' argumentList? ')'
		;
		'''
		children = self.__getChildren__(ctx)
		if(isinstance(children[0],self.parser.MethodNameContext)):
			# methodName '(' argumentList? ')'
			symbol = children[0].getText()
			methodInfo = symTable.lookup('methods',symbol)
			argProvided = []
			for child in children:
				if(isinstance(child,self.parser.ArgumentListContext)):
					argProvided = self.__visitChildren__(child)
			if(len(methodInfo['parameters']) != len(argProvided)):
				self.__errorHandler__("Number of arguments mismatch")
			expParams = methodInfo['parameters']
			for i in range(0,len(argProvided)):
				if(methodInfo['parameters'][i]['type']!=methodInfo['parameters'][expParams[i]]['type']):
					self.__errorHandler__("Type of arguments mismatch")
				else:
					tac.append(argProvided[i]['name'],'','__arg'+str(i)+'_','')
			tac.append('','',symbol,'function')

		elif(isinstance(children[0],self.parser.NameContext)):
			# name '.' typeArguments? Identifier '(' argumentList? ')'
			# name '.' SUPER '.' typeArguments? Identifier '(' argumentList? ')'
			resolveName = []
			if '.' in children[0].getText():
				resolveName = children[0].getText().split('.')
			else:
				resolveName.append(children[0].getText())
			symbol = None
			for child in children:
				if(self.__isIdentifier__(child)):
					symbol = child.getText()
			methodInfo = symTable.lookup('methods',symbol,resolveName)
			argProvided = []
			for child in children:
				if(isinstance(child,self.parser.ArgumentListContext)):
					argProvided = self.__visitChildren__(child)
			if(len(methodInfo['parameters']) != len(argProvided)):
				self.__errorHandler__("Number of arguments mismatch")
			expParams = methodInfo['parameters'].keys()
			for i in range(0,len(argProvided)):
				if(methodInfo['parameters'][i]['type']!=methodInfo['parameters'][expParams[i]]['type']):
					self.__errorHandler__("Type of arguments mismatch")
				else:
					tac.append(argProvided[i]['name'],'','__arg'+str(i)+'_','')
			tac.append('','',symbol,'function')
		return

	def __handleBinaryExpressions__(self, ctx):
		# Handles multiple binary expressions of form expr op expr.
		children = self.__getChildren__(ctx)
		if len(children) == 1:
			p = self.__visitChildren__(ctx)
			return p[0]
		op = children[1].getText()
		if op not in ['||','&&']:
			p = self.__visitChildren__(ctx)
		assert(len(p) == 3)
		if op not in ['||','&&']:
			# print(p)
			commonType = self.__typecheck__(p[0]['type'], p[2]['type'])
		if op == '||' or op == '&&':
			#TODO: Add code for truelist/falselist.
			lhs = children[0].accept(self)
			true_idx = []
			false_idx = []
			if(lhs['type'] != 'bool'):
				self.__errorHandler__(op + " defined only for boolean")
			if(op == '||'):
				true_idx.append(tac.append('','','',lhs['name']))
			else:
				temp = symTable.getTemporary()
				tac.append(temp,'',lhs['name'],'!')
				false_idx.append(tac.append('','','',lhs['name']))
			rhs = children[0].accept(self)
			if(rhs['type'] != 'bool'):
				self.__errorHandler__(op + " defined only for boolean")
			tac.append(rhs['name'],'',lhs['name'],'')
			return {'name': lhs[name], 'type':'boolean','true_list': 
					true_idx + lhs['true_list'] + rhs['true'],
					'false_list': false_idx + lhs['false_list']+rhs['false_idx']}

		elif op in ['^', '|', '&']: # Bitwise ops
			if commonType not in ['int', 'boolean', 'long']:
				self.__errorHandler__(op + " defined only for int, long and boolean")
			temp = symTable.getTemporary()
			tac.append(p[0]['name'], p[2]['name'], temp, op)
			return {'name':temp, 'type': commonType, 'true_list': [], 'false_list':[]}
		elif op in ['<', '>', '<=', '>=','==','!=']: #Relational operators
			if commonType not in ['int', 'long', 'double', 'float']:
				self.__errorHandler__(op + " defined only for int, long and double and float")
			temp = symTable.getTemporary()
			tac.append(p[0]['name'], p[2]['name'], temp, op)
			idx = tac.append('','','',temp)
			return {'name':temp, 'type': 'boolean', 'true_list': [idx], 'false_list':[]}
		elif op == 'instanceof':
			#TODO: check symbol table and inheritance hierarchy and return value here itself.
			pass
		elif op in ['>>>', '<<', '>>']: # Shift operators
			if commonType not in ['int', 'long']:
				self.__errorHandler__(op + " defined only for int and long")
			temp = symTable.getTemporary()
			tac.append(p[0]['name'], p[2]['name'], temp, op)
			return {'name':temp, 'type': commonType, 'true_list': [], 'false_list':[]}
		elif op in ['+', '-', '/', '*', '%']:
			if commonType not in ['int', 'long' , 'double', 'float']:
				self.__errorHandler__(op + " defined only for int, long, float and double")
			#May need to send different operators for each type as assembly instructions are diff. Will look at this later.
			temp = symTable.getTemporary()
			tac.append(p[0]['name'], p[2]['name'], temp, op)
			# print({'name':temp, 'type': commonType, 'true_list': [], 'false_list':[]})
			return {'name':temp, 'type': commonType, 'true_list': [], 'false_list':[]}
		assert(False)
				

	def visitMethodInvocation(self, ctx: java8Parser.MethodInvocationContext):
		return self.__handleMethods__(ctx)
	def visitMethodInvocation__1__primary(self, ctx: java8Parser.MethodInvocation__1__primaryContext):
		return self.__handleMethods__(ctx)
	def visitMethodInvocation__2__primary(self, ctx: java8Parser.MethodInvocation__2__primaryContext):
		return self.__handleMethods__(ctx)

	def printSymbolTable(self):
		print(symTable.scope_lookup)
		dot = Digraph(comment="Symbol Table")
		for i in range(0,len(symTable.scopes)):
			dot.node(str(i),json.dumps(symTable.scopes[i],indent=4))
			dot.edge(str(symTable.scopes[i]["parent"]), str(i))
		dot.render('graph',view=True)

	def printTAC(self):
		print('op1\t\top2\t\tdest\t\toperator')
		print('\n'.join(['\t\t'.join([str(cell) for cell in row]) for row in tac.code]))