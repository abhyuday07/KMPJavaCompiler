# Generated from java8.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
	from .java8Lexer import java8Lexer
	from .java8Parser import java8Parser
	from .java8Visitor import java8Visitor
	from .ThreeAddressCode import ThreeAddressCode, symTable
	from .firstPassTreeVisitor import firstPassTreeVisitor
	from .exceptionHandler import exceptionHandler
	from .utils import __getSize__
else:
	from java8Lexer import java8Lexer
	from java8Parser import java8Parser
	from java8Visitor import java8Visitor
	from ThreeAddressCode import ThreeAddressCode, symTable
	from firstPassTreeVisitor import firstPassTreeVisitor
	from exceptionHandler import exceptionHandler
	from utils import __getSize__
import json
from graphviz import Digraph
'''
symTable: All functionalities of Symbol Table
'''

class myParseTreeVisitor(java8Visitor):
	# Initalization
	def __init__(self,parser,lexer,tree):
		super().__init__()
		# Parser and lexer from which tree is generated
		self.parser = parser
		self.lexer = lexer
		# ExceptionHandler for efficient generation of errors
		self.exceptionHandler = exceptionHandler()
		'''
		tac : All functionalities of Three Address Code
		'''
		self.tac = ThreeAddressCode()
		'''
		In Java, the methods/classes can be invoked before declaration.
		Hence, a single pass is not sufficient to generate the three address code.
		In first pass, all class/methods are declared with the scopes.
		In the second pass, everything else is done.
		'''
		fpTreeVisitor = firstPassTreeVisitor(parser,lexer,symTable)
		fpTreeVisitor.visit(tree)
	
	def __isIdentifier__(self,ctx):
		'''
		input : ctx
		output : if ctx is Identifier
					return True
				 else
				 	return False
		'''
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
		Visits all children and returns the result aaggregated in a list.
		'''
		result = []
		for child in self.__getChildren__(ctx):
			result.append(child.accept(self))
		return result

	def __typecheck__(self,type1, type2):
		'''
		Returns the common type of 2 sent types. Does NOT raise errors.
		TODO: https://www.geeksforgeeks.org/type-conversion-java-examples/.Will do this later.
		'''
		if type1 == type2:
			return type1
		else:
			return None

	def __errorHandler__(self, ctx,err,e=0):
		'''
		Send The message and ctx 
		(ctx is reqd for output line number)
		'''
		self.exceptionHandler.raiseException(ctx,err,e)
		raise Exception(err)
		return
	def __handleShortCircuit__(self,exprInfo):
		'''
		input : exprInfo a.k.a return of visitExpression
		output : Nothing
		Generates theree address code for short circuit
		Pseudo Code:
						[expr_code]
						goto next_label
		true_label : 	temp = True
						goto next_label
		false_label :	temp = False
						goto next_label # Redundant but let it be
		next_label :	
		'''
		if(exprInfo['type'] != {'base':'boolean','dims':0}):
			return
		if(len(exprInfo['continue_list']) + len(exprInfo['break_list']) == 0):
			return
		next_idx = []
		next_idx.append(self.tac.append('','','','goto'))
		if('true_list' in exprInfo and len(exprInfo['true_list']) > 0):
			true_label = self.tac.genLabel()
			self.tac.backpatch(exprInfo['true_list'],true_label)
			self.tac.append('true','',exprInfo['name'],'=:boolean')
			next_idx.append(self.tac.append('','','','goto'))
		if('false_list' in exprInfo and len(exprInfo['false_list']) > 0):
			false_label = self.tac.genLabel()
			self.tac.backpatch(exprInfo['false_list'],false_label)
			self.tac.append('false','',exprInfo['name'],'=:boolean')
			next_idx.append(self.tac.append('','','','goto'))
		next_label = self.tac.genLabel()
		self.tac.backpatch(next_idx,next_label)
		return

	def __handleWhile__(self,ctx):
		'''
		whileStatement : WHILE '(' expression ')' statement
		;
		whileStatementNoShortIf : WHILE '(' expression ')' statementNoShortIf
		;
		'''
		symTable.invokeScope(ctx)
		children = self.__getChildren__(ctx)
		expr_label = None
		stmt_label = None
		next_label = None
		'''
		Pseudo code:
		expr_label : [code for expr]
		if(expr) goto stmt_label
		goto next_label
		stmt_label: [code for stmt]
		goto expr_label
		next_label
		'''
		expr_label = self.tac.genLabel()
		exprInfo = self.visitExpression(children[2])
		jump_stmt = self.tac.append('','','',exprInfo['name'])
		jump_out = self.tac.append('','','','goto')
		stmt_label = self.tac.genLabel()
		stmtInfo = children[-1].accept(self)
		self.tac.append('','',expr_label,'goto')
		next_label = self.tac.genLabel()
		self.tac.backpatch(exprInfo['true_list'],stmt_label)
		self.tac.backpatch(exprInfo['false_list'],next_label)
		self.tac.backpatch([jump_stmt],stmt_label)
		self.tac.backpatch([jump_out],next_label)
		self.tac.backpatch(stmtInfo['break_list'],next_label)
		self.tac.backpatch(stmtInfo['continue_list'],expr_label)
		symTable.closeCurrScope()
		return {'break_list':[], 'continue_list':[]}
	def visitDoStatement(self,ctx:java8Parser.DoStatementContext):
		'''
		doStatement : DO statement WHILE '(' expression ')' ';'
		;
		'''
		symTable.invokeScope(ctx)
		children = self.__getChildren__(ctx)
		'''
		Pseudo code:
		stmt_label : [code for stmt]
		expr_label : [code for expr]
		next_label
		'''
		stmt_label = self.tac.genLabel()
		stmtInfo = children[1].accept(self)
		expr_label = self.tac.genLabel()
		exprInfo = self.visitExpression(children[4])
		self.tac.append('','',stmt_label,exprInfo['name'])
		next_label = self.tac.genLabel()
		self.tac.backpatch(exprInfo['true_list'],stmt_label)
		self.tac.backpatch(exprInfo['false_list'],next_label)
		self.tac.backpatch(stmtInfo['break_list'],next_label)
		self.tac.backpatch(stmtInfo['continue_list'],expr_label)
		symTable.closeCurrScope()
		return {'break_list':[], 'continue_list':[]}
	def __handleFor__(self,ctx):
		'''
		basicForStatement : FOR '(' forInit? ';' expression? ';' forUpdate? ')' statement
		;
		basicForStatementNoShortIf : FOR '(' forInit? ';' expression? ';' forUpdate? ')' statementNoShortIf
		;
		'''
		symTable.invokeScope(ctx)
		children = self.__getChildren__(ctx)
		expr_label = None
		stmt_label = None
		update_label = None # Used incase of continue
		next_label = None
		init_index = None
		expr_index = None
		update_index = None
		# We will visit in order forInit label expression statement label forUpdate
		for i in range(0,len(children)):
			child = children[i]
			if(isinstance(child,self.parser.ForInitContext)):
				init_index = i
			elif(isinstance(child,self.parser.ExpressionContext)):
				expr_index = i
			elif(isinstance(child,self.parser.ForUpdateContext)):
				update_index = i

		'''
		Pseudo code:
		[code for init]
		expr_label : [code for expr]
		if(expr) goto stmt_label
		goto next_label
		stmt_label: [code for stmt]
		update_label:[code for update]
		goto expr_label
		next_label
		'''
		if init_index is not None:
			self.visitForInit(children[init_index])
		expr_label = self.tac.genLabel()
		if expr_index is not None:
			exprInfo = self.visitForInit(children[expr_index])
			jump_stmt = self.tac.append('','','',exprInfo['name'])
			jump_out = self.tac.append('','','','goto')
		stmt_label = self.tac.genLabel()
		stmtInfo = children[-1].accept(self)
		update_label = self.tac.genLabel()
		if update_index is not None:
			updateInfo = self.visitForUpdate(children[update_index])
		self.tac.append('','',expr_label,'goto')
		next_label = self.tac.genLabel()
		self.tac.backpatch(exprInfo['true_list'],stmt_label)
		self.tac.backpatch(exprInfo['false_list'],next_label)
		self.tac.backpatch([jump_stmt],stmt_label)
		self.tac.backpatch([jump_out],next_label)
		self.tac.backpatch(stmtInfo['break_list'],next_label)
		self.tac.backpatch(stmtInfo['continue_list'],update_label)
		symTable.closeCurrScope()
		return {'break_list':[], 'continue_list':[]}

	def __handleStatement__(self,ctx):
		'''
		statement : statementWithoutTrailingSubstatement
		|	labeledStatement
		|	ifThenStatement
		|	ifThenElseStatement
		|	whileStatement
		|	forStatement
		;
		statementNoShortIf : statementWithoutTrailingSubstatement
		|	labeledStatementNoShortIf
		|	ifThenElseStatementNoShortIf
		|	whileStatementNoShortIf
		|	forStatementNoShortIf
		;
		statementWithoutTrailingSubstatement : block
		|	emptyStatement
		|	expressionStatement
		|	assertStatement
		|	switchStatement
		|	doStatement
		|	breakStatement
		|	continueStatement
		|	returnStatement
		|	synchronizedStatement
		|	throwStatement
		|	tryStatement
		;
		'''
		children = self.__getChildren__(ctx)
		assert(len(children)==1)
		child = children[0]
		stmtInfo = {
			'break_list': [],
			'continue_list' : []
		}
		if(isinstance(child,self.parser.BreakStatementContext)):
			idx = self.visitBreakStatement(child)
			stmtInfo['break_list'].append(idx)
		elif(isinstance(child,self.parser.ContinueStatementContext)):
			idx = self.visitContinueStatement(child)
			stmtInfo['continue_list'].append(idx)
		else:
			ret = child.accept(self)
		return stmtInfo
	def visitReturnStatement(self,ctx:java8Parser.ReturnStatementContext):
		'''
		returnStatement : RETURN expression? ';'
		;
		'''
		children = self.__getChildren__(ctx)
		if(len(children) == 3):
			exprInfo = self.visitExpression(children[1])
			self.__handleShortCircuit__(exprInfo)
			assignmentType = 'pointer' if exprInfo['type']['dims'] > 0 else exprInfo['type']['base']
			self.tac.append(exprInfo['name'],'',':r:','=:' + assignmentType)
			self.tac.append('','','','ret')
		else:
			self.tac.append('','','','ret')
		return

	def visitBreakStatement(self,ctx:java8Parser.BreakStatementContext):
		# returns index of Break Statement in TAC
		return self.tac.append('','','','goto')
	def visitContinueStatement(self,ctx:java8Parser.ContinueStatementContext):
		# returns index of Continue Statement in TAC
		return self.tac.append('','','','goto')
	def visitStatement(self,ctx:java8Parser.StatementContext):
		return self.__handleStatement__(ctx)
	def visitStatementNoShortIf(self,ctx:java8Parser.StatementNoShortIfContext):
		return self.__handleStatement__(ctx)
	def visitStatementWithoutTrailingSubstatement(self,ctx:java8Parser.StatementWithoutTrailingSubstatementContext):
		return self.__handleStatement__(ctx)

	def visitNormalclassDeclaration(self, ctx:java8Parser.NormalclassDeclarationContext):
		'''
		normalclassDeclaration : modifier* CLASS Identifier typeParameters? superclass? superinterfaces? classBody
		'''
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				pass
			elif(self.__isIdentifier__(child)):
				self.tac.genLabel(className=symTable.ctx_to_name[id(ctx)])
				pass
			elif(isinstance(child,self.parser.ClassBodyContext)):
				symTable.invokeScope(ctx)
				self.visitClassBody(child)
				symTable.closeCurrScope()
		return
	def visitMethodDeclaration(self, ctx:java8Parser.MethodDeclarationContext):
		'''
		 methodDeclaration : modifier* methodHeader methodBody
		'''
		methodIdentifier = None
		methodInfo = {
			'modifiers': [],
			'type': {
				'base': None,
				'dims': 0
			},
			'parameters': None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				pass
			elif(isinstance(child,self.parser.MethodHeaderContext)):
				# methodIdentifier , methodInfo['type'] , methodInfo['parameters'] = self.visitMethodHeader(child)
				# self.tac.append('', '', methodIdentifier, 'function')
				self.tac.genLabel(funcName=symTable.ctx_to_name[id(ctx)])
				# the above 3AC indicates that a function definition is starting
				# might also need to insert the parameters into tac
			elif(isinstance(child,self.parser.MethodBodyContext)):
				symTable.invokeScope(ctx)
				self.visitMethodBody(child)
				symTable.closeCurrScope()
		return

	def visitBlock(self, ctx:java8Parser.BlockContext):
		'''
		block : '{' blockStatements? '}'
		'''
		blockInfo = {'break_list':[], 'continue_list':[]}
		symTable.invokeScope(ctx)
		if(ctx.getChildCount() == 3):
			children = self.__getChildren__(ctx)
			blockInfo = self.visitBlockStatements(children[1])
		symTable.closeCurrScope()
		return blockInfo

	def visitBlockStatements(self,ctx:java8Parser.BlockStatementsContext):
		'''
		blockStatements : blockStatement blockStatement*
		'''
		children = self.__getChildren__(ctx)
		break_list = []
		continue_list = []
		for child in children:
			stmtInfo = self.visitBlockStatement(child)
			if stmtInfo is not None:
					if 'break_list' in stmtInfo and 'continue_list' in stmtInfo:
						break_list += stmtInfo.get('break_list')
						continue_list += stmtInfo.get('continue_list')
		return {'break_list':break_list, 'continue_list':continue_list}


	def visitWhileStatement(self, ctx:java8Parser.WhileStatementContext):
		return self.__handleWhile__(ctx)
	def visitWhileStatementNoShortIf(self, ctx:java8Parser.WhileStatementNoShortIfContext):
		return self.__handleWhile__(ctx)
	def visitBasicForStatement(self, ctx:java8Parser.BasicForStatementContext):
		return self.__handleFor__(ctx)
	def visitBasicForStatementNoShortIf(self, ctx:java8Parser.BasicForStatementNoShortIfContext):
		return self.__handleFor__(ctx)
	def visitIfThenStatement(self, ctx:java8Parser.IfThenStatementContext):
		'''
		ifThenStatement : IF '(' expression ')' statement
				;
		'''
		symTable.invokeScope(ctx)
		p = self.__getChildren__(ctx)
		exprInfo = self.visitExpression(p[2])
		true_idx = self.tac.append('','','',exprInfo['name'])
		jump_idx = self.tac.append('','','','goto')
		true_label = self.tac.genLabel()
		self.tac.backpatch([true_idx],true_label)
		self.tac.backpatch(exprInfo['true_list'],true_label)
		stmtInfo = self.visitStatement(p[4])
		jump_label = self.tac.genLabel()
		self.tac.backpatch(exprInfo['false_list'],jump_label)
		self.tac.backpatch([jump_idx],jump_label)
		symTable.closeCurrScope()
		return stmtInfo

	def visitIfThenElseStatement(self, ctx:java8Parser.IfThenElseStatementContext):
		'''
		ifThenElseStatement : IF '(' expression ')' statementNoShortIf ELSE statement
				;
		'''
		symTable.invokeScope(ctx)
		p = self.__getChildren__(ctx)
		exprInfo = self.visitExpression(p[2])
		true_idx = self.tac.append('','','',exprInfo['name'])
		jump_idx = self.tac.append('','','','goto')
		true_label = self.tac.genLabel()
		self.tac.backpatch([true_idx],true_label)
		self.tac.backpatch(exprInfo['true_list'],true_label)
		stmtInfo1 = self.visitStatementNoShortIf(p[4])
		jump_label = self.tac.genLabel()
		self.tac.backpatch(exprInfo['false_list'],jump_label)
		self.tac.backpatch([jump_idx],jump_label)
		stmtInfo2 = self.visitStatement(p[6])
		symTable.closeCurrScope()
		return {'break_list':stmtInfo1['break_list']+stmtInfo1['break_list'],
				'continue_list':stmtInfo2['continue_list'] + stmtInfo2['continue_list']}
				
	def visitIfThenElseStatementNoShortIf(self, ctx:java8Parser.IfThenElseStatementNoShortIfContext):
		'''
		ifThenElseStatementNoShortIf : IF '(' expression ')' statementNoShortIf ELSE statementNoShortIf
				;
		'''
		symTable.invokeScope(ctx)
		p = self.__getChildren__(ctx)
		exprInfo = self.visitExpression(p[2])
		true_idx = self.tac.append('','','',exprInfo['name'])
		jump_idx = self.tac.append('','','','goto')
		true_label = self.tac.genLabel()
		self.tac.backpatch([true_idx],true_label)
		self.tac.backpatch(exprInfo['true_list'],true_label)
		stmtInfo1 = self.visitStatementNoShortIf(p[4])
		jump_label = self.tac.genLabel()
		self.tac.backpatch(exprInfo['false_list'],jump_label)
		self.tac.backpatch([jump_idx],jump_label)
		stmtInfo2 = self.visitStatementNoShortIf(p[6])
		symTable.closeCurrScope()
		return {'break_list':stmtInfo1['break_list']+stmtInfo1['break_list'],
				'continue_list':stmtInfo2['continue_list'] + stmtInfo2['continue_list']}
	def visitSwitchStatement(self, ctx:java8Parser.SwitchStatementContext):
		'''
		switchStatement : SWITCH '(' expression ')' switchBlock
		'''
		symTable.invokeScope(ctx)
		children = self.__getChildren__(ctx)
		exprInfo = self.visitExpression(children[2])
		switch_label = self.tac.genLabel()
		# This will ensure short circuit incase of boolean expression
		self.tac.backpatch(exprInfo['true_list'],switch_label)
		self.tac.backpatch(exprInfo['false_list'],switch_label)
		end_idx = self.tac.append('','','','goto')
		'''
		Pseudo code:
		[code for expr]
		switch_label : goto end_label
		label_1 : [code for blockStatement1]
		label_2 : [code for blockStatement2]
		.
		.
		.
		label_n : [code for blockStatement_n]
		goto next_label
		end_label : if(case1) jump label_1
		if(case2) jump label_2
		.
		.
		jump label_default
		next_label
		'''
		# switchInfo['cases'] stores array of (ctx,label_i)
		switchInfo = self.visitSwitchBlock(children[4])
		next_idx = self.tac.append('','','','goto')
		end_label = self.tac.genLabel()
		self.tac.backpatch([end_idx],end_label)
		# Assume switchInfo returns a dict additionally storing
		'''
		switchLabel : CASE constantExpression ':'
		|	DEFAULT ':'
		;
		'''
		for switchLabel, label in switchInfo['cases']:
			children = self.__getChildren__(switchLabel)
			if(len(children) == 2):
				# DEFAULT
				self.tac.append('','',label,'goto')
			else:
				# Case
				exprInfo = children[1].accept(self)
				self.tac.append('','',label,exprInfo['name'])
				self.tac.backpatch(exprInfo['true_list'],label)
				self.tac.backpatch(exprInfo['false_list'],self.tac.genLabel())
		next_label = self.tac.genLabel()
		self.tac.backpatch(switchInfo['break_list'],next_label)
		self.tac.backpatch([next_idx],next_label)
		symTable.closeCurrScope()
		return {'break_list' : [], 'continue_list': switchInfo['continue_list']}

	def visitSwitchBlock(self,ctx:java8Parser.SwitchBlockContext):
		'''
		switchBlock : '{' switchBlockStatementGroup* switchLabel* '}'
		;
		'''
		cases = []
		break_list = []
		continue_list = []
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.SwitchBlockStatementGroupContext)):
				bsGroupInfo = self.visitSwitchBlockStatementGroup(child)
				cases += bsGroupInfo['cases']
				break_list += bsGroupInfo['break_list']
				continue_list += bsGroupInfo['continue_list']
			if(isinstance(child,self.parser.SwitchLabelContext)):
				cases += [(child,self.tac.genLabel())]
		return {'cases':cases, 'break_list':break_list, 'continue_list':continue_list}

	def visitSwitchBlockStatementGroup(self,ctx:java8Parser.SwitchBlockStatementGroupContext):
		'''
		switchBlockStatementGroup : switchLabels blockStatements
		;
		switchLabels : switchLabel switchLabel*
		;
		switchLabel : CASE constantExpression ':'
		|	DEFAULT ':'
		;
		'''
		# I know its a bit confusing
		# 
		children = self.__getChildren__(ctx)
		switchLabels = self.__getChildren__(children[0])
		label_to_jump = self.tac.genLabel()
		stmtInfo = self.visitBlockStatements(children[1])
		bsGroupInfo = stmtInfo.copy()
		bsGroupInfo['cases'] = []
		for switchLabel in switchLabels:
			bsGroupInfo['cases'].append((switchLabel,label_to_jump))
		return bsGroupInfo

	def visitLocalVariableDeclaration(self, ctx:java8Parser.LocalVariableDeclarationContext):
		'''
		localVariableDeclaration : variableModifier* unanntype variableDeclaratorList
		'''
		localVariableInfo = {
			'modifiers': [],
			'type': {
				'base' : None,
				'dims' : 0
			},
			'parameters': None,
			'dims' : None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.VariableModifierContext)):
				localVariableInfo['modifiers'].append(child.getText())
			elif(isinstance(child,self.parser.UnanntypeContext)):
				vdType = self.visitUnanntype(child)
				localVariableInfo['type']['base'] = vdType['base']
				localVariableInfo['type']['dims'] = vdType['dims']
			elif(isinstance(child,self.parser.VariableDeclaratorListContext)):
				for i in range(0,child.getChildCount()):
					if(isinstance(child.getChild(i),self.parser.VariableDeclaratorContext)):
						var = self.visitVariableDeclarator(child.getChild(i))
						varIdentifier = var['identifier']
						varInfo = localVariableInfo.copy()
						varInfo['type']['dims'] += var['dims']
						varInfo['offset'] = symTable.offset
						# either this is a primitive type hence get the size using __getSize__
						# or this is a reference type, hence only allocate the pointer on the stack
						symTable.offset += __getSize__(varInfo['type'])
						# varInfo['value'] = var['value']
						symTable.addSymbol('variables',varIdentifier,varInfo)
						if 'value' in var:
							# print(var,localVariableInfo)s
							self.__typecheck__(var['value']['type'],localVariableInfo['type'])
							#TODO: Add typecasting information in here. Idea: From base assignments, also return the type of rhs. Then typecast (if necessary) into a new temporary. Then do the assignment.
							assignmentType = 'pointer' if localVariableInfo['type']['dims'] > 0 else localVariableInfo['type']['base']
							self.tac.append(var['value']['name'],None,varIdentifier,'=:'+assignmentType)
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

	def __recursiveAlloc__(self,dims,ptype):
		# creates an array of ptype[dims[0]][dims[1]]...
		if(len(dims) == 0):
			size = __getSize__(ptype)
			self.tac.append(size,'',':param1:','=:int')
			self.tac.append('','','malloc','function')
			return {'name':temp_reg, 'type':{'base':ptype['base'],'dims':ptype['dims']}}
		elif(len(dims) == 1):
			size = symTable.getTemporary({'base':'int','dims':0})
			self.tac.append(dims[0],__getSize__(ptype),size,'*:int')
			self.tac.append(size,'',':param1:','=:int')
			self.tac.append('','','malloc','function')
			return {'name':':r:', 'type':{'base':ptype['base'],'dims':ptype['dims']+1}}
		else:
			# everything in byte
			#TODO: Iss function main =:<assignmentType> confirm krdo @Pandey.
			# Keeping =:int as we assuming x86 is 32-bit architecture. net-informations.com/q/mis/x86.html
			size = symTable.getTemporary({'base':'int','dims':0})
			self.tac.append(dims[0],__getSize__({'dims':1}),size,'*:int')
			self.tac.append(size,'',':param1:','=:int')
			self.tac.append('','','malloc','function')
			temp_reg = symTable.getTemporary({'base':ptype['base'],'dims': ptype['dims']+len(dims)})
			self.tac.append(':r:','',temp_reg,'=:int')
			temp_reg_total = symTable.getTemporary({'base':ptype['base'],'dims': ptype['dims']+len(dims)})
			self.tac.append(temp_reg,size,temp_reg_total,'+int')
			jump_label = self.tac.genLabel()
			bool_reg_total = symTable.getTemporary({'base':'boolean','dims':0})
			self.tac.append(temp_reg,temp_reg_total,bool_reg_total,'<:int')
			jump_idx = self.tac.append('','','',bool_reg_total)
			allocInfo = self.__recursiveAlloc__(dims[1:],ptype)
			self.tac.append(temp_reg,__getSize__({'dims':1}),temp_reg,'+int')
			self.tac.append(allocInfo['name'],'',temp_reg,'store:int')
			self.tac.append('','',jump_label,'goto')
			self.tac.backpatch([jump_idx],self.tac.genLabel())
			return {'name':temp_reg, 'type':{'base':ptype['base'],'dims':ptype['dims']+len(dims)}}



	def visitArrayCreationExpression(self, ctx:java8Parser.ArrayCreationExpressionContext):
		'''
		arrayCreationExpression : NEW primitivetype dimExprs dims?
                        | NEW classOrInterfaceType dimExprs dims?
                        | NEW primitivetype dims arrayInitializer
                        | NEW classOrInterfaceType dims arrayInitializer
                        ;
		'''
		# All allocations in Java are dynamic
		# there are no static allocations
		# Only handles NEW primitivetype dimExprs
		ptype = {
			'base' : None,
			'dims' : 0
		}
		dims_with_expr = []
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.PrimitivetypeContext)):
				ptype['base'] = child.getText()
			elif(isinstance(child,self.parser.DimExprsContext)):
				dims_with_expr = self.visitDimExprs(child)
			elif(isinstance(child,self.parser.DimsContext)):
				ptype['dims'] = self.visitDims(child)
		# print(dims_with_expr,ptype)
		return self.__recursiveAlloc__(dims_with_expr,ptype)

	def visitDimExprs(self, ctx: java8Parser.DimExprsContext):
		'''
		dimExprs : dimExpr dimExpr*
        ;

		dimExpr : annotation* '[' expression ']'
        ;
		'''
		dims = []
		children = self.__getChildren__(ctx)
		for child in children:
			assert(child.getChildCount() == 3)
			exprInfo = self.visitExpression(child.getChild(1))
			if(exprInfo['type'] != {'base':'int', 'dims':0}):
				self.__errorHandler__(child,"dimension can only be an integer expression")
			else:
				dims.append(exprInfo['name'])
		return dims
	def visitVariableDeclaratorId(self, ctx:java8Parser.VariableDeclaratorIdContext):
		'''
		variableDeclaratorId : Identifier dims?
		'''
		variable_declarator_id= {"identifier": ctx.getChild(0).getText(), "dims":0}
		if (ctx.getChildCount() == 2):
			variable_declarator_id["dims"] = self.visitDims(ctx.getChild(1))
		return variable_declarator_id

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
		# return type as a dict with keys "base" and "dims"
		# "dims" is a tuple with 1-3 values, each one can be -1 of non-neg
		# if -1, then that means that value has to be interpreted from the initialized value
		return self.visitChildren(ctx)
	
	def visitUnannPrimitiveType(self, ctx:java8Parser.UnannPrimitiveTypeContext):
		'''
		unannPrimitiveType : numerictype
				|	BOOLEAN
				;
		'''
		return {"base": ctx.getText(), "dims":0}

	def visitUnannReferenceType(self, ctx:java8Parser.UnannReferencetypeContext):
		'''
		unannReferencetype : unannClassOrInterfaceType
				|	unanntypeVariable
				|	unannArraytype
		;
		'''
		return self.visitChildren(ctx)
	
	def visitUnannClassOrInterfaceType(self, ctx:java8Parser.UnannClassOrInterfaceTypeContext):
		return {"base": ctx.getText(), "dims":0}

	def visitUnanntypeVariable(self, ctx:java8Parser.UnanntypeVariableContext):
		return {"base": ctx.getText(), "dims":0}

	def visitDims(self, ctx:java8Parser.DimsContext):
		dims = 0
		for child in self.__getChildren__(ctx):
			if (child.getText() == '['):
				dims += 1
		return dims

	def visitUnannArraytype(self, ctx:java8Parser.UnannArraytypeContext):
		'''
		unannArraytype : unannPrimitiveType dims
				|	unannClassOrInterfaceType dims
				|	unanntypeVariable dims
		;
		'''
		dtype = {"base": "", "dims":0}
		child0 = ctx.getChild(0)
		child1 = ctx.getChild(1)
		dtype["dims"] = self.visitDims(child1)
		if (java8Parser.ruleNames[child0.getRuleIndex()] == "unannPrimitiveType"):
			dtype["base"] = self.visitUnannPrimitiveType(child0)["base"]
		elif (java8Parser.ruleNames[child0.getRuleIndex()] == "unannClassOrInterfaceType"):
			# Not handled
			# pass
			dtype["base"] = self.visitUnannClassOrInterfaceType(child0)["base"]
		elif (java8Parser.ruleNames[child0.getRuleIndex()] == "unanntypeVariable"):
			dtype["base"] = self.visitUnanntypeVariable(child0)["base"]
		return dtype

	def visitFieldDeclaration(self, ctx:java8Parser.FieldDeclarationContext):
		'''
		fieldDeclaration : modifier* unanntype variableDeclaratorList ';'
		;
		'''
		fieldIdentifiers = []
		fieldInfo = {
			'modifiers': [],
			'type': {
				'base' : None,
				'dims' : 0
			},
			'parameters': None,
			'dims': None
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ModifierContext)):
				fieldInfo['modifiers'].append(child.getText())
			elif(isinstance(child,self.parser.UnanntypeContext)):
				fType = self.visitUnanntype(child)
				fieldInfo['type']['base'] = fType['base']
				fieldInfo['type']['dims'] = fType['dims']
			elif(isinstance(child,self.parser.VariableDeclaratorListContext)):
				# If the reduction is already to a block need not change scope
				# for each variable, declarator, decide the appropriate offset
				for i in range(0,child.getChildCount()):
					if(isinstance(child.getChild(i),self.parser.VariableDeclaratorContext)):
						var = self.visitVariableDeclarator(child.getChild(i))
						varIdentifier = var['identifier']
						varInfo = fieldInfo.copy()
						varInfo['type']['dims'] += var['dims']
						varInfo['offset'] = symTable.offset
						# either this is a primitive type hence get the size using __getSize__
						# or this is a reference type, hence only allocate the pointer on the stack
						symTable.offset += __getSize__(varInfo['type']['base'])
						# varInfo['value'] = var['value']
						symTable.addSymbol('variables',varIdentifier,varInfo)
						if 'value' in var:
							self.__typecheck__(var['value']['type'],varInfo['type'])
							#TODO: Typecasting in assignment.
							assignmentType = 'pointer' if varInfo['type']['dims'] > 0 else varInfo['type']['base']
							self.tac.append(var['value']['name'],None,varIdentifier,'=:' + assignmentType)
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
				if c['type']['dims'] != 0 or c['type']['base'] not in ['float', 'double', 'long', 'int']:
					self.__errorHandler__(ctx,"- defined only for int, long, float and double")
				temp = symTable.getTemporary(c['type'])
				self.tac.append(c['name'], None, temp, 'neg:' + c['type']['base'])
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
		if c['type']['dims'] != 0 or c['type']['base'] not in ['long', 'float', 'int', 'double']:
			self.__errorHandler__(ctx,"++ defined only for int, long, float and double")
		self.tac.append(c['name'],1,c['name'],'+:' + c['type']['base'])
		return {'name': c['name'], 'type':c['type'],'true_list': [], 'false_list':[]}

	# Visit a parse tree produced by java8Parser#preDecrementExpression.
	def visitPreDecrementExpression(self, ctx:java8Parser.PreDecrementExpressionContext):
		'''
		preDecrementExpression : '--' unaryExpression
		;
		'''
		children = self.__getChildren__(ctx)
		c = self.visitUnaryExpression(children[1])
		if c['type']['dims'] != 0 or c['type']['base'] not in ['long', 'float', 'int', 'double']:
			self.__errorHandler__(ctx,"++ defined only for int, long, float and double")
		self.tac.append(c['name'],1,c['name'],'-:' + c['type']['base'])
		return {'name': c['name'], 'type':c['type'],'true_list': [], 'false_list':[]}

	# Visit a parse tree produced by java8Parser#postIncrementExpression.
	def visitPostIncrementExpression(self, ctx:java8Parser.PostIncrementExpressionContext):
		'''
		postIncrementExpression: postfixExpression '++'
		;
		'''
		child = self.__getChildren__(ctx)[0]
		childResult = self.visitPostfixExpression(child)
		tempname = symTable.getTemporary(childResult['type'])
		self.tac.append(childResult['name'], None, tempname, '=:' + childResult['type']['base'] )
		self.tac.append(childResult['name'], 1, childResult['name'], '+:' + childResult['type']['base'] )
		return {'name':tempname, 'type':childResult['type'],'true_list': [], 'false_list':[]}

	# Visit a parse tree produced by java8Parser#postDecrementExpression.
	def visitPostDecrementExpression(self, ctx:java8Parser.PostDecrementExpressionContext):
		'''
		postDecrementExpression: postfixExpression '--'
		;
		'''
		child = self.__getChildren__(ctx)[0]
		childResult = self.visitPostfixExpression(child)
		tempname = symTable.getTemporary(childResult['type'])
		self.tac.append(childResult['name'], None, tempname, '=:' + childResult['type']['base'] )
		self.tac.append(childResult['name'], 1, childResult['name'], '-:' + childResult['type']['base'] )
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
		temp = symTable.getTemporary(c['type'])
		if children[0].getText() == '~':
			if c['type']['dims'] != 0 or c['type']['base'] not in ['int', 'long']:
				self.__errorHandler__(ctx,"~ defined only for int, long")
			self.tac.append(c['name'], None, temp, 'complement:' + c['type']['base']) #Bitwise complement of an integer ~
		else:
			if c['type']['dims'] != 0 or c['type']['base'] != 'boolean':
				self.__errorHandler__(ctx,"! defined only for boolean")
			self.tac.append(c['name'], None, temp, 'invert:boolean') #Boolean invert
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
		self.__handleShortCircuit__(p[2])
		commonType = self.__typecheck__(p[0]['type'], p[2]['type'])
		assignmentType = 'pointer' if commonType['dims'] > 0 else commonType['base']
		#TODO: How to handle field accesses. Now handled only 'name' and 'arrayAccess'.
		#TODO Typecasting.
		if isinstance(ctx.getChild(0).getChild(0), self.parser.ArrayAccessContext):
			if not commonType:
				self.__errorHandler__(ctx,"Types don't match")
			temp = symTable.getTemporary(commonType) #to store the new value
			if(p[1]['operator'] == '='):
				self.tac.append(p[2]['name'], None,temp, '=:' + assignmentType)
			else:
				oldValue = symTable.getTemporary(p[0]['type'])
				self.tac.append(p[0]['name'], None, oldValue, 'load:'+assignmentType)
				self.tac.append( oldValue, p[2]['name'],temp, p[1]['operator'][:-1] + ':' + assignmentType)
			self.tac.append(temp, None, p[0]['name'], 'store:' + assignmentType) # p[0]['name'] stores the address and temp stores the value to be stored.
			return {'type': commonType, 'name': temp, 'true_list': [], 'false_list': []}
		elif isinstance(ctx.getChild(0).getChild(0), self.parser.NameContext):
			if(p[1]['operator'] == '='):
				self.tac.append(p[2]['name'], None, p[0].get('name'), '=:' + assignmentType)
			else:
				self.tac.append( p[0].get('name'), p[2]['name'],p[0].get('name'), p[1]['operator'][:-1] + ':' + assignmentType)
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
			exprLabel = self.tac.genLabel()
			exprInfo = self.visitExpression(p[2])
			idx = self.tac.append('','','','goto')
			condExprLabel = self.tac.genLabel()
			condExprInfo = self.visitConditionalExpression(p[4])
			self.tac.append(condOrExprInfo['name'],'',exprInfo['name'],'')
			nextLabel = self.tac.genLabel()
			self.tac.backpatch([idx],nextLabel)
			self.tac.backpatch(condOrExprInfo['true_list'],exprLabel)
			self.tac.backpatch(condOrExprInfo['false_list'],condExprLabel)
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


	# Visit a parse tree produced by java8Parser#literal.
	def visitLiteral(self, ctx:java8Parser.LiteralContext):
		# Currently implementing this by copying it's text into a temporary variable in tac and returning name of temporary variable.
		'''
		literal : IntegerLiteral
        | FloatingPointLiteral
        | BooleanLiteral
        | CharacterLiteral
        | StringLiteral
        | NullLiteral
        ;
		'''
		child = ctx.getChild(0)
		childType = child.getSymbol().type
		text = ctx.getText()
		if childType == java8Lexer.IntegerLiteral:
			if text[-1] == 'l' or text[-1] == 'L': #long
				temp = symTable.getTemporary({'base':'long', 'dims': 0})
				self.tac.append(text[:-1], None, temp, '=:long') #Wishlist: Assuming only integer literals. Binary,octal and hex not handled.
				return {'name' : temp, 'type': {'base':'long', 'dims': 0}}
			else:
				temp = symTable.getTemporary({'base':'int', 'dims': 0})
				self.tac.append(text, None, temp, '=:int')
				return {'name' : temp, 'type': {'base':'int', 'dims': 0}}
		elif childType == java8Lexer.FloatingPointLiteral:
			if text[-1] == 'f' or text[-1] == 'F': #float
				temp = symTable.getTemporary({'base':'float', 'dims': 0})
				self.tac.append(text[:-1], None, temp, '=:float') 
				return {'name' : temp, 'type': {'base':'float', 'dims': 0}}
			else:
				temp = symTable.getTemporary({'base':'double', 'dims': 0})
				self.tac.append(text, None, temp, '=:double')
				return {'name' : temp, 'type': {'base':'double', 'dims': 0}}
		elif childType == java8Lexer.BooleanLiteral: 
			temp = symTable.getTemporary({'base': 'boolean', 'dims': 0})
			if text == 'true':
				self.tac.append('true', None, temp, '=:boolean')
			else :
				self.tac.append('false', None, temp, '=:boolean')
			return {'type': {'base': 'boolean', 'dims': 0},'name': 'temp', 'true_list': [], 'false_list': []}
		elif childType == java8Lexer.StringLiteral:
			temp = symTable.getTemporary({'base':'String', 'dims': 0})
			str_idx = symTable.addStringConstant(text)
			self.tac.append(':str'+str(str_idx)+':', None, temp, '=:String')
			return {'name' : temp, 'type': {'base':'String', 'dims': 0}}
		self.__errorHandler__(ctx,"Only integer, float and boolean literals are supported.")
	

	def visitPrimaryNoNewArray__2__primary(self, ctx:java8Parser.PrimaryNoNewArray__2__primaryContext):
		return self.__handle1or3Children__(ctx)
	
	def visitPrimaryNoNewArray__2__arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray__2__arrayAccessContext):
		return self.__handle1or3Children__(ctx)
	
	def visitPrimaryNoNewArray__2__primary__2__arrayAccess__2__primary(self, ctx:java8Parser.PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext):
		return self.__handle1or3Children__(ctx)

	# Primary array accesses.
	def visitArrayAccess__2__primary(self, ctx:java8Parser.ArrayAccess__2__primaryContext):
		return self.__handleArrayAccessPrimary__(ctx)
	def visitArrayAccess__1__primary(self, ctx:java8Parser.ArrayAccess__1__primaryContext):
		return self.__handleArrayAccessPrimary__(ctx)

	# Assignment array accesses
	# Visit a parse tree produced by java8Parser#arrayAccess.
	def visitArrayAccess(self, ctx:java8Parser.ArrayAccessContext):
		'''
		arrayAccess:	(	name '[' expression ']'
		|	primaryNoNewArray__2__arrayAccess '[' expression ']'
		)
		(	primaryNoNewArray__1__arrayAccess '[' expression ']'
		)*
	    ;
		'''
		# Similar to array access primary. Just returns the last level pointer instead of assigning it to a temporary.
		return self.__arrayAccessLastPointer__(ctx)
	def visitArgumentList(self,ctx:java8Parser.ArgumentListContext):
		'''
		argumentList:	expression (',' expression)*
		;
		'''
		args = []
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ExpressionContext)):
				exprInfo = self.visitExpression(child)
				self.__handleShortCircuit__(exprInfo)
				args.append(exprInfo)
		return args

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
					argProvided = self.visitArgumentList(child)
			if(len(methodInfo['parameters']) != len(argProvided)):
				self.__errorHandler__(ctx,"Number of arguments mismatch")
			expParams = list(methodInfo['parameters'].keys())
			# print(expParams,argProvided)
			for i in range(0,len(argProvided)):
				if(argProvided[i]['type']!=methodInfo['parameters'][expParams[i]]['type']):
					self.__errorHandler__(ctx,"Type of arguments mismatch")
			# need to traverse the list of children because C calling convention
			# pushes the arguments to the callee onto the stack of callee
			# the arguments must be put in the stack in the reverse order
			argSize = 0
			for arg in argProvided:
				# op1 is the temporary containing the argument
				# op2 of the tac is the size of the type of argument
				# op2 will be needed for updating the stack pointer
				assignmentType = 'pointer' if arg['type']['dims'] > 0 else arg['type']['base']
				self.tac.append(arg['name'],'',':param:','=:' + assignmentType)
				argSize += __getSize__(arg['type'])
				# for this 3AC, the caller should push this argument onto the stack
			self.tac.append('','',symbol,'call')
			# note that the instruction "call" automatically puts the return address on the new stack
			# after control returns to the caller on the next instruction, it must pop the arguments
			# it had pushed onto the stack for the callee, to directy do so, simply increase rsp by arg_size
			self.tac.append(argSize,'','','pop')

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
					argProvided = self.visitArgumentList(child)
			if(len(methodInfo['parameters']) != len(argProvided)):
				self.__errorHandler__(ctx,"Number of arguments mismatch")
			expParams = list(methodInfo['parameters'].keys())
			for i in range(0,len(argProvided)):
				if(argProvided[i]['type']!=methodInfo['parameters'][expParams[i]]['type']):
					self.__errorHandler__(ctx,"Type of arguments mismatch")
			# need to traverse the list of children because C calling convention
			# pushes the arguments to the callee onto the stack of callee
			# the arguments must be put in the stack in the reverse order
			argSize = 0
			for arg in argProvided:
				# op1 is the temporary containing the argument
				# op2 of the tac is the size of the type of argument
				# op2 will be needed for updating the stack pointer
				assignmentType = 'pointer' if arg['type']['dims'] > 0 else arg['type']['base']
				self.tac.append(arg['name'],'',':param:','=:' + assignmentType)
				argSize += __getSize__(arg['type'])
				# for this 3AC, the caller should push this argument onto the stack
			self.tac.append('','',symbol,'call')
			# note that the instruction "call" automatically puts the return address on the new stack
			# after control returns to the caller on the next instruction, it must pop the arguments
			# it had pushed onto the stack for the callee, to directy do so, simply increase rsp by arg_size
			self.tac.append(argSize,'','','pop')
		else:
			self.__errorHandler__(ctx,"Method Invocation not supported")
		return {'name':':r:','type':methodInfo['type'],
				'continue_list':[], 'break_list':[]}

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
			commonType = self.__typecheck__(p[0]['type'], p[2]['type'])
		if op == '||' or op == '&&':
			lhs = children[0].accept(self)
			true_idx = []
			false_idx = []
			if(lhs['type']['base'] != 'boolean' or lhs['type']['dims'] != 0):
				self.__errorHandler__(ctx,op + " defined only for boolean")
			if(op == '||'):
				true_idx.append(self.tac.append('','','',lhs['name']))
			else:
				temp = symTable.getTemporary({'base':'boolean','dims':0})
				self.tac.append(lhs['name'],'', temp, 'invert:boolean')
				false_idx.append(self.tac.append('','','',lhs['name']))
			rhs = children[2].accept(self)
			if(rhs['type']['base'] != 'boolean' or rhs['type']['dims'] != 0):
				self.__errorHandler__(ctx,op + " defined only for boolean")
			self.tac.append(rhs['name'],'',lhs['name'],op + ':boolean')
			return {'name': lhs['name'], 'type': lhs['type'],'true_list': 
					true_idx + lhs['true_list'] + rhs['true_list'],
					'false_list': false_idx + lhs['false_list']+rhs['false_list']}
		# print(p[0],p[2])
		if commonType is None or commonType['dims'] != 0:
			self.__errorHandler__(ctx, op + " not defined for pointers")
		elif op in ['^', '|', '&']: # Bitwise ops
			if commonType['base'] not in ['int', 'boolean', 'long']:
				self.__errorHandler__(ctx,op + " defined only for int, long and boolean")
			temp = symTable.getTemporary(commonType)
			self.tac.append(p[0]['name'], p[2]['name'], temp, op + ':' + commonType['base'])
			return {'name':temp, 'type': commonType, 'true_list': [], 'false_list':[]}
		elif op in ['<', '>', '<=', '>=','==','!=']: #Relational operators
			if commonType['base'] not in ['int', 'long', 'double', 'float']:
				self.__errorHandler__(ctx,op + " defined only for int, long and double and float")
			temp = symTable.getTemporary({'base':'boolean','dims':0})
			self.tac.append(p[0]['name'], p[2]['name'], temp, op + ':' + commonType['base'])
			# idx = self.tac.append('','','',temp)
			return {'name':temp, 'type': {'base':'boolean','dims':0}, 'true_list': [], 'false_list':[]}
		elif op == 'instanceof':
			#TODO: check symbol table and inheritance hierarchy and return value here itself.
			pass
		elif op in ['>>>', '<<', '>>']: # Shift operators
			if commonType['base'] not in ['int', 'long']:
				self.__errorHandler__(ctx,op + " defined only for int and long")
			temp = symTable.getTemporary(commonType)
			self.tac.append(p[0]['name'], p[2]['name'], temp, op + ':' + commonType['base'])
			return {'name':temp, 'type': commonType, 'true_list': [], 'false_list':[]}
		elif op in ['+', '-', '/', '*', '%']:
			if commonType['base'] not in ['int', 'long' , 'double', 'float']:
				self.__errorHandler__(ctx,op + " defined only for int, long, float and double")
			#May need to send different operators for each type as assembly instructions are diff. Will look at this later.
			temp = symTable.getTemporary(commonType)
			self.tac.append(p[0]['name'], p[2]['name'], temp, op + ':' + commonType['base'])
			return {'name':temp, 'type': commonType, 'true_list': [], 'false_list':[]}
		assert(False)

	def __handle1or3Children__(self, ctx):
		# Function to handle non-terminals where only 1 production goes to '(' expression ')' and other productions have single child.
		children = self.__getChildren__(ctx)
		if len(children) == 3:
			return self.visitExpression(children[1])
		else:
			return self.visitChildren(ctx)

	# Note about arrays: Array expressions in general are of 2 types, ones ending with __arrayAccess and others ending with __primary.
	# *__primary non terminals are used to read from arrays, whereas *_self.tac.append_arrayAccess NTs are used in assignment.
	# We will handle __primary by copying the memory location into a new temporary and returning the name and type. of the temporary. Type may be a pointer in itself (format below).
	# __arrayAccess will be handled by returning a pointer to the final location to be pointed. We will then modify the 'leftHandSide' NT to assign the value at the location.
	def __handleArrayAccessPrimary__(self, ctx):
		lastPointer = self.__arrayAccessLastPointer__(ctx)
		temp = symTable.getTemporary({'base' : lastPointer['type']['base'] , 'dims': lastPointer['type']['dims']})
		loadType = 'pointer' if lastPointer['type']['dims'] > 0 else lastPointer['type']['base']
		self.tac.append(lastPointer['name'], None, temp, 'load:' + loadType)
		return {'name': temp, 'type': {'base' : lastPointer['type']['base'] , 'dims': lastPointer['type']['dims']}}

	def __arrayAccessLastPointer__(self, ctx):
		# returns the pointer to the array element being accessed.
		#assignment accesses can directly use this pointer to store value.
		#Primary accesses can use this to extract value to a temporary.
		'''
		arrayAccess__2__primary: (	name '[' expression ']'
		|	primaryNoNewArray__2__primary__2__arrayAccess__2__primary '[' expression ']'
		)
		(	primaryNoNewArray__2__primary__1__arrayAccess__2__primary '[' expression ']'
		)*
	    ;
		'''
		p = self.__visitChildren__(ctx)
		n_dims = (len(p))//4
		# The first child will return a 'name' storing the 'address' of the first level array.
		# Confirm all expressions are ints.
		if p[0]['type']['dims'] < n_dims: # Not strict inequality as we may want to access array to a certain depth only.
			self.__errorHandler__(ctx, ctx.getChild(0).getText() + " must be an array/pointer.")
		for i in range(n_dims):
			# print(p)
			if p[4*i+2]['type']['base'] != 'int' or p[4*i+2]['type']['dims'] != 0:
				self.__errorHandler__(ctx, "Array indices must be integers")

		#For each dimension generate tac to read from that level and keep on 'dereferencing' from the locations. (i-th level pointer)
		base = p[0]['name']
		for i in range(n_dims):
			idx_name = p[4*i+2]['name']
			offset = symTable.getTemporary({'base':'int','dims':0})
			unitSize = __getSize__({'dims':1})
			self.tac.append(unitSize, idx_name, offset, '*:int')
			addr = symTable.getTemporary({'base':p[0]['type']['base'],'dims':p[0]['type']['dims'] - i - 1})
			self.tac.append(base, offset, addr, '+:int')
			if i < n_dims-1:
				value = symTable.getTemporary({'base':p[0]['type']['base'],'dims':0})
				self.tac.append(addr, None, value, 'load:pointer') #load the value at addr and assign to variable 'value'.
				base = value
		return {'name': addr, 'type': {'base' : p[0]['type']['base'] , 'dims': p[0]['type']['dims']-n_dims}}

	def visitMethodInvocation(self, ctx: java8Parser.MethodInvocationContext):
		return self.__handleMethods__(ctx)
	def visitMethodInvocation__1__primary(self, ctx: java8Parser.MethodInvocation__1__primaryContext):
		return self.__handleMethods__(ctx)
	def visitMethodInvocation__2__primary(self, ctx: java8Parser.MethodInvocation__2__primaryContext):
		return self.__handleMethods__(ctx)

	def printSymbolTable(self):
		print(json.dumps(symTable.scope_lookup, indent = 4))
		print(json.dumps(symTable.temp_to_type, indent = 4))
		dot = Digraph(comment="Symbol Table")
		for i in range(0,len(symTable.scopes)):
			dot.node(str(i),json.dumps(symTable.scopes[i],indent=4))
			dot.edge(str(symTable.scopes[i]["parent"]), str(i))
		dot.render('graph',view=True)

	def printTAC(self):
		print(json.dumps(self.tac.label_to_functions,indent=4))
		print('Sno\t\tlabel\t\top1\t\top2\t\tdest\t\toperator')
		idx_to_label = {}
		for i in range(0,self.tac.labels):
			label = "L" + str(i)
			idx_to_label[self.tac.label_to_idx[label]] = label
		for i in range(0,len(self.tac.code)):
			str_out = "" + str(i)+"\t\t"
			if(idx_to_label.get(i) is not None):
				str_out += idx_to_label[i]
			str_out += "\t\t"
			str_out += "\t\t".join([str(cell) for cell in self.tac.code[i]])
			print(str_out)
