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


    # Visit a parse tree produced by java8Parser#primitiveType.
    def visitPrimitiveType(self, ctx:java8Parser.PrimitiveTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#numericType.
    def visitNumericType(self, ctx:java8Parser.NumericTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#integralType.
    def visitIntegralType(self, ctx:java8Parser.IntegralTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#floatingPointType.
    def visitFloatingPointType(self, ctx:java8Parser.FloatingPointTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#referenceType.
    def visitReferenceType(self, ctx:java8Parser.ReferenceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classOrInterfaceType.
    def visitClassOrInterfaceType(self, ctx:java8Parser.ClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classType.
    def visitClassType(self, ctx:java8Parser.ClassTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classType_lf_classOrInterfaceType.
    def visitClassType_lf_classOrInterfaceType(self, ctx:java8Parser.ClassType_lf_classOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classType_lfno_classOrInterfaceType.
    def visitClassType_lfno_classOrInterfaceType(self, ctx:java8Parser.ClassType_lfno_classOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceType.
    def visitInterfaceType(self, ctx:java8Parser.InterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceType_lf_classOrInterfaceType.
    def visitInterfaceType_lf_classOrInterfaceType(self, ctx:java8Parser.InterfaceType_lf_classOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceType_lfno_classOrInterfaceType.
    def visitInterfaceType_lfno_classOrInterfaceType(self, ctx:java8Parser.InterfaceType_lfno_classOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeVariable.
    def visitTypeVariable(self, ctx:java8Parser.TypeVariableContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayType.
    def visitArrayType(self, ctx:java8Parser.ArrayTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#dims.
    def visitDims(self, ctx:java8Parser.DimsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeParameter.
    def visitTypeParameter(self, ctx:java8Parser.TypeParameterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeParameterModifier.
    def visitTypeParameterModifier(self, ctx:java8Parser.TypeParameterModifierContext):
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


    # Visit a parse tree produced by java8Parser#packageName.
    def visitPackageName(self, ctx:java8Parser.PackageNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeName.
    def visitTypeName(self, ctx:java8Parser.TypeNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#packageOrTypeName.
    def visitPackageOrTypeName(self, ctx:java8Parser.PackageOrTypeNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#expressionName.
    def visitExpressionName(self, ctx:java8Parser.ExpressionNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodName.
    def visitMethodName(self, ctx:java8Parser.MethodNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#ambiguousName.
    def visitAmbiguousName(self, ctx:java8Parser.AmbiguousNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#compilationUnit.
    def visitCompilationUnit(self, ctx:java8Parser.CompilationUnitContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#packageDeclaration.
    def visitPackageDeclaration(self, ctx:java8Parser.PackageDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#packageModifier.
    def visitPackageModifier(self, ctx:java8Parser.PackageModifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#importDeclaration.
    def visitImportDeclaration(self, ctx:java8Parser.ImportDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#singleTypeImportDeclaration.
    def visitSingleTypeImportDeclaration(self, ctx:java8Parser.SingleTypeImportDeclarationContext):
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


    # Visit a parse tree produced by java8Parser#normalClassDeclaration.
    def visitNormalClassDeclaration(self, ctx:java8Parser.NormalClassDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classModifier.
    def visitClassModifier(self, ctx:java8Parser.ClassModifierContext):
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


    # Visit a parse tree produced by java8Parser#interfaceTypeList.
    def visitInterfaceTypeList(self, ctx:java8Parser.InterfaceTypeListContext):
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


    # Visit a parse tree produced by java8Parser#fieldModifier.
    def visitFieldModifier(self, ctx:java8Parser.FieldModifierContext):
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


    # Visit a parse tree produced by java8Parser#unannType.
    def visitUnannType(self, ctx:java8Parser.UnannTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannPrimitiveType.
    def visitUnannPrimitiveType(self, ctx:java8Parser.UnannPrimitiveTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannReferenceType.
    def visitUnannReferenceType(self, ctx:java8Parser.UnannReferenceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannClassOrInterfaceType.
    def visitUnannClassOrInterfaceType(self, ctx:java8Parser.UnannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannClassType.
    def visitUnannClassType(self, ctx:java8Parser.UnannClassTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannClassType_lf_unannClassOrInterfaceType.
    def visitUnannClassType_lf_unannClassOrInterfaceType(self, ctx:java8Parser.UnannClassType_lf_unannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannClassType_lfno_unannClassOrInterfaceType.
    def visitUnannClassType_lfno_unannClassOrInterfaceType(self, ctx:java8Parser.UnannClassType_lfno_unannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannInterfaceType.
    def visitUnannInterfaceType(self, ctx:java8Parser.UnannInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannInterfaceType_lf_unannClassOrInterfaceType.
    def visitUnannInterfaceType_lf_unannClassOrInterfaceType(self, ctx:java8Parser.UnannInterfaceType_lf_unannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannInterfaceType_lfno_unannClassOrInterfaceType.
    def visitUnannInterfaceType_lfno_unannClassOrInterfaceType(self, ctx:java8Parser.UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannTypeVariable.
    def visitUnannTypeVariable(self, ctx:java8Parser.UnannTypeVariableContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#unannArrayType.
    def visitUnannArrayType(self, ctx:java8Parser.UnannArrayTypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodDeclaration.
    def visitMethodDeclaration(self, ctx:java8Parser.MethodDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodModifier.
    def visitMethodModifier(self, ctx:java8Parser.MethodModifierContext):
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


    # Visit a parse tree produced by java8Parser#exceptionTypeList.
    def visitExceptionTypeList(self, ctx:java8Parser.ExceptionTypeListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#exceptionType.
    def visitExceptionType(self, ctx:java8Parser.ExceptionTypeContext):
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


    # Visit a parse tree produced by java8Parser#constructorModifier.
    def visitConstructorModifier(self, ctx:java8Parser.ConstructorModifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#constructorDeclarator.
    def visitConstructorDeclarator(self, ctx:java8Parser.ConstructorDeclaratorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#simpleTypeName.
    def visitSimpleTypeName(self, ctx:java8Parser.SimpleTypeNameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#constructorBody.
    def visitConstructorBody(self, ctx:java8Parser.ConstructorBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#explicitConstructorInvocation.
    def visitExplicitConstructorInvocation(self, ctx:java8Parser.ExplicitConstructorInvocationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#enumDeclaration.
    def visitEnumDeclaration(self, ctx:java8Parser.EnumDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#enumBody.
    def visitEnumBody(self, ctx:java8Parser.EnumBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#enumConstantList.
    def visitEnumConstantList(self, ctx:java8Parser.EnumConstantListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#enumConstant.
    def visitEnumConstant(self, ctx:java8Parser.EnumConstantContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#enumConstantModifier.
    def visitEnumConstantModifier(self, ctx:java8Parser.EnumConstantModifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#enumBodyDeclarations.
    def visitEnumBodyDeclarations(self, ctx:java8Parser.EnumBodyDeclarationsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceDeclaration.
    def visitInterfaceDeclaration(self, ctx:java8Parser.InterfaceDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#normalInterfaceDeclaration.
    def visitNormalInterfaceDeclaration(self, ctx:java8Parser.NormalInterfaceDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#interfaceModifier.
    def visitInterfaceModifier(self, ctx:java8Parser.InterfaceModifierContext):
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


    # Visit a parse tree produced by java8Parser#interfaceMethodModifier.
    def visitInterfaceMethodModifier(self, ctx:java8Parser.InterfaceMethodModifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#annotationTypeDeclaration.
    def visitAnnotationTypeDeclaration(self, ctx:java8Parser.AnnotationTypeDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#annotationTypeBody.
    def visitAnnotationTypeBody(self, ctx:java8Parser.AnnotationTypeBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#annotationTypeMemberDeclaration.
    def visitAnnotationTypeMemberDeclaration(self, ctx:java8Parser.AnnotationTypeMemberDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#annotationTypeElementDeclaration.
    def visitAnnotationTypeElementDeclaration(self, ctx:java8Parser.AnnotationTypeElementDeclarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#annotationTypeElementModifier.
    def visitAnnotationTypeElementModifier(self, ctx:java8Parser.AnnotationTypeElementModifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#defaultValue.
    def visitDefaultValue(self, ctx:java8Parser.DefaultValueContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#annotation.
    def visitAnnotation(self, ctx:java8Parser.AnnotationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#normalAnnotation.
    def visitNormalAnnotation(self, ctx:java8Parser.NormalAnnotationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#elementValuePairList.
    def visitElementValuePairList(self, ctx:java8Parser.ElementValuePairListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#elementValuePair.
    def visitElementValuePair(self, ctx:java8Parser.ElementValuePairContext):
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


    # Visit a parse tree produced by java8Parser#markerAnnotation.
    def visitMarkerAnnotation(self, ctx:java8Parser.MarkerAnnotationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#singleElementAnnotation.
    def visitSingleElementAnnotation(self, ctx:java8Parser.SingleElementAnnotationContext):
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


    # Visit a parse tree produced by java8Parser#enumConstantName.
    def visitEnumConstantName(self, ctx:java8Parser.EnumConstantNameContext):
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


    # Visit a parse tree produced by java8Parser#catchClause.
    def visitCatchClause(self, ctx:java8Parser.CatchClauseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#catchFormalParameter.
    def visitCatchFormalParameter(self, ctx:java8Parser.CatchFormalParameterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#catchType.
    def visitCatchType(self, ctx:java8Parser.CatchTypeContext):
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


    # Visit a parse tree produced by java8Parser#primaryNoNewArray.
    def visitPrimaryNoNewArray(self, ctx:java8Parser.PrimaryNoNewArrayContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray_lf_arrayAccess.
    def visitPrimaryNoNewArray_lf_arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray_lf_arrayAccessContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray_lfno_arrayAccess.
    def visitPrimaryNoNewArray_lfno_arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray_lfno_arrayAccessContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray_lf_primary.
    def visitPrimaryNoNewArray_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary.
    def visitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary.
    def visitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary.
    def visitPrimaryNoNewArray_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary.
    def visitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary.
    def visitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classInstanceCreationExpression.
    def visitClassInstanceCreationExpression(self, ctx:java8Parser.ClassInstanceCreationExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classInstanceCreationExpression_lf_primary.
    def visitClassInstanceCreationExpression_lf_primary(self, ctx:java8Parser.ClassInstanceCreationExpression_lf_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#classInstanceCreationExpression_lfno_primary.
    def visitClassInstanceCreationExpression_lfno_primary(self, ctx:java8Parser.ClassInstanceCreationExpression_lfno_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#typeArgumentsOrDiamond.
    def visitTypeArgumentsOrDiamond(self, ctx:java8Parser.TypeArgumentsOrDiamondContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#fieldAccess.
    def visitFieldAccess(self, ctx:java8Parser.FieldAccessContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#fieldAccess_lf_primary.
    def visitFieldAccess_lf_primary(self, ctx:java8Parser.FieldAccess_lf_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#fieldAccess_lfno_primary.
    def visitFieldAccess_lfno_primary(self, ctx:java8Parser.FieldAccess_lfno_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayAccess.
    def visitArrayAccess(self, ctx:java8Parser.ArrayAccessContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayAccess_lf_primary.
    def visitArrayAccess_lf_primary(self, ctx:java8Parser.ArrayAccess_lf_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#arrayAccess_lfno_primary.
    def visitArrayAccess_lfno_primary(self, ctx:java8Parser.ArrayAccess_lfno_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodInvocation.
    def visitMethodInvocation(self, ctx:java8Parser.MethodInvocationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodInvocation_lf_primary.
    def visitMethodInvocation_lf_primary(self, ctx:java8Parser.MethodInvocation_lf_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodInvocation_lfno_primary.
    def visitMethodInvocation_lfno_primary(self, ctx:java8Parser.MethodInvocation_lfno_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#argumentList.
    def visitArgumentList(self, ctx:java8Parser.ArgumentListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodReference.
    def visitMethodReference(self, ctx:java8Parser.MethodReferenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodReference_lf_primary.
    def visitMethodReference_lf_primary(self, ctx:java8Parser.MethodReference_lf_primaryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#methodReference_lfno_primary.
    def visitMethodReference_lfno_primary(self, ctx:java8Parser.MethodReference_lfno_primaryContext):
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


    # Visit a parse tree produced by java8Parser#constantExpression.
    def visitConstantExpression(self, ctx:java8Parser.ConstantExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#expression.
    def visitExpression(self, ctx:java8Parser.ExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#lambdaExpression.
    def visitLambdaExpression(self, ctx:java8Parser.LambdaExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#lambdaParameters.
    def visitLambdaParameters(self, ctx:java8Parser.LambdaParametersContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#inferredFormalParameterList.
    def visitInferredFormalParameterList(self, ctx:java8Parser.InferredFormalParameterListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#lambdaBody.
    def visitLambdaBody(self, ctx:java8Parser.LambdaBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#assignmentExpression.
    def visitAssignmentExpression(self, ctx:java8Parser.AssignmentExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#assignment.
    def visitAssignment(self, ctx:java8Parser.AssignmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#leftHandSide.
    def visitLeftHandSide(self, ctx:java8Parser.LeftHandSideContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#assignmentOperator.
    def visitAssignmentOperator(self, ctx:java8Parser.AssignmentOperatorContext):
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


    # Visit a parse tree produced by java8Parser#postIncrementExpression_lf_postfixExpression.
    def visitPostIncrementExpression_lf_postfixExpression(self, ctx:java8Parser.PostIncrementExpression_lf_postfixExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#postDecrementExpression.
    def visitPostDecrementExpression(self, ctx:java8Parser.PostDecrementExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#postDecrementExpression_lf_postfixExpression.
    def visitPostDecrementExpression_lf_postfixExpression(self, ctx:java8Parser.PostDecrementExpression_lf_postfixExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by java8Parser#castExpression.
    def visitCastExpression(self, ctx:java8Parser.CastExpressionContext):
        return self.visitChildren(ctx)



del java8Parser