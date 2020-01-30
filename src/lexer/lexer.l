%{
    extern "C" int yylex();
    #include<bits/stdc++.h>
    #include<stdio.h>
    using namespace std;
    enum Tokens {
        Keyword,
        Identifier,
        Separator,
        Operator,
        Literal,
        Comment,
        LineTerminator,
        WhiteSpace
    };
    vector<string>TokenString = {"Keyword", "Identifier", "Separator", "Operator", "Literal"};
    map<string, Tokens> Token;
    map<string, int> Count;
    int line_number=1;
    
    Tokens prevState = WhiteSpace;
    string prevText = "";


    void printErrorAndExit(string yytext, int line){
        cerr<<"Compilation Error: "<<yytext<<" in line no: "<<line<<"\n";
        exit(1);
    }

    int exhaustMultiLineComment(){
        // char cur,prev=0;
        // while((cur=input()) != 0){
        //     if(prev=='*' && cur=='/'){
        //         return 1;
        //     }
        //     if(cur=='\n') line_number++;
        //     if(cur=='\r') line_number++;
        //     if(cur=='\n' && prev=='\r') line_number--;
        //     prev=cur;
        // }
        return 0;
    }


%}


UnicodeInputCharacter ({UnicodeEscape}|{RawInputCharacter})
UnicodeEscape (\\{UnicodeMarker}{HexDigit}{HexDigit}{HexDigit}{HexDigit})
UnicodeMarker (u+)
RawInputCharacter a^


LineTerminator ([\r\n]|\r\n)
InputCharacter [^\n\r]|{UnicodeInputCharacter}
WhiteSpace ([ \t\f]|{LineTerminator})
Comment (\/\*([^*]|(\*+[^*\/]))*\*+\/)|(\/\/.*)
MultiLineCommentStart (\/\*)
SingleLineComment (\/\/.*)

Keyword (abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while)
Separator (\(|\)|\{|\}|\[|\]|;|,|\.|\.\.\.|@|::)
Operator (=|>|<|\!|~|\?|:|->|==|>=|<=|\!=|&&|\|\||\+\+|--|\+|-|\*|\/|&|\||\^|%|<<|>>|>>>|\+=|-=|\*=|\/=|&=|\|=|\^=|%=|<<=|>>=|>>>=)
Identifier [A-Za-z_\$][A-Za-z_\$0-9]*

ConstantLiterals (Float\.NaN|Double\.NaN)


Literal ({IntegerLiteral}|{FloatingPointLiteral}|{BooleanLiteral}|{CharacterLiteral}|{StringLiteral}|{NullLiteral})

IntegerLiteral ({DecimalIntegerLiteral}|{HexIntegerLiteral}|{OctalIntegerLiteral}|{BinaryIntegerLiteral})
IntegerTypeSuffix (l|L)

DecimalIntegerLiteral {DecimalNumeral}{IntegerTypeSuffix}?
HexIntegerLiteral {HexNumeral}{IntegerTypeSuffix}?
OctalIntegerLiteral {OctalNumeral}{IntegerTypeSuffix}?
BinaryIntegerLiteral {BinaryNumeral}{IntegerTypeSuffix}?



DecimalNumeral (0|{NonZeroDigit}{Digits}?|{NonZeroDigit}{Underscores}{Digits})
NonZeroDigit [1-9]
Digits ({Digit}|{Digit}{DigitsAndUnderscores}?{Digit})
Digit (0|{NonZeroDigit})
DigitsAndUnderscores {DigitOrUnderscore}+
DigitOrUnderscore ({Digit}|_)
Underscores _+

HexNumeral (0(x|X){HexDigits})
HexDigits ({HexDigit}|{HexDigit}({HexDigitsAndUnderscores}?){HexDigit})
HexDigit [0-9a-fA-F]
HexDigitsAndUnderscores {HexDigitOrUnderscore}+
HexDigitOrUnderscore ({HexDigit}|_)

OctalNumeral 0{Underscores}?{OctalDigits}
OctalDigits {OctalDigit}|{OctalDigit}{OctalDigitsAndUnderscores}?{OctalDigit}
OctalDigit [0-7]
OctalDigitsAndUnderscores {OctalDigitOrUnderscore}+
OctalDigitOrUnderscore {OctalDigit}|_

