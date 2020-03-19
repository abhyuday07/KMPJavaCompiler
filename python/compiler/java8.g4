// Source: https://docs.oracle.com/javase/specs/jls/se8/html/jls-19.html

/* ==========================================================================================================================================
PRODUCTION RULES FROM SPECIFICATION
 ==========================================================================================================================================
 */

grammar java8;

/* Productions from §3 (Lexical Structure)*/ 
literal : IntegerLiteral
        | FloatingPointLiteral
        | BooleanLiteral
        | CharacterLiteral
        | StringLiteral
        | NullLiteral
        ;

// Productions from §4 (Types, Values, and Variables)


type_   : primitivetype
        | referencetype
        ;

primitivetype: annotation* numerictype
        | annotation* BOOLEAN
        ;

numerictype: integraltype
        | floatingPointtype
        ;

integraltype: BYTE
        | SHORT
        | INT
        | LONG
        | CHAR
        ;

floatingPointtype: FLOAT
        | DOUBLE
        ;
referencetype: classOrInterfaceType
        | typeVariable
        | arraytype
        ;

// [classOrInterfaceType, classtype, interfacetype] are mutually Left recursive as per Java8 grammar.
// __1__ = left factor
classOrInterfaceType: (classType__2__classOrInterfaceType
		|	interfaceType__2__classOrInterfaceType
		)
		(	classType__1__classOrInterfaceType
		|	interfaceType__1__classOrInterfaceType
		)*
	    ;

classtype: annotation* Identifier typeArguments?
        | classOrInterfaceType '.' annotation* Identifier typeArguments?
        ;

classType__1__classOrInterfaceType:	'.' annotation* Identifier typeArguments?
    	;

classType__2__classOrInterfaceType: annotation* Identifier typeArguments?
	;

interfacetype: classtype
	;

interfaceType__1__classOrInterfaceType
	:	classType__1__classOrInterfaceType
	;

interfaceType__2__classOrInterfaceType
	:	classType__2__classOrInterfaceType
	;

typeVariable: annotation* Identifier
        ;

arraytype: primitivetype dims
        | classOrInterfaceType dims
        | typeVariable dims
        ;

dims: annotation* '[' ']' (annotation* '[' ']')*
        ;

typeParameter: typeParameterModifier* Identifier typeBound?
        ;

typeParameterModifier: annotation
        ;

typeBound: EXTENDS typeVariable
        | EXTENDS classOrInterfaceType additionalBound*
        ;

additionalBound: '&' interfacetype
        ;

typeArguments: '<' typeArgumentList '>'
        ;

typeArgumentList: typeArgument (',' typeArgument)*
        ;

typeArgument: referencetype
        | wildcard
        ;

wildcard: annotation* '?' wildcardBounds?
        ;

wildcardBounds: EXTENDS referencetype
        | SUPER referencetype
        ;


// ==================================================================

// productions from §6 (names)

name : Identifier
		|	name '.' Identifier
		;
methodName : Identifier
		;


// ====================================================================
// productions from §7 (packages)

compilationUnit: packageDeclaration? importDeclaration* typeDeclaration*  EOF
        ;

packageDeclaration: packageModifier* PACKAGE Identifier ('.' Identifier)* ';'
        ;

packageModifier: annotation
        ;

importDeclaration: singletypeImportDeclaration
        | typeImportOnDemandDeclaration
        | singleStaticImportDeclaration
        | staticImportOnDemandDeclaration
        ;

singletypeImportDeclaration: IMPORT name ';'
        ;

typeImportOnDemandDeclaration: IMPORT name '.' '*' ';'
        ;

singleStaticImportDeclaration: IMPORT STATIC name '.' Identifier ';'
        ;
    
staticImportOnDemandDeclaration: IMPORT STATIC name '.' '*' ';'
        ;

typeDeclaration: classDeclaration
        | interfaceDeclaration
        | ';'
        ;


// ====================================================================

//productions from §8 (classes)

classDeclaration : normalclassDeclaration
		;
normalclassDeclaration : modifier* CLASS Identifier typeParameters? superclass? superinterfaces? classBody
		;
