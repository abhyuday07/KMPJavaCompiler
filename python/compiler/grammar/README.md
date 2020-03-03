java8_original.g4 is the original grammar.

java8_v1.g4 has the following changes from java8_original.g4

The following non-Terminals are removed :

* enumconstantModifier
* enumDeclaration
* enumconstant
* enumconstantName
* enumconstantList
* enumBody
* enumBodyDeclarations
* lambdaExpression
* lambdaParameters
* lambdaBody
* methodReference
* annotationtype (everything with this prefix)

java8_v2.g4 has the following changes from java8_v1.g4

The following non-Terminals are renamed by a common non-Terminal name
* typeName
* packageOrtypeName
* expressionName
* packageName
* ambiguousName

The following non-Terminals are renamed by a common non-Terminal modifier
* classModifier
* fieldModifier
* methodModifier
* interfaceModifier

java8.g4 has the following changes from java8_v2.g4
The following non-Terminals are renamed by a common non-Terminal modifier
* constructionModifier
* interfaceMethodModifier
