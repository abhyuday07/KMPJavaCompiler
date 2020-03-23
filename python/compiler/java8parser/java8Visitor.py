# Generated from java8.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .java8Parser import java8Parser
else:
    from java8Parser import java8Parser

# This class defines a complete generic visitor for a parse tree produced by java8Parser.

class java8Visitor(ParseTreeVisitor):

    # Visit a parse tree produced by java8Parser#literal.
    def visitLiteral(self, ctx:java8Parser.LiteralContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#type_.
    def visitType_(self, ctx:java8Parser.Type_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primitivetype.
    def visitPrimitivetype(self, ctx:java8Parser.PrimitivetypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#numerictype.
    def visitNumerictype(self, ctx:java8Parser.NumerictypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#integraltype.
    def visitIntegraltype(self, ctx:java8Parser.IntegraltypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#floatingPointtype.
    def visitFloatingPointtype(self, ctx:java8Parser.FloatingPointtypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#referencetype.
    def visitReferencetype(self, ctx:java8Parser.ReferencetypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classOrInterfaceType.
    def visitClassOrInterfaceType(self, ctx:java8Parser.ClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classtype.
    def visitClasstype(self, ctx:java8Parser.ClasstypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classType__1__classOrInterfaceType.
    def visitClassType__1__classOrInterfaceType(self, ctx:java8Parser.ClassType__1__classOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classType__2__classOrInterfaceType.
    def visitClassType__2__classOrInterfaceType(self, ctx:java8Parser.ClassType__2__classOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfacetype.
    def visitInterfacetype(self, ctx:java8Parser.InterfacetypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceType__1__classOrInterfaceType.
    def visitInterfaceType__1__classOrInterfaceType(self, ctx:java8Parser.InterfaceType__1__classOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceType__2__classOrInterfaceType.
    def visitInterfaceType__2__classOrInterfaceType(self, ctx:java8Parser.InterfaceType__2__classOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeVariable.
    def visitTypeVariable(self, ctx:java8Parser.TypeVariableContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arraytype.
    def visitArraytype(self, ctx:java8Parser.ArraytypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#dims.
    def visitDims(self, ctx:java8Parser.DimsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeParameter.
    def visitTypeParameter(self, ctx:java8Parser.TypeParameterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeBound.
    def visitTypeBound(self, ctx:java8Parser.TypeBoundContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#additionalBound.
    def visitAdditionalBound(self, ctx:java8Parser.AdditionalBoundContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeArguments.
    def visitTypeArguments(self, ctx:java8Parser.TypeArgumentsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeArgumentList.
    def visitTypeArgumentList(self, ctx:java8Parser.TypeArgumentListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeArgument.
    def visitTypeArgument(self, ctx:java8Parser.TypeArgumentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#wildcard.
    def visitWildcard(self, ctx:java8Parser.WildcardContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#wildcardBounds.
    def visitWildcardBounds(self, ctx:java8Parser.WildcardBoundsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#name.
    def visitName(self, ctx:java8Parser.NameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodName.
    def visitMethodName(self, ctx:java8Parser.MethodNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#compilationUnit.
    def visitCompilationUnit(self, ctx:java8Parser.CompilationUnitContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#packageDeclaration.
    def visitPackageDeclaration(self, ctx:java8Parser.PackageDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#importDeclaration.
    def visitImportDeclaration(self, ctx:java8Parser.ImportDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#singletypeImportDeclaration.
    def visitSingletypeImportDeclaration(self, ctx:java8Parser.SingletypeImportDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeImportOnDemandDeclaration.
    def visitTypeImportOnDemandDeclaration(self, ctx:java8Parser.TypeImportOnDemandDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#singleStaticImportDeclaration.
    def visitSingleStaticImportDeclaration(self, ctx:java8Parser.SingleStaticImportDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#staticImportOnDemandDeclaration.
    def visitStaticImportOnDemandDeclaration(self, ctx:java8Parser.StaticImportOnDemandDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeDeclaration.
    def visitTypeDeclaration(self, ctx:java8Parser.TypeDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classDeclaration.
    def visitClassDeclaration(self, ctx:java8Parser.ClassDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#normalclassDeclaration.
    def visitNormalclassDeclaration(self, ctx:java8Parser.NormalclassDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#modifier.
    def visitModifier(self, ctx:java8Parser.ModifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeParameters.
    def visitTypeParameters(self, ctx:java8Parser.TypeParametersContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeParameterList.
    def visitTypeParameterList(self, ctx:java8Parser.TypeParameterListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#superclass.
    def visitSuperclass(self, ctx:java8Parser.SuperclassContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#superinterfaces.
    def visitSuperinterfaces(self, ctx:java8Parser.SuperinterfacesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfacetypeList.
    def visitInterfacetypeList(self, ctx:java8Parser.InterfacetypeListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classBody.
    def visitClassBody(self, ctx:java8Parser.ClassBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classBodyDeclaration.
    def visitClassBodyDeclaration(self, ctx:java8Parser.ClassBodyDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classMemberDeclaration.
    def visitClassMemberDeclaration(self, ctx:java8Parser.ClassMemberDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#fieldDeclaration.
    def visitFieldDeclaration(self, ctx:java8Parser.FieldDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#variableDeclaratorList.
    def visitVariableDeclaratorList(self, ctx:java8Parser.VariableDeclaratorListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#variableDeclarator.
    def visitVariableDeclarator(self, ctx:java8Parser.VariableDeclaratorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#variableDeclaratorId.
    def visitVariableDeclaratorId(self, ctx:java8Parser.VariableDeclaratorIdContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#variableInitializer.
    def visitVariableInitializer(self, ctx:java8Parser.VariableInitializerContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unanntype.
    def visitUnanntype(self, ctx:java8Parser.UnanntypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannPrimitiveType.
    def visitUnannPrimitiveType(self, ctx:java8Parser.UnannPrimitiveTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannReferencetype.
    def visitUnannReferencetype(self, ctx:java8Parser.UnannReferencetypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannClassOrInterfaceType.
    def visitUnannClassOrInterfaceType(self, ctx:java8Parser.UnannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannClassType.
    def visitUnannClassType(self, ctx:java8Parser.UnannClassTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannClassType__1__unannClassOrInterfaceType.
    def visitUnannClassType__1__unannClassOrInterfaceType(self, ctx:java8Parser.UnannClassType__1__unannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannClassType__2__unannClassOrInterfaceType.
    def visitUnannClassType__2__unannClassOrInterfaceType(self, ctx:java8Parser.UnannClassType__2__unannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannInterfaceType.
    def visitUnannInterfaceType(self, ctx:java8Parser.UnannInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannInterfaceType__1__unannClassOrInterfaceType.
    def visitUnannInterfaceType__1__unannClassOrInterfaceType(self, ctx:java8Parser.UnannInterfaceType__1__unannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannInterfaceType__2__unannClassOrInterfaceType.
    def visitUnannInterfaceType__2__unannClassOrInterfaceType(self, ctx:java8Parser.UnannInterfaceType__2__unannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unanntypeVariable.
    def visitUnanntypeVariable(self, ctx:java8Parser.UnanntypeVariableContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannArraytype.
    def visitUnannArraytype(self, ctx:java8Parser.UnannArraytypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodDeclaration.
    def visitMethodDeclaration(self, ctx:java8Parser.MethodDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodHeader.
    def visitMethodHeader(self, ctx:java8Parser.MethodHeaderContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#result.
    def visitResult(self, ctx:java8Parser.ResultContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodDeclarator.
    def visitMethodDeclarator(self, ctx:java8Parser.MethodDeclaratorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#formalParameterList.
    def visitFormalParameterList(self, ctx:java8Parser.FormalParameterListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#formalParameters.
    def visitFormalParameters(self, ctx:java8Parser.FormalParametersContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#formalParameter.
    def visitFormalParameter(self, ctx:java8Parser.FormalParameterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#variableModifier.
    def visitVariableModifier(self, ctx:java8Parser.VariableModifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#lastFormalParameter.
    def visitLastFormalParameter(self, ctx:java8Parser.LastFormalParameterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#receiverParameter.
    def visitReceiverParameter(self, ctx:java8Parser.ReceiverParameterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#throws_.
    def visitThrows_(self, ctx:java8Parser.Throws_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#exceptiontypeList.
    def visitExceptiontypeList(self, ctx:java8Parser.ExceptiontypeListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#exceptiontype.
    def visitExceptiontype(self, ctx:java8Parser.ExceptiontypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodBody.
    def visitMethodBody(self, ctx:java8Parser.MethodBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#instanceInitializer.
    def visitInstanceInitializer(self, ctx:java8Parser.InstanceInitializerContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#staticInitializer.
    def visitStaticInitializer(self, ctx:java8Parser.StaticInitializerContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#constructorDeclaration.
    def visitConstructorDeclaration(self, ctx:java8Parser.ConstructorDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#constructorDeclarator.
    def visitConstructorDeclarator(self, ctx:java8Parser.ConstructorDeclaratorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#simpletypeName.
    def visitSimpletypeName(self, ctx:java8Parser.SimpletypeNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#constructorBody.
    def visitConstructorBody(self, ctx:java8Parser.ConstructorBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#explicitconstructorInvocation.
    def visitExplicitconstructorInvocation(self, ctx:java8Parser.ExplicitconstructorInvocationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceDeclaration.
    def visitInterfaceDeclaration(self, ctx:java8Parser.InterfaceDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#normalInterfaceDeclaration.
    def visitNormalInterfaceDeclaration(self, ctx:java8Parser.NormalInterfaceDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#extendsInterfaces.
    def visitExtendsInterfaces(self, ctx:java8Parser.ExtendsInterfacesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceBody.
    def visitInterfaceBody(self, ctx:java8Parser.InterfaceBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceMemberDeclaration.
    def visitInterfaceMemberDeclaration(self, ctx:java8Parser.InterfaceMemberDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#constantDeclaration.
    def visitConstantDeclaration(self, ctx:java8Parser.ConstantDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#constantModifier.
    def visitConstantModifier(self, ctx:java8Parser.ConstantModifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceMethodDeclaration.
    def visitInterfaceMethodDeclaration(self, ctx:java8Parser.InterfaceMethodDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#defaultValue.
    def visitDefaultValue(self, ctx:java8Parser.DefaultValueContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#elementValue.
    def visitElementValue(self, ctx:java8Parser.ElementValueContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#elementValueArrayInitializer.
    def visitElementValueArrayInitializer(self, ctx:java8Parser.ElementValueArrayInitializerContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#elementValueList.
    def visitElementValueList(self, ctx:java8Parser.ElementValueListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayInitializer.
    def visitArrayInitializer(self, ctx:java8Parser.ArrayInitializerContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#variableInitializerList.
    def visitVariableInitializerList(self, ctx:java8Parser.VariableInitializerListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#block.
    def visitBlock(self, ctx:java8Parser.BlockContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#blockStatements.
    def visitBlockStatements(self, ctx:java8Parser.BlockStatementsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#blockStatement.
    def visitBlockStatement(self, ctx:java8Parser.BlockStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#localVariableDeclarationStatement.
    def visitLocalVariableDeclarationStatement(self, ctx:java8Parser.LocalVariableDeclarationStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#localVariableDeclaration.
    def visitLocalVariableDeclaration(self, ctx:java8Parser.LocalVariableDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#statement.
    def visitStatement(self, ctx:java8Parser.StatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#statementNoShortIf.
    def visitStatementNoShortIf(self, ctx:java8Parser.StatementNoShortIfContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#statementWithoutTrailingSubstatement.
    def visitStatementWithoutTrailingSubstatement(self, ctx:java8Parser.StatementWithoutTrailingSubstatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#emptyStatement.
    def visitEmptyStatement(self, ctx:java8Parser.EmptyStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#labeledStatement.
    def visitLabeledStatement(self, ctx:java8Parser.LabeledStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#labeledStatementNoShortIf.
    def visitLabeledStatementNoShortIf(self, ctx:java8Parser.LabeledStatementNoShortIfContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#expressionStatement.
    def visitExpressionStatement(self, ctx:java8Parser.ExpressionStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#statementExpression.
    def visitStatementExpression(self, ctx:java8Parser.StatementExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#ifThenStatement.
    def visitIfThenStatement(self, ctx:java8Parser.IfThenStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#ifThenElseStatement.
    def visitIfThenElseStatement(self, ctx:java8Parser.IfThenElseStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#ifThenElseStatementNoShortIf.
    def visitIfThenElseStatementNoShortIf(self, ctx:java8Parser.IfThenElseStatementNoShortIfContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#assertStatement.
    def visitAssertStatement(self, ctx:java8Parser.AssertStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#switchStatement.
    def visitSwitchStatement(self, ctx:java8Parser.SwitchStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#switchBlock.
    def visitSwitchBlock(self, ctx:java8Parser.SwitchBlockContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#switchBlockStatementGroup.
    def visitSwitchBlockStatementGroup(self, ctx:java8Parser.SwitchBlockStatementGroupContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#switchLabels.
    def visitSwitchLabels(self, ctx:java8Parser.SwitchLabelsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#switchLabel.
    def visitSwitchLabel(self, ctx:java8Parser.SwitchLabelContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#whileStatement.
    def visitWhileStatement(self, ctx:java8Parser.WhileStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#whileStatementNoShortIf.
    def visitWhileStatementNoShortIf(self, ctx:java8Parser.WhileStatementNoShortIfContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#doStatement.
    def visitDoStatement(self, ctx:java8Parser.DoStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#forStatement.
    def visitForStatement(self, ctx:java8Parser.ForStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#forStatementNoShortIf.
    def visitForStatementNoShortIf(self, ctx:java8Parser.ForStatementNoShortIfContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#basicForStatement.
    def visitBasicForStatement(self, ctx:java8Parser.BasicForStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#basicForStatementNoShortIf.
    def visitBasicForStatementNoShortIf(self, ctx:java8Parser.BasicForStatementNoShortIfContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#forInit.
    def visitForInit(self, ctx:java8Parser.ForInitContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#forUpdate.
    def visitForUpdate(self, ctx:java8Parser.ForUpdateContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#statementExpressionList.
    def visitStatementExpressionList(self, ctx:java8Parser.StatementExpressionListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#enhancedForStatement.
    def visitEnhancedForStatement(self, ctx:java8Parser.EnhancedForStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#enhancedForStatementNoShortIf.
    def visitEnhancedForStatementNoShortIf(self, ctx:java8Parser.EnhancedForStatementNoShortIfContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#breakStatement.
    def visitBreakStatement(self, ctx:java8Parser.BreakStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#continueStatement.
    def visitContinueStatement(self, ctx:java8Parser.ContinueStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#returnStatement.
    def visitReturnStatement(self, ctx:java8Parser.ReturnStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#throwStatement.
    def visitThrowStatement(self, ctx:java8Parser.ThrowStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#synchronizedStatement.
    def visitSynchronizedStatement(self, ctx:java8Parser.SynchronizedStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#tryStatement.
    def visitTryStatement(self, ctx:java8Parser.TryStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#catches.
    def visitCatches(self, ctx:java8Parser.CatchesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#catchclause.
    def visitCatchclause(self, ctx:java8Parser.CatchclauseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#catchFormalParameter.
    def visitCatchFormalParameter(self, ctx:java8Parser.CatchFormalParameterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#catchtype.
    def visitCatchtype(self, ctx:java8Parser.CatchtypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#finally_.
    def visitFinally_(self, ctx:java8Parser.Finally_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#tryWithResourcesStatement.
    def visitTryWithResourcesStatement(self, ctx:java8Parser.TryWithResourcesStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#resourceSpecification.
    def visitResourceSpecification(self, ctx:java8Parser.ResourceSpecificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#resourceList.
    def visitResourceList(self, ctx:java8Parser.ResourceListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#resource.
    def visitResource(self, ctx:java8Parser.ResourceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primary.
    def visitPrimary(self, ctx:java8Parser.PrimaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray__1__arrayAccess.
    def visitPrimaryNoNewArray__1__arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray__1__arrayAccessContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray__2__arrayAccess.
    def visitPrimaryNoNewArray__2__arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray__2__arrayAccessContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray__1__primary.
    def visitPrimaryNoNewArray__1__primary(self, ctx:java8Parser.PrimaryNoNewArray__1__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray__1__primary__1__arrayAccess__1__primary.
    def visitPrimaryNoNewArray__1__primary__1__arrayAccess__1__primary(self, ctx:java8Parser.PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray__1__primary__2__arrayAccess__1__primary.
    def visitPrimaryNoNewArray__1__primary__2__arrayAccess__1__primary(self, ctx:java8Parser.PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray__2__primary.
    def visitPrimaryNoNewArray__2__primary(self, ctx:java8Parser.PrimaryNoNewArray__2__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray__2__primary__1__arrayAccess__2__primary.
    def visitPrimaryNoNewArray__2__primary__1__arrayAccess__2__primary(self, ctx:java8Parser.PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray__2__primary__2__arrayAccess__2__primary.
    def visitPrimaryNoNewArray__2__primary__2__arrayAccess__2__primary(self, ctx:java8Parser.PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classInstanceCreationExpression.
    def visitClassInstanceCreationExpression(self, ctx:java8Parser.ClassInstanceCreationExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classInstanceCreationExpression__1__primary.
    def visitClassInstanceCreationExpression__1__primary(self, ctx:java8Parser.ClassInstanceCreationExpression__1__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classInstanceCreationExpression__2__primary.
    def visitClassInstanceCreationExpression__2__primary(self, ctx:java8Parser.ClassInstanceCreationExpression__2__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeArgumentsOrDiamond.
    def visitTypeArgumentsOrDiamond(self, ctx:java8Parser.TypeArgumentsOrDiamondContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#fieldAccess.
    def visitFieldAccess(self, ctx:java8Parser.FieldAccessContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#fieldAccess__1__primary.
    def visitFieldAccess__1__primary(self, ctx:java8Parser.FieldAccess__1__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#fieldAccess__2__primary.
    def visitFieldAccess__2__primary(self, ctx:java8Parser.FieldAccess__2__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayAccess.
    def visitArrayAccess(self, ctx:java8Parser.ArrayAccessContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayAccess__1__primary.
    def visitArrayAccess__1__primary(self, ctx:java8Parser.ArrayAccess__1__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayAccess__2__primary.
    def visitArrayAccess__2__primary(self, ctx:java8Parser.ArrayAccess__2__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodInvocation.
    def visitMethodInvocation(self, ctx:java8Parser.MethodInvocationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodInvocation__1__primary.
    def visitMethodInvocation__1__primary(self, ctx:java8Parser.MethodInvocation__1__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodInvocation__2__primary.
    def visitMethodInvocation__2__primary(self, ctx:java8Parser.MethodInvocation__2__primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#argumentList.
    def visitArgumentList(self, ctx:java8Parser.ArgumentListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayCreationExpression.
    def visitArrayCreationExpression(self, ctx:java8Parser.ArrayCreationExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#dimExprs.
    def visitDimExprs(self, ctx:java8Parser.DimExprsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#dimExpr.
    def visitDimExpr(self, ctx:java8Parser.DimExprContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#expression.
    def visitExpression(self, ctx:java8Parser.ExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#inferredFormalParameterList.
    def visitInferredFormalParameterList(self, ctx:java8Parser.InferredFormalParameterListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#assignmentExpression.
    def visitAssignmentExpression(self, ctx:java8Parser.AssignmentExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#assignment.
    def visitAssignment(self, ctx:java8Parser.AssignmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#assignmentOperator.
    def visitAssignmentOperator(self, ctx:java8Parser.AssignmentOperatorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#leftHandSide.
    def visitLeftHandSide(self, ctx:java8Parser.LeftHandSideContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#conditionalExpression.
    def visitConditionalExpression(self, ctx:java8Parser.ConditionalExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#conditionalOrExpression.
    def visitConditionalOrExpression(self, ctx:java8Parser.ConditionalOrExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#conditionalAndExpression.
    def visitConditionalAndExpression(self, ctx:java8Parser.ConditionalAndExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#inclusiveOrExpression.
    def visitInclusiveOrExpression(self, ctx:java8Parser.InclusiveOrExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#exclusiveOrExpression.
    def visitExclusiveOrExpression(self, ctx:java8Parser.ExclusiveOrExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#andExpression.
    def visitAndExpression(self, ctx:java8Parser.AndExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#equalityExpression.
    def visitEqualityExpression(self, ctx:java8Parser.EqualityExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#relationalExpression.
    def visitRelationalExpression(self, ctx:java8Parser.RelationalExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#shiftExpression.
    def visitShiftExpression(self, ctx:java8Parser.ShiftExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#additiveExpression.
    def visitAdditiveExpression(self, ctx:java8Parser.AdditiveExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#multiplicativeExpression.
    def visitMultiplicativeExpression(self, ctx:java8Parser.MultiplicativeExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unaryExpression.
    def visitUnaryExpression(self, ctx:java8Parser.UnaryExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#preIncrementExpression.
    def visitPreIncrementExpression(self, ctx:java8Parser.PreIncrementExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#preDecrementExpression.
    def visitPreDecrementExpression(self, ctx:java8Parser.PreDecrementExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unaryExpressionNotPlusMinus.
    def visitUnaryExpressionNotPlusMinus(self, ctx:java8Parser.UnaryExpressionNotPlusMinusContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#postfixExpression.
    def visitPostfixExpression(self, ctx:java8Parser.PostfixExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#postIncrementExpression.
    def visitPostIncrementExpression(self, ctx:java8Parser.PostIncrementExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#postIncrementExpression__1__postfixExpression.
    def visitPostIncrementExpression__1__postfixExpression(self, ctx:java8Parser.PostIncrementExpression__1__postfixExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#postDecrementExpression.
    def visitPostDecrementExpression(self, ctx:java8Parser.PostDecrementExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#postDecrementExpression__1__postfixExpression.
    def visitPostDecrementExpression__1__postfixExpression(self, ctx:java8Parser.PostDecrementExpression__1__postfixExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#castExpression.
    def visitCastExpression(self, ctx:java8Parser.CastExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#constantExpression.
    def visitConstantExpression(self, ctx:java8Parser.ConstantExpressionContext):
        return self.visitChildren(ctx)



del java8Parser