modifier : annotation
		|	PUBLIC
		|	PROTECTED
		|	PRIVATE
		|	ABSTRACT
		|	STATIC
		|	FINAL
		|	STRICTFP
		;
typeParameters: '<' typeParameterList '>'
        ;
typeParameterList : typeParameter (',' typeParameter)*
		;
superclass : EXTENDS classtype
		;
superinterfaces : IMPLEMENTS interfacetypeList
		;
interfacetypeList : interfacetype (','interfacetype)*
		;
classBody : '{' classBodyDeclaration* '}'
		;
classBodyDeclaration : classMemberDeclaration
		|	instanceInitializer
		|	staticInitializer
		|	constructorDeclaration
		;
classMemberDeclaration : fieldDeclaration 
        | methodDeclaration 
        | classDeclaration
        | interfaceDeclaration
        | ';'
        ;

fieldDeclaration : modifier* unanntype variableDeclaratorList ';'
		;

variableDeclaratorList : variableDeclarator (',' variableDeclarator)*
		;
variableDeclarator : variableDeclaratorId ('=' variableInitializer)?
		;
variableDeclaratorId : Identifier dims?
		;
variableInitializer : expression
		|	arrayInitializer
		;
unanntype : unannPrimitiveType
		|	unannReferencetype
		;
unannPrimitiveType : numerictype
		|	BOOLEAN
		;
unannReferencetype : unannClassOrInterfaceType
		|	unanntypeVariable
		|	unannArraytype
		;

// [unannclassOrInterfacetype, unannclasstype, unannInterfacetype] are mutually left recursive as per java8 grammar

unannClassOrInterfaceType:	(	unannClassType__2__unannClassOrInterfaceType
		|	unannInterfaceType__2__unannClassOrInterfaceType
		)
		(	unannClassType__1__unannClassOrInterfaceType
		|	unannInterfaceType__1__unannClassOrInterfaceType
		)*
	    ;

unannClassType:	Identifier typeArguments?
        |	unannClassOrInterfaceType '.' annotation* Identifier typeArguments?
        ;

unannClassType__1__unannClassOrInterfaceType: '.' annotation* Identifier typeArguments?
	    ;

unannClassType__2__unannClassOrInterfaceType: Identifier typeArguments?
	    ;

unannInterfaceType:	unannClassType
	    ;

unannInterfaceType__1__unannClassOrInterfaceType: unannClassType__1__unannClassOrInterfaceType
	    ;

unannInterfaceType__2__unannClassOrInterfaceType: unannClassType__2__unannClassOrInterfaceType
	    ;


unanntypeVariable: Identifier
		;
unannArraytype : unannPrimitiveType dims
		|	unannClassOrInterfaceType dims
		|	unanntypeVariable dims
		;
methodDeclaration : modifier* methodHeader methodBody
		;
methodHeader : result methodDeclarator throws_?
		|	typeParameters annotation* result methodDeclarator throws_?
		;
result : unanntype
		|	VOID
		;
methodDeclarator : Identifier '(' formalParameterList? ')' dims?
		;
formalParameterList : receiverParameter
		| 	formalParameters ',' lastFormalParameter
		| 	lastFormalParameter
		;
formalParameters : formalParameter (',' formalParameter)*
		|	receiverParameter (',' formalParameter)*
		;
formalParameter : variableModifier* unanntype variableDeclaratorId
		;
variableModifier : annotation
		| FINAL
		;
lastFormalParameter : variableModifier* unanntype annotation* '...' variableDeclaratorId
		|	formalParameter
		;
receiverParameter : annotation* unanntype (Identifier '.') THIS
		;
throws_ : THROWS exceptiontypeList
		;
exceptiontypeList : exceptiontype (',' exceptiontype)*
		;
exceptiontype : classtype
		|	typeVariable
		;
methodBody : block
		| 	';'
		;
instanceInitializer : block
		;
staticInitializer : STATIC block
		;
constructorDeclaration : modifier* constructorDeclarator throws_? constructorBody
		;
constructorDeclarator : typeParameters? simpletypeName '(' formalParameterList? ')'
		;
simpletypeName : Identifier
		;
