
// Generated from Java8.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Java8Visitor.h"


/**
 * This class provides an empty implementation of Java8Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Java8BaseVisitor : public Java8Visitor {
public:

  virtual antlrcpp::Any visitLiteral(Java8Parser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_(Java8Parser::Type_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitivetype(Java8Parser::PrimitivetypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumerictype(Java8Parser::NumerictypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegraltype(Java8Parser::IntegraltypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatingPointtype(Java8Parser::FloatingPointtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferencetype(Java8Parser::ReferencetypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassOrInterfaceType(Java8Parser::ClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClasstype(Java8Parser::ClasstypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassType__1__classOrInterfaceType(Java8Parser::ClassType__1__classOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassType__2__classOrInterfaceType(Java8Parser::ClassType__2__classOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfacetype(Java8Parser::InterfacetypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceType__1__classOrInterfaceType(Java8Parser::InterfaceType__1__classOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceType__2__classOrInterfaceType(Java8Parser::InterfaceType__2__classOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeVariable(Java8Parser::TypeVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArraytype(Java8Parser::ArraytypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDims(Java8Parser::DimsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameter(Java8Parser::TypeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameterModifier(Java8Parser::TypeParameterModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeBound(Java8Parser::TypeBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditionalBound(Java8Parser::AdditionalBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeArguments(Java8Parser::TypeArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeArgumentList(Java8Parser::TypeArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeArgument(Java8Parser::TypeArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWildcard(Java8Parser::WildcardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWildcardBounds(Java8Parser::WildcardBoundsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(Java8Parser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageOrtypeName(Java8Parser::PackageOrtypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionName(Java8Parser::ExpressionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodName(Java8Parser::MethodNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageName(Java8Parser::PackageNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAmbiguousName(Java8Parser::AmbiguousNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompilationUnit(Java8Parser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageDeclaration(Java8Parser::PackageDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageModifier(Java8Parser::PackageModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportDeclaration(Java8Parser::ImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingletypeImportDeclaration(Java8Parser::SingletypeImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeImportOnDemandDeclaration(Java8Parser::TypeImportOnDemandDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleStaticImportDeclaration(Java8Parser::SingleStaticImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStaticImportOnDemandDeclaration(Java8Parser::StaticImportOnDemandDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDeclaration(Java8Parser::TypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassDeclaration(Java8Parser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNormalclassDeclaration(Java8Parser::NormalclassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassModifier(Java8Parser::ClassModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameters(Java8Parser::TypeParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameterList(Java8Parser::TypeParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuperclass(Java8Parser::SuperclassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuperinterfaces(Java8Parser::SuperinterfacesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfacetypeList(Java8Parser::InterfacetypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassBody(Java8Parser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassBodyDeclaration(Java8Parser::ClassBodyDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassMemberDeclaration(Java8Parser::ClassMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldDeclaration(Java8Parser::FieldDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldModifier(Java8Parser::FieldModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaratorList(Java8Parser::VariableDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarator(Java8Parser::VariableDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaratorId(Java8Parser::VariableDeclaratorIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableInitializer(Java8Parser::VariableInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnanntype(Java8Parser::UnanntypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannPrimitiveType(Java8Parser::UnannPrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannReferencetype(Java8Parser::UnannReferencetypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannClassOrInterfaceType(Java8Parser::UnannClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannClassType(Java8Parser::UnannClassTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannClassType__1__unannClassOrInterfaceType(Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannClassType__2__unannClassOrInterfaceType(Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannInterfaceType(Java8Parser::UnannInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannInterfaceType__1__unannClassOrInterfaceType(Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannInterfaceType__2__unannClassOrInterfaceType(Java8Parser::UnannInterfaceType__2__unannClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnanntypeVariable(Java8Parser::UnanntypeVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnannArraytype(Java8Parser::UnannArraytypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodDeclaration(Java8Parser::MethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodModifier(Java8Parser::MethodModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodHeader(Java8Parser::MethodHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResult(Java8Parser::ResultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodDeclarator(Java8Parser::MethodDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameterList(Java8Parser::FormalParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameters(Java8Parser::FormalParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameter(Java8Parser::FormalParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableModifier(Java8Parser::VariableModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLastFormalParameter(Java8Parser::LastFormalParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReceiverParameter(Java8Parser::ReceiverParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThrows_(Java8Parser::Throws_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExceptiontypeList(Java8Parser::ExceptiontypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExceptiontype(Java8Parser::ExceptiontypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodBody(Java8Parser::MethodBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstanceInitializer(Java8Parser::InstanceInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStaticInitializer(Java8Parser::StaticInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructorDeclaration(Java8Parser::ConstructorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructionModifier(Java8Parser::ConstructionModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructorDeclarator(Java8Parser::ConstructorDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpletypeName(Java8Parser::SimpletypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructorBody(Java8Parser::ConstructorBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitconstructorInvocation(Java8Parser::ExplicitconstructorInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDeclaration(Java8Parser::EnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumBody(Java8Parser::EnumBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumconstantList(Java8Parser::EnumconstantListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumconstant(Java8Parser::EnumconstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumconstantModifier(Java8Parser::EnumconstantModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumBodyDeclarations(Java8Parser::EnumBodyDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceDeclaration(Java8Parser::InterfaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceModifier(Java8Parser::InterfaceModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtendsInterfaces(Java8Parser::ExtendsInterfacesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceBody(Java8Parser::InterfaceBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceMemberDeclaration(Java8Parser::InterfaceMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDeclaration(Java8Parser::ConstantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantModifier(Java8Parser::ConstantModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceMethodDeclaration(Java8Parser::InterfaceMethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceMethodModifier(Java8Parser::InterfaceMethodModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotationtypeDeclaration(Java8Parser::AnnotationtypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotationtypeBody(Java8Parser::AnnotationtypeBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotationtypeMemberDeclaration(Java8Parser::AnnotationtypeMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotationtypeElementDeclaration(Java8Parser::AnnotationtypeElementDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotationtypeElementModifier(Java8Parser::AnnotationtypeElementModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultValue(Java8Parser::DefaultValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnnotation(Java8Parser::AnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNormalAnnotation(Java8Parser::NormalAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElementValuePairList(Java8Parser::ElementValuePairListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElementValuePair(Java8Parser::ElementValuePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElementValue(Java8Parser::ElementValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElementValueArrayInitializer(Java8Parser::ElementValueArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElementValueList(Java8Parser::ElementValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMarkerAnnotation(Java8Parser::MarkerAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleElementAnnotation(Java8Parser::SingleElementAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayInitializer(Java8Parser::ArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableInitializerList(Java8Parser::VariableInitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(Java8Parser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStatements(Java8Parser::BlockStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStatement(Java8Parser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalVariableDeclarationStatement(Java8Parser::LocalVariableDeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalVariableDeclaration(Java8Parser::LocalVariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(Java8Parser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementNoShortIf(Java8Parser::StatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementWithoutTrailingSubstatement(Java8Parser::StatementWithoutTrailingSubstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(Java8Parser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledStatement(Java8Parser::LabeledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledStatementNoShortIf(Java8Parser::LabeledStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStatement(Java8Parser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementExpression(Java8Parser::StatementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfThenStatement(Java8Parser::IfThenStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfThenElseStatement(Java8Parser::IfThenElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfThenElseStatementNoShortIf(Java8Parser::IfThenElseStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssertStatement(Java8Parser::AssertStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStatement(Java8Parser::SwitchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchBlock(Java8Parser::SwitchBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchBlockStatementGroup(Java8Parser::SwitchBlockStatementGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchLabels(Java8Parser::SwitchLabelsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchLabel(Java8Parser::SwitchLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumconstantName(Java8Parser::EnumconstantNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(Java8Parser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatementNoShortIf(Java8Parser::WhileStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoStatement(Java8Parser::DoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(Java8Parser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatementNoShortIf(Java8Parser::ForStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasicForStatement(Java8Parser::BasicForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasicForStatementNoShortIf(Java8Parser::BasicForStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForInit(Java8Parser::ForInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForUpdate(Java8Parser::ForUpdateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementExpressionList(Java8Parser::StatementExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnhancedForStatement(Java8Parser::EnhancedForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnhancedForStatementNoShortIf(Java8Parser::EnhancedForStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStatement(Java8Parser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStatement(Java8Parser::ContinueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(Java8Parser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThrowStatement(Java8Parser::ThrowStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSynchronizedStatement(Java8Parser::SynchronizedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTryStatement(Java8Parser::TryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatches(Java8Parser::CatchesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatchclause(Java8Parser::CatchclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatchFormalParameter(Java8Parser::CatchFormalParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatchtype(Java8Parser::CatchtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFinally_(Java8Parser::Finally_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTryWithResourcesStatement(Java8Parser::TryWithResourcesStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResourceSpecification(Java8Parser::ResourceSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResourceList(Java8Parser::ResourceListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResource(Java8Parser::ResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary(Java8Parser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray(Java8Parser::PrimaryNoNewArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray__1__arrayAccess(Java8Parser::PrimaryNoNewArray__1__arrayAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray__2__arrayAccess(Java8Parser::PrimaryNoNewArray__2__arrayAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray__1__primary(Java8Parser::PrimaryNoNewArray__1__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray__1__primary__1__arrayAccess__1__primary(Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray__1__primary__2__arrayAccess__1__primary(Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray__2__primary(Java8Parser::PrimaryNoNewArray__2__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray__2__primary__1__arrayAccess__2__primary(Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryNoNewArray__2__primary__2__arrayAccess__2__primary(Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstanceCreationExpression(Java8Parser::ClassInstanceCreationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstanceCreationExpression__1__primary(Java8Parser::ClassInstanceCreationExpression__1__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstanceCreationExpression__2__primary(Java8Parser::ClassInstanceCreationExpression__2__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeArgumentsOrDiamond(Java8Parser::TypeArgumentsOrDiamondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldAccess(Java8Parser::FieldAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldAccess__1__primary(Java8Parser::FieldAccess__1__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldAccess__2__primary(Java8Parser::FieldAccess__2__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayAccess(Java8Parser::ArrayAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayAccess__1__primary(Java8Parser::ArrayAccess__1__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayAccess__2__primary(Java8Parser::ArrayAccess__2__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodInvocation(Java8Parser::MethodInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodInvocation__1__primary(Java8Parser::MethodInvocation__1__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodInvocation__2__primary(Java8Parser::MethodInvocation__2__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentList(Java8Parser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodReference(Java8Parser::MethodReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodReference__1__primary(Java8Parser::MethodReference__1__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodReference__2__primary(Java8Parser::MethodReference__2__primaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayCreationExpression(Java8Parser::ArrayCreationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDimExprs(Java8Parser::DimExprsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDimExpr(Java8Parser::DimExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(Java8Parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaExpression(Java8Parser::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaParameters(Java8Parser::LambdaParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInferredFormalParameterList(Java8Parser::InferredFormalParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaBody(Java8Parser::LambdaBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentExpression(Java8Parser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(Java8Parser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeftHandSide(Java8Parser::LeftHandSideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalExpression(Java8Parser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalOrExpression(Java8Parser::ConditionalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalAndExpression(Java8Parser::ConditionalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclusiveOrExpression(Java8Parser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExclusiveOrExpression(Java8Parser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndExpression(Java8Parser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityExpression(Java8Parser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelationalExpression(Java8Parser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftExpression(Java8Parser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveExpression(Java8Parser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeExpression(Java8Parser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression(Java8Parser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreIncrementExpression(Java8Parser::PreIncrementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreDecrementExpression(Java8Parser::PreDecrementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpressionNotPlusMinus(Java8Parser::UnaryExpressionNotPlusMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixExpression(Java8Parser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostIncrementExpression(Java8Parser::PostIncrementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostIncrementExpression__1__postfixExpression(Java8Parser::PostIncrementExpression__1__postfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostDecrementExpression(Java8Parser::PostDecrementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostDecrementExpression__1__postfixExpression(Java8Parser::PostDecrementExpression__1__postfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastExpression(Java8Parser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExpression(Java8Parser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

