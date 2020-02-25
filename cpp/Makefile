SHELL := /bin/bash

TARGET := myASTGenerator
OBJS := main.o Java8Lexer.o Java8Parser.o
EXTRAS := Java8.interp Java8.tokens Java8BaseVisitor.cpp Java8BaseVisitor.h 
EXTRAS += Java8Lexer.interp Java8Lexer.tokens Java8Visitor.cpp Java8Visitor.h
CPPFLAGS := -std=c++11 -Wall -g
ANTLRFLAGS := -no-listener -visitor -encoding UTF-8 -Dlanguage=Cpp
INCLUDEPATH := -I/usr/local/include/antlr4-runtime -I.
CC := g++
ANTLR := antlr4
LIBS := -lantlr4-runtime -lgvc -lcdt -lcgraph

${TARGET} : ${OBJS}
	@${CC} ${CPPFLAGS} ${INCLUDEPATH} -o ${TARGET} ${OBJS} ${LIBS}

main.o : main.cpp Java8Lexer.h Java8Parser.h
	@${CC} ${CPPFLAGS} ${INCLUDEPATH} -c main.cpp

Java8Lexer.o : Java8Lexer.cpp Java8Lexer.h
	@${CC} ${CPPFLAGS} ${INCLUDEPATH} -c Java8Lexer.cpp

Java8Parser.o : Java8Parser.cpp Java8Parser.h
	@${CC} ${CPPFLAGS} ${INCLUDEPATH} -c Java8Parser.cpp

Java8Lexer.cpp Java8Parser.cpp Java8Lexer.h Java8Parser.h : Java8.g4
	# @${ANTLR} ${ANTLRFLAGS} Java8.g4
	
clean : 
	@rm -f ${OBJS} ${EXTRAS} Java8Lexer.cpp Java8Parser.cpp Java8Lexer.h Java8Parser.h ${TARGET}