constructorBody : '{' explicitconstructorInvocation? blockStatements? '}'
		;
explicitconstructorInvocation : typeArguments? THIS '(' argumentList? ')' ';'
		|	typeArguments? SUPER '(' argumentList? ')' ';'
		|	name '.' typeArguments? SUPER '(' argumentList? ')' ';'
		|	primary '.' typeArguments? SUPER '(' argumentList? ')' ';' 
		;


// ====================================================================
//productions from §9 (interfaces)

interfaceDeclaration: normalInterfaceDeclaration
        ;

normalInterfaceDeclaration: modifier* INTERFACE Identifier typeParameters? extendsInterfaces? interfaceBody
        ;

extendsInterfaces: EXTENDS interfacetypeList
        ;

interfaceBody: '{' interfaceMemberDeclaration* '}'
        ;

interfaceMemberDeclaration: constantDeclaration
        | interfaceMethodDeclaration
        | classDeclaration
        | interfaceDeclaration
        | ';'
        ;

constantDeclaration: constantModifier* unanntype variableDeclaratorList ';'
        ;

constantModifier: annotation
        | PUBLIC
        | STATIC
        | FINAL
        ;

interfaceMethodDeclaration: modifier* methodHeader methodBody
        ;

defaultValue: DEFAULT elementValue
        ;

annotation: normalAnnotation
        | markerAnnotation
        | singleElementAnnotation
        ;

normalAnnotation: '@' name '(' elementValuePairList? ')'
        ;

elementValuePairList: elementValuePair (',' elementValuePair)*
        ;

elementValuePair: Identifier '=' elementValue
        ;

elementValue: conditionalExpression
        | elementValueArrayInitializer
        | annotation
        ;

elementValueArrayInitializer: '{' elementValueList? '.'? '}'
        ;

elementValueList: elementValue (',' elementValue)*
        ;

markerAnnotation: '@' name
        ;

singleElementAnnotation: '@' name '(' elementValue ')'
        ;



// ====================================================================
// productions from §10 (arrays)

arrayInitializer : '{' variableInitializerList? ','? '}'
		;
variableInitializerList : variableInitializer (',' variableInitializer)*
		;  


// ====================================================================
//productions from §14 (blocks and statements)


block : '{' blockStatements? '}'
		;
blockStatements : blockStatement blockStatement*
		;
blockStatement : localVariableDeclarationStatement
		|	classDeclaration
		|	statement
		;
localVariableDeclarationStatement : localVariableDeclaration ';'
		;
localVariableDeclaration : variableModifier* unanntype variableDeclaratorList
		;
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
emptyStatement : ';'
		;
labeledStatement : Identifier ':' statement
		;
labeledStatementNoShortIf : Identifier ':' statementNoShortIf
		;
expressionStatement : statementExpression ';'
		;
statementExpression : assignment
		|	preIncrementExpression
		|	preDecrementExpression
		|	postIncrementExpression
		|	postDecrementExpression
		|	methodInvocation
		|	classInstanceCreationExpression
		;
ifThenStatement : IF '(' expression ')' statement
		;
ifThenElseStatement : IF '(' expression ')' statementNoShortIf ELSE statement
		;
ifThenElseStatementNoShortIf : IF '(' expression ')' statementNoShortIf ELSE statementNoShortIf
		;
assertStatement : ASSERT expression ';'
		|	ASSERT expression ':' expression ';'
		;
switchStatement : SWITCH '(' expression ')' switchBlock
		;
switchBlock : '{' switchBlockStatementGroup* switchLabel* '}'
		;
switchBlockStatementGroup : switchLabels blockStatements
		;
switchLabels : switchLabel switchLabel*
		;
switchLabel : CASE constantExpression ':'
		|	DEFAULT ':'
		;
whileStatement : WHILE '(' expression ')' statement
		;
whileStatementNoShortIf : WHILE '(' expression ')' statementNoShortIf
		;
doStatement : DO statement WHILE '(' expression ')' ';'
		;
forStatement : basicForStatement
		|	enhancedForStatement
		;
forStatementNoShortIf : basicForStatementNoShortIf
		|	enhancedForStatementNoShortIf
		;