BinaryNumeral (0(b|B){BinaryDigits})
BinaryDigits ({BinaryDigit}|{BinaryDigit}{BinaryDigitsAndUnderscores}?{BinaryDigit})
BinaryDigit [0-1]
BinaryDigitsAndUnderscores ({BinaryDigitOrUnderscore}+)
BinaryDigitOrUnderscore ({BinaryDigit}|_)

FloatingPointLiteral ({DecimalFloatingPointLiteral}|{HexadecimalFloatingPointLiteral})
DecimalFloatingPointLiteral ({Digits}\.{Digits}?{ExponentPart}?{FloatTypeSuffix}?|\.{Digits}{ExponentPart}?{FloatTypeSuffix}?|{Digits}{ExponentPart}{FloatTypeSuffix}?|{Digits}{ExponentPart}?{FloatTypeSuffix})
ExponentPart ({ExponentIndicator}{SignedInteger})
ExponentIndicator (e|E)
SignedInteger ({Sign}?{Digits})
Sign (\+|[-])
FloatTypeSuffix (f|F|d|D)

HexadecimalFloatingPointLiteral ({HexSignificand}{BinaryExponent}{FloatTypeSuffix}?)
HexSignificand ({HexNumeral}(\.)?|(0(x|X){HexDigits}?\.{HexDigits}))
BinaryExponent ({BinaryExponentIndicator}{SignedInteger})
BinaryExponentIndicator (p|P)

BooleanLiteral (true|false)

CharacterLiteral (\'({SingleCharacter}|{EscapeSequence}|{UnicodeInputCharacter})\')
SingleCharacter [^\r\n\'\\]

StringLiteral (\"{StringCharacter}*\")
StringCharacter ([^\n\r\"\\]|{EscapeSequence}|{UnicodeInputCharacter})

EscapeSequence ((\\[btnfr\"\'\\])|{OctalEscape})
OctalEscape (\\({OctalDigit}|{OctalDigit}{OctalDigit}|[0-3]{OctalDigit}{OctalDigit}))

NullLiteral null



%%
{LineTerminator} {
    line_number++;
    prevState = LineTerminator;
    prevText = yytext;
}
{WhiteSpace} {
    prevState = WhiteSpace;
    prevText = yytext;
}
{Comment} {
    int increment = 0;
    for(int i=0;i<yyleng;i++){
        if(yytext[i] == '\n') increment++;
        if(yytext[i] == '\r') increment++;
        if(i<yyleng-1 && yytext[i] == '\r' && yytext[i+1]=='\n') increment--;
    }
    line_number += increment;
    prevState = Comment;
    prevText = yytext;
}

{Keyword} {
    if(prevState == Literal || prevState == Keyword || prevState == Identifier){
        printErrorAndExit(prevText + yytext, line_number);
    }
    Token[yytext] = Keyword;
    Count[yytext]++;
    prevState = Keyword;
    prevText = yytext;
}

{ConstantLiterals} {
    Token[yytext] = Literal;
    Count[yytext]++;
    prevState = Literal;
    prevText = yytext;
}

{Separator} {
    Token[yytext] = Separator;
    Count[yytext]++;
    prevState = Separator;
    prevText = yytext;
}

{Operator} {
    Token[yytext] = Operator;
    Count[yytext]++;
    prevState = Operator;
    prevText = yytext;
}

{Literal} {
    if(prevState == Literal || prevState == Keyword || prevState == Identifier){
        printErrorAndExit(prevText + yytext, line_number);
    }
    Token[yytext] = Literal;
    Count[yytext]++;
    prevState = Literal;
    prevText = yytext;
}

{Identifier} {
    //NOTE: Identifier after Literal
    if(prevState == Literal || prevState == Keyword || prevState == Identifier){
        printErrorAndExit(prevText + yytext, line_number);
    }
    Token[yytext] = Identifier;
    Count[yytext]++;
    prevState = Identifier;
    prevText = yytext;
}

. {
    printErrorAndExit(yytext, line_number);
    exit(1);
}

%%
int main()
{
    yylex();
    cout<<"Lexeme,Token,Count\n";
    for(auto x : Token){
        cout<<x.first<<","<<TokenString[x.second]<<","<<Count[x.first]<<"\n";
    }
    return 0;
}