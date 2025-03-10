# Generated from java8.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
	from .java8Lexer import java8Lexer
	from .java8Parser import java8Parser
	from .java8Visitor import java8Visitor
else:
	from java8Parser import java8Parser
	from java8Visitor import java8Visitor
	from java8Lexer import java8Lexer
import collections

class firstPassTreeVisitor(java8Visitor):
	def __init__(self,parser,lexer,symTable):
		super().__init__()
		self.parser = parser
		self.lexer = lexer
		self.symTable = symTable
	
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

	def visitNormalclassDeclaration(self, ctx:java8Parser.NormalclassDeclarationContext):
		# normalclassDeclaration : modifier* CLASS Identifier typeParameters? superclass? superinterfaces? classBody
		# child Identifier needs to be activated
		# Currently a class is being visited
		classIdentifier = None
		classInfo = {
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
				classInfo['modifiers'].append(child.getText())
			elif(self.__isIdentifier__(child)):
				classIdentifier = child.getText()
				self.symTable.addSymbol('classes',classIdentifier,classInfo)
			elif(isinstance(child,self.parser.ClassBodyContext)):
				self.symTable.createNewScope(addScopeLookup=ctx,className=classIdentifier)
				self.visitClassBody(child)
				self.symTable.closeCurrScope()
		return
	def visitMethodDeclaration(self, ctx:java8Parser.MethodDeclarationContext):
		# methodDeclaration : modifier* methodHeader methodBody
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
				methodInfo['modifiers'].append(child.getText())
			elif(isinstance(child,self.parser.MethodHeaderContext)):
				methodIdentifier , methodInfo['type'] , methodInfo['parameters'] = self.visitMethodHeader(child)
				self.symTable.addSymbol('methods',methodIdentifier,methodInfo)

			elif(isinstance(child,self.parser.MethodBodyContext)):
				self.symTable.createNewScope(addScopeLookup=ctx,className=methodIdentifier)
				self.visitMethodBody(child)
				self.symTable.closeCurrScope()
		return
	def visitMethodHeader(self, ctx:java8Parser.MethodHeaderContext):
		'''
		methodHeader : result methodDeclarator throws_?
		|	typeParameters annotation* result methodDeclarator throws_?
		'''
		methodType = {
			'base' : None,
			'dims' : 0
		}
		methodIdentifier = None
		methodParameters = None
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ResultContext)):
				methodType = self.visitResult(child)
			elif(isinstance(child,self.parser.MethodDeclaratorContext)):
				methodIdentifier, methodParameters = self.visitMethodDeclarator(child)
		return methodIdentifier, methodType, methodParameters

	def visitMethodDeclarator(self, ctx:java8Parser.MethodDeclaratorContext):
		'''
		methodDeclarator : Identifier '(' formalParameterList? ')' dims?
		'''
		methodIdentifier = None
		methodParameters = collections.OrderedDict()
		children = self.__getChildren__(ctx)
		for child in children:
			if(self.__isIdentifier__(child)):
				methodIdentifier = child.getText()
			if(isinstance(child,self.parser.FormalParameterListContext)):
				methodParameters = self.visitFormalParameterList(child)
		return methodIdentifier, methodParameters

	def visitFormalParameterList(self,ctx:java8Parser.FormalParameterListContext):
		'''
		formalParameterList : receiverParameter
		| 	formalParameters ',' lastFormalParameter
		| 	lastFormalParameter
		;
		'''
		fpDict = collections.OrderedDict()
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.FormalParametersContext)):
				fpDict.update(self.visitFormalParameters(child))
			if(isinstance(child,self.parser.LastFormalParameterContext)):
				fpIdentifier, fpInfo = self.visitLastFormalParameter(child)
				fpDict[fpIdentifier] = fpInfo
			if(isinstance(child,self.parser.ReceiverParameterContext)):
				# Not supported
				pass
		return fpDict

	def visitFormalParameters(self,ctx:java8Parser.FormalParametersContext):
		'''
		formalParameters : formalParameter (',' formalParameter)*
		|	receiverParameter (',' formalParameter)*
		;
		'''
		fpDict = collections.OrderedDict()
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.ReceiverParameterContext)):
				# Not supported
				pass
			if(isinstance(child,self.parser.FormalParameterContext)):
				fpIdentifier, fpInfo = self.visitFormalParameter(child)
				# print(fpIdentifier)
				fpDict[fpIdentifier] = fpInfo
		return fpDict

	def visitFormalParameter(self,ctx:java8Parser.FormalParameterContext):
		'''
		formalParameter : variableModifier* unanntype variableDeclaratorId
		;
		'''
		fpIdentifier = None
		fpInfo = {
			'modifiers': [],
			'type':{
			 	'base': None,
			 	'dims': 0
			 }
		}
		children = self.__getChildren__(ctx)
		for child in children:
			if(isinstance(child,self.parser.VariableModifierContext)):
				fpInfo['modifiers'].append(child.getText())
			if(isinstance(child,self.parser.UnanntypeContext)):
				fpType = self.visitUnanntype(child)
				# print(fpType)
				fpInfo['type']['base'] = fpType['base']
				fpInfo['type']['dims'] = fpType['dims']
			if(isinstance(child,self.parser.VariableDeclaratorIdContext)):
				var = self.visitVariableDeclaratorId(child)
				fpIdentifier = var['identifier']
				fpInfo['type']['dims'] += var['dims']
		# print(fpInfo)
		return fpIdentifier, fpInfo

	def visitLastFormalParameter(self,ctx:java8Parser.LastFormalParameterContext):
		'''
		lastFormalParameter : variableModifier* unanntype annotation* '...' variableDeclaratorId
		|	formalParameter
		;
		'''
		if(ctx.getChildCount() == 1):
			# return formalParameter
			return self.visitChildren(ctx)
		else:
			# Not supported
			pass

	def visitVariableDeclaratorId(self, ctx:java8Parser.VariableDeclaratorIdContext):
		'''
		variableDeclaratorId : Identifier dims?
		'''
		variable_declarator_id= {"identifier": ctx.getChild(0).getText(), "dims":0}
		if (ctx.getChildCount() == 2):
			variable_declarator_id["dims"] = self.visitDims(ctx.getChild(1))
		return variable_declarator_id

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
		# class reference types are not handled at the moment
		return {"base": ctx.getText(), "dims":0}

	def visitUnanntypeVariable(self, ctx:java8Parser.UnanntypeVariableContext):
		# don't know what this represents, not handled yet
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

	def visitBlock(self, ctx:java8Parser.BlockContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return

	def visitWhileStatement(self, ctx:java8Parser.WhileStatementContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return
	def visitWhileStatementNoShortIf(self, ctx:java8Parser.WhileStatementNoShortIfContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return
	def visitBasicForStatement(self, ctx:java8Parser.BasicForStatementContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return
	def visitBasicForStatementNoShortIf(self, ctx:java8Parser.BasicForStatementNoShortIfContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return
	def visitIfThenStatement(self, ctx:java8Parser.IfThenStatementContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return
	def visitIfThenElseStatement(self, ctx:java8Parser.IfThenElseStatementContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return
	def visitIfThenElseStatementNoShortIf(self, ctx:java8Parser.IfThenElseStatementNoShortIfContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return
	def visitSwitchStatement(self, ctx:java8Parser.SwitchStatementContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return
	def visitDoStatement(self,ctx:java8Parser.DoStatementContext):
		self.symTable.createNewScope(addScopeLookup=ctx)
		self.visitChildren(ctx)
		self.symTable.closeCurrScope()
		return