basicForStatement : FOR '(' forInit? ';' expression? ';' forUpdate? ')' statement
		;
basicForStatementNoShortIf : FOR '(' forInit? ';' expression? ';' forUpdate? ')' statementNoShortIf
		;
forInit : statementExpressionList
		|	localVariableDeclaration
		;
forUpdate : statementExpressionList
		;
statementExpressionList : statementExpression (',' statementExpression)*
		;
enhancedForStatement : FOR '(' variableModifier* unanntype variableDeclaratorId ':' expression ')' statement
		;
enhancedForStatementNoShortIf : FOR '(' variableModifier* unanntype variableDeclaratorId ':' expression ')' statementNoShortIf
		;
breakStatement : BREAK Identifier? ';'
		;
continueStatement : CONTINUE Identifier? ';'
		;
returnStatement : RETURN expression? ';'
		;
throwStatement : THROW expression? ';'
		;
synchronizedStatement : SYNCHRONIZED '(' expression ')' block
		;
tryStatement : TRY block catches
		|	TRY block catches? finally_
		|	tryWithResourcesStatement
		;
catches : catchclause catchclause*
		;
catchclause : CATCH '(' catchFormalParameter ')' block
		;
catchFormalParameter : variableModifier* catchtype variableDeclaratorId
		;
catchtype : unannClassType ('|' classtype)*
		;
finally_ : FINALLY block
		;
tryWithResourcesStatement : TRY resourceSpecification block catches? finally_?
		;
resourceSpecification : '(' resourceList ':'? ')'
		;
resourceList : resource (';' resource)*
		;
resource : variableModifier* unanntype variableDeclaratorId '=' expression
		;


// ====================================================================
// productions from §15 (expressions)
// [primary, classInstancecreationExpression, fieldAccess, methodInvocation, methodReference, primaryNoNewArray, arrayAccess] are mutually left recursive as per java8 grammar.

primary: (	primaryNoNewArray__2__primary
		|	arrayCreationExpression
		)
		(	primaryNoNewArray__1__primary
		)*
	    ;

// THIS NON TERMINAL DOESN'T APPEAR ANYWHERE ON RHS.
// primaryNoNewArray: literal
//         // | name ('[' ']')* '.' CLASS
//         // | VOID '.' CLASS
//         | THIS
//         // | name '.' THIS
//         | '(' expression ')'
//         | classInstanceCreationExpression
//         | fieldAccess
//         | arrayAccess
//         | methodInvocation
//         ;

primaryNoNewArray__1__arrayAccess :
	;

primaryNoNewArray__2__arrayAccess:	literal
	    // |	name ('[' ']')* '.' CLASS
	    // |	VOID '.' CLASS
	    |	THIS
	    // |	name '.' THIS
	    |	'(' expression ')'
	    |	classInstanceCreationExpression
	    |	fieldAccess
	    |	methodInvocation
	    ;

primaryNoNewArray__1__primary: classInstanceCreationExpression__1__primary
	    |	fieldAccess__1__primary
	    |	arrayAccess__1__primary
	    |	methodInvocation__1__primary
	    ;

primaryNoNewArray__1__primary__1__arrayAccess__1__primary:
	    ;

primaryNoNewArray__1__primary__2__arrayAccess__1__primary: classInstanceCreationExpression__1__primary
    	|	fieldAccess__1__primary
    	|	methodInvocation__1__primary
    	;

primaryNoNewArray__2__primary:	literal
    	// |	name ('[' ']')* '.' CLASS
    	// |	unannPrimitiveType ('[' ']')* '.' CLASS
    	// |	VOID '.' CLASS
    	|	THIS
    	// |	name '.' THIS
    	|	'(' expression ')'
    	|	classInstanceCreationExpression__2__primary
    	|	fieldAccess__2__primary
    	|	arrayAccess__2__primary
    	|	methodInvocation__2__primary
    	;

primaryNoNewArray__2__primary__1__arrayAccess__2__primary:
	    ;

