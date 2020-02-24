# Generated from java8.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .java8Parser import java8Parser
else:
    from java8Parser import java8Parser

# This class defines a complete listener for a parse tree produced by java8Parser.
class java8Listener(ParseTreeListener):

    # Enter a parse tree produced by java8Parser#literal.
    def enterLiteral(self, ctx:java8Parser.LiteralContext):
        pass

    # Exit a parse tree produced by java8Parser#literal.
    def exitLiteral(self, ctx:java8Parser.LiteralContext):
        pass


    # Enter a parse tree produced by java8Parser#type_.
    def enterType_(self, ctx:java8Parser.Type_Context):
        pass

    # Exit a parse tree produced by java8Parser#type_.
    def exitType_(self, ctx:java8Parser.Type_Context):
        pass


    # Enter a parse tree produced by java8Parser#primitiveType.
    def enterPrimitiveType(self, ctx:java8Parser.PrimitiveTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#primitiveType.
    def exitPrimitiveType(self, ctx:java8Parser.PrimitiveTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#numericType.
    def enterNumericType(self, ctx:java8Parser.NumericTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#numericType.
    def exitNumericType(self, ctx:java8Parser.NumericTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#integralType.
    def enterIntegralType(self, ctx:java8Parser.IntegralTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#integralType.
    def exitIntegralType(self, ctx:java8Parser.IntegralTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#floatingPointType.
    def enterFloatingPointType(self, ctx:java8Parser.FloatingPointTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#floatingPointType.
    def exitFloatingPointType(self, ctx:java8Parser.FloatingPointTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#referenceType.
    def enterReferenceType(self, ctx:java8Parser.ReferenceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#referenceType.
    def exitReferenceType(self, ctx:java8Parser.ReferenceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#classOrInterfaceType.
    def enterClassOrInterfaceType(self, ctx:java8Parser.ClassOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#classOrInterfaceType.
    def exitClassOrInterfaceType(self, ctx:java8Parser.ClassOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#classType.
    def enterClassType(self, ctx:java8Parser.ClassTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#classType.
    def exitClassType(self, ctx:java8Parser.ClassTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#classType_lf_classOrInterfaceType.
    def enterClassType_lf_classOrInterfaceType(self, ctx:java8Parser.ClassType_lf_classOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#classType_lf_classOrInterfaceType.
    def exitClassType_lf_classOrInterfaceType(self, ctx:java8Parser.ClassType_lf_classOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#classType_lfno_classOrInterfaceType.
    def enterClassType_lfno_classOrInterfaceType(self, ctx:java8Parser.ClassType_lfno_classOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#classType_lfno_classOrInterfaceType.
    def exitClassType_lfno_classOrInterfaceType(self, ctx:java8Parser.ClassType_lfno_classOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceType.
    def enterInterfaceType(self, ctx:java8Parser.InterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceType.
    def exitInterfaceType(self, ctx:java8Parser.InterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceType_lf_classOrInterfaceType.
    def enterInterfaceType_lf_classOrInterfaceType(self, ctx:java8Parser.InterfaceType_lf_classOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceType_lf_classOrInterfaceType.
    def exitInterfaceType_lf_classOrInterfaceType(self, ctx:java8Parser.InterfaceType_lf_classOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceType_lfno_classOrInterfaceType.
    def enterInterfaceType_lfno_classOrInterfaceType(self, ctx:java8Parser.InterfaceType_lfno_classOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceType_lfno_classOrInterfaceType.
    def exitInterfaceType_lfno_classOrInterfaceType(self, ctx:java8Parser.InterfaceType_lfno_classOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#typeVariable.
    def enterTypeVariable(self, ctx:java8Parser.TypeVariableContext):
        pass

    # Exit a parse tree produced by java8Parser#typeVariable.
    def exitTypeVariable(self, ctx:java8Parser.TypeVariableContext):
        pass


    # Enter a parse tree produced by java8Parser#arrayType.
    def enterArrayType(self, ctx:java8Parser.ArrayTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#arrayType.
    def exitArrayType(self, ctx:java8Parser.ArrayTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#dims.
    def enterDims(self, ctx:java8Parser.DimsContext):
        pass

    # Exit a parse tree produced by java8Parser#dims.
    def exitDims(self, ctx:java8Parser.DimsContext):
        pass


    # Enter a parse tree produced by java8Parser#typeParameter.
    def enterTypeParameter(self, ctx:java8Parser.TypeParameterContext):
        pass

    # Exit a parse tree produced by java8Parser#typeParameter.
    def exitTypeParameter(self, ctx:java8Parser.TypeParameterContext):
        pass


    # Enter a parse tree produced by java8Parser#typeParameterModifier.
    def enterTypeParameterModifier(self, ctx:java8Parser.TypeParameterModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#typeParameterModifier.
    def exitTypeParameterModifier(self, ctx:java8Parser.TypeParameterModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#typeBound.
    def enterTypeBound(self, ctx:java8Parser.TypeBoundContext):
        pass

    # Exit a parse tree produced by java8Parser#typeBound.
    def exitTypeBound(self, ctx:java8Parser.TypeBoundContext):
        pass


    # Enter a parse tree produced by java8Parser#additionalBound.
    def enterAdditionalBound(self, ctx:java8Parser.AdditionalBoundContext):
        pass

    # Exit a parse tree produced by java8Parser#additionalBound.
    def exitAdditionalBound(self, ctx:java8Parser.AdditionalBoundContext):
        pass


    # Enter a parse tree produced by java8Parser#typeArguments.
    def enterTypeArguments(self, ctx:java8Parser.TypeArgumentsContext):
        pass

    # Exit a parse tree produced by java8Parser#typeArguments.
    def exitTypeArguments(self, ctx:java8Parser.TypeArgumentsContext):
        pass


    # Enter a parse tree produced by java8Parser#typeArgumentList.
    def enterTypeArgumentList(self, ctx:java8Parser.TypeArgumentListContext):
        pass

    # Exit a parse tree produced by java8Parser#typeArgumentList.
    def exitTypeArgumentList(self, ctx:java8Parser.TypeArgumentListContext):
        pass


    # Enter a parse tree produced by java8Parser#typeArgument.
    def enterTypeArgument(self, ctx:java8Parser.TypeArgumentContext):
        pass

    # Exit a parse tree produced by java8Parser#typeArgument.
    def exitTypeArgument(self, ctx:java8Parser.TypeArgumentContext):
        pass


    # Enter a parse tree produced by java8Parser#wildcard.
    def enterWildcard(self, ctx:java8Parser.WildcardContext):
        pass

    # Exit a parse tree produced by java8Parser#wildcard.
    def exitWildcard(self, ctx:java8Parser.WildcardContext):
        pass


    # Enter a parse tree produced by java8Parser#wildcardBounds.
    def enterWildcardBounds(self, ctx:java8Parser.WildcardBoundsContext):
        pass

    # Exit a parse tree produced by java8Parser#wildcardBounds.
    def exitWildcardBounds(self, ctx:java8Parser.WildcardBoundsContext):
        pass


    # Enter a parse tree produced by java8Parser#packageName.
    def enterPackageName(self, ctx:java8Parser.PackageNameContext):
        pass

    # Exit a parse tree produced by java8Parser#packageName.
    def exitPackageName(self, ctx:java8Parser.PackageNameContext):
        pass


    # Enter a parse tree produced by java8Parser#typeName.
    def enterTypeName(self, ctx:java8Parser.TypeNameContext):
        pass

    # Exit a parse tree produced by java8Parser#typeName.
    def exitTypeName(self, ctx:java8Parser.TypeNameContext):
        pass


    # Enter a parse tree produced by java8Parser#packageOrTypeName.
    def enterPackageOrTypeName(self, ctx:java8Parser.PackageOrTypeNameContext):
        pass

    # Exit a parse tree produced by java8Parser#packageOrTypeName.
    def exitPackageOrTypeName(self, ctx:java8Parser.PackageOrTypeNameContext):
        pass


    # Enter a parse tree produced by java8Parser#expressionName.
    def enterExpressionName(self, ctx:java8Parser.ExpressionNameContext):
        pass

    # Exit a parse tree produced by java8Parser#expressionName.
    def exitExpressionName(self, ctx:java8Parser.ExpressionNameContext):
        pass


    # Enter a parse tree produced by java8Parser#methodName.
    def enterMethodName(self, ctx:java8Parser.MethodNameContext):
        pass

    # Exit a parse tree produced by java8Parser#methodName.
    def exitMethodName(self, ctx:java8Parser.MethodNameContext):
        pass


    # Enter a parse tree produced by java8Parser#ambiguousName.
    def enterAmbiguousName(self, ctx:java8Parser.AmbiguousNameContext):
        pass

    # Exit a parse tree produced by java8Parser#ambiguousName.
    def exitAmbiguousName(self, ctx:java8Parser.AmbiguousNameContext):
        pass


    # Enter a parse tree produced by java8Parser#compilationUnit.
    def enterCompilationUnit(self, ctx:java8Parser.CompilationUnitContext):
        pass

    # Exit a parse tree produced by java8Parser#compilationUnit.
    def exitCompilationUnit(self, ctx:java8Parser.CompilationUnitContext):
        pass


    # Enter a parse tree produced by java8Parser#packageDeclaration.
    def enterPackageDeclaration(self, ctx:java8Parser.PackageDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#packageDeclaration.
    def exitPackageDeclaration(self, ctx:java8Parser.PackageDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#packageModifier.
    def enterPackageModifier(self, ctx:java8Parser.PackageModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#packageModifier.
    def exitPackageModifier(self, ctx:java8Parser.PackageModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#importDeclaration.
    def enterImportDeclaration(self, ctx:java8Parser.ImportDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#importDeclaration.
    def exitImportDeclaration(self, ctx:java8Parser.ImportDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#singleTypeImportDeclaration.
    def enterSingleTypeImportDeclaration(self, ctx:java8Parser.SingleTypeImportDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#singleTypeImportDeclaration.
    def exitSingleTypeImportDeclaration(self, ctx:java8Parser.SingleTypeImportDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#typeImportOnDemandDeclaration.
    def enterTypeImportOnDemandDeclaration(self, ctx:java8Parser.TypeImportOnDemandDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#typeImportOnDemandDeclaration.
    def exitTypeImportOnDemandDeclaration(self, ctx:java8Parser.TypeImportOnDemandDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#singleStaticImportDeclaration.
    def enterSingleStaticImportDeclaration(self, ctx:java8Parser.SingleStaticImportDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#singleStaticImportDeclaration.
    def exitSingleStaticImportDeclaration(self, ctx:java8Parser.SingleStaticImportDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#staticImportOnDemandDeclaration.
    def enterStaticImportOnDemandDeclaration(self, ctx:java8Parser.StaticImportOnDemandDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#staticImportOnDemandDeclaration.
    def exitStaticImportOnDemandDeclaration(self, ctx:java8Parser.StaticImportOnDemandDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#typeDeclaration.
    def enterTypeDeclaration(self, ctx:java8Parser.TypeDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#typeDeclaration.
    def exitTypeDeclaration(self, ctx:java8Parser.TypeDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#classDeclaration.
    def enterClassDeclaration(self, ctx:java8Parser.ClassDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#classDeclaration.
    def exitClassDeclaration(self, ctx:java8Parser.ClassDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#normalClassDeclaration.
    def enterNormalClassDeclaration(self, ctx:java8Parser.NormalClassDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#normalClassDeclaration.
    def exitNormalClassDeclaration(self, ctx:java8Parser.NormalClassDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#classModifier.
    def enterClassModifier(self, ctx:java8Parser.ClassModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#classModifier.
    def exitClassModifier(self, ctx:java8Parser.ClassModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#typeParameters.
    def enterTypeParameters(self, ctx:java8Parser.TypeParametersContext):
        pass

    # Exit a parse tree produced by java8Parser#typeParameters.
    def exitTypeParameters(self, ctx:java8Parser.TypeParametersContext):
        pass


    # Enter a parse tree produced by java8Parser#typeParameterList.
    def enterTypeParameterList(self, ctx:java8Parser.TypeParameterListContext):
        pass

    # Exit a parse tree produced by java8Parser#typeParameterList.
    def exitTypeParameterList(self, ctx:java8Parser.TypeParameterListContext):
        pass


    # Enter a parse tree produced by java8Parser#superclass.
    def enterSuperclass(self, ctx:java8Parser.SuperclassContext):
        pass

    # Exit a parse tree produced by java8Parser#superclass.
    def exitSuperclass(self, ctx:java8Parser.SuperclassContext):
        pass


    # Enter a parse tree produced by java8Parser#superinterfaces.
    def enterSuperinterfaces(self, ctx:java8Parser.SuperinterfacesContext):
        pass

    # Exit a parse tree produced by java8Parser#superinterfaces.
    def exitSuperinterfaces(self, ctx:java8Parser.SuperinterfacesContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceTypeList.
    def enterInterfaceTypeList(self, ctx:java8Parser.InterfaceTypeListContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceTypeList.
    def exitInterfaceTypeList(self, ctx:java8Parser.InterfaceTypeListContext):
        pass


    # Enter a parse tree produced by java8Parser#classBody.
    def enterClassBody(self, ctx:java8Parser.ClassBodyContext):
        pass

    # Exit a parse tree produced by java8Parser#classBody.
    def exitClassBody(self, ctx:java8Parser.ClassBodyContext):
        pass


    # Enter a parse tree produced by java8Parser#classBodyDeclaration.
    def enterClassBodyDeclaration(self, ctx:java8Parser.ClassBodyDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#classBodyDeclaration.
    def exitClassBodyDeclaration(self, ctx:java8Parser.ClassBodyDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#classMemberDeclaration.
    def enterClassMemberDeclaration(self, ctx:java8Parser.ClassMemberDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#classMemberDeclaration.
    def exitClassMemberDeclaration(self, ctx:java8Parser.ClassMemberDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#fieldDeclaration.
    def enterFieldDeclaration(self, ctx:java8Parser.FieldDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#fieldDeclaration.
    def exitFieldDeclaration(self, ctx:java8Parser.FieldDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#fieldModifier.
    def enterFieldModifier(self, ctx:java8Parser.FieldModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#fieldModifier.
    def exitFieldModifier(self, ctx:java8Parser.FieldModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#variableDeclaratorList.
    def enterVariableDeclaratorList(self, ctx:java8Parser.VariableDeclaratorListContext):
        pass

    # Exit a parse tree produced by java8Parser#variableDeclaratorList.
    def exitVariableDeclaratorList(self, ctx:java8Parser.VariableDeclaratorListContext):
        pass


    # Enter a parse tree produced by java8Parser#variableDeclarator.
    def enterVariableDeclarator(self, ctx:java8Parser.VariableDeclaratorContext):
        pass

    # Exit a parse tree produced by java8Parser#variableDeclarator.
    def exitVariableDeclarator(self, ctx:java8Parser.VariableDeclaratorContext):
        pass


    # Enter a parse tree produced by java8Parser#variableDeclaratorId.
    def enterVariableDeclaratorId(self, ctx:java8Parser.VariableDeclaratorIdContext):
        pass

    # Exit a parse tree produced by java8Parser#variableDeclaratorId.
    def exitVariableDeclaratorId(self, ctx:java8Parser.VariableDeclaratorIdContext):
        pass


    # Enter a parse tree produced by java8Parser#variableInitializer.
    def enterVariableInitializer(self, ctx:java8Parser.VariableInitializerContext):
        pass

    # Exit a parse tree produced by java8Parser#variableInitializer.
    def exitVariableInitializer(self, ctx:java8Parser.VariableInitializerContext):
        pass


    # Enter a parse tree produced by java8Parser#unannType.
    def enterUnannType(self, ctx:java8Parser.UnannTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannType.
    def exitUnannType(self, ctx:java8Parser.UnannTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannPrimitiveType.
    def enterUnannPrimitiveType(self, ctx:java8Parser.UnannPrimitiveTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannPrimitiveType.
    def exitUnannPrimitiveType(self, ctx:java8Parser.UnannPrimitiveTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannReferenceType.
    def enterUnannReferenceType(self, ctx:java8Parser.UnannReferenceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannReferenceType.
    def exitUnannReferenceType(self, ctx:java8Parser.UnannReferenceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannClassOrInterfaceType.
    def enterUnannClassOrInterfaceType(self, ctx:java8Parser.UnannClassOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannClassOrInterfaceType.
    def exitUnannClassOrInterfaceType(self, ctx:java8Parser.UnannClassOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannClassType.
    def enterUnannClassType(self, ctx:java8Parser.UnannClassTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannClassType.
    def exitUnannClassType(self, ctx:java8Parser.UnannClassTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannClassType_lf_unannClassOrInterfaceType.
    def enterUnannClassType_lf_unannClassOrInterfaceType(self, ctx:java8Parser.UnannClassType_lf_unannClassOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannClassType_lf_unannClassOrInterfaceType.
    def exitUnannClassType_lf_unannClassOrInterfaceType(self, ctx:java8Parser.UnannClassType_lf_unannClassOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannClassType_lfno_unannClassOrInterfaceType.
    def enterUnannClassType_lfno_unannClassOrInterfaceType(self, ctx:java8Parser.UnannClassType_lfno_unannClassOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannClassType_lfno_unannClassOrInterfaceType.
    def exitUnannClassType_lfno_unannClassOrInterfaceType(self, ctx:java8Parser.UnannClassType_lfno_unannClassOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannInterfaceType.
    def enterUnannInterfaceType(self, ctx:java8Parser.UnannInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannInterfaceType.
    def exitUnannInterfaceType(self, ctx:java8Parser.UnannInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannInterfaceType_lf_unannClassOrInterfaceType.
    def enterUnannInterfaceType_lf_unannClassOrInterfaceType(self, ctx:java8Parser.UnannInterfaceType_lf_unannClassOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannInterfaceType_lf_unannClassOrInterfaceType.
    def exitUnannInterfaceType_lf_unannClassOrInterfaceType(self, ctx:java8Parser.UnannInterfaceType_lf_unannClassOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannInterfaceType_lfno_unannClassOrInterfaceType.
    def enterUnannInterfaceType_lfno_unannClassOrInterfaceType(self, ctx:java8Parser.UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannInterfaceType_lfno_unannClassOrInterfaceType.
    def exitUnannInterfaceType_lfno_unannClassOrInterfaceType(self, ctx:java8Parser.UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#unannTypeVariable.
    def enterUnannTypeVariable(self, ctx:java8Parser.UnannTypeVariableContext):
        pass

    # Exit a parse tree produced by java8Parser#unannTypeVariable.
    def exitUnannTypeVariable(self, ctx:java8Parser.UnannTypeVariableContext):
        pass


    # Enter a parse tree produced by java8Parser#unannArrayType.
    def enterUnannArrayType(self, ctx:java8Parser.UnannArrayTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#unannArrayType.
    def exitUnannArrayType(self, ctx:java8Parser.UnannArrayTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#methodDeclaration.
    def enterMethodDeclaration(self, ctx:java8Parser.MethodDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#methodDeclaration.
    def exitMethodDeclaration(self, ctx:java8Parser.MethodDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#methodModifier.
    def enterMethodModifier(self, ctx:java8Parser.MethodModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#methodModifier.
    def exitMethodModifier(self, ctx:java8Parser.MethodModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#methodHeader.
    def enterMethodHeader(self, ctx:java8Parser.MethodHeaderContext):
        pass

    # Exit a parse tree produced by java8Parser#methodHeader.
    def exitMethodHeader(self, ctx:java8Parser.MethodHeaderContext):
        pass


    # Enter a parse tree produced by java8Parser#result.
    def enterResult(self, ctx:java8Parser.ResultContext):
        pass

    # Exit a parse tree produced by java8Parser#result.
    def exitResult(self, ctx:java8Parser.ResultContext):
        pass


    # Enter a parse tree produced by java8Parser#methodDeclarator.
    def enterMethodDeclarator(self, ctx:java8Parser.MethodDeclaratorContext):
        pass

    # Exit a parse tree produced by java8Parser#methodDeclarator.
    def exitMethodDeclarator(self, ctx:java8Parser.MethodDeclaratorContext):
        pass


    # Enter a parse tree produced by java8Parser#formalParameterList.
    def enterFormalParameterList(self, ctx:java8Parser.FormalParameterListContext):
        pass

    # Exit a parse tree produced by java8Parser#formalParameterList.
    def exitFormalParameterList(self, ctx:java8Parser.FormalParameterListContext):
        pass


    # Enter a parse tree produced by java8Parser#formalParameters.
    def enterFormalParameters(self, ctx:java8Parser.FormalParametersContext):
        pass

    # Exit a parse tree produced by java8Parser#formalParameters.
    def exitFormalParameters(self, ctx:java8Parser.FormalParametersContext):
        pass


    # Enter a parse tree produced by java8Parser#formalParameter.
    def enterFormalParameter(self, ctx:java8Parser.FormalParameterContext):
        pass

    # Exit a parse tree produced by java8Parser#formalParameter.
    def exitFormalParameter(self, ctx:java8Parser.FormalParameterContext):
        pass


    # Enter a parse tree produced by java8Parser#variableModifier.
    def enterVariableModifier(self, ctx:java8Parser.VariableModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#variableModifier.
    def exitVariableModifier(self, ctx:java8Parser.VariableModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#lastFormalParameter.
    def enterLastFormalParameter(self, ctx:java8Parser.LastFormalParameterContext):
        pass

    # Exit a parse tree produced by java8Parser#lastFormalParameter.
    def exitLastFormalParameter(self, ctx:java8Parser.LastFormalParameterContext):
        pass


    # Enter a parse tree produced by java8Parser#receiverParameter.
    def enterReceiverParameter(self, ctx:java8Parser.ReceiverParameterContext):
        pass

    # Exit a parse tree produced by java8Parser#receiverParameter.
    def exitReceiverParameter(self, ctx:java8Parser.ReceiverParameterContext):
        pass


    # Enter a parse tree produced by java8Parser#throws_.
    def enterThrows_(self, ctx:java8Parser.Throws_Context):
        pass

    # Exit a parse tree produced by java8Parser#throws_.
    def exitThrows_(self, ctx:java8Parser.Throws_Context):
        pass


    # Enter a parse tree produced by java8Parser#exceptionTypeList.
    def enterExceptionTypeList(self, ctx:java8Parser.ExceptionTypeListContext):
        pass

    # Exit a parse tree produced by java8Parser#exceptionTypeList.
    def exitExceptionTypeList(self, ctx:java8Parser.ExceptionTypeListContext):
        pass


    # Enter a parse tree produced by java8Parser#exceptionType.
    def enterExceptionType(self, ctx:java8Parser.ExceptionTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#exceptionType.
    def exitExceptionType(self, ctx:java8Parser.ExceptionTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#methodBody.
    def enterMethodBody(self, ctx:java8Parser.MethodBodyContext):
        pass

    # Exit a parse tree produced by java8Parser#methodBody.
    def exitMethodBody(self, ctx:java8Parser.MethodBodyContext):
        pass


    # Enter a parse tree produced by java8Parser#instanceInitializer.
    def enterInstanceInitializer(self, ctx:java8Parser.InstanceInitializerContext):
        pass

    # Exit a parse tree produced by java8Parser#instanceInitializer.
    def exitInstanceInitializer(self, ctx:java8Parser.InstanceInitializerContext):
        pass


    # Enter a parse tree produced by java8Parser#staticInitializer.
    def enterStaticInitializer(self, ctx:java8Parser.StaticInitializerContext):
        pass

    # Exit a parse tree produced by java8Parser#staticInitializer.
    def exitStaticInitializer(self, ctx:java8Parser.StaticInitializerContext):
        pass


    # Enter a parse tree produced by java8Parser#constructorDeclaration.
    def enterConstructorDeclaration(self, ctx:java8Parser.ConstructorDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#constructorDeclaration.
    def exitConstructorDeclaration(self, ctx:java8Parser.ConstructorDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#constructorModifier.
    def enterConstructorModifier(self, ctx:java8Parser.ConstructorModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#constructorModifier.
    def exitConstructorModifier(self, ctx:java8Parser.ConstructorModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#constructorDeclarator.
    def enterConstructorDeclarator(self, ctx:java8Parser.ConstructorDeclaratorContext):
        pass

    # Exit a parse tree produced by java8Parser#constructorDeclarator.
    def exitConstructorDeclarator(self, ctx:java8Parser.ConstructorDeclaratorContext):
        pass


    # Enter a parse tree produced by java8Parser#simpleTypeName.
    def enterSimpleTypeName(self, ctx:java8Parser.SimpleTypeNameContext):
        pass

    # Exit a parse tree produced by java8Parser#simpleTypeName.
    def exitSimpleTypeName(self, ctx:java8Parser.SimpleTypeNameContext):
        pass


    # Enter a parse tree produced by java8Parser#constructorBody.
    def enterConstructorBody(self, ctx:java8Parser.ConstructorBodyContext):
        pass

    # Exit a parse tree produced by java8Parser#constructorBody.
    def exitConstructorBody(self, ctx:java8Parser.ConstructorBodyContext):
        pass


    # Enter a parse tree produced by java8Parser#explicitConstructorInvocation.
    def enterExplicitConstructorInvocation(self, ctx:java8Parser.ExplicitConstructorInvocationContext):
        pass

    # Exit a parse tree produced by java8Parser#explicitConstructorInvocation.
    def exitExplicitConstructorInvocation(self, ctx:java8Parser.ExplicitConstructorInvocationContext):
        pass


    # Enter a parse tree produced by java8Parser#enumDeclaration.
    def enterEnumDeclaration(self, ctx:java8Parser.EnumDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#enumDeclaration.
    def exitEnumDeclaration(self, ctx:java8Parser.EnumDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#enumBody.
    def enterEnumBody(self, ctx:java8Parser.EnumBodyContext):
        pass

    # Exit a parse tree produced by java8Parser#enumBody.
    def exitEnumBody(self, ctx:java8Parser.EnumBodyContext):
        pass


    # Enter a parse tree produced by java8Parser#enumConstantList.
    def enterEnumConstantList(self, ctx:java8Parser.EnumConstantListContext):
        pass

    # Exit a parse tree produced by java8Parser#enumConstantList.
    def exitEnumConstantList(self, ctx:java8Parser.EnumConstantListContext):
        pass


    # Enter a parse tree produced by java8Parser#enumConstant.
    def enterEnumConstant(self, ctx:java8Parser.EnumConstantContext):
        pass

    # Exit a parse tree produced by java8Parser#enumConstant.
    def exitEnumConstant(self, ctx:java8Parser.EnumConstantContext):
        pass


    # Enter a parse tree produced by java8Parser#enumConstantModifier.
    def enterEnumConstantModifier(self, ctx:java8Parser.EnumConstantModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#enumConstantModifier.
    def exitEnumConstantModifier(self, ctx:java8Parser.EnumConstantModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#enumBodyDeclarations.
    def enterEnumBodyDeclarations(self, ctx:java8Parser.EnumBodyDeclarationsContext):
        pass

    # Exit a parse tree produced by java8Parser#enumBodyDeclarations.
    def exitEnumBodyDeclarations(self, ctx:java8Parser.EnumBodyDeclarationsContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceDeclaration.
    def enterInterfaceDeclaration(self, ctx:java8Parser.InterfaceDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceDeclaration.
    def exitInterfaceDeclaration(self, ctx:java8Parser.InterfaceDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#normalInterfaceDeclaration.
    def enterNormalInterfaceDeclaration(self, ctx:java8Parser.NormalInterfaceDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#normalInterfaceDeclaration.
    def exitNormalInterfaceDeclaration(self, ctx:java8Parser.NormalInterfaceDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceModifier.
    def enterInterfaceModifier(self, ctx:java8Parser.InterfaceModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceModifier.
    def exitInterfaceModifier(self, ctx:java8Parser.InterfaceModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#extendsInterfaces.
    def enterExtendsInterfaces(self, ctx:java8Parser.ExtendsInterfacesContext):
        pass

    # Exit a parse tree produced by java8Parser#extendsInterfaces.
    def exitExtendsInterfaces(self, ctx:java8Parser.ExtendsInterfacesContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceBody.
    def enterInterfaceBody(self, ctx:java8Parser.InterfaceBodyContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceBody.
    def exitInterfaceBody(self, ctx:java8Parser.InterfaceBodyContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceMemberDeclaration.
    def enterInterfaceMemberDeclaration(self, ctx:java8Parser.InterfaceMemberDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceMemberDeclaration.
    def exitInterfaceMemberDeclaration(self, ctx:java8Parser.InterfaceMemberDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#constantDeclaration.
    def enterConstantDeclaration(self, ctx:java8Parser.ConstantDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#constantDeclaration.
    def exitConstantDeclaration(self, ctx:java8Parser.ConstantDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#constantModifier.
    def enterConstantModifier(self, ctx:java8Parser.ConstantModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#constantModifier.
    def exitConstantModifier(self, ctx:java8Parser.ConstantModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceMethodDeclaration.
    def enterInterfaceMethodDeclaration(self, ctx:java8Parser.InterfaceMethodDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceMethodDeclaration.
    def exitInterfaceMethodDeclaration(self, ctx:java8Parser.InterfaceMethodDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#interfaceMethodModifier.
    def enterInterfaceMethodModifier(self, ctx:java8Parser.InterfaceMethodModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#interfaceMethodModifier.
    def exitInterfaceMethodModifier(self, ctx:java8Parser.InterfaceMethodModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#annotationTypeDeclaration.
    def enterAnnotationTypeDeclaration(self, ctx:java8Parser.AnnotationTypeDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#annotationTypeDeclaration.
    def exitAnnotationTypeDeclaration(self, ctx:java8Parser.AnnotationTypeDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#annotationTypeBody.
    def enterAnnotationTypeBody(self, ctx:java8Parser.AnnotationTypeBodyContext):
        pass

    # Exit a parse tree produced by java8Parser#annotationTypeBody.
    def exitAnnotationTypeBody(self, ctx:java8Parser.AnnotationTypeBodyContext):
        pass


    # Enter a parse tree produced by java8Parser#annotationTypeMemberDeclaration.
    def enterAnnotationTypeMemberDeclaration(self, ctx:java8Parser.AnnotationTypeMemberDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#annotationTypeMemberDeclaration.
    def exitAnnotationTypeMemberDeclaration(self, ctx:java8Parser.AnnotationTypeMemberDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#annotationTypeElementDeclaration.
    def enterAnnotationTypeElementDeclaration(self, ctx:java8Parser.AnnotationTypeElementDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#annotationTypeElementDeclaration.
    def exitAnnotationTypeElementDeclaration(self, ctx:java8Parser.AnnotationTypeElementDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#annotationTypeElementModifier.
    def enterAnnotationTypeElementModifier(self, ctx:java8Parser.AnnotationTypeElementModifierContext):
        pass

    # Exit a parse tree produced by java8Parser#annotationTypeElementModifier.
    def exitAnnotationTypeElementModifier(self, ctx:java8Parser.AnnotationTypeElementModifierContext):
        pass


    # Enter a parse tree produced by java8Parser#defaultValue.
    def enterDefaultValue(self, ctx:java8Parser.DefaultValueContext):
        pass

    # Exit a parse tree produced by java8Parser#defaultValue.
    def exitDefaultValue(self, ctx:java8Parser.DefaultValueContext):
        pass


    # Enter a parse tree produced by java8Parser#annotation.
    def enterAnnotation(self, ctx:java8Parser.AnnotationContext):
        pass

    # Exit a parse tree produced by java8Parser#annotation.
    def exitAnnotation(self, ctx:java8Parser.AnnotationContext):
        pass


    # Enter a parse tree produced by java8Parser#normalAnnotation.
    def enterNormalAnnotation(self, ctx:java8Parser.NormalAnnotationContext):
        pass

    # Exit a parse tree produced by java8Parser#normalAnnotation.
    def exitNormalAnnotation(self, ctx:java8Parser.NormalAnnotationContext):
        pass


    # Enter a parse tree produced by java8Parser#elementValuePairList.
    def enterElementValuePairList(self, ctx:java8Parser.ElementValuePairListContext):
        pass

    # Exit a parse tree produced by java8Parser#elementValuePairList.
    def exitElementValuePairList(self, ctx:java8Parser.ElementValuePairListContext):
        pass


    # Enter a parse tree produced by java8Parser#elementValuePair.
    def enterElementValuePair(self, ctx:java8Parser.ElementValuePairContext):
        pass

    # Exit a parse tree produced by java8Parser#elementValuePair.
    def exitElementValuePair(self, ctx:java8Parser.ElementValuePairContext):
        pass


    # Enter a parse tree produced by java8Parser#elementValue.
    def enterElementValue(self, ctx:java8Parser.ElementValueContext):
        pass

    # Exit a parse tree produced by java8Parser#elementValue.
    def exitElementValue(self, ctx:java8Parser.ElementValueContext):
        pass


    # Enter a parse tree produced by java8Parser#elementValueArrayInitializer.
    def enterElementValueArrayInitializer(self, ctx:java8Parser.ElementValueArrayInitializerContext):
        pass

    # Exit a parse tree produced by java8Parser#elementValueArrayInitializer.
    def exitElementValueArrayInitializer(self, ctx:java8Parser.ElementValueArrayInitializerContext):
        pass


    # Enter a parse tree produced by java8Parser#elementValueList.
    def enterElementValueList(self, ctx:java8Parser.ElementValueListContext):
        pass

    # Exit a parse tree produced by java8Parser#elementValueList.
    def exitElementValueList(self, ctx:java8Parser.ElementValueListContext):
        pass


    # Enter a parse tree produced by java8Parser#markerAnnotation.
    def enterMarkerAnnotation(self, ctx:java8Parser.MarkerAnnotationContext):
        pass

    # Exit a parse tree produced by java8Parser#markerAnnotation.
    def exitMarkerAnnotation(self, ctx:java8Parser.MarkerAnnotationContext):
        pass


    # Enter a parse tree produced by java8Parser#singleElementAnnotation.
    def enterSingleElementAnnotation(self, ctx:java8Parser.SingleElementAnnotationContext):
        pass

    # Exit a parse tree produced by java8Parser#singleElementAnnotation.
    def exitSingleElementAnnotation(self, ctx:java8Parser.SingleElementAnnotationContext):
        pass


    # Enter a parse tree produced by java8Parser#arrayInitializer.
    def enterArrayInitializer(self, ctx:java8Parser.ArrayInitializerContext):
        pass

    # Exit a parse tree produced by java8Parser#arrayInitializer.
    def exitArrayInitializer(self, ctx:java8Parser.ArrayInitializerContext):
        pass


    # Enter a parse tree produced by java8Parser#variableInitializerList.
    def enterVariableInitializerList(self, ctx:java8Parser.VariableInitializerListContext):
        pass

    # Exit a parse tree produced by java8Parser#variableInitializerList.
    def exitVariableInitializerList(self, ctx:java8Parser.VariableInitializerListContext):
        pass


    # Enter a parse tree produced by java8Parser#block.
    def enterBlock(self, ctx:java8Parser.BlockContext):
        pass

    # Exit a parse tree produced by java8Parser#block.
    def exitBlock(self, ctx:java8Parser.BlockContext):
        pass


    # Enter a parse tree produced by java8Parser#blockStatements.
    def enterBlockStatements(self, ctx:java8Parser.BlockStatementsContext):
        pass

    # Exit a parse tree produced by java8Parser#blockStatements.
    def exitBlockStatements(self, ctx:java8Parser.BlockStatementsContext):
        pass


    # Enter a parse tree produced by java8Parser#blockStatement.
    def enterBlockStatement(self, ctx:java8Parser.BlockStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#blockStatement.
    def exitBlockStatement(self, ctx:java8Parser.BlockStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#localVariableDeclarationStatement.
    def enterLocalVariableDeclarationStatement(self, ctx:java8Parser.LocalVariableDeclarationStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#localVariableDeclarationStatement.
    def exitLocalVariableDeclarationStatement(self, ctx:java8Parser.LocalVariableDeclarationStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#localVariableDeclaration.
    def enterLocalVariableDeclaration(self, ctx:java8Parser.LocalVariableDeclarationContext):
        pass

    # Exit a parse tree produced by java8Parser#localVariableDeclaration.
    def exitLocalVariableDeclaration(self, ctx:java8Parser.LocalVariableDeclarationContext):
        pass


    # Enter a parse tree produced by java8Parser#statement.
    def enterStatement(self, ctx:java8Parser.StatementContext):
        pass

    # Exit a parse tree produced by java8Parser#statement.
    def exitStatement(self, ctx:java8Parser.StatementContext):
        pass


    # Enter a parse tree produced by java8Parser#statementNoShortIf.
    def enterStatementNoShortIf(self, ctx:java8Parser.StatementNoShortIfContext):
        pass

    # Exit a parse tree produced by java8Parser#statementNoShortIf.
    def exitStatementNoShortIf(self, ctx:java8Parser.StatementNoShortIfContext):
        pass


    # Enter a parse tree produced by java8Parser#statementWithoutTrailingSubstatement.
    def enterStatementWithoutTrailingSubstatement(self, ctx:java8Parser.StatementWithoutTrailingSubstatementContext):
        pass

    # Exit a parse tree produced by java8Parser#statementWithoutTrailingSubstatement.
    def exitStatementWithoutTrailingSubstatement(self, ctx:java8Parser.StatementWithoutTrailingSubstatementContext):
        pass


    # Enter a parse tree produced by java8Parser#emptyStatement.
    def enterEmptyStatement(self, ctx:java8Parser.EmptyStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#emptyStatement.
    def exitEmptyStatement(self, ctx:java8Parser.EmptyStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#labeledStatement.
    def enterLabeledStatement(self, ctx:java8Parser.LabeledStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#labeledStatement.
    def exitLabeledStatement(self, ctx:java8Parser.LabeledStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#labeledStatementNoShortIf.
    def enterLabeledStatementNoShortIf(self, ctx:java8Parser.LabeledStatementNoShortIfContext):
        pass

    # Exit a parse tree produced by java8Parser#labeledStatementNoShortIf.
    def exitLabeledStatementNoShortIf(self, ctx:java8Parser.LabeledStatementNoShortIfContext):
        pass


    # Enter a parse tree produced by java8Parser#expressionStatement.
    def enterExpressionStatement(self, ctx:java8Parser.ExpressionStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#expressionStatement.
    def exitExpressionStatement(self, ctx:java8Parser.ExpressionStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#statementExpression.
    def enterStatementExpression(self, ctx:java8Parser.StatementExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#statementExpression.
    def exitStatementExpression(self, ctx:java8Parser.StatementExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#ifThenStatement.
    def enterIfThenStatement(self, ctx:java8Parser.IfThenStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#ifThenStatement.
    def exitIfThenStatement(self, ctx:java8Parser.IfThenStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#ifThenElseStatement.
    def enterIfThenElseStatement(self, ctx:java8Parser.IfThenElseStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#ifThenElseStatement.
    def exitIfThenElseStatement(self, ctx:java8Parser.IfThenElseStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#ifThenElseStatementNoShortIf.
    def enterIfThenElseStatementNoShortIf(self, ctx:java8Parser.IfThenElseStatementNoShortIfContext):
        pass

    # Exit a parse tree produced by java8Parser#ifThenElseStatementNoShortIf.
    def exitIfThenElseStatementNoShortIf(self, ctx:java8Parser.IfThenElseStatementNoShortIfContext):
        pass


    # Enter a parse tree produced by java8Parser#assertStatement.
    def enterAssertStatement(self, ctx:java8Parser.AssertStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#assertStatement.
    def exitAssertStatement(self, ctx:java8Parser.AssertStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#switchStatement.
    def enterSwitchStatement(self, ctx:java8Parser.SwitchStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#switchStatement.
    def exitSwitchStatement(self, ctx:java8Parser.SwitchStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#switchBlock.
    def enterSwitchBlock(self, ctx:java8Parser.SwitchBlockContext):
        pass

    # Exit a parse tree produced by java8Parser#switchBlock.
    def exitSwitchBlock(self, ctx:java8Parser.SwitchBlockContext):
        pass


    # Enter a parse tree produced by java8Parser#switchBlockStatementGroup.
    def enterSwitchBlockStatementGroup(self, ctx:java8Parser.SwitchBlockStatementGroupContext):
        pass

    # Exit a parse tree produced by java8Parser#switchBlockStatementGroup.
    def exitSwitchBlockStatementGroup(self, ctx:java8Parser.SwitchBlockStatementGroupContext):
        pass


    # Enter a parse tree produced by java8Parser#switchLabels.
    def enterSwitchLabels(self, ctx:java8Parser.SwitchLabelsContext):
        pass

    # Exit a parse tree produced by java8Parser#switchLabels.
    def exitSwitchLabels(self, ctx:java8Parser.SwitchLabelsContext):
        pass


    # Enter a parse tree produced by java8Parser#switchLabel.
    def enterSwitchLabel(self, ctx:java8Parser.SwitchLabelContext):
        pass

    # Exit a parse tree produced by java8Parser#switchLabel.
    def exitSwitchLabel(self, ctx:java8Parser.SwitchLabelContext):
        pass


    # Enter a parse tree produced by java8Parser#enumConstantName.
    def enterEnumConstantName(self, ctx:java8Parser.EnumConstantNameContext):
        pass

    # Exit a parse tree produced by java8Parser#enumConstantName.
    def exitEnumConstantName(self, ctx:java8Parser.EnumConstantNameContext):
        pass


    # Enter a parse tree produced by java8Parser#whileStatement.
    def enterWhileStatement(self, ctx:java8Parser.WhileStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#whileStatement.
    def exitWhileStatement(self, ctx:java8Parser.WhileStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#whileStatementNoShortIf.
    def enterWhileStatementNoShortIf(self, ctx:java8Parser.WhileStatementNoShortIfContext):
        pass

    # Exit a parse tree produced by java8Parser#whileStatementNoShortIf.
    def exitWhileStatementNoShortIf(self, ctx:java8Parser.WhileStatementNoShortIfContext):
        pass


    # Enter a parse tree produced by java8Parser#doStatement.
    def enterDoStatement(self, ctx:java8Parser.DoStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#doStatement.
    def exitDoStatement(self, ctx:java8Parser.DoStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#forStatement.
    def enterForStatement(self, ctx:java8Parser.ForStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#forStatement.
    def exitForStatement(self, ctx:java8Parser.ForStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#forStatementNoShortIf.
    def enterForStatementNoShortIf(self, ctx:java8Parser.ForStatementNoShortIfContext):
        pass

    # Exit a parse tree produced by java8Parser#forStatementNoShortIf.
    def exitForStatementNoShortIf(self, ctx:java8Parser.ForStatementNoShortIfContext):
        pass


    # Enter a parse tree produced by java8Parser#basicForStatement.
    def enterBasicForStatement(self, ctx:java8Parser.BasicForStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#basicForStatement.
    def exitBasicForStatement(self, ctx:java8Parser.BasicForStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#basicForStatementNoShortIf.
    def enterBasicForStatementNoShortIf(self, ctx:java8Parser.BasicForStatementNoShortIfContext):
        pass

    # Exit a parse tree produced by java8Parser#basicForStatementNoShortIf.
    def exitBasicForStatementNoShortIf(self, ctx:java8Parser.BasicForStatementNoShortIfContext):
        pass


    # Enter a parse tree produced by java8Parser#forInit.
    def enterForInit(self, ctx:java8Parser.ForInitContext):
        pass

    # Exit a parse tree produced by java8Parser#forInit.
    def exitForInit(self, ctx:java8Parser.ForInitContext):
        pass


    # Enter a parse tree produced by java8Parser#forUpdate.
    def enterForUpdate(self, ctx:java8Parser.ForUpdateContext):
        pass

    # Exit a parse tree produced by java8Parser#forUpdate.
    def exitForUpdate(self, ctx:java8Parser.ForUpdateContext):
        pass


    # Enter a parse tree produced by java8Parser#statementExpressionList.
    def enterStatementExpressionList(self, ctx:java8Parser.StatementExpressionListContext):
        pass

    # Exit a parse tree produced by java8Parser#statementExpressionList.
    def exitStatementExpressionList(self, ctx:java8Parser.StatementExpressionListContext):
        pass


    # Enter a parse tree produced by java8Parser#enhancedForStatement.
    def enterEnhancedForStatement(self, ctx:java8Parser.EnhancedForStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#enhancedForStatement.
    def exitEnhancedForStatement(self, ctx:java8Parser.EnhancedForStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#enhancedForStatementNoShortIf.
    def enterEnhancedForStatementNoShortIf(self, ctx:java8Parser.EnhancedForStatementNoShortIfContext):
        pass

    # Exit a parse tree produced by java8Parser#enhancedForStatementNoShortIf.
    def exitEnhancedForStatementNoShortIf(self, ctx:java8Parser.EnhancedForStatementNoShortIfContext):
        pass


    # Enter a parse tree produced by java8Parser#breakStatement.
    def enterBreakStatement(self, ctx:java8Parser.BreakStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#breakStatement.
    def exitBreakStatement(self, ctx:java8Parser.BreakStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#continueStatement.
    def enterContinueStatement(self, ctx:java8Parser.ContinueStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#continueStatement.
    def exitContinueStatement(self, ctx:java8Parser.ContinueStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#returnStatement.
    def enterReturnStatement(self, ctx:java8Parser.ReturnStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#returnStatement.
    def exitReturnStatement(self, ctx:java8Parser.ReturnStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#throwStatement.
    def enterThrowStatement(self, ctx:java8Parser.ThrowStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#throwStatement.
    def exitThrowStatement(self, ctx:java8Parser.ThrowStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#synchronizedStatement.
    def enterSynchronizedStatement(self, ctx:java8Parser.SynchronizedStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#synchronizedStatement.
    def exitSynchronizedStatement(self, ctx:java8Parser.SynchronizedStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#tryStatement.
    def enterTryStatement(self, ctx:java8Parser.TryStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#tryStatement.
    def exitTryStatement(self, ctx:java8Parser.TryStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#catches.
    def enterCatches(self, ctx:java8Parser.CatchesContext):
        pass

    # Exit a parse tree produced by java8Parser#catches.
    def exitCatches(self, ctx:java8Parser.CatchesContext):
        pass


    # Enter a parse tree produced by java8Parser#catchClause.
    def enterCatchClause(self, ctx:java8Parser.CatchClauseContext):
        pass

    # Exit a parse tree produced by java8Parser#catchClause.
    def exitCatchClause(self, ctx:java8Parser.CatchClauseContext):
        pass


    # Enter a parse tree produced by java8Parser#catchFormalParameter.
    def enterCatchFormalParameter(self, ctx:java8Parser.CatchFormalParameterContext):
        pass

    # Exit a parse tree produced by java8Parser#catchFormalParameter.
    def exitCatchFormalParameter(self, ctx:java8Parser.CatchFormalParameterContext):
        pass


    # Enter a parse tree produced by java8Parser#catchType.
    def enterCatchType(self, ctx:java8Parser.CatchTypeContext):
        pass

    # Exit a parse tree produced by java8Parser#catchType.
    def exitCatchType(self, ctx:java8Parser.CatchTypeContext):
        pass


    # Enter a parse tree produced by java8Parser#finally_.
    def enterFinally_(self, ctx:java8Parser.Finally_Context):
        pass

    # Exit a parse tree produced by java8Parser#finally_.
    def exitFinally_(self, ctx:java8Parser.Finally_Context):
        pass


    # Enter a parse tree produced by java8Parser#tryWithResourcesStatement.
    def enterTryWithResourcesStatement(self, ctx:java8Parser.TryWithResourcesStatementContext):
        pass

    # Exit a parse tree produced by java8Parser#tryWithResourcesStatement.
    def exitTryWithResourcesStatement(self, ctx:java8Parser.TryWithResourcesStatementContext):
        pass


    # Enter a parse tree produced by java8Parser#resourceSpecification.
    def enterResourceSpecification(self, ctx:java8Parser.ResourceSpecificationContext):
        pass

    # Exit a parse tree produced by java8Parser#resourceSpecification.
    def exitResourceSpecification(self, ctx:java8Parser.ResourceSpecificationContext):
        pass


    # Enter a parse tree produced by java8Parser#resourceList.
    def enterResourceList(self, ctx:java8Parser.ResourceListContext):
        pass

    # Exit a parse tree produced by java8Parser#resourceList.
    def exitResourceList(self, ctx:java8Parser.ResourceListContext):
        pass


    # Enter a parse tree produced by java8Parser#resource.
    def enterResource(self, ctx:java8Parser.ResourceContext):
        pass

    # Exit a parse tree produced by java8Parser#resource.
    def exitResource(self, ctx:java8Parser.ResourceContext):
        pass


    # Enter a parse tree produced by java8Parser#primary.
    def enterPrimary(self, ctx:java8Parser.PrimaryContext):
        pass

    # Exit a parse tree produced by java8Parser#primary.
    def exitPrimary(self, ctx:java8Parser.PrimaryContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray.
    def enterPrimaryNoNewArray(self, ctx:java8Parser.PrimaryNoNewArrayContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray.
    def exitPrimaryNoNewArray(self, ctx:java8Parser.PrimaryNoNewArrayContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray_lf_arrayAccess.
    def enterPrimaryNoNewArray_lf_arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray_lf_arrayAccessContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray_lf_arrayAccess.
    def exitPrimaryNoNewArray_lf_arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray_lf_arrayAccessContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray_lfno_arrayAccess.
    def enterPrimaryNoNewArray_lfno_arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray_lfno_arrayAccessContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray_lfno_arrayAccess.
    def exitPrimaryNoNewArray_lfno_arrayAccess(self, ctx:java8Parser.PrimaryNoNewArray_lfno_arrayAccessContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray_lf_primary.
    def enterPrimaryNoNewArray_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray_lf_primary.
    def exitPrimaryNoNewArray_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary.
    def enterPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary.
    def exitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary.
    def enterPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary.
    def exitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(self, ctx:java8Parser.PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary.
    def enterPrimaryNoNewArray_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary.
    def exitPrimaryNoNewArray_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary.
    def enterPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary.
    def exitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary.
    def enterPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary.
    def exitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(self, ctx:java8Parser.PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#classInstanceCreationExpression.
    def enterClassInstanceCreationExpression(self, ctx:java8Parser.ClassInstanceCreationExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#classInstanceCreationExpression.
    def exitClassInstanceCreationExpression(self, ctx:java8Parser.ClassInstanceCreationExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#classInstanceCreationExpression_lf_primary.
    def enterClassInstanceCreationExpression_lf_primary(self, ctx:java8Parser.ClassInstanceCreationExpression_lf_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#classInstanceCreationExpression_lf_primary.
    def exitClassInstanceCreationExpression_lf_primary(self, ctx:java8Parser.ClassInstanceCreationExpression_lf_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#classInstanceCreationExpression_lfno_primary.
    def enterClassInstanceCreationExpression_lfno_primary(self, ctx:java8Parser.ClassInstanceCreationExpression_lfno_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#classInstanceCreationExpression_lfno_primary.
    def exitClassInstanceCreationExpression_lfno_primary(self, ctx:java8Parser.ClassInstanceCreationExpression_lfno_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#typeArgumentsOrDiamond.
    def enterTypeArgumentsOrDiamond(self, ctx:java8Parser.TypeArgumentsOrDiamondContext):
        pass

    # Exit a parse tree produced by java8Parser#typeArgumentsOrDiamond.
    def exitTypeArgumentsOrDiamond(self, ctx:java8Parser.TypeArgumentsOrDiamondContext):
        pass


    # Enter a parse tree produced by java8Parser#fieldAccess.
    def enterFieldAccess(self, ctx:java8Parser.FieldAccessContext):
        pass

    # Exit a parse tree produced by java8Parser#fieldAccess.
    def exitFieldAccess(self, ctx:java8Parser.FieldAccessContext):
        pass


    # Enter a parse tree produced by java8Parser#fieldAccess_lf_primary.
    def enterFieldAccess_lf_primary(self, ctx:java8Parser.FieldAccess_lf_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#fieldAccess_lf_primary.
    def exitFieldAccess_lf_primary(self, ctx:java8Parser.FieldAccess_lf_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#fieldAccess_lfno_primary.
    def enterFieldAccess_lfno_primary(self, ctx:java8Parser.FieldAccess_lfno_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#fieldAccess_lfno_primary.
    def exitFieldAccess_lfno_primary(self, ctx:java8Parser.FieldAccess_lfno_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#arrayAccess.
    def enterArrayAccess(self, ctx:java8Parser.ArrayAccessContext):
        pass

    # Exit a parse tree produced by java8Parser#arrayAccess.
    def exitArrayAccess(self, ctx:java8Parser.ArrayAccessContext):
        pass


    # Enter a parse tree produced by java8Parser#arrayAccess_lf_primary.
    def enterArrayAccess_lf_primary(self, ctx:java8Parser.ArrayAccess_lf_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#arrayAccess_lf_primary.
    def exitArrayAccess_lf_primary(self, ctx:java8Parser.ArrayAccess_lf_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#arrayAccess_lfno_primary.
    def enterArrayAccess_lfno_primary(self, ctx:java8Parser.ArrayAccess_lfno_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#arrayAccess_lfno_primary.
    def exitArrayAccess_lfno_primary(self, ctx:java8Parser.ArrayAccess_lfno_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#methodInvocation.
    def enterMethodInvocation(self, ctx:java8Parser.MethodInvocationContext):
        pass

    # Exit a parse tree produced by java8Parser#methodInvocation.
    def exitMethodInvocation(self, ctx:java8Parser.MethodInvocationContext):
        pass


    # Enter a parse tree produced by java8Parser#methodInvocation_lf_primary.
    def enterMethodInvocation_lf_primary(self, ctx:java8Parser.MethodInvocation_lf_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#methodInvocation_lf_primary.
    def exitMethodInvocation_lf_primary(self, ctx:java8Parser.MethodInvocation_lf_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#methodInvocation_lfno_primary.
    def enterMethodInvocation_lfno_primary(self, ctx:java8Parser.MethodInvocation_lfno_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#methodInvocation_lfno_primary.
    def exitMethodInvocation_lfno_primary(self, ctx:java8Parser.MethodInvocation_lfno_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#argumentList.
    def enterArgumentList(self, ctx:java8Parser.ArgumentListContext):
        pass

    # Exit a parse tree produced by java8Parser#argumentList.
    def exitArgumentList(self, ctx:java8Parser.ArgumentListContext):
        pass


    # Enter a parse tree produced by java8Parser#methodReference.
    def enterMethodReference(self, ctx:java8Parser.MethodReferenceContext):
        pass

    # Exit a parse tree produced by java8Parser#methodReference.
    def exitMethodReference(self, ctx:java8Parser.MethodReferenceContext):
        pass


    # Enter a parse tree produced by java8Parser#methodReference_lf_primary.
    def enterMethodReference_lf_primary(self, ctx:java8Parser.MethodReference_lf_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#methodReference_lf_primary.
    def exitMethodReference_lf_primary(self, ctx:java8Parser.MethodReference_lf_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#methodReference_lfno_primary.
    def enterMethodReference_lfno_primary(self, ctx:java8Parser.MethodReference_lfno_primaryContext):
        pass

    # Exit a parse tree produced by java8Parser#methodReference_lfno_primary.
    def exitMethodReference_lfno_primary(self, ctx:java8Parser.MethodReference_lfno_primaryContext):
        pass


    # Enter a parse tree produced by java8Parser#arrayCreationExpression.
    def enterArrayCreationExpression(self, ctx:java8Parser.ArrayCreationExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#arrayCreationExpression.
    def exitArrayCreationExpression(self, ctx:java8Parser.ArrayCreationExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#dimExprs.
    def enterDimExprs(self, ctx:java8Parser.DimExprsContext):
        pass

    # Exit a parse tree produced by java8Parser#dimExprs.
    def exitDimExprs(self, ctx:java8Parser.DimExprsContext):
        pass


    # Enter a parse tree produced by java8Parser#dimExpr.
    def enterDimExpr(self, ctx:java8Parser.DimExprContext):
        pass

    # Exit a parse tree produced by java8Parser#dimExpr.
    def exitDimExpr(self, ctx:java8Parser.DimExprContext):
        pass


    # Enter a parse tree produced by java8Parser#constantExpression.
    def enterConstantExpression(self, ctx:java8Parser.ConstantExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#constantExpression.
    def exitConstantExpression(self, ctx:java8Parser.ConstantExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#expression.
    def enterExpression(self, ctx:java8Parser.ExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#expression.
    def exitExpression(self, ctx:java8Parser.ExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#lambdaExpression.
    def enterLambdaExpression(self, ctx:java8Parser.LambdaExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#lambdaExpression.
    def exitLambdaExpression(self, ctx:java8Parser.LambdaExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#lambdaParameters.
    def enterLambdaParameters(self, ctx:java8Parser.LambdaParametersContext):
        pass

    # Exit a parse tree produced by java8Parser#lambdaParameters.
    def exitLambdaParameters(self, ctx:java8Parser.LambdaParametersContext):
        pass


    # Enter a parse tree produced by java8Parser#inferredFormalParameterList.
    def enterInferredFormalParameterList(self, ctx:java8Parser.InferredFormalParameterListContext):
        pass

    # Exit a parse tree produced by java8Parser#inferredFormalParameterList.
    def exitInferredFormalParameterList(self, ctx:java8Parser.InferredFormalParameterListContext):
        pass


    # Enter a parse tree produced by java8Parser#lambdaBody.
    def enterLambdaBody(self, ctx:java8Parser.LambdaBodyContext):
        pass

    # Exit a parse tree produced by java8Parser#lambdaBody.
    def exitLambdaBody(self, ctx:java8Parser.LambdaBodyContext):
        pass


    # Enter a parse tree produced by java8Parser#assignmentExpression.
    def enterAssignmentExpression(self, ctx:java8Parser.AssignmentExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#assignmentExpression.
    def exitAssignmentExpression(self, ctx:java8Parser.AssignmentExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#assignment.
    def enterAssignment(self, ctx:java8Parser.AssignmentContext):
        pass

    # Exit a parse tree produced by java8Parser#assignment.
    def exitAssignment(self, ctx:java8Parser.AssignmentContext):
        pass


    # Enter a parse tree produced by java8Parser#leftHandSide.
    def enterLeftHandSide(self, ctx:java8Parser.LeftHandSideContext):
        pass

    # Exit a parse tree produced by java8Parser#leftHandSide.
    def exitLeftHandSide(self, ctx:java8Parser.LeftHandSideContext):
        pass


    # Enter a parse tree produced by java8Parser#assignmentOperator.
    def enterAssignmentOperator(self, ctx:java8Parser.AssignmentOperatorContext):
        pass

    # Exit a parse tree produced by java8Parser#assignmentOperator.
    def exitAssignmentOperator(self, ctx:java8Parser.AssignmentOperatorContext):
        pass


    # Enter a parse tree produced by java8Parser#conditionalExpression.
    def enterConditionalExpression(self, ctx:java8Parser.ConditionalExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#conditionalExpression.
    def exitConditionalExpression(self, ctx:java8Parser.ConditionalExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#conditionalOrExpression.
    def enterConditionalOrExpression(self, ctx:java8Parser.ConditionalOrExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#conditionalOrExpression.
    def exitConditionalOrExpression(self, ctx:java8Parser.ConditionalOrExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#conditionalAndExpression.
    def enterConditionalAndExpression(self, ctx:java8Parser.ConditionalAndExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#conditionalAndExpression.
    def exitConditionalAndExpression(self, ctx:java8Parser.ConditionalAndExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#inclusiveOrExpression.
    def enterInclusiveOrExpression(self, ctx:java8Parser.InclusiveOrExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#inclusiveOrExpression.
    def exitInclusiveOrExpression(self, ctx:java8Parser.InclusiveOrExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#exclusiveOrExpression.
    def enterExclusiveOrExpression(self, ctx:java8Parser.ExclusiveOrExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#exclusiveOrExpression.
    def exitExclusiveOrExpression(self, ctx:java8Parser.ExclusiveOrExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#andExpression.
    def enterAndExpression(self, ctx:java8Parser.AndExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#andExpression.
    def exitAndExpression(self, ctx:java8Parser.AndExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#equalityExpression.
    def enterEqualityExpression(self, ctx:java8Parser.EqualityExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#equalityExpression.
    def exitEqualityExpression(self, ctx:java8Parser.EqualityExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#relationalExpression.
    def enterRelationalExpression(self, ctx:java8Parser.RelationalExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#relationalExpression.
    def exitRelationalExpression(self, ctx:java8Parser.RelationalExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#shiftExpression.
    def enterShiftExpression(self, ctx:java8Parser.ShiftExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#shiftExpression.
    def exitShiftExpression(self, ctx:java8Parser.ShiftExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#additiveExpression.
    def enterAdditiveExpression(self, ctx:java8Parser.AdditiveExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#additiveExpression.
    def exitAdditiveExpression(self, ctx:java8Parser.AdditiveExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#multiplicativeExpression.
    def enterMultiplicativeExpression(self, ctx:java8Parser.MultiplicativeExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#multiplicativeExpression.
    def exitMultiplicativeExpression(self, ctx:java8Parser.MultiplicativeExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#unaryExpression.
    def enterUnaryExpression(self, ctx:java8Parser.UnaryExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#unaryExpression.
    def exitUnaryExpression(self, ctx:java8Parser.UnaryExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#preIncrementExpression.
    def enterPreIncrementExpression(self, ctx:java8Parser.PreIncrementExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#preIncrementExpression.
    def exitPreIncrementExpression(self, ctx:java8Parser.PreIncrementExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#preDecrementExpression.
    def enterPreDecrementExpression(self, ctx:java8Parser.PreDecrementExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#preDecrementExpression.
    def exitPreDecrementExpression(self, ctx:java8Parser.PreDecrementExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#unaryExpressionNotPlusMinus.
    def enterUnaryExpressionNotPlusMinus(self, ctx:java8Parser.UnaryExpressionNotPlusMinusContext):
        pass

    # Exit a parse tree produced by java8Parser#unaryExpressionNotPlusMinus.
    def exitUnaryExpressionNotPlusMinus(self, ctx:java8Parser.UnaryExpressionNotPlusMinusContext):
        pass


    # Enter a parse tree produced by java8Parser#postfixExpression.
    def enterPostfixExpression(self, ctx:java8Parser.PostfixExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#postfixExpression.
    def exitPostfixExpression(self, ctx:java8Parser.PostfixExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#postIncrementExpression.
    def enterPostIncrementExpression(self, ctx:java8Parser.PostIncrementExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#postIncrementExpression.
    def exitPostIncrementExpression(self, ctx:java8Parser.PostIncrementExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#postIncrementExpression_lf_postfixExpression.
    def enterPostIncrementExpression_lf_postfixExpression(self, ctx:java8Parser.PostIncrementExpression_lf_postfixExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#postIncrementExpression_lf_postfixExpression.
    def exitPostIncrementExpression_lf_postfixExpression(self, ctx:java8Parser.PostIncrementExpression_lf_postfixExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#postDecrementExpression.
    def enterPostDecrementExpression(self, ctx:java8Parser.PostDecrementExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#postDecrementExpression.
    def exitPostDecrementExpression(self, ctx:java8Parser.PostDecrementExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#postDecrementExpression_lf_postfixExpression.
    def enterPostDecrementExpression_lf_postfixExpression(self, ctx:java8Parser.PostDecrementExpression_lf_postfixExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#postDecrementExpression_lf_postfixExpression.
    def exitPostDecrementExpression_lf_postfixExpression(self, ctx:java8Parser.PostDecrementExpression_lf_postfixExpressionContext):
        pass


    # Enter a parse tree produced by java8Parser#castExpression.
    def enterCastExpression(self, ctx:java8Parser.CastExpressionContext):
        pass

    # Exit a parse tree produced by java8Parser#castExpression.
    def exitCastExpression(self, ctx:java8Parser.CastExpressionContext):
        pass