primaryNoNewArray__2__primary__2__arrayAccess__2__primary:	literal
    	// |	name ('[' ']')* '.' CLASS
    	// |	unannPrimitiveType ('[' ']')* '.' CLASS
    	// |	VOID '.' CLASS
    	|	THIS
    	// |	name '.' THIS
    	|	'(' expression ')'
    	|	classInstanceCreationExpression__2__primary
    	|	fieldAccess__2__primary
    	|	methodInvocation__2__primary
    	;

classInstanceCreationExpression: NEW typeArguments? annotation* Identifier ('.' annotation* Identifier)* typeArgumentsOrDiamond? '(' argumentList? ')' classBody?
    	|	name '.' NEW typeArguments? annotation* Identifier typeArgumentsOrDiamond? '(' argumentList? ')' classBody?
    	|	primary '.' NEW typeArguments? annotation* Identifier typeArgumentsOrDiamond? '(' argumentList? ')' classBody?
    	;

classInstanceCreationExpression__1__primary:	'.' NEW typeArguments? annotation* Identifier typeArgumentsOrDiamond? '(' argumentList? ')' classBody?
    	;

classInstanceCreationExpression__2__primary:	NEW typeArguments? annotation* Identifier ('.' annotation* Identifier)* typeArgumentsOrDiamond? '(' argumentList? ')' classBody?
    	|	name '.' NEW typeArguments? annotation* Identifier typeArgumentsOrDiamond? '(' argumentList? ')' classBody?
	    ;

typeArgumentsOrDiamond:	typeArguments
    	|	'<' '>'
	    ;

fieldAccess: primary '.' Identifier
    	|	SUPER '.' Identifier
    	|	name '.' SUPER '.' Identifier
    	;

fieldAccess__1__primary:	'.' Identifier
    	;

fieldAccess__2__primary :	SUPER '.' Identifier
	    |	name '.' SUPER '.' Identifier
	    ;

arrayAccess:	(	name '[' expression ']'
		|	primaryNoNewArray__2__arrayAccess '[' expression ']'
		)
		(	primaryNoNewArray__1__arrayAccess '[' expression ']'
		)*
	    ;

arrayAccess__1__primary:	(	primaryNoNewArray__1__primary__2__arrayAccess__1__primary '[' expression ']'
		)
		(	primaryNoNewArray__1__primary__1__arrayAccess__1__primary '[' expression ']'
		)*
	    ;

arrayAccess__2__primary: (	name '[' expression ']'
		|	primaryNoNewArray__2__primary__2__arrayAccess__2__primary '[' expression ']'
		)
		(	primaryNoNewArray__2__primary__1__arrayAccess__2__primary '[' expression ']'
		)*
	    ;

methodInvocation:	methodName '(' argumentList? ')'
	    |	name '.' typeArguments? Identifier '(' argumentList? ')'
	    |	name '.' typeArguments? Identifier '(' argumentList? ')'
	    |	primary '.' typeArguments? Identifier '(' argumentList? ')'
	    |	SUPER '.' typeArguments? Identifier '(' argumentList? ')'
	    |	name '.' SUPER '.' typeArguments? Identifier '(' argumentList? ')'
	    ;

methodInvocation__1__primary: '.' typeArguments? Identifier '(' argumentList? ')'
	    ;

methodInvocation__2__primary:	methodName '(' argumentList? ')'
	    |	name '.' typeArguments? Identifier '(' argumentList? ')'
	    |	name '.' typeArguments? Identifier '(' argumentList? ')'
	    |	SUPER '.' typeArguments? Identifier '(' argumentList? ')'
	    |	name '.' SUPER '.' typeArguments? Identifier '(' argumentList? ')'
	    ;

argumentList:	expression (',' expression)*
	;

arrayCreationExpression : NEW primitivetype dimExprs dims?
                        | NEW classOrInterfaceType dimExprs dims?
                        | NEW primitivetype dims arrayInitializer
                        | NEW classOrInterfaceType dims arrayInitializer
                        ;

dimExprs : dimExpr dimExpr*
        ;

dimExpr : annotation* '[' expression ']'
        ;

expression : assignmentExpression
           ;

inferredFormalParameterList : Identifier (',' Identifier)*
        ;

assignmentExpression : conditionalExpression
                     | assignment
                     ;

assignment : leftHandSide assignmentOperator expression
	;

assignmentOperator : '='
	| '*='
	| '/='
	| '%='
	| '+='
	| '-='
	| '<<='
	| '>>='
	| '>>>='
	| '&='
	| '^='
	| '|='
	;

leftHandSide : name
        | fieldAccess
        | arrayAccess
        ;

conditionalExpression : conditionalOrExpression
                      | conditionalOrExpression '?' expression ':' conditionalExpression
                      ;

conditionalOrExpression : conditionalAndExpression
                        | conditionalOrExpression '||' conditionalAndExpression
                        ;

conditionalAndExpression : inclusiveOrExpression
                         | conditionalAndExpression '&&' inclusiveOrExpression
                         ;

inclusiveOrExpression : exclusiveOrExpression
                      | inclusiveOrExpression '|' exclusiveOrExpression
                      ;

exclusiveOrExpression : andExpression
                      | exclusiveOrExpression '^' andExpression
                      ;

andExpression : equalityExpression
              | andExpression '&' equalityExpression
              ;

equalityExpression : relationalExpression
                   | equalityExpression '==' relationalExpression
                   | equalityExpression '!=' relationalExpression
                ;
relationalExpression : shiftExpression
                     | relationalExpression '<' shiftExpression
                     | relationalExpression '>' shiftExpression
                     | relationalExpression '<=' shiftExpression
                     | relationalExpression '>=' shiftExpression
                     | relationalExpression INSTANCEOF referencetype
                     ;

shiftExpression : additiveExpression
                | shiftExpression '<<' additiveExpression
                | shiftExpression '>>' additiveExpression
                | shiftExpression '>>>' additiveExpression
                ;

additiveExpression : multiplicativeExpression
                   | additiveExpression '+' multiplicativeExpression
                   | additiveExpression '-' multiplicativeExpression
                   ;

multiplicativeExpression : unaryExpression
                         | multiplicativeExpression '*' unaryExpression
                         | multiplicativeExpression '/' unaryExpression
                         | multiplicativeExpression '%' unaryExpression
                         ;

unaryExpression : preIncrementExpression
                | preDecrementExpression
                | '+' unaryExpression
                | '-' unaryExpression
                | unaryExpressionNotPlusMinus
                ;

preIncrementExpression : '++' unaryExpression
        ;

preDecrementExpression : '--' unaryExpression
        ;

unaryExpressionNotPlusMinus : postfixExpression
                            | '~' unaryExpression
                            | '!' unaryExpression
                            | castExpression
                            ;
// [postfixExpression, postIncrementExpression, postDecrementExpression] are mutually left recursive as per java8 grammar
postfixExpression: (	primary
		|	name
		)
		(	postIncrementExpression__1__postfixExpression
		|	postDecrementExpression__1__postfixExpression
		)*
	    ;

postIncrementExpression: postfixExpression '++'
	    ;

postIncrementExpression__1__postfixExpression: '++'
	    ;

postDecrementExpression: postfixExpression '--'
	    ;

postDecrementExpression__1__postfixExpression: '--'
	    ;

castExpression : '(' primitivetype ')' unaryExpression
               | '(' referencetype additionalBound* ')' unaryExpressionNotPlusMinus
               ;

constantExpression : expression ;



//================================================================================

// LEXER
// Credits: https://github.com/antlr/codebuff/blob/master/grammars/org/antlr/codebuff/Java8.g4

// §3.9 Keywords

ABSTRACT : 'abstract';
ASSERT : 'assert';
BOOLEAN : 'boolean';
BREAK : 'break';
BYTE : 'byte';
CASE : 'case';
CATCH : 'catch';
CHAR : 'char';
CLASS : 'class';
CONST : 'const';
CONTINUE : 'continue';
DEFAULT : 'default';
DO : 'do';
DOUBLE : 'double';
ELSE : 'else';
ENUM : 'enum';
EXTENDS : 'extends';
FINAL : 'final';
FINALLY : 'finally';
FLOAT : 'float';
FOR : 'for';
IF : 'if';
GOTO : 'goto';
IMPLEMENTS : 'implements';
IMPORT : 'import';
INSTANCEOF : 'instanceof';
INT : 'int';
INTERFACE : 'interface';
LONG : 'long';
NATIVE : 'native';
NEW : 'new';
PACKAGE : 'package';
PRIVATE : 'private';
PROTECTED : 'protected';
PUBLIC : 'public';
RETURN : 'return';
SHORT : 'short';
STATIC : 'static';
STRICTFP : 'strictfp';
SUPER : 'super';
SWITCH : 'switch';
SYNCHRONIZED : 'synchronized';
THIS : 'this';
THROW : 'throw';
THROWS : 'throws';
TRANSIENT : 'transient';
TRY : 'try';
VOID : 'void';
VOLATILE : 'volatile';
WHILE : 'while';

// §3.10.1 Integer Literals

IntegerLiteral
	:	DecimalIntegerLiteral
	|	HexIntegerLiteral
	|	OctalIntegerLiteral
	|	BinaryIntegerLiteral
	;

fragment
DecimalIntegerLiteral
	:	DecimalNumeral IntegerTypeSuffix?
	;

fragment
HexIntegerLiteral
	:	HexNumeral IntegerTypeSuffix?
	;

fragment
OctalIntegerLiteral
	:	OctalNumeral IntegerTypeSuffix?
	;

fragment
BinaryIntegerLiteral
	:	BinaryNumeral IntegerTypeSuffix?
	;

fragment
IntegerTypeSuffix
	:	[lL]
	;

fragment
DecimalNumeral
	:	'0'
	|	NonZeroDigit (Digits? | Underscores Digits)
	;

fragment
Digits
	:	Digit (DigitsAndUnderscores? Digit)?
	;

fragment
Digit
	:	'0'
	|	NonZeroDigit
	;

fragment
NonZeroDigit
	:	[1-9]
	;

fragment
DigitsAndUnderscores
	:	DigitOrUnderscore+
	;

fragment
DigitOrUnderscore
	:	Digit
	|	'_'
	;

fragment
Underscores
	:	'_'+
	;

fragment
HexNumeral
	:	'0' [xX] HexDigits
	;

fragment
HexDigits
	:	HexDigit (HexDigitsAndUnderscores? HexDigit)?
	;

fragment
HexDigit
	:	[0-9a-fA-F]
	;

fragment
HexDigitsAndUnderscores
	:	HexDigitOrUnderscore+
	;

fragment
HexDigitOrUnderscore
	:	HexDigit
	|	'_'
	;

fragment
OctalNumeral
	:	'0' Underscores? OctalDigits
	;

fragment
OctalDigits
	:	OctalDigit (OctalDigitsAndUnderscores? OctalDigit)?
	;

fragment
OctalDigit
	:	[0-7]
	;

fragment
OctalDigitsAndUnderscores
	:	OctalDigitOrUnderscore+
	;

fragment
OctalDigitOrUnderscore
	:	OctalDigit
	|	'_'
	;

fragment
BinaryNumeral
	:	'0' [bB] BinaryDigits
	;

fragment
BinaryDigits
	:	BinaryDigit (BinaryDigitsAndUnderscores? BinaryDigit)?
	;

fragment
BinaryDigit
	:	[01]
	;

fragment
BinaryDigitsAndUnderscores
	:	BinaryDigitOrUnderscore+
	;

fragment
BinaryDigitOrUnderscore
	:	BinaryDigit
	|	'_'
	;

// §3.10.2 Floating-Point Literals

FloatingPointLiteral
	:	DecimalFloatingPointLiteral
	|	HexadecimalFloatingPointLiteral
	;

fragment
DecimalFloatingPointLiteral
	:	Digits '.' Digits? ExponentPart? FloatTypeSuffix?
	|	'.' Digits ExponentPart? FloatTypeSuffix?
	|	Digits ExponentPart FloatTypeSuffix?
	|	Digits FloatTypeSuffix
	;

fragment
ExponentPart
	:	ExponentIndicator SignedInteger
	;

fragment
ExponentIndicator
	:	[eE]
	;

fragment
SignedInteger
	:	Sign? Digits
	;

fragment
Sign
	:	[+-]
	;

fragment
FloatTypeSuffix
	:	[fFdD]
	;

fragment
HexadecimalFloatingPointLiteral
	:	HexSignificand BinaryExponent FloatTypeSuffix?
	;

fragment
HexSignificand
	:	HexNumeral '.'?
	|	'0' [xX] HexDigits? '.' HexDigits
	;

fragment
BinaryExponent
	:	BinaryExponentIndicator SignedInteger
	;

fragment
BinaryExponentIndicator
	:	[pP]
	;

// §3.10.3 Boolean Literals

BooleanLiteral
	:	'true'
	|	'false'
	;

// §3.10.4 Character Literals

CharacterLiteral
	:	'\'' SingleCharacter '\''
	|	'\'' EscapeSequence '\''
	;

fragment
SingleCharacter
	:	~['\\]
	;
// §3.10.5 String Literals
StringLiteral
	:	'"' StringCharacters? '"'
	;
fragment
StringCharacters
	:	StringCharacter+
	;
fragment
StringCharacter
	:	~["\\]
	|	EscapeSequence
	;
// §3.10.6 Escape Sequences for Character and String Literals
fragment
EscapeSequence
	:	'\\' [btnfr"'\\]
	|	OctalEscape
    |   UnicodeEscape // This is not in the spec but prevents having to preprocess the input
	;

fragment
OctalEscape
	:	'\\' OctalDigit
	|	'\\' OctalDigit OctalDigit
	|	'\\' ZeroToThree OctalDigit OctalDigit
	;

fragment
ZeroToThree
	:	[0-3]
	;

// This is not in the spec but prevents having to preprocess the input
fragment
UnicodeEscape
    :   '\\' 'u' HexDigit HexDigit HexDigit HexDigit
    ;

// §3.10.7 The Null Literal

NullLiteral
	:	'null'
	;

// §3.11 Separators

LPAREN : '(';
RPAREN : ')';
LBRACE : '{';
RBRACE : '}';
LBRACK : '[';
RBRACK : ']';
SEMI : ';';
COMMA : ',';
DOT : '.';

// §3.12 Operators

ASSIGN : '=';
GT : '>';
LT : '<';
BANG : '!';
TILDE : '~';
QUESTION : '?';
COLON : ':';
EQUAL : '==';
LE : '<=';
GE : '>=';
NOTEQUAL : '!=';
AND : '&&';
OR : '||';
INC : '++';
DEC : '--';
ADD : '+';
SUB : '-';
MUL : '*';
DIV : '/';
BITAND : '&';
BITOR : '|';
CARET : '^';
MOD : '%';
ARROW : '->';
COLONCOLON : '::';

ADD_ASSIGN : '+=';
SUB_ASSIGN : '-=';
MUL_ASSIGN : '*=';
DIV_ASSIGN : '/=';
AND_ASSIGN : '&=';
OR_ASSIGN : '|=';
XOR_ASSIGN : '^=';
MOD_ASSIGN : '%=';
LSHIFT_ASSIGN : '<<=';
RSHIFT_ASSIGN : '>>=';
URSHIFT_ASSIGN : '>>>=';

// §3.8 Identifiers (must appear after all keywords in the grammar)

Identifier
	:	JavaLetter JavaLetterOrDigit*
	;

fragment
JavaLetter
	:	[a-zA-Z$_]
	|	~[\u0000-\u007F\uD800-\uDBFF]
	|	[\uD800-\uDBFF] [\uDC00-\uDFFF]
	;

fragment
JavaLetterOrDigit
	:	[a-zA-Z0-9$_]
	|	~[\u0000-\u007F\uD800-\uDBFF]
	|	[\uD800-\uDBFF] [\uDC00-\uDFFF]
	;

//
// Additional symbols not defined in the lexical specification
//

AT : '@';
ELLIPSIS : '...';

//
// Whitespace and comments
//

WS  :  [ \t\r\n\u000C]+ -> channel(HIDDEN)
    ;

COMMENT
    :   '/*' .*? '*/' -> channel(HIDDEN)
    ;

LINE_COMMENT
    :   '//' ~[\r\n]* -> channel(HIDDEN)
    ;
