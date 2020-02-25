
// Generated from Java8.g4 by ANTLR 4.7.2


#include "Java8Visitor.h"

#include "Java8Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Java8Parser::Java8Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Java8Parser::~Java8Parser() {
  delete _interpreter;
}

std::string Java8Parser::getGrammarFileName() const {
  return "Java8.g4";
}

const std::vector<std::string>& Java8Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Java8Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- LiteralContext ------------------------------------------------------------------

Java8Parser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LiteralContext::IntegerLiteral() {
  return getToken(Java8Parser::IntegerLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::FloatingPointLiteral() {
  return getToken(Java8Parser::FloatingPointLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::BooleanLiteral() {
  return getToken(Java8Parser::BooleanLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::CharacterLiteral() {
  return getToken(Java8Parser::CharacterLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::StringLiteral() {
  return getToken(Java8Parser::StringLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::NullLiteral() {
  return getToken(Java8Parser::NullLiteral, 0);
}


size_t Java8Parser::LiteralContext::getRuleIndex() const {
  return Java8Parser::RuleLiteral;
}


antlrcpp::Any Java8Parser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LiteralContext* Java8Parser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 0, Java8Parser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_Context ------------------------------------------------------------------

Java8Parser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimitivetypeContext* Java8Parser::Type_Context::primitivetype() {
  return getRuleContext<Java8Parser::PrimitivetypeContext>(0);
}

Java8Parser::ReferencetypeContext* Java8Parser::Type_Context::referencetype() {
  return getRuleContext<Java8Parser::ReferencetypeContext>(0);
}


size_t Java8Parser::Type_Context::getRuleIndex() const {
  return Java8Parser::RuleType_;
}


antlrcpp::Any Java8Parser::Type_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitType_(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::Type_Context* Java8Parser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 2, Java8Parser::RuleType_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(476);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(474);
      primitivetype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(475);
      referencetype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitivetypeContext ------------------------------------------------------------------

Java8Parser::PrimitivetypeContext::PrimitivetypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NumerictypeContext* Java8Parser::PrimitivetypeContext::numerictype() {
  return getRuleContext<Java8Parser::NumerictypeContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::PrimitivetypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::PrimitivetypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

tree::TerminalNode* Java8Parser::PrimitivetypeContext::BOOLEAN() {
  return getToken(Java8Parser::BOOLEAN, 0);
}


size_t Java8Parser::PrimitivetypeContext::getRuleIndex() const {
  return Java8Parser::RulePrimitivetype;
}


antlrcpp::Any Java8Parser::PrimitivetypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimitivetype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimitivetypeContext* Java8Parser::primitivetype() {
  PrimitivetypeContext *_localctx = _tracker.createInstance<PrimitivetypeContext>(_ctx, getState());
  enterRule(_localctx, 4, Java8Parser::RulePrimitivetype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(492);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(481);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(478);
        annotation();
        setState(483);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(484);
      numerictype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(488);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(485);
        annotation();
        setState(490);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(491);
      match(Java8Parser::BOOLEAN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumerictypeContext ------------------------------------------------------------------

Java8Parser::NumerictypeContext::NumerictypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::IntegraltypeContext* Java8Parser::NumerictypeContext::integraltype() {
  return getRuleContext<Java8Parser::IntegraltypeContext>(0);
}

Java8Parser::FloatingPointtypeContext* Java8Parser::NumerictypeContext::floatingPointtype() {
  return getRuleContext<Java8Parser::FloatingPointtypeContext>(0);
}


size_t Java8Parser::NumerictypeContext::getRuleIndex() const {
  return Java8Parser::RuleNumerictype;
}


antlrcpp::Any Java8Parser::NumerictypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitNumerictype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::NumerictypeContext* Java8Parser::numerictype() {
  NumerictypeContext *_localctx = _tracker.createInstance<NumerictypeContext>(_ctx, getState());
  enterRule(_localctx, 6, Java8Parser::RuleNumerictype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(496);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT: {
        enterOuterAlt(_localctx, 1);
        setState(494);
        integraltype();
        break;
      }

      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(495);
        floatingPointtype();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegraltypeContext ------------------------------------------------------------------

Java8Parser::IntegraltypeContext::IntegraltypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::IntegraltypeContext::BYTE() {
  return getToken(Java8Parser::BYTE, 0);
}

tree::TerminalNode* Java8Parser::IntegraltypeContext::SHORT() {
  return getToken(Java8Parser::SHORT, 0);
}

tree::TerminalNode* Java8Parser::IntegraltypeContext::INT() {
  return getToken(Java8Parser::INT, 0);
}

tree::TerminalNode* Java8Parser::IntegraltypeContext::LONG() {
  return getToken(Java8Parser::LONG, 0);
}

tree::TerminalNode* Java8Parser::IntegraltypeContext::CHAR() {
  return getToken(Java8Parser::CHAR, 0);
}


size_t Java8Parser::IntegraltypeContext::getRuleIndex() const {
  return Java8Parser::RuleIntegraltype;
}


antlrcpp::Any Java8Parser::IntegraltypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitIntegraltype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::IntegraltypeContext* Java8Parser::integraltype() {
  IntegraltypeContext *_localctx = _tracker.createInstance<IntegraltypeContext>(_ctx, getState());
  enterRule(_localctx, 8, Java8Parser::RuleIntegraltype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatingPointtypeContext ------------------------------------------------------------------

Java8Parser::FloatingPointtypeContext::FloatingPointtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::FloatingPointtypeContext::FLOAT() {
  return getToken(Java8Parser::FLOAT, 0);
}

tree::TerminalNode* Java8Parser::FloatingPointtypeContext::DOUBLE() {
  return getToken(Java8Parser::DOUBLE, 0);
}


size_t Java8Parser::FloatingPointtypeContext::getRuleIndex() const {
  return Java8Parser::RuleFloatingPointtype;
}


antlrcpp::Any Java8Parser::FloatingPointtypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFloatingPointtype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FloatingPointtypeContext* Java8Parser::floatingPointtype() {
  FloatingPointtypeContext *_localctx = _tracker.createInstance<FloatingPointtypeContext>(_ctx, getState());
  enterRule(_localctx, 10, Java8Parser::RuleFloatingPointtype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    _la = _input->LA(1);
    if (!(_la == Java8Parser::DOUBLE

    || _la == Java8Parser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferencetypeContext ------------------------------------------------------------------

Java8Parser::ReferencetypeContext::ReferencetypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ReferencetypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ReferencetypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}

Java8Parser::ArraytypeContext* Java8Parser::ReferencetypeContext::arraytype() {
  return getRuleContext<Java8Parser::ArraytypeContext>(0);
}


size_t Java8Parser::ReferencetypeContext::getRuleIndex() const {
  return Java8Parser::RuleReferencetype;
}


antlrcpp::Any Java8Parser::ReferencetypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitReferencetype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ReferencetypeContext* Java8Parser::referencetype() {
  ReferencetypeContext *_localctx = _tracker.createInstance<ReferencetypeContext>(_ctx, getState());
  enterRule(_localctx, 12, Java8Parser::RuleReferencetype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(505);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(502);
      classOrInterfaceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(503);
      typeVariable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(504);
      arraytype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassOrInterfaceTypeContext::ClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType__2__classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::classType__2__classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType__2__classOrInterfaceTypeContext>(0);
}

Java8Parser::InterfaceType__2__classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::interfaceType__2__classOrInterfaceType() {
  return getRuleContext<Java8Parser::InterfaceType__2__classOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::ClassType__1__classOrInterfaceTypeContext *> Java8Parser::ClassOrInterfaceTypeContext::classType__1__classOrInterfaceType() {
  return getRuleContexts<Java8Parser::ClassType__1__classOrInterfaceTypeContext>();
}

Java8Parser::ClassType__1__classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::classType__1__classOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::ClassType__1__classOrInterfaceTypeContext>(i);
}

std::vector<Java8Parser::InterfaceType__1__classOrInterfaceTypeContext *> Java8Parser::ClassOrInterfaceTypeContext::interfaceType__1__classOrInterfaceType() {
  return getRuleContexts<Java8Parser::InterfaceType__1__classOrInterfaceTypeContext>();
}

Java8Parser::InterfaceType__1__classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::interfaceType__1__classOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::InterfaceType__1__classOrInterfaceTypeContext>(i);
}


size_t Java8Parser::ClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassOrInterfaceType;
}


antlrcpp::Any Java8Parser::ClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::classOrInterfaceType() {
  ClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, Java8Parser::RuleClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(509);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(507);
      classType__2__classOrInterfaceType();
      break;
    }

    case 2: {
      setState(508);
      interfaceType__2__classOrInterfaceType();
      break;
    }

    }
    setState(515);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(513);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(511);
          classType__1__classOrInterfaceType();
          break;
        }

        case 2: {
          setState(512);
          interfaceType__1__classOrInterfaceType();
          break;
        }

        } 
      }
      setState(517);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClasstypeContext ------------------------------------------------------------------

Java8Parser::ClasstypeContext::ClasstypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClasstypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClasstypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClasstypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClasstypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ClasstypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

tree::TerminalNode* Java8Parser::ClasstypeContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::ClasstypeContext::getRuleIndex() const {
  return Java8Parser::RuleClasstype;
}


antlrcpp::Any Java8Parser::ClasstypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClasstype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClasstypeContext* Java8Parser::classtype() {
  ClasstypeContext *_localctx = _tracker.createInstance<ClasstypeContext>(_ctx, getState());
  enterRule(_localctx, 16, Java8Parser::RuleClasstype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(540);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(521);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(518);
        annotation();
        setState(523);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(524);
      match(Java8Parser::Identifier);
      setState(526);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(525);
        typeArguments();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(528);
      classOrInterfaceType();
      setState(529);
      match(Java8Parser::DOT);
      setState(533);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(530);
        annotation();
        setState(535);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(536);
      match(Java8Parser::Identifier);
      setState(538);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(537);
        typeArguments();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassType__1__classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassType__1__classOrInterfaceTypeContext::ClassType__1__classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassType__1__classOrInterfaceTypeContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::ClassType__1__classOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassType__1__classOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassType__1__classOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassType__1__classOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::ClassType__1__classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassType__1__classOrInterfaceType;
}


antlrcpp::Any Java8Parser::ClassType__1__classOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassType__1__classOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassType__1__classOrInterfaceTypeContext* Java8Parser::classType__1__classOrInterfaceType() {
  ClassType__1__classOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassType__1__classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 18, Java8Parser::RuleClassType__1__classOrInterfaceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    match(Java8Parser::DOT);
    setState(546);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(543);
      annotation();
      setState(548);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(549);
    match(Java8Parser::Identifier);
    setState(551);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(550);
      typeArguments();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassType__2__classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassType__2__classOrInterfaceTypeContext::ClassType__2__classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassType__2__classOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassType__2__classOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassType__2__classOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassType__2__classOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::ClassType__2__classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassType__2__classOrInterfaceType;
}


antlrcpp::Any Java8Parser::ClassType__2__classOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassType__2__classOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassType__2__classOrInterfaceTypeContext* Java8Parser::classType__2__classOrInterfaceType() {
  ClassType__2__classOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassType__2__classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, Java8Parser::RuleClassType__2__classOrInterfaceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(553);
      annotation();
      setState(558);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(559);
    match(Java8Parser::Identifier);
    setState(561);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(560);
      typeArguments();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfacetypeContext ------------------------------------------------------------------

Java8Parser::InterfacetypeContext::InterfacetypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClasstypeContext* Java8Parser::InterfacetypeContext::classtype() {
  return getRuleContext<Java8Parser::ClasstypeContext>(0);
}


size_t Java8Parser::InterfacetypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfacetype;
}


antlrcpp::Any Java8Parser::InterfacetypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfacetype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfacetypeContext* Java8Parser::interfacetype() {
  InterfacetypeContext *_localctx = _tracker.createInstance<InterfacetypeContext>(_ctx, getState());
  enterRule(_localctx, 22, Java8Parser::RuleInterfacetype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    classtype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceType__1__classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::InterfaceType__1__classOrInterfaceTypeContext::InterfaceType__1__classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType__1__classOrInterfaceTypeContext* Java8Parser::InterfaceType__1__classOrInterfaceTypeContext::classType__1__classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType__1__classOrInterfaceTypeContext>(0);
}


size_t Java8Parser::InterfaceType__1__classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceType__1__classOrInterfaceType;
}


antlrcpp::Any Java8Parser::InterfaceType__1__classOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfaceType__1__classOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceType__1__classOrInterfaceTypeContext* Java8Parser::interfaceType__1__classOrInterfaceType() {
  InterfaceType__1__classOrInterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceType__1__classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 24, Java8Parser::RuleInterfaceType__1__classOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    classType__1__classOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceType__2__classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::InterfaceType__2__classOrInterfaceTypeContext::InterfaceType__2__classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType__2__classOrInterfaceTypeContext* Java8Parser::InterfaceType__2__classOrInterfaceTypeContext::classType__2__classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType__2__classOrInterfaceTypeContext>(0);
}


size_t Java8Parser::InterfaceType__2__classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceType__2__classOrInterfaceType;
}


antlrcpp::Any Java8Parser::InterfaceType__2__classOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfaceType__2__classOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceType__2__classOrInterfaceTypeContext* Java8Parser::interfaceType__2__classOrInterfaceType() {
  InterfaceType__2__classOrInterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceType__2__classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 26, Java8Parser::RuleInterfaceType__2__classOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    classType__2__classOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeVariableContext ------------------------------------------------------------------

Java8Parser::TypeVariableContext::TypeVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeVariableContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::TypeVariableContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::TypeVariableContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::TypeVariableContext::getRuleIndex() const {
  return Java8Parser::RuleTypeVariable;
}


antlrcpp::Any Java8Parser::TypeVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeVariable(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeVariableContext* Java8Parser::typeVariable() {
  TypeVariableContext *_localctx = _tracker.createInstance<TypeVariableContext>(_ctx, getState());
  enterRule(_localctx, 28, Java8Parser::RuleTypeVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(569);
      annotation();
      setState(574);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(575);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArraytypeContext ------------------------------------------------------------------

Java8Parser::ArraytypeContext::ArraytypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimitivetypeContext* Java8Parser::ArraytypeContext::primitivetype() {
  return getRuleContext<Java8Parser::PrimitivetypeContext>(0);
}

Java8Parser::DimsContext* Java8Parser::ArraytypeContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ArraytypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ArraytypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}


size_t Java8Parser::ArraytypeContext::getRuleIndex() const {
  return Java8Parser::RuleArraytype;
}


antlrcpp::Any Java8Parser::ArraytypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitArraytype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArraytypeContext* Java8Parser::arraytype() {
  ArraytypeContext *_localctx = _tracker.createInstance<ArraytypeContext>(_ctx, getState());
  enterRule(_localctx, 30, Java8Parser::RuleArraytype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(586);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(577);
      primitivetype();
      setState(578);
      dims();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(580);
      classOrInterfaceType();
      setState(581);
      dims();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(583);
      typeVariable();
      setState(584);
      dims();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimsContext ------------------------------------------------------------------

Java8Parser::DimsContext::DimsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Java8Parser::DimsContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::DimsContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::DimsContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::DimsContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::DimsContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::DimsContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::DimsContext::getRuleIndex() const {
  return Java8Parser::RuleDims;
}


antlrcpp::Any Java8Parser::DimsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitDims(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DimsContext* Java8Parser::dims() {
  DimsContext *_localctx = _tracker.createInstance<DimsContext>(_ctx, getState());
  enterRule(_localctx, 32, Java8Parser::RuleDims);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(591);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(588);
      annotation();
      setState(593);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(594);
    match(Java8Parser::LBRACK);
    setState(595);
    match(Java8Parser::RBRACK);
    setState(606);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(599);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(596);
          annotation();
          setState(601);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(602);
        match(Java8Parser::LBRACK);
        setState(603);
        match(Java8Parser::RBRACK); 
      }
      setState(608);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

Java8Parser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeParameterContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::TypeParameterModifierContext *> Java8Parser::TypeParameterContext::typeParameterModifier() {
  return getRuleContexts<Java8Parser::TypeParameterModifierContext>();
}

Java8Parser::TypeParameterModifierContext* Java8Parser::TypeParameterContext::typeParameterModifier(size_t i) {
  return getRuleContext<Java8Parser::TypeParameterModifierContext>(i);
}

Java8Parser::TypeBoundContext* Java8Parser::TypeParameterContext::typeBound() {
  return getRuleContext<Java8Parser::TypeBoundContext>(0);
}


size_t Java8Parser::TypeParameterContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameter;
}


antlrcpp::Any Java8Parser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeParameterContext* Java8Parser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 34, Java8Parser::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(609);
      typeParameterModifier();
      setState(614);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(615);
    match(Java8Parser::Identifier);
    setState(617);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(616);
      typeBound();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterModifierContext ------------------------------------------------------------------

Java8Parser::TypeParameterModifierContext::TypeParameterModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::TypeParameterModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::TypeParameterModifierContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameterModifier;
}


antlrcpp::Any Java8Parser::TypeParameterModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeParameterModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeParameterModifierContext* Java8Parser::typeParameterModifier() {
  TypeParameterModifierContext *_localctx = _tracker.createInstance<TypeParameterModifierContext>(_ctx, getState());
  enterRule(_localctx, 36, Java8Parser::RuleTypeParameterModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeBoundContext ------------------------------------------------------------------

Java8Parser::TypeBoundContext::TypeBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeBoundContext::EXTENDS() {
  return getToken(Java8Parser::EXTENDS, 0);
}

Java8Parser::TypeVariableContext* Java8Parser::TypeBoundContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::TypeBoundContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::AdditionalBoundContext *> Java8Parser::TypeBoundContext::additionalBound() {
  return getRuleContexts<Java8Parser::AdditionalBoundContext>();
}

Java8Parser::AdditionalBoundContext* Java8Parser::TypeBoundContext::additionalBound(size_t i) {
  return getRuleContext<Java8Parser::AdditionalBoundContext>(i);
}


size_t Java8Parser::TypeBoundContext::getRuleIndex() const {
  return Java8Parser::RuleTypeBound;
}


antlrcpp::Any Java8Parser::TypeBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeBound(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeBoundContext* Java8Parser::typeBound() {
  TypeBoundContext *_localctx = _tracker.createInstance<TypeBoundContext>(_ctx, getState());
  enterRule(_localctx, 38, Java8Parser::RuleTypeBound);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(631);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(621);
      match(Java8Parser::EXTENDS);
      setState(622);
      typeVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(623);
      match(Java8Parser::EXTENDS);
      setState(624);
      classOrInterfaceType();
      setState(628);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(625);
        additionalBound();
        setState(630);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditionalBoundContext ------------------------------------------------------------------

Java8Parser::AdditionalBoundContext::AdditionalBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AdditionalBoundContext::BITAND() {
  return getToken(Java8Parser::BITAND, 0);
}

Java8Parser::InterfacetypeContext* Java8Parser::AdditionalBoundContext::interfacetype() {
  return getRuleContext<Java8Parser::InterfacetypeContext>(0);
}


size_t Java8Parser::AdditionalBoundContext::getRuleIndex() const {
  return Java8Parser::RuleAdditionalBound;
}


antlrcpp::Any Java8Parser::AdditionalBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAdditionalBound(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AdditionalBoundContext* Java8Parser::additionalBound() {
  AdditionalBoundContext *_localctx = _tracker.createInstance<AdditionalBoundContext>(_ctx, getState());
  enterRule(_localctx, 40, Java8Parser::RuleAdditionalBound);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(633);
    match(Java8Parser::BITAND);
    setState(634);
    interfacetype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsContext ------------------------------------------------------------------

Java8Parser::TypeArgumentsContext::TypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeArgumentsContext::LT() {
  return getToken(Java8Parser::LT, 0);
}

Java8Parser::TypeArgumentListContext* Java8Parser::TypeArgumentsContext::typeArgumentList() {
  return getRuleContext<Java8Parser::TypeArgumentListContext>(0);
}

tree::TerminalNode* Java8Parser::TypeArgumentsContext::GT() {
  return getToken(Java8Parser::GT, 0);
}


size_t Java8Parser::TypeArgumentsContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArguments;
}


antlrcpp::Any Java8Parser::TypeArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeArguments(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeArgumentsContext* Java8Parser::typeArguments() {
  TypeArgumentsContext *_localctx = _tracker.createInstance<TypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 42, Java8Parser::RuleTypeArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(636);
    match(Java8Parser::LT);
    setState(637);
    typeArgumentList();
    setState(638);
    match(Java8Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentListContext ------------------------------------------------------------------

Java8Parser::TypeArgumentListContext::TypeArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::TypeArgumentContext *> Java8Parser::TypeArgumentListContext::typeArgument() {
  return getRuleContexts<Java8Parser::TypeArgumentContext>();
}

Java8Parser::TypeArgumentContext* Java8Parser::TypeArgumentListContext::typeArgument(size_t i) {
  return getRuleContext<Java8Parser::TypeArgumentContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::TypeArgumentListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::TypeArgumentListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::TypeArgumentListContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgumentList;
}


antlrcpp::Any Java8Parser::TypeArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeArgumentList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeArgumentListContext* Java8Parser::typeArgumentList() {
  TypeArgumentListContext *_localctx = _tracker.createInstance<TypeArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 44, Java8Parser::RuleTypeArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(640);
    typeArgument();
    setState(645);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(641);
      match(Java8Parser::COMMA);
      setState(642);
      typeArgument();
      setState(647);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentContext ------------------------------------------------------------------

Java8Parser::TypeArgumentContext::TypeArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ReferencetypeContext* Java8Parser::TypeArgumentContext::referencetype() {
  return getRuleContext<Java8Parser::ReferencetypeContext>(0);
}

Java8Parser::WildcardContext* Java8Parser::TypeArgumentContext::wildcard() {
  return getRuleContext<Java8Parser::WildcardContext>(0);
}


size_t Java8Parser::TypeArgumentContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgument;
}


antlrcpp::Any Java8Parser::TypeArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeArgument(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeArgumentContext* Java8Parser::typeArgument() {
  TypeArgumentContext *_localctx = _tracker.createInstance<TypeArgumentContext>(_ctx, getState());
  enterRule(_localctx, 46, Java8Parser::RuleTypeArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(650);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(648);
      referencetype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(649);
      wildcard();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardContext ------------------------------------------------------------------

Java8Parser::WildcardContext::WildcardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::WildcardContext::QUESTION() {
  return getToken(Java8Parser::QUESTION, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::WildcardContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::WildcardContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::WildcardBoundsContext* Java8Parser::WildcardContext::wildcardBounds() {
  return getRuleContext<Java8Parser::WildcardBoundsContext>(0);
}


size_t Java8Parser::WildcardContext::getRuleIndex() const {
  return Java8Parser::RuleWildcard;
}


antlrcpp::Any Java8Parser::WildcardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitWildcard(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::WildcardContext* Java8Parser::wildcard() {
  WildcardContext *_localctx = _tracker.createInstance<WildcardContext>(_ctx, getState());
  enterRule(_localctx, 48, Java8Parser::RuleWildcard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(655);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(652);
      annotation();
      setState(657);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(658);
    match(Java8Parser::QUESTION);
    setState(660);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS

    || _la == Java8Parser::SUPER) {
      setState(659);
      wildcardBounds();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardBoundsContext ------------------------------------------------------------------

Java8Parser::WildcardBoundsContext::WildcardBoundsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::WildcardBoundsContext::EXTENDS() {
  return getToken(Java8Parser::EXTENDS, 0);
}

Java8Parser::ReferencetypeContext* Java8Parser::WildcardBoundsContext::referencetype() {
  return getRuleContext<Java8Parser::ReferencetypeContext>(0);
}

tree::TerminalNode* Java8Parser::WildcardBoundsContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}


size_t Java8Parser::WildcardBoundsContext::getRuleIndex() const {
  return Java8Parser::RuleWildcardBounds;
}


antlrcpp::Any Java8Parser::WildcardBoundsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitWildcardBounds(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::WildcardBoundsContext* Java8Parser::wildcardBounds() {
  WildcardBoundsContext *_localctx = _tracker.createInstance<WildcardBoundsContext>(_ctx, getState());
  enterRule(_localctx, 50, Java8Parser::RuleWildcardBounds);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(666);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::EXTENDS: {
        enterOuterAlt(_localctx, 1);
        setState(662);
        match(Java8Parser::EXTENDS);
        setState(663);
        referencetype();
        break;
      }

      case Java8Parser::SUPER: {
        enterOuterAlt(_localctx, 2);
        setState(664);
        match(Java8Parser::SUPER);
        setState(665);
        referencetype();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

Java8Parser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageOrtypeNameContext* Java8Parser::TypeNameContext::packageOrtypeName() {
  return getRuleContext<Java8Parser::PackageOrtypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::TypeNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::TypeNameContext::getRuleIndex() const {
  return Java8Parser::RuleTypeName;
}


antlrcpp::Any Java8Parser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeNameContext* Java8Parser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 52, Java8Parser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(673);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(668);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(669);
      packageOrtypeName(0);
      setState(670);
      match(Java8Parser::DOT);
      setState(671);
      match(Java8Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageOrtypeNameContext ------------------------------------------------------------------

Java8Parser::PackageOrtypeNameContext::PackageOrtypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PackageOrtypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageOrtypeNameContext* Java8Parser::PackageOrtypeNameContext::packageOrtypeName() {
  return getRuleContext<Java8Parser::PackageOrtypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PackageOrtypeNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::PackageOrtypeNameContext::getRuleIndex() const {
  return Java8Parser::RulePackageOrtypeName;
}


antlrcpp::Any Java8Parser::PackageOrtypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPackageOrtypeName(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::PackageOrtypeNameContext* Java8Parser::packageOrtypeName() {
   return packageOrtypeName(0);
}

Java8Parser::PackageOrtypeNameContext* Java8Parser::packageOrtypeName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::PackageOrtypeNameContext *_localctx = _tracker.createInstance<PackageOrtypeNameContext>(_ctx, parentState);
  Java8Parser::PackageOrtypeNameContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, Java8Parser::RulePackageOrtypeName, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(676);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(683);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PackageOrtypeNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePackageOrtypeName);
        setState(678);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(679);
        match(Java8Parser::DOT);
        setState(680);
        match(Java8Parser::Identifier); 
      }
      setState(685);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionNameContext ------------------------------------------------------------------

Java8Parser::ExpressionNameContext::ExpressionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ExpressionNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::ExpressionNameContext::ambiguousName() {
  return getRuleContext<Java8Parser::AmbiguousNameContext>(0);
}


size_t Java8Parser::ExpressionNameContext::getRuleIndex() const {
  return Java8Parser::RuleExpressionName;
}


antlrcpp::Any Java8Parser::ExpressionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitExpressionName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExpressionNameContext* Java8Parser::expressionName() {
  ExpressionNameContext *_localctx = _tracker.createInstance<ExpressionNameContext>(_ctx, getState());
  enterRule(_localctx, 56, Java8Parser::RuleExpressionName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(691);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(686);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(687);
      ambiguousName(0);
      setState(688);
      matchWildcard();
      setState(689);
      match(Java8Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodNameContext ------------------------------------------------------------------

Java8Parser::MethodNameContext::MethodNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::MethodNameContext::getRuleIndex() const {
  return Java8Parser::RuleMethodName;
}


antlrcpp::Any Java8Parser::MethodNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodNameContext* Java8Parser::methodName() {
  MethodNameContext *_localctx = _tracker.createInstance<MethodNameContext>(_ctx, getState());
  enterRule(_localctx, 58, Java8Parser::RuleMethodName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(693);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageNameContext ------------------------------------------------------------------

Java8Parser::PackageNameContext::PackageNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PackageNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageNameContext* Java8Parser::PackageNameContext::packageName() {
  return getRuleContext<Java8Parser::PackageNameContext>(0);
}

tree::TerminalNode* Java8Parser::PackageNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::PackageNameContext::getRuleIndex() const {
  return Java8Parser::RulePackageName;
}


antlrcpp::Any Java8Parser::PackageNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPackageName(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::PackageNameContext* Java8Parser::packageName() {
   return packageName(0);
}

Java8Parser::PackageNameContext* Java8Parser::packageName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::PackageNameContext *_localctx = _tracker.createInstance<PackageNameContext>(_ctx, parentState);
  Java8Parser::PackageNameContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, Java8Parser::RulePackageName, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(696);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(703);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PackageNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePackageName);
        setState(698);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(699);
        match(Java8Parser::DOT);
        setState(700);
        match(Java8Parser::Identifier); 
      }
      setState(705);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AmbiguousNameContext ------------------------------------------------------------------

Java8Parser::AmbiguousNameContext::AmbiguousNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AmbiguousNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::AmbiguousNameContext::ambiguousName() {
  return getRuleContext<Java8Parser::AmbiguousNameContext>(0);
}

tree::TerminalNode* Java8Parser::AmbiguousNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::AmbiguousNameContext::getRuleIndex() const {
  return Java8Parser::RuleAmbiguousName;
}


antlrcpp::Any Java8Parser::AmbiguousNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAmbiguousName(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::AmbiguousNameContext* Java8Parser::ambiguousName() {
   return ambiguousName(0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::ambiguousName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AmbiguousNameContext *_localctx = _tracker.createInstance<AmbiguousNameContext>(_ctx, parentState);
  Java8Parser::AmbiguousNameContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, Java8Parser::RuleAmbiguousName, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(707);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(714);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AmbiguousNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAmbiguousName);
        setState(709);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(710);
        match(Java8Parser::DOT);
        setState(711);
        match(Java8Parser::Identifier); 
      }
      setState(716);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

Java8Parser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::CompilationUnitContext::EOF() {
  return getToken(Java8Parser::EOF, 0);
}

Java8Parser::PackageDeclarationContext* Java8Parser::CompilationUnitContext::packageDeclaration() {
  return getRuleContext<Java8Parser::PackageDeclarationContext>(0);
}

std::vector<Java8Parser::ImportDeclarationContext *> Java8Parser::CompilationUnitContext::importDeclaration() {
  return getRuleContexts<Java8Parser::ImportDeclarationContext>();
}

Java8Parser::ImportDeclarationContext* Java8Parser::CompilationUnitContext::importDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ImportDeclarationContext>(i);
}

std::vector<Java8Parser::TypeDeclarationContext *> Java8Parser::CompilationUnitContext::typeDeclaration() {
  return getRuleContexts<Java8Parser::TypeDeclarationContext>();
}

Java8Parser::TypeDeclarationContext* Java8Parser::CompilationUnitContext::typeDeclaration(size_t i) {
  return getRuleContext<Java8Parser::TypeDeclarationContext>(i);
}


size_t Java8Parser::CompilationUnitContext::getRuleIndex() const {
  return Java8Parser::RuleCompilationUnit;
}


antlrcpp::Any Java8Parser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CompilationUnitContext* Java8Parser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 64, Java8Parser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(718);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(717);
      packageDeclaration();
      break;
    }

    }
    setState(723);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::IMPORT) {
      setState(720);
      importDeclaration();
      setState(725);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(729);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SEMI))) != 0) || _la == Java8Parser::AT) {
      setState(726);
      typeDeclaration();
      setState(731);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(732);
    match(Java8Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageDeclarationContext ------------------------------------------------------------------

Java8Parser::PackageDeclarationContext::PackageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PackageDeclarationContext::PACKAGE() {
  return getToken(Java8Parser::PACKAGE, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PackageDeclarationContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::PackageDeclarationContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

tree::TerminalNode* Java8Parser::PackageDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::PackageModifierContext *> Java8Parser::PackageDeclarationContext::packageModifier() {
  return getRuleContexts<Java8Parser::PackageModifierContext>();
}

Java8Parser::PackageModifierContext* Java8Parser::PackageDeclarationContext::packageModifier(size_t i) {
  return getRuleContext<Java8Parser::PackageModifierContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::PackageDeclarationContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::PackageDeclarationContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}


size_t Java8Parser::PackageDeclarationContext::getRuleIndex() const {
  return Java8Parser::RulePackageDeclaration;
}


antlrcpp::Any Java8Parser::PackageDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPackageDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PackageDeclarationContext* Java8Parser::packageDeclaration() {
  PackageDeclarationContext *_localctx = _tracker.createInstance<PackageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, Java8Parser::RulePackageDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(737);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(734);
      packageModifier();
      setState(739);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(740);
    match(Java8Parser::PACKAGE);
    setState(741);
    match(Java8Parser::Identifier);
    setState(746);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::DOT) {
      setState(742);
      match(Java8Parser::DOT);
      setState(743);
      match(Java8Parser::Identifier);
      setState(748);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(749);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageModifierContext ------------------------------------------------------------------

Java8Parser::PackageModifierContext::PackageModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::PackageModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::PackageModifierContext::getRuleIndex() const {
  return Java8Parser::RulePackageModifier;
}


antlrcpp::Any Java8Parser::PackageModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPackageModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PackageModifierContext* Java8Parser::packageModifier() {
  PackageModifierContext *_localctx = _tracker.createInstance<PackageModifierContext>(_ctx, getState());
  enterRule(_localctx, 68, Java8Parser::RulePackageModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(751);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

Java8Parser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SingletypeImportDeclarationContext* Java8Parser::ImportDeclarationContext::singletypeImportDeclaration() {
  return getRuleContext<Java8Parser::SingletypeImportDeclarationContext>(0);
}

Java8Parser::TypeImportOnDemandDeclarationContext* Java8Parser::ImportDeclarationContext::typeImportOnDemandDeclaration() {
  return getRuleContext<Java8Parser::TypeImportOnDemandDeclarationContext>(0);
}

Java8Parser::SingleStaticImportDeclarationContext* Java8Parser::ImportDeclarationContext::singleStaticImportDeclaration() {
  return getRuleContext<Java8Parser::SingleStaticImportDeclarationContext>(0);
}

Java8Parser::StaticImportOnDemandDeclarationContext* Java8Parser::ImportDeclarationContext::staticImportOnDemandDeclaration() {
  return getRuleContext<Java8Parser::StaticImportOnDemandDeclarationContext>(0);
}


size_t Java8Parser::ImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleImportDeclaration;
}


antlrcpp::Any Java8Parser::ImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ImportDeclarationContext* Java8Parser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 70, Java8Parser::RuleImportDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(757);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(753);
      singletypeImportDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(754);
      typeImportOnDemandDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(755);
      singleStaticImportDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(756);
      staticImportOnDemandDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingletypeImportDeclarationContext ------------------------------------------------------------------

Java8Parser::SingletypeImportDeclarationContext::SingletypeImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SingletypeImportDeclarationContext::IMPORT() {
  return getToken(Java8Parser::IMPORT, 0);
}

Java8Parser::TypeNameContext* Java8Parser::SingletypeImportDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::SingletypeImportDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::SingletypeImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleSingletypeImportDeclaration;
}


antlrcpp::Any Java8Parser::SingletypeImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSingletypeImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SingletypeImportDeclarationContext* Java8Parser::singletypeImportDeclaration() {
  SingletypeImportDeclarationContext *_localctx = _tracker.createInstance<SingletypeImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 72, Java8Parser::RuleSingletypeImportDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(759);
    match(Java8Parser::IMPORT);
    setState(760);
    typeName();
    setState(761);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeImportOnDemandDeclarationContext ------------------------------------------------------------------

Java8Parser::TypeImportOnDemandDeclarationContext::TypeImportOnDemandDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeImportOnDemandDeclarationContext::IMPORT() {
  return getToken(Java8Parser::IMPORT, 0);
}

Java8Parser::PackageOrtypeNameContext* Java8Parser::TypeImportOnDemandDeclarationContext::packageOrtypeName() {
  return getRuleContext<Java8Parser::PackageOrtypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::TypeImportOnDemandDeclarationContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::TypeImportOnDemandDeclarationContext::MUL() {
  return getToken(Java8Parser::MUL, 0);
}

tree::TerminalNode* Java8Parser::TypeImportOnDemandDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::TypeImportOnDemandDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleTypeImportOnDemandDeclaration;
}


antlrcpp::Any Java8Parser::TypeImportOnDemandDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeImportOnDemandDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeImportOnDemandDeclarationContext* Java8Parser::typeImportOnDemandDeclaration() {
  TypeImportOnDemandDeclarationContext *_localctx = _tracker.createInstance<TypeImportOnDemandDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 74, Java8Parser::RuleTypeImportOnDemandDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(763);
    match(Java8Parser::IMPORT);
    setState(764);
    packageOrtypeName(0);
    setState(765);
    match(Java8Parser::DOT);
    setState(766);
    match(Java8Parser::MUL);
    setState(767);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleStaticImportDeclarationContext ------------------------------------------------------------------

Java8Parser::SingleStaticImportDeclarationContext::SingleStaticImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::IMPORT() {
  return getToken(Java8Parser::IMPORT, 0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

Java8Parser::TypeNameContext* Java8Parser::SingleStaticImportDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::SingleStaticImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleSingleStaticImportDeclaration;
}


antlrcpp::Any Java8Parser::SingleStaticImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSingleStaticImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SingleStaticImportDeclarationContext* Java8Parser::singleStaticImportDeclaration() {
  SingleStaticImportDeclarationContext *_localctx = _tracker.createInstance<SingleStaticImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 76, Java8Parser::RuleSingleStaticImportDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(769);
    match(Java8Parser::IMPORT);
    setState(770);
    match(Java8Parser::STATIC);
    setState(771);
    typeName();
    setState(772);
    match(Java8Parser::DOT);
    setState(773);
    match(Java8Parser::Identifier);
    setState(774);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticImportOnDemandDeclarationContext ------------------------------------------------------------------

Java8Parser::StaticImportOnDemandDeclarationContext::StaticImportOnDemandDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::IMPORT() {
  return getToken(Java8Parser::IMPORT, 0);
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

Java8Parser::TypeNameContext* Java8Parser::StaticImportOnDemandDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::MUL() {
  return getToken(Java8Parser::MUL, 0);
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::StaticImportOnDemandDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleStaticImportOnDemandDeclaration;
}


antlrcpp::Any Java8Parser::StaticImportOnDemandDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitStaticImportOnDemandDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StaticImportOnDemandDeclarationContext* Java8Parser::staticImportOnDemandDeclaration() {
  StaticImportOnDemandDeclarationContext *_localctx = _tracker.createInstance<StaticImportOnDemandDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 78, Java8Parser::RuleStaticImportOnDemandDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(776);
    match(Java8Parser::IMPORT);
    setState(777);
    match(Java8Parser::STATIC);
    setState(778);
    typeName();
    setState(779);
    match(Java8Parser::DOT);
    setState(780);
    match(Java8Parser::MUL);
    setState(781);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

Java8Parser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassDeclarationContext* Java8Parser::TypeDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::TypeDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::TypeDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::TypeDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleTypeDeclaration;
}


antlrcpp::Any Java8Parser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeDeclarationContext* Java8Parser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 80, Java8Parser::RuleTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(786);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(783);
      classDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(784);
      interfaceDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(785);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalclassDeclarationContext* Java8Parser::ClassDeclarationContext::normalclassDeclaration() {
  return getRuleContext<Java8Parser::NormalclassDeclarationContext>(0);
}

Java8Parser::EnumDeclarationContext* Java8Parser::ClassDeclarationContext::enumDeclaration() {
  return getRuleContext<Java8Parser::EnumDeclarationContext>(0);
}


size_t Java8Parser::ClassDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassDeclaration;
}


antlrcpp::Any Java8Parser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassDeclarationContext* Java8Parser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 82, Java8Parser::RuleClassDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(790);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(788);
      normalclassDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(789);
      enumDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalclassDeclarationContext ------------------------------------------------------------------

Java8Parser::NormalclassDeclarationContext::NormalclassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::NormalclassDeclarationContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

tree::TerminalNode* Java8Parser::NormalclassDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::ClassBodyContext* Java8Parser::NormalclassDeclarationContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

std::vector<Java8Parser::ClassModifierContext *> Java8Parser::NormalclassDeclarationContext::classModifier() {
  return getRuleContexts<Java8Parser::ClassModifierContext>();
}

Java8Parser::ClassModifierContext* Java8Parser::NormalclassDeclarationContext::classModifier(size_t i) {
  return getRuleContext<Java8Parser::ClassModifierContext>(i);
}

Java8Parser::TypeParametersContext* Java8Parser::NormalclassDeclarationContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::SuperclassContext* Java8Parser::NormalclassDeclarationContext::superclass() {
  return getRuleContext<Java8Parser::SuperclassContext>(0);
}

Java8Parser::SuperinterfacesContext* Java8Parser::NormalclassDeclarationContext::superinterfaces() {
  return getRuleContext<Java8Parser::SuperinterfacesContext>(0);
}


size_t Java8Parser::NormalclassDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalclassDeclaration;
}


antlrcpp::Any Java8Parser::NormalclassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitNormalclassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::NormalclassDeclarationContext* Java8Parser::normalclassDeclaration() {
  NormalclassDeclarationContext *_localctx = _tracker.createInstance<NormalclassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 84, Java8Parser::RuleNormalclassDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(795);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(792);
      classModifier();
      setState(797);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(798);
    match(Java8Parser::CLASS);
    setState(799);
    match(Java8Parser::Identifier);
    setState(801);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(800);
      typeParameters();
    }
    setState(804);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(803);
      superclass();
    }
    setState(807);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::IMPLEMENTS) {
      setState(806);
      superinterfaces();
    }
    setState(809);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassModifierContext ------------------------------------------------------------------

Java8Parser::ClassModifierContext::ClassModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ClassModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::STRICTFP() {
  return getToken(Java8Parser::STRICTFP, 0);
}


size_t Java8Parser::ClassModifierContext::getRuleIndex() const {
  return Java8Parser::RuleClassModifier;
}


antlrcpp::Any Java8Parser::ClassModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassModifierContext* Java8Parser::classModifier() {
  ClassModifierContext *_localctx = _tracker.createInstance<ClassModifierContext>(_ctx, getState());
  enterRule(_localctx, 86, Java8Parser::RuleClassModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(819);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(811);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(812);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(813);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(814);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(815);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(816);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(817);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 8);
        setState(818);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

Java8Parser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeParametersContext::LT() {
  return getToken(Java8Parser::LT, 0);
}

Java8Parser::TypeParameterListContext* Java8Parser::TypeParametersContext::typeParameterList() {
  return getRuleContext<Java8Parser::TypeParameterListContext>(0);
}

tree::TerminalNode* Java8Parser::TypeParametersContext::GT() {
  return getToken(Java8Parser::GT, 0);
}


size_t Java8Parser::TypeParametersContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameters;
}


antlrcpp::Any Java8Parser::TypeParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeParameters(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeParametersContext* Java8Parser::typeParameters() {
  TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 88, Java8Parser::RuleTypeParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    match(Java8Parser::LT);
    setState(822);
    typeParameterList();
    setState(823);
    match(Java8Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterListContext ------------------------------------------------------------------

Java8Parser::TypeParameterListContext::TypeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::TypeParameterContext *> Java8Parser::TypeParameterListContext::typeParameter() {
  return getRuleContexts<Java8Parser::TypeParameterContext>();
}

Java8Parser::TypeParameterContext* Java8Parser::TypeParameterListContext::typeParameter(size_t i) {
  return getRuleContext<Java8Parser::TypeParameterContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::TypeParameterListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::TypeParameterListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::TypeParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameterList;
}


antlrcpp::Any Java8Parser::TypeParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeParameterList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeParameterListContext* Java8Parser::typeParameterList() {
  TypeParameterListContext *_localctx = _tracker.createInstance<TypeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 90, Java8Parser::RuleTypeParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(825);
    typeParameter();
    setState(830);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(826);
      match(Java8Parser::COMMA);
      setState(827);
      typeParameter();
      setState(832);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperclassContext ------------------------------------------------------------------

Java8Parser::SuperclassContext::SuperclassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SuperclassContext::EXTENDS() {
  return getToken(Java8Parser::EXTENDS, 0);
}

Java8Parser::ClasstypeContext* Java8Parser::SuperclassContext::classtype() {
  return getRuleContext<Java8Parser::ClasstypeContext>(0);
}


size_t Java8Parser::SuperclassContext::getRuleIndex() const {
  return Java8Parser::RuleSuperclass;
}


antlrcpp::Any Java8Parser::SuperclassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSuperclass(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SuperclassContext* Java8Parser::superclass() {
  SuperclassContext *_localctx = _tracker.createInstance<SuperclassContext>(_ctx, getState());
  enterRule(_localctx, 92, Java8Parser::RuleSuperclass);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(833);
    match(Java8Parser::EXTENDS);
    setState(834);
    classtype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperinterfacesContext ------------------------------------------------------------------

Java8Parser::SuperinterfacesContext::SuperinterfacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SuperinterfacesContext::IMPLEMENTS() {
  return getToken(Java8Parser::IMPLEMENTS, 0);
}

Java8Parser::InterfacetypeListContext* Java8Parser::SuperinterfacesContext::interfacetypeList() {
  return getRuleContext<Java8Parser::InterfacetypeListContext>(0);
}


size_t Java8Parser::SuperinterfacesContext::getRuleIndex() const {
  return Java8Parser::RuleSuperinterfaces;
}


antlrcpp::Any Java8Parser::SuperinterfacesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSuperinterfaces(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SuperinterfacesContext* Java8Parser::superinterfaces() {
  SuperinterfacesContext *_localctx = _tracker.createInstance<SuperinterfacesContext>(_ctx, getState());
  enterRule(_localctx, 94, Java8Parser::RuleSuperinterfaces);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(836);
    match(Java8Parser::IMPLEMENTS);
    setState(837);
    interfacetypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfacetypeListContext ------------------------------------------------------------------

Java8Parser::InterfacetypeListContext::InterfacetypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::InterfacetypeContext *> Java8Parser::InterfacetypeListContext::interfacetype() {
  return getRuleContexts<Java8Parser::InterfacetypeContext>();
}

Java8Parser::InterfacetypeContext* Java8Parser::InterfacetypeListContext::interfacetype(size_t i) {
  return getRuleContext<Java8Parser::InterfacetypeContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::InterfacetypeListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::InterfacetypeListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::InterfacetypeListContext::getRuleIndex() const {
  return Java8Parser::RuleInterfacetypeList;
}


antlrcpp::Any Java8Parser::InterfacetypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfacetypeList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfacetypeListContext* Java8Parser::interfacetypeList() {
  InterfacetypeListContext *_localctx = _tracker.createInstance<InterfacetypeListContext>(_ctx, getState());
  enterRule(_localctx, 96, Java8Parser::RuleInterfacetypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(839);
    interfacetype();
    setState(844);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(840);
      match(Java8Parser::COMMA);
      setState(841);
      interfacetype();
      setState(846);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

Java8Parser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::ClassBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

std::vector<Java8Parser::ClassBodyDeclarationContext *> Java8Parser::ClassBodyContext::classBodyDeclaration() {
  return getRuleContexts<Java8Parser::ClassBodyDeclarationContext>();
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::ClassBodyContext::classBodyDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ClassBodyDeclarationContext>(i);
}


size_t Java8Parser::ClassBodyContext::getRuleIndex() const {
  return Java8Parser::RuleClassBody;
}


antlrcpp::Any Java8Parser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassBodyContext* Java8Parser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 98, Java8Parser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(847);
    match(Java8Parser::LBRACE);
    setState(851);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::VOLATILE)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(848);
      classBodyDeclaration();
      setState(853);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(854);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassBodyDeclarationContext::ClassBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassMemberDeclarationContext* Java8Parser::ClassBodyDeclarationContext::classMemberDeclaration() {
  return getRuleContext<Java8Parser::ClassMemberDeclarationContext>(0);
}

Java8Parser::InstanceInitializerContext* Java8Parser::ClassBodyDeclarationContext::instanceInitializer() {
  return getRuleContext<Java8Parser::InstanceInitializerContext>(0);
}

Java8Parser::StaticInitializerContext* Java8Parser::ClassBodyDeclarationContext::staticInitializer() {
  return getRuleContext<Java8Parser::StaticInitializerContext>(0);
}

Java8Parser::ConstructorDeclarationContext* Java8Parser::ClassBodyDeclarationContext::constructorDeclaration() {
  return getRuleContext<Java8Parser::ConstructorDeclarationContext>(0);
}


size_t Java8Parser::ClassBodyDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassBodyDeclaration;
}


antlrcpp::Any Java8Parser::ClassBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassBodyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::classBodyDeclaration() {
  ClassBodyDeclarationContext *_localctx = _tracker.createInstance<ClassBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 100, Java8Parser::RuleClassBodyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(860);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(856);
      classMemberDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(857);
      instanceInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(858);
      staticInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(859);
      constructorDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassMemberDeclarationContext::ClassMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::FieldDeclarationContext* Java8Parser::ClassMemberDeclarationContext::fieldDeclaration() {
  return getRuleContext<Java8Parser::FieldDeclarationContext>(0);
}

Java8Parser::MethodDeclarationContext* Java8Parser::ClassMemberDeclarationContext::methodDeclaration() {
  return getRuleContext<Java8Parser::MethodDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::ClassMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::ClassMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::ClassMemberDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::ClassMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassMemberDeclaration;
}


antlrcpp::Any Java8Parser::ClassMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassMemberDeclarationContext* Java8Parser::classMemberDeclaration() {
  ClassMemberDeclarationContext *_localctx = _tracker.createInstance<ClassMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 102, Java8Parser::RuleClassMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(867);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(862);
      fieldDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(863);
      methodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(864);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(865);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(866);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

Java8Parser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::FieldDeclarationContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::FieldDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

tree::TerminalNode* Java8Parser::FieldDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::FieldModifierContext *> Java8Parser::FieldDeclarationContext::fieldModifier() {
  return getRuleContexts<Java8Parser::FieldModifierContext>();
}

Java8Parser::FieldModifierContext* Java8Parser::FieldDeclarationContext::fieldModifier(size_t i) {
  return getRuleContext<Java8Parser::FieldModifierContext>(i);
}


size_t Java8Parser::FieldDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleFieldDeclaration;
}


antlrcpp::Any Java8Parser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldDeclarationContext* Java8Parser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 104, Java8Parser::RuleFieldDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(872);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOLATILE))) != 0) || _la == Java8Parser::AT) {
      setState(869);
      fieldModifier();
      setState(874);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(875);
    unanntype();
    setState(876);
    variableDeclaratorList();
    setState(877);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldModifierContext ------------------------------------------------------------------

Java8Parser::FieldModifierContext::FieldModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::FieldModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::TRANSIENT() {
  return getToken(Java8Parser::TRANSIENT, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::VOLATILE() {
  return getToken(Java8Parser::VOLATILE, 0);
}


size_t Java8Parser::FieldModifierContext::getRuleIndex() const {
  return Java8Parser::RuleFieldModifier;
}


antlrcpp::Any Java8Parser::FieldModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFieldModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldModifierContext* Java8Parser::fieldModifier() {
  FieldModifierContext *_localctx = _tracker.createInstance<FieldModifierContext>(_ctx, getState());
  enterRule(_localctx, 106, Java8Parser::RuleFieldModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(887);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(879);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(880);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(881);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(882);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(883);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 6);
        setState(884);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::TRANSIENT: {
        enterOuterAlt(_localctx, 7);
        setState(885);
        match(Java8Parser::TRANSIENT);
        break;
      }

      case Java8Parser::VOLATILE: {
        enterOuterAlt(_localctx, 8);
        setState(886);
        match(Java8Parser::VOLATILE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorListContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorListContext::VariableDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::VariableDeclaratorContext *> Java8Parser::VariableDeclaratorListContext::variableDeclarator() {
  return getRuleContexts<Java8Parser::VariableDeclaratorContext>();
}

Java8Parser::VariableDeclaratorContext* Java8Parser::VariableDeclaratorListContext::variableDeclarator(size_t i) {
  return getRuleContext<Java8Parser::VariableDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::VariableDeclaratorListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::VariableDeclaratorListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::VariableDeclaratorListContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclaratorList;
}


antlrcpp::Any Java8Parser::VariableDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitVariableDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::variableDeclaratorList() {
  VariableDeclaratorListContext *_localctx = _tracker.createInstance<VariableDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 108, Java8Parser::RuleVariableDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(889);
    variableDeclarator();
    setState(894);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(890);
      match(Java8Parser::COMMA);
      setState(891);
      variableDeclarator();
      setState(896);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::VariableDeclaratorContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* Java8Parser::VariableDeclaratorContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

Java8Parser::VariableInitializerContext* Java8Parser::VariableDeclaratorContext::variableInitializer() {
  return getRuleContext<Java8Parser::VariableInitializerContext>(0);
}


size_t Java8Parser::VariableDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclarator;
}


antlrcpp::Any Java8Parser::VariableDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitVariableDeclarator(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableDeclaratorContext* Java8Parser::variableDeclarator() {
  VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 110, Java8Parser::RuleVariableDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(897);
    variableDeclaratorId();
    setState(900);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::ASSIGN) {
      setState(898);
      match(Java8Parser::ASSIGN);
      setState(899);
      variableInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorIdContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorIdContext::VariableDeclaratorIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::VariableDeclaratorIdContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::DimsContext* Java8Parser::VariableDeclaratorIdContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}


size_t Java8Parser::VariableDeclaratorIdContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclaratorId;
}


antlrcpp::Any Java8Parser::VariableDeclaratorIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitVariableDeclaratorId(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::variableDeclaratorId() {
  VariableDeclaratorIdContext *_localctx = _tracker.createInstance<VariableDeclaratorIdContext>(_ctx, getState());
  enterRule(_localctx, 112, Java8Parser::RuleVariableDeclaratorId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(902);
    match(Java8Parser::Identifier);
    setState(904);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(903);
      dims();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerContext ------------------------------------------------------------------

Java8Parser::VariableInitializerContext::VariableInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::VariableInitializerContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ArrayInitializerContext* Java8Parser::VariableInitializerContext::arrayInitializer() {
  return getRuleContext<Java8Parser::ArrayInitializerContext>(0);
}


size_t Java8Parser::VariableInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleVariableInitializer;
}


antlrcpp::Any Java8Parser::VariableInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitVariableInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableInitializerContext* Java8Parser::variableInitializer() {
  VariableInitializerContext *_localctx = _tracker.createInstance<VariableInitializerContext>(_ctx, getState());
  enterRule(_localctx, 114, Java8Parser::RuleVariableInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(908);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::ADD:
      case Java8Parser::SUB:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(906);
        expression();
        break;
      }

      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(907);
        arrayInitializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnanntypeContext ------------------------------------------------------------------

Java8Parser::UnanntypeContext::UnanntypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::UnanntypeContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

Java8Parser::UnannReferencetypeContext* Java8Parser::UnanntypeContext::unannReferencetype() {
  return getRuleContext<Java8Parser::UnannReferencetypeContext>(0);
}


size_t Java8Parser::UnanntypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnanntype;
}


antlrcpp::Any Java8Parser::UnanntypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnanntype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnanntypeContext* Java8Parser::unanntype() {
  UnanntypeContext *_localctx = _tracker.createInstance<UnanntypeContext>(_ctx, getState());
  enterRule(_localctx, 116, Java8Parser::RuleUnanntype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(912);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(910);
      unannPrimitiveType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(911);
      unannReferencetype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannPrimitiveTypeContext ------------------------------------------------------------------

Java8Parser::UnannPrimitiveTypeContext::UnannPrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NumerictypeContext* Java8Parser::UnannPrimitiveTypeContext::numerictype() {
  return getRuleContext<Java8Parser::NumerictypeContext>(0);
}

tree::TerminalNode* Java8Parser::UnannPrimitiveTypeContext::BOOLEAN() {
  return getToken(Java8Parser::BOOLEAN, 0);
}


size_t Java8Parser::UnannPrimitiveTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannPrimitiveType;
}


antlrcpp::Any Java8Parser::UnannPrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::unannPrimitiveType() {
  UnannPrimitiveTypeContext *_localctx = _tracker.createInstance<UnannPrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 118, Java8Parser::RuleUnannPrimitiveType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(916);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT: {
        enterOuterAlt(_localctx, 1);
        setState(914);
        numerictype();
        break;
      }

      case Java8Parser::BOOLEAN: {
        enterOuterAlt(_localctx, 2);
        setState(915);
        match(Java8Parser::BOOLEAN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannReferencetypeContext ------------------------------------------------------------------

Java8Parser::UnannReferencetypeContext::UnannReferencetypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannReferencetypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnanntypeVariableContext* Java8Parser::UnannReferencetypeContext::unanntypeVariable() {
  return getRuleContext<Java8Parser::UnanntypeVariableContext>(0);
}

Java8Parser::UnannArraytypeContext* Java8Parser::UnannReferencetypeContext::unannArraytype() {
  return getRuleContext<Java8Parser::UnannArraytypeContext>(0);
}


size_t Java8Parser::UnannReferencetypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannReferencetype;
}


antlrcpp::Any Java8Parser::UnannReferencetypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannReferencetype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannReferencetypeContext* Java8Parser::unannReferencetype() {
  UnannReferencetypeContext *_localctx = _tracker.createInstance<UnannReferencetypeContext>(_ctx, getState());
  enterRule(_localctx, 120, Java8Parser::RuleUnannReferencetype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(921);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(918);
      unannClassOrInterfaceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(919);
      unanntypeVariable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(920);
      unannArraytype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassOrInterfaceTypeContext::UnannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType__2__unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnannInterfaceType__2__unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType__2__unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannInterfaceType__2__unannClassOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext *> Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType__1__unannClassOrInterfaceType() {
  return getRuleContexts<Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext>();
}

Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType__1__unannClassOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext>(i);
}

std::vector<Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext *> Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType__1__unannClassOrInterfaceType() {
  return getRuleContexts<Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext>();
}

Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType__1__unannClassOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext>(i);
}


size_t Java8Parser::UnannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassOrInterfaceType;
}


antlrcpp::Any Java8Parser::UnannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::unannClassOrInterfaceType() {
  UnannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 122, Java8Parser::RuleUnannClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(925);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(923);
      unannClassType__2__unannClassOrInterfaceType();
      break;
    }

    case 2: {
      setState(924);
      unannInterfaceType__2__unannClassOrInterfaceType();
      break;
    }

    }
    setState(931);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(929);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
        case 1: {
          setState(927);
          unannClassType__1__unannClassOrInterfaceType();
          break;
        }

        case 2: {
          setState(928);
          unannInterfaceType__1__unannClassOrInterfaceType();
          break;
        }

        } 
      }
      setState(933);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassTypeContext::UnannClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannClassTypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

tree::TerminalNode* Java8Parser::UnannClassTypeContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::UnannClassTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::UnannClassTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::UnannClassTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType;
}


antlrcpp::Any Java8Parser::UnannClassTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannClassType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannClassTypeContext* Java8Parser::unannClassType() {
  UnannClassTypeContext *_localctx = _tracker.createInstance<UnannClassTypeContext>(_ctx, getState());
  enterRule(_localctx, 124, Java8Parser::RuleUnannClassType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(950);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(934);
      match(Java8Parser::Identifier);
      setState(936);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(935);
        typeArguments();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(938);
      unannClassOrInterfaceType();
      setState(939);
      match(Java8Parser::DOT);
      setState(943);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(940);
        annotation();
        setState(945);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(946);
      match(Java8Parser::Identifier);
      setState(948);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(947);
        typeArguments();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassType__1__unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext::UnannClassType__1__unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType__1__unannClassOrInterfaceType;
}


antlrcpp::Any Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannClassType__1__unannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext* Java8Parser::unannClassType__1__unannClassOrInterfaceType() {
  UnannClassType__1__unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassType__1__unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 126, Java8Parser::RuleUnannClassType__1__unannClassOrInterfaceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(952);
    match(Java8Parser::DOT);
    setState(956);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(953);
      annotation();
      setState(958);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(959);
    match(Java8Parser::Identifier);
    setState(961);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(960);
      typeArguments();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassType__2__unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext::UnannClassType__2__unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType__2__unannClassOrInterfaceType;
}


antlrcpp::Any Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannClassType__2__unannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext* Java8Parser::unannClassType__2__unannClassOrInterfaceType() {
  UnannClassType__2__unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassType__2__unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 128, Java8Parser::RuleUnannClassType__2__unannClassOrInterfaceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(963);
    match(Java8Parser::Identifier);
    setState(965);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(964);
      typeArguments();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceTypeContext::UnannInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassTypeContext* Java8Parser::UnannInterfaceTypeContext::unannClassType() {
  return getRuleContext<Java8Parser::UnannClassTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType;
}


antlrcpp::Any Java8Parser::UnannInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannInterfaceTypeContext* Java8Parser::unannInterfaceType() {
  UnannInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 130, Java8Parser::RuleUnannInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(967);
    unannClassType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceType__1__unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext::UnannInterfaceType__1__unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext* Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext::unannClassType__1__unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType__1__unannClassOrInterfaceTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType__1__unannClassOrInterfaceType;
}


antlrcpp::Any Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannInterfaceType__1__unannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannInterfaceType__1__unannClassOrInterfaceTypeContext* Java8Parser::unannInterfaceType__1__unannClassOrInterfaceType() {
  UnannInterfaceType__1__unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceType__1__unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 132, Java8Parser::RuleUnannInterfaceType__1__unannClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(969);
    unannClassType__1__unannClassOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceType__2__unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceType__2__unannClassOrInterfaceTypeContext::UnannInterfaceType__2__unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext* Java8Parser::UnannInterfaceType__2__unannClassOrInterfaceTypeContext::unannClassType__2__unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType__2__unannClassOrInterfaceTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceType__2__unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType__2__unannClassOrInterfaceType;
}


antlrcpp::Any Java8Parser::UnannInterfaceType__2__unannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannInterfaceType__2__unannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannInterfaceType__2__unannClassOrInterfaceTypeContext* Java8Parser::unannInterfaceType__2__unannClassOrInterfaceType() {
  UnannInterfaceType__2__unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceType__2__unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 134, Java8Parser::RuleUnannInterfaceType__2__unannClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(971);
    unannClassType__2__unannClassOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnanntypeVariableContext ------------------------------------------------------------------

Java8Parser::UnanntypeVariableContext::UnanntypeVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnanntypeVariableContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::UnanntypeVariableContext::getRuleIndex() const {
  return Java8Parser::RuleUnanntypeVariable;
}


antlrcpp::Any Java8Parser::UnanntypeVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnanntypeVariable(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnanntypeVariableContext* Java8Parser::unanntypeVariable() {
  UnanntypeVariableContext *_localctx = _tracker.createInstance<UnanntypeVariableContext>(_ctx, getState());
  enterRule(_localctx, 136, Java8Parser::RuleUnanntypeVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(973);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannArraytypeContext ------------------------------------------------------------------

Java8Parser::UnannArraytypeContext::UnannArraytypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::UnannArraytypeContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

Java8Parser::DimsContext* Java8Parser::UnannArraytypeContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannArraytypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnanntypeVariableContext* Java8Parser::UnannArraytypeContext::unanntypeVariable() {
  return getRuleContext<Java8Parser::UnanntypeVariableContext>(0);
}


size_t Java8Parser::UnannArraytypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannArraytype;
}


antlrcpp::Any Java8Parser::UnannArraytypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnannArraytype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannArraytypeContext* Java8Parser::unannArraytype() {
  UnannArraytypeContext *_localctx = _tracker.createInstance<UnannArraytypeContext>(_ctx, getState());
  enterRule(_localctx, 138, Java8Parser::RuleUnannArraytype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(984);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(975);
      unannPrimitiveType();
      setState(976);
      dims();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(978);
      unannClassOrInterfaceType();
      setState(979);
      dims();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(981);
      unanntypeVariable();
      setState(982);
      dims();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

Java8Parser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodHeaderContext* Java8Parser::MethodDeclarationContext::methodHeader() {
  return getRuleContext<Java8Parser::MethodHeaderContext>(0);
}

Java8Parser::MethodBodyContext* Java8Parser::MethodDeclarationContext::methodBody() {
  return getRuleContext<Java8Parser::MethodBodyContext>(0);
}

std::vector<Java8Parser::MethodModifierContext *> Java8Parser::MethodDeclarationContext::methodModifier() {
  return getRuleContexts<Java8Parser::MethodModifierContext>();
}

Java8Parser::MethodModifierContext* Java8Parser::MethodDeclarationContext::methodModifier(size_t i) {
  return getRuleContext<Java8Parser::MethodModifierContext>(i);
}


size_t Java8Parser::MethodDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleMethodDeclaration;
}


antlrcpp::Any Java8Parser::MethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodDeclarationContext* Java8Parser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 140, Java8Parser::RuleMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(989);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED))) != 0) || _la == Java8Parser::AT) {
      setState(986);
      methodModifier();
      setState(991);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(992);
    methodHeader();
    setState(993);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodModifierContext ------------------------------------------------------------------

Java8Parser::MethodModifierContext::MethodModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::MethodModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::SYNCHRONIZED() {
  return getToken(Java8Parser::SYNCHRONIZED, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::NATIVE() {
  return getToken(Java8Parser::NATIVE, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::STRICTFP() {
  return getToken(Java8Parser::STRICTFP, 0);
}


size_t Java8Parser::MethodModifierContext::getRuleIndex() const {
  return Java8Parser::RuleMethodModifier;
}


antlrcpp::Any Java8Parser::MethodModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodModifierContext* Java8Parser::methodModifier() {
  MethodModifierContext *_localctx = _tracker.createInstance<MethodModifierContext>(_ctx, getState());
  enterRule(_localctx, 142, Java8Parser::RuleMethodModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1005);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(995);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(996);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(997);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(998);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(999);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(1000);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(1001);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 8);
        setState(1002);
        match(Java8Parser::SYNCHRONIZED);
        break;
      }

      case Java8Parser::NATIVE: {
        enterOuterAlt(_localctx, 9);
        setState(1003);
        match(Java8Parser::NATIVE);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 10);
        setState(1004);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodHeaderContext ------------------------------------------------------------------

Java8Parser::MethodHeaderContext::MethodHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ResultContext* Java8Parser::MethodHeaderContext::result() {
  return getRuleContext<Java8Parser::ResultContext>(0);
}

Java8Parser::MethodDeclaratorContext* Java8Parser::MethodHeaderContext::methodDeclarator() {
  return getRuleContext<Java8Parser::MethodDeclaratorContext>(0);
}

Java8Parser::Throws_Context* Java8Parser::MethodHeaderContext::throws_() {
  return getRuleContext<Java8Parser::Throws_Context>(0);
}

Java8Parser::TypeParametersContext* Java8Parser::MethodHeaderContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::MethodHeaderContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::MethodHeaderContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::MethodHeaderContext::getRuleIndex() const {
  return Java8Parser::RuleMethodHeader;
}


antlrcpp::Any Java8Parser::MethodHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodHeader(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodHeaderContext* Java8Parser::methodHeader() {
  MethodHeaderContext *_localctx = _tracker.createInstance<MethodHeaderContext>(_ctx, getState());
  enterRule(_localctx, 144, Java8Parser::RuleMethodHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1024);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT:
      case Java8Parser::VOID:
      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1007);
        result();
        setState(1008);
        methodDeclarator();
        setState(1010);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::THROWS) {
          setState(1009);
          throws_();
        }
        break;
      }

      case Java8Parser::LT: {
        enterOuterAlt(_localctx, 2);
        setState(1012);
        typeParameters();
        setState(1016);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(1013);
          annotation();
          setState(1018);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1019);
        result();
        setState(1020);
        methodDeclarator();
        setState(1022);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::THROWS) {
          setState(1021);
          throws_();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultContext ------------------------------------------------------------------

Java8Parser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::ResultContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

tree::TerminalNode* Java8Parser::ResultContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}


size_t Java8Parser::ResultContext::getRuleIndex() const {
  return Java8Parser::RuleResult;
}


antlrcpp::Any Java8Parser::ResultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitResult(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ResultContext* Java8Parser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 146, Java8Parser::RuleResult);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1028);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT:
      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1026);
        unanntype();
        break;
      }

      case Java8Parser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(1027);
        match(Java8Parser::VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclaratorContext ------------------------------------------------------------------

Java8Parser::MethodDeclaratorContext::MethodDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodDeclaratorContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::MethodDeclaratorContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::MethodDeclaratorContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::FormalParameterListContext* Java8Parser::MethodDeclaratorContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}

Java8Parser::DimsContext* Java8Parser::MethodDeclaratorContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}


size_t Java8Parser::MethodDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleMethodDeclarator;
}


antlrcpp::Any Java8Parser::MethodDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodDeclarator(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodDeclaratorContext* Java8Parser::methodDeclarator() {
  MethodDeclaratorContext *_localctx = _tracker.createInstance<MethodDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 148, Java8Parser::RuleMethodDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1030);
    match(Java8Parser::Identifier);
    setState(1031);
    match(Java8Parser::LPAREN);
    setState(1033);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1032);
      formalParameterList();
    }
    setState(1035);
    match(Java8Parser::RPAREN);
    setState(1037);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(1036);
      dims();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

Java8Parser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ReceiverParameterContext* Java8Parser::FormalParameterListContext::receiverParameter() {
  return getRuleContext<Java8Parser::ReceiverParameterContext>(0);
}

Java8Parser::FormalParametersContext* Java8Parser::FormalParameterListContext::formalParameters() {
  return getRuleContext<Java8Parser::FormalParametersContext>(0);
}

tree::TerminalNode* Java8Parser::FormalParameterListContext::COMMA() {
  return getToken(Java8Parser::COMMA, 0);
}

Java8Parser::LastFormalParameterContext* Java8Parser::FormalParameterListContext::lastFormalParameter() {
  return getRuleContext<Java8Parser::LastFormalParameterContext>(0);
}


size_t Java8Parser::FormalParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameterList;
}


antlrcpp::Any Java8Parser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FormalParameterListContext* Java8Parser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 150, Java8Parser::RuleFormalParameterList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1045);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1039);
      receiverParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1040);
      formalParameters();
      setState(1041);
      match(Java8Parser::COMMA);
      setState(1042);
      lastFormalParameter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1044);
      lastFormalParameter();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

Java8Parser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::FormalParameterContext *> Java8Parser::FormalParametersContext::formalParameter() {
  return getRuleContexts<Java8Parser::FormalParameterContext>();
}

Java8Parser::FormalParameterContext* Java8Parser::FormalParametersContext::formalParameter(size_t i) {
  return getRuleContext<Java8Parser::FormalParameterContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::FormalParametersContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::FormalParametersContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}

Java8Parser::ReceiverParameterContext* Java8Parser::FormalParametersContext::receiverParameter() {
  return getRuleContext<Java8Parser::ReceiverParameterContext>(0);
}


size_t Java8Parser::FormalParametersContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameters;
}


antlrcpp::Any Java8Parser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFormalParameters(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FormalParametersContext* Java8Parser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 152, Java8Parser::RuleFormalParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1063);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1047);
      formalParameter();
      setState(1052);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1048);
          match(Java8Parser::COMMA);
          setState(1049);
          formalParameter(); 
        }
        setState(1054);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1055);
      receiverParameter();
      setState(1060);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1056);
          match(Java8Parser::COMMA);
          setState(1057);
          formalParameter(); 
        }
        setState(1062);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

Java8Parser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::FormalParameterContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::FormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::FormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::FormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::FormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameter;
}


antlrcpp::Any Java8Parser::FormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FormalParameterContext* Java8Parser::formalParameter() {
  FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 154, Java8Parser::RuleFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1068);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1065);
      variableModifier();
      setState(1070);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1071);
    unanntype();
    setState(1072);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableModifierContext ------------------------------------------------------------------

Java8Parser::VariableModifierContext::VariableModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::VariableModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::VariableModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}


size_t Java8Parser::VariableModifierContext::getRuleIndex() const {
  return Java8Parser::RuleVariableModifier;
}


antlrcpp::Any Java8Parser::VariableModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitVariableModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableModifierContext* Java8Parser::variableModifier() {
  VariableModifierContext *_localctx = _tracker.createInstance<VariableModifierContext>(_ctx, getState());
  enterRule(_localctx, 156, Java8Parser::RuleVariableModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1076);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1074);
        annotation();
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 2);
        setState(1075);
        match(Java8Parser::FINAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastFormalParameterContext ------------------------------------------------------------------

Java8Parser::LastFormalParameterContext::LastFormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::LastFormalParameterContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

tree::TerminalNode* Java8Parser::LastFormalParameterContext::ELLIPSIS() {
  return getToken(Java8Parser::ELLIPSIS, 0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::LastFormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::LastFormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::LastFormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::LastFormalParameterContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::LastFormalParameterContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::FormalParameterContext* Java8Parser::LastFormalParameterContext::formalParameter() {
  return getRuleContext<Java8Parser::FormalParameterContext>(0);
}


size_t Java8Parser::LastFormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleLastFormalParameter;
}


antlrcpp::Any Java8Parser::LastFormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLastFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LastFormalParameterContext* Java8Parser::lastFormalParameter() {
  LastFormalParameterContext *_localctx = _tracker.createInstance<LastFormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 158, Java8Parser::RuleLastFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1095);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1081);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
        setState(1078);
        variableModifier();
        setState(1083);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1084);
      unanntype();
      setState(1088);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(1085);
        annotation();
        setState(1090);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1091);
      match(Java8Parser::ELLIPSIS);
      setState(1092);
      variableDeclaratorId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1094);
      formalParameter();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReceiverParameterContext ------------------------------------------------------------------

Java8Parser::ReceiverParameterContext::ReceiverParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::ReceiverParameterContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

tree::TerminalNode* Java8Parser::ReceiverParameterContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::ReceiverParameterContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::ReceiverParameterContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ReceiverParameterContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ReceiverParameterContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::ReceiverParameterContext::getRuleIndex() const {
  return Java8Parser::RuleReceiverParameter;
}


antlrcpp::Any Java8Parser::ReceiverParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitReceiverParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ReceiverParameterContext* Java8Parser::receiverParameter() {
  ReceiverParameterContext *_localctx = _tracker.createInstance<ReceiverParameterContext>(_ctx, getState());
  enterRule(_localctx, 160, Java8Parser::RuleReceiverParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(1097);
      annotation();
      setState(1102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1103);
    unanntype();

    setState(1104);
    match(Java8Parser::Identifier);
    setState(1105);
    match(Java8Parser::DOT);
    setState(1107);
    match(Java8Parser::THIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Throws_Context ------------------------------------------------------------------

Java8Parser::Throws_Context::Throws_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::Throws_Context::THROWS() {
  return getToken(Java8Parser::THROWS, 0);
}

Java8Parser::ExceptiontypeListContext* Java8Parser::Throws_Context::exceptiontypeList() {
  return getRuleContext<Java8Parser::ExceptiontypeListContext>(0);
}


size_t Java8Parser::Throws_Context::getRuleIndex() const {
  return Java8Parser::RuleThrows_;
}


antlrcpp::Any Java8Parser::Throws_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitThrows_(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::Throws_Context* Java8Parser::throws_() {
  Throws_Context *_localctx = _tracker.createInstance<Throws_Context>(_ctx, getState());
  enterRule(_localctx, 162, Java8Parser::RuleThrows_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1109);
    match(Java8Parser::THROWS);
    setState(1110);
    exceptiontypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptiontypeListContext ------------------------------------------------------------------

Java8Parser::ExceptiontypeListContext::ExceptiontypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ExceptiontypeContext *> Java8Parser::ExceptiontypeListContext::exceptiontype() {
  return getRuleContexts<Java8Parser::ExceptiontypeContext>();
}

Java8Parser::ExceptiontypeContext* Java8Parser::ExceptiontypeListContext::exceptiontype(size_t i) {
  return getRuleContext<Java8Parser::ExceptiontypeContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ExceptiontypeListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::ExceptiontypeListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::ExceptiontypeListContext::getRuleIndex() const {
  return Java8Parser::RuleExceptiontypeList;
}


antlrcpp::Any Java8Parser::ExceptiontypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitExceptiontypeList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExceptiontypeListContext* Java8Parser::exceptiontypeList() {
  ExceptiontypeListContext *_localctx = _tracker.createInstance<ExceptiontypeListContext>(_ctx, getState());
  enterRule(_localctx, 164, Java8Parser::RuleExceptiontypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1112);
    exceptiontype();
    setState(1117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1113);
      match(Java8Parser::COMMA);
      setState(1114);
      exceptiontype();
      setState(1119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptiontypeContext ------------------------------------------------------------------

Java8Parser::ExceptiontypeContext::ExceptiontypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClasstypeContext* Java8Parser::ExceptiontypeContext::classtype() {
  return getRuleContext<Java8Parser::ClasstypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ExceptiontypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}


size_t Java8Parser::ExceptiontypeContext::getRuleIndex() const {
  return Java8Parser::RuleExceptiontype;
}


antlrcpp::Any Java8Parser::ExceptiontypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitExceptiontype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExceptiontypeContext* Java8Parser::exceptiontype() {
  ExceptiontypeContext *_localctx = _tracker.createInstance<ExceptiontypeContext>(_ctx, getState());
  enterRule(_localctx, 166, Java8Parser::RuleExceptiontype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1120);
      classtype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1121);
      typeVariable();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodBodyContext ------------------------------------------------------------------

Java8Parser::MethodBodyContext::MethodBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::MethodBodyContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

tree::TerminalNode* Java8Parser::MethodBodyContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::MethodBodyContext::getRuleIndex() const {
  return Java8Parser::RuleMethodBody;
}


antlrcpp::Any Java8Parser::MethodBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodBodyContext* Java8Parser::methodBody() {
  MethodBodyContext *_localctx = _tracker.createInstance<MethodBodyContext>(_ctx, getState());
  enterRule(_localctx, 168, Java8Parser::RuleMethodBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1124);
        block();
        break;
      }

      case Java8Parser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(1125);
        match(Java8Parser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstanceInitializerContext ------------------------------------------------------------------

Java8Parser::InstanceInitializerContext::InstanceInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::InstanceInitializerContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::InstanceInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleInstanceInitializer;
}


antlrcpp::Any Java8Parser::InstanceInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInstanceInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InstanceInitializerContext* Java8Parser::instanceInitializer() {
  InstanceInitializerContext *_localctx = _tracker.createInstance<InstanceInitializerContext>(_ctx, getState());
  enterRule(_localctx, 170, Java8Parser::RuleInstanceInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1128);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticInitializerContext ------------------------------------------------------------------

Java8Parser::StaticInitializerContext::StaticInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::StaticInitializerContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

Java8Parser::BlockContext* Java8Parser::StaticInitializerContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::StaticInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleStaticInitializer;
}


antlrcpp::Any Java8Parser::StaticInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitStaticInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StaticInitializerContext* Java8Parser::staticInitializer() {
  StaticInitializerContext *_localctx = _tracker.createInstance<StaticInitializerContext>(_ctx, getState());
  enterRule(_localctx, 172, Java8Parser::RuleStaticInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1130);
    match(Java8Parser::STATIC);
    setState(1131);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

Java8Parser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConstructorDeclaratorContext* Java8Parser::ConstructorDeclarationContext::constructorDeclarator() {
  return getRuleContext<Java8Parser::ConstructorDeclaratorContext>(0);
}

Java8Parser::ConstructorBodyContext* Java8Parser::ConstructorDeclarationContext::constructorBody() {
  return getRuleContext<Java8Parser::ConstructorBodyContext>(0);
}

std::vector<Java8Parser::ConstructionModifierContext *> Java8Parser::ConstructorDeclarationContext::constructionModifier() {
  return getRuleContexts<Java8Parser::ConstructionModifierContext>();
}

Java8Parser::ConstructionModifierContext* Java8Parser::ConstructorDeclarationContext::constructionModifier(size_t i) {
  return getRuleContext<Java8Parser::ConstructionModifierContext>(i);
}

Java8Parser::Throws_Context* Java8Parser::ConstructorDeclarationContext::throws_() {
  return getRuleContext<Java8Parser::Throws_Context>(0);
}


size_t Java8Parser::ConstructorDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorDeclaration;
}


antlrcpp::Any Java8Parser::ConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConstructorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstructorDeclarationContext* Java8Parser::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 174, Java8Parser::RuleConstructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC))) != 0) || _la == Java8Parser::AT) {
      setState(1133);
      constructionModifier();
      setState(1138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1139);
    constructorDeclarator();
    setState(1141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::THROWS) {
      setState(1140);
      throws_();
    }
    setState(1143);
    constructorBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructionModifierContext ------------------------------------------------------------------

Java8Parser::ConstructionModifierContext::ConstructionModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ConstructionModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::ConstructionModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::ConstructionModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::ConstructionModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}


size_t Java8Parser::ConstructionModifierContext::getRuleIndex() const {
  return Java8Parser::RuleConstructionModifier;
}


antlrcpp::Any Java8Parser::ConstructionModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConstructionModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstructionModifierContext* Java8Parser::constructionModifier() {
  ConstructionModifierContext *_localctx = _tracker.createInstance<ConstructionModifierContext>(_ctx, getState());
  enterRule(_localctx, 176, Java8Parser::RuleConstructionModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1149);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1145);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1146);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(1147);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1148);
        match(Java8Parser::PRIVATE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclaratorContext ------------------------------------------------------------------

Java8Parser::ConstructorDeclaratorContext::ConstructorDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SimpletypeNameContext* Java8Parser::ConstructorDeclaratorContext::simpletypeName() {
  return getRuleContext<Java8Parser::SimpletypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::ConstructorDeclaratorContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ConstructorDeclaratorContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeParametersContext* Java8Parser::ConstructorDeclaratorContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::FormalParameterListContext* Java8Parser::ConstructorDeclaratorContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}


size_t Java8Parser::ConstructorDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorDeclarator;
}


antlrcpp::Any Java8Parser::ConstructorDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConstructorDeclarator(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstructorDeclaratorContext* Java8Parser::constructorDeclarator() {
  ConstructorDeclaratorContext *_localctx = _tracker.createInstance<ConstructorDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 178, Java8Parser::RuleConstructorDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(1151);
      typeParameters();
    }
    setState(1154);
    simpletypeName();
    setState(1155);
    match(Java8Parser::LPAREN);
    setState(1157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1156);
      formalParameterList();
    }
    setState(1159);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletypeNameContext ------------------------------------------------------------------

Java8Parser::SimpletypeNameContext::SimpletypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SimpletypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::SimpletypeNameContext::getRuleIndex() const {
  return Java8Parser::RuleSimpletypeName;
}


antlrcpp::Any Java8Parser::SimpletypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSimpletypeName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SimpletypeNameContext* Java8Parser::simpletypeName() {
  SimpletypeNameContext *_localctx = _tracker.createInstance<SimpletypeNameContext>(_ctx, getState());
  enterRule(_localctx, 180, Java8Parser::RuleSimpletypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1161);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorBodyContext ------------------------------------------------------------------

Java8Parser::ConstructorBodyContext::ConstructorBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ConstructorBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::ConstructorBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::ExplicitconstructorInvocationContext* Java8Parser::ConstructorBodyContext::explicitconstructorInvocation() {
  return getRuleContext<Java8Parser::ExplicitconstructorInvocationContext>(0);
}

Java8Parser::BlockStatementsContext* Java8Parser::ConstructorBodyContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::ConstructorBodyContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorBody;
}


antlrcpp::Any Java8Parser::ConstructorBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConstructorBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstructorBodyContext* Java8Parser::constructorBody() {
  ConstructorBodyContext *_localctx = _tracker.createInstance<ConstructorBodyContext>(_ctx, getState());
  enterRule(_localctx, 182, Java8Parser::RuleConstructorBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1163);
    match(Java8Parser::LBRACE);
    setState(1165);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      setState(1164);
      explicitconstructorInvocation();
      break;
    }

    }
    setState(1168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1167);
      blockStatements();
    }
    setState(1170);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitconstructorInvocationContext ------------------------------------------------------------------

Java8Parser::ExplicitconstructorInvocationContext::ExplicitconstructorInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ExplicitconstructorInvocationContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::ExplicitconstructorInvocationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ExplicitconstructorInvocationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

tree::TerminalNode* Java8Parser::ExplicitconstructorInvocationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ExplicitconstructorInvocationContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ExplicitconstructorInvocationContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

tree::TerminalNode* Java8Parser::ExplicitconstructorInvocationContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ExplicitconstructorInvocationContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::ExplicitconstructorInvocationContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

Java8Parser::PrimaryContext* Java8Parser::ExplicitconstructorInvocationContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}


size_t Java8Parser::ExplicitconstructorInvocationContext::getRuleIndex() const {
  return Java8Parser::RuleExplicitconstructorInvocation;
}


antlrcpp::Any Java8Parser::ExplicitconstructorInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitExplicitconstructorInvocation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExplicitconstructorInvocationContext* Java8Parser::explicitconstructorInvocation() {
  ExplicitconstructorInvocationContext *_localctx = _tracker.createInstance<ExplicitconstructorInvocationContext>(_ctx, getState());
  enterRule(_localctx, 184, Java8Parser::RuleExplicitconstructorInvocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1173);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1172);
        typeArguments();
      }
      setState(1175);
      match(Java8Parser::THIS);
      setState(1176);
      match(Java8Parser::LPAREN);
      setState(1178);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1177);
        argumentList();
      }
      setState(1180);
      match(Java8Parser::RPAREN);
      setState(1181);
      match(Java8Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1183);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1182);
        typeArguments();
      }
      setState(1185);
      match(Java8Parser::SUPER);
      setState(1186);
      match(Java8Parser::LPAREN);
      setState(1188);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1187);
        argumentList();
      }
      setState(1190);
      match(Java8Parser::RPAREN);
      setState(1191);
      match(Java8Parser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1192);
      expressionName();
      setState(1193);
      match(Java8Parser::DOT);
      setState(1195);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1194);
        typeArguments();
      }
      setState(1197);
      match(Java8Parser::SUPER);
      setState(1198);
      match(Java8Parser::LPAREN);
      setState(1200);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1199);
        argumentList();
      }
      setState(1202);
      match(Java8Parser::RPAREN);
      setState(1203);
      match(Java8Parser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1205);
      primary();
      setState(1206);
      match(Java8Parser::DOT);
      setState(1208);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1207);
        typeArguments();
      }
      setState(1210);
      match(Java8Parser::SUPER);
      setState(1211);
      match(Java8Parser::LPAREN);
      setState(1213);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1212);
        argumentList();
      }
      setState(1215);
      match(Java8Parser::RPAREN);
      setState(1216);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

Java8Parser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumDeclarationContext::ENUM() {
  return getToken(Java8Parser::ENUM, 0);
}

tree::TerminalNode* Java8Parser::EnumDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::EnumBodyContext* Java8Parser::EnumDeclarationContext::enumBody() {
  return getRuleContext<Java8Parser::EnumBodyContext>(0);
}

std::vector<Java8Parser::ClassModifierContext *> Java8Parser::EnumDeclarationContext::classModifier() {
  return getRuleContexts<Java8Parser::ClassModifierContext>();
}

Java8Parser::ClassModifierContext* Java8Parser::EnumDeclarationContext::classModifier(size_t i) {
  return getRuleContext<Java8Parser::ClassModifierContext>(i);
}

Java8Parser::SuperinterfacesContext* Java8Parser::EnumDeclarationContext::superinterfaces() {
  return getRuleContext<Java8Parser::SuperinterfacesContext>(0);
}


size_t Java8Parser::EnumDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleEnumDeclaration;
}


antlrcpp::Any Java8Parser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumDeclarationContext* Java8Parser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 186, Java8Parser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1223);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1220);
      classModifier();
      setState(1225);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1226);
    match(Java8Parser::ENUM);
    setState(1227);
    match(Java8Parser::Identifier);
    setState(1229);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::IMPLEMENTS) {
      setState(1228);
      superinterfaces();
    }
    setState(1231);
    enumBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

Java8Parser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::EnumBodyContext::COMMA() {
  return getToken(Java8Parser::COMMA, 0);
}

tree::TerminalNode* Java8Parser::EnumBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::EnumconstantListContext* Java8Parser::EnumBodyContext::enumconstantList() {
  return getRuleContext<Java8Parser::EnumconstantListContext>(0);
}

Java8Parser::EnumBodyDeclarationsContext* Java8Parser::EnumBodyContext::enumBodyDeclarations() {
  return getRuleContext<Java8Parser::EnumBodyDeclarationsContext>(0);
}


size_t Java8Parser::EnumBodyContext::getRuleIndex() const {
  return Java8Parser::RuleEnumBody;
}


antlrcpp::Any Java8Parser::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumBodyContext* Java8Parser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 188, Java8Parser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1233);
    match(Java8Parser::LBRACE);
    setState(1235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1234);
      enumconstantList();
    }
    setState(1237);
    match(Java8Parser::COMMA);
    setState(1239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::SEMI) {
      setState(1238);
      enumBodyDeclarations();
    }
    setState(1241);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumconstantListContext ------------------------------------------------------------------

Java8Parser::EnumconstantListContext::EnumconstantListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::EnumconstantContext *> Java8Parser::EnumconstantListContext::enumconstant() {
  return getRuleContexts<Java8Parser::EnumconstantContext>();
}

Java8Parser::EnumconstantContext* Java8Parser::EnumconstantListContext::enumconstant(size_t i) {
  return getRuleContext<Java8Parser::EnumconstantContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::EnumconstantListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::EnumconstantListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::EnumconstantListContext::getRuleIndex() const {
  return Java8Parser::RuleEnumconstantList;
}


antlrcpp::Any Java8Parser::EnumconstantListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnumconstantList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumconstantListContext* Java8Parser::enumconstantList() {
  EnumconstantListContext *_localctx = _tracker.createInstance<EnumconstantListContext>(_ctx, getState());
  enterRule(_localctx, 190, Java8Parser::RuleEnumconstantList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1243);
    enumconstant();
    setState(1248);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1244);
        match(Java8Parser::COMMA);
        setState(1245);
        enumconstant(); 
      }
      setState(1250);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumconstantContext ------------------------------------------------------------------

Java8Parser::EnumconstantContext::EnumconstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumconstantContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::EnumconstantModifierContext *> Java8Parser::EnumconstantContext::enumconstantModifier() {
  return getRuleContexts<Java8Parser::EnumconstantModifierContext>();
}

Java8Parser::EnumconstantModifierContext* Java8Parser::EnumconstantContext::enumconstantModifier(size_t i) {
  return getRuleContext<Java8Parser::EnumconstantModifierContext>(i);
}

tree::TerminalNode* Java8Parser::EnumconstantContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::EnumconstantContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassBodyContext* Java8Parser::EnumconstantContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::EnumconstantContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}


size_t Java8Parser::EnumconstantContext::getRuleIndex() const {
  return Java8Parser::RuleEnumconstant;
}


antlrcpp::Any Java8Parser::EnumconstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnumconstant(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumconstantContext* Java8Parser::enumconstant() {
  EnumconstantContext *_localctx = _tracker.createInstance<EnumconstantContext>(_ctx, getState());
  enterRule(_localctx, 192, Java8Parser::RuleEnumconstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1254);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(1251);
      enumconstantModifier();
      setState(1256);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1257);
    match(Java8Parser::Identifier);
    setState(1263);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LPAREN) {
      setState(1258);
      match(Java8Parser::LPAREN);
      setState(1260);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1259);
        argumentList();
      }
      setState(1262);
      match(Java8Parser::RPAREN);
    }
    setState(1266);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACE) {
      setState(1265);
      classBody();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumconstantModifierContext ------------------------------------------------------------------

Java8Parser::EnumconstantModifierContext::EnumconstantModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::EnumconstantModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::EnumconstantModifierContext::getRuleIndex() const {
  return Java8Parser::RuleEnumconstantModifier;
}


antlrcpp::Any Java8Parser::EnumconstantModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnumconstantModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumconstantModifierContext* Java8Parser::enumconstantModifier() {
  EnumconstantModifierContext *_localctx = _tracker.createInstance<EnumconstantModifierContext>(_ctx, getState());
  enterRule(_localctx, 194, Java8Parser::RuleEnumconstantModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1268);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyDeclarationsContext ------------------------------------------------------------------

Java8Parser::EnumBodyDeclarationsContext::EnumBodyDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumBodyDeclarationsContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::ClassBodyDeclarationContext *> Java8Parser::EnumBodyDeclarationsContext::classBodyDeclaration() {
  return getRuleContexts<Java8Parser::ClassBodyDeclarationContext>();
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::EnumBodyDeclarationsContext::classBodyDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ClassBodyDeclarationContext>(i);
}


size_t Java8Parser::EnumBodyDeclarationsContext::getRuleIndex() const {
  return Java8Parser::RuleEnumBodyDeclarations;
}


antlrcpp::Any Java8Parser::EnumBodyDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnumBodyDeclarations(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumBodyDeclarationsContext* Java8Parser::enumBodyDeclarations() {
  EnumBodyDeclarationsContext *_localctx = _tracker.createInstance<EnumBodyDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 196, Java8Parser::RuleEnumBodyDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1270);
    match(Java8Parser::SEMI);
    setState(1274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::VOLATILE)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(1271);
      classBodyDeclaration();
      setState(1276);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceDeclarationContext::InterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalInterfaceDeclarationContext* Java8Parser::InterfaceDeclarationContext::normalInterfaceDeclaration() {
  return getRuleContext<Java8Parser::NormalInterfaceDeclarationContext>(0);
}

Java8Parser::AnnotationtypeDeclarationContext* Java8Parser::InterfaceDeclarationContext::annotationtypeDeclaration() {
  return getRuleContext<Java8Parser::AnnotationtypeDeclarationContext>(0);
}


size_t Java8Parser::InterfaceDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceDeclaration;
}


antlrcpp::Any Java8Parser::InterfaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfaceDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::interfaceDeclaration() {
  InterfaceDeclarationContext *_localctx = _tracker.createInstance<InterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 198, Java8Parser::RuleInterfaceDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1279);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1277);
      normalInterfaceDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1278);
      annotationtypeDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalInterfaceDeclarationContext ------------------------------------------------------------------

Java8Parser::NormalInterfaceDeclarationContext::NormalInterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::NormalInterfaceDeclarationContext::INTERFACE() {
  return getToken(Java8Parser::INTERFACE, 0);
}

tree::TerminalNode* Java8Parser::NormalInterfaceDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::InterfaceBodyContext* Java8Parser::NormalInterfaceDeclarationContext::interfaceBody() {
  return getRuleContext<Java8Parser::InterfaceBodyContext>(0);
}

std::vector<Java8Parser::InterfaceModifierContext *> Java8Parser::NormalInterfaceDeclarationContext::interfaceModifier() {
  return getRuleContexts<Java8Parser::InterfaceModifierContext>();
}

Java8Parser::InterfaceModifierContext* Java8Parser::NormalInterfaceDeclarationContext::interfaceModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceModifierContext>(i);
}

Java8Parser::TypeParametersContext* Java8Parser::NormalInterfaceDeclarationContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::ExtendsInterfacesContext* Java8Parser::NormalInterfaceDeclarationContext::extendsInterfaces() {
  return getRuleContext<Java8Parser::ExtendsInterfacesContext>(0);
}


size_t Java8Parser::NormalInterfaceDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalInterfaceDeclaration;
}


antlrcpp::Any Java8Parser::NormalInterfaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitNormalInterfaceDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::NormalInterfaceDeclarationContext* Java8Parser::normalInterfaceDeclaration() {
  NormalInterfaceDeclarationContext *_localctx = _tracker.createInstance<NormalInterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 200, Java8Parser::RuleNormalInterfaceDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1281);
      interfaceModifier();
      setState(1286);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1287);
    match(Java8Parser::INTERFACE);
    setState(1288);
    match(Java8Parser::Identifier);
    setState(1290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(1289);
      typeParameters();
    }
    setState(1293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(1292);
      extendsInterfaces();
    }
    setState(1295);
    interfaceBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceModifierContext ------------------------------------------------------------------

Java8Parser::InterfaceModifierContext::InterfaceModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::InterfaceModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::STRICTFP() {
  return getToken(Java8Parser::STRICTFP, 0);
}


size_t Java8Parser::InterfaceModifierContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceModifier;
}


antlrcpp::Any Java8Parser::InterfaceModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfaceModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceModifierContext* Java8Parser::interfaceModifier() {
  InterfaceModifierContext *_localctx = _tracker.createInstance<InterfaceModifierContext>(_ctx, getState());
  enterRule(_localctx, 202, Java8Parser::RuleInterfaceModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1297);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1298);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(1299);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1300);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(1301);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(1302);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 7);
        setState(1303);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtendsInterfacesContext ------------------------------------------------------------------

Java8Parser::ExtendsInterfacesContext::ExtendsInterfacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ExtendsInterfacesContext::EXTENDS() {
  return getToken(Java8Parser::EXTENDS, 0);
}

Java8Parser::InterfacetypeListContext* Java8Parser::ExtendsInterfacesContext::interfacetypeList() {
  return getRuleContext<Java8Parser::InterfacetypeListContext>(0);
}


size_t Java8Parser::ExtendsInterfacesContext::getRuleIndex() const {
  return Java8Parser::RuleExtendsInterfaces;
}


antlrcpp::Any Java8Parser::ExtendsInterfacesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitExtendsInterfaces(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExtendsInterfacesContext* Java8Parser::extendsInterfaces() {
  ExtendsInterfacesContext *_localctx = _tracker.createInstance<ExtendsInterfacesContext>(_ctx, getState());
  enterRule(_localctx, 204, Java8Parser::RuleExtendsInterfaces);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1306);
    match(Java8Parser::EXTENDS);
    setState(1307);
    interfacetypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBodyContext ------------------------------------------------------------------

Java8Parser::InterfaceBodyContext::InterfaceBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::InterfaceBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::InterfaceBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

std::vector<Java8Parser::InterfaceMemberDeclarationContext *> Java8Parser::InterfaceBodyContext::interfaceMemberDeclaration() {
  return getRuleContexts<Java8Parser::InterfaceMemberDeclarationContext>();
}

Java8Parser::InterfaceMemberDeclarationContext* Java8Parser::InterfaceBodyContext::interfaceMemberDeclaration(size_t i) {
  return getRuleContext<Java8Parser::InterfaceMemberDeclarationContext>(i);
}


size_t Java8Parser::InterfaceBodyContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceBody;
}


antlrcpp::Any Java8Parser::InterfaceBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfaceBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceBodyContext* Java8Parser::interfaceBody() {
  InterfaceBodyContext *_localctx = _tracker.createInstance<InterfaceBodyContext>(_ctx, getState());
  enterRule(_localctx, 206, Java8Parser::RuleInterfaceBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1309);
    match(Java8Parser::LBRACE);
    setState(1313);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DEFAULT)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(1310);
      interfaceMemberDeclaration();
      setState(1315);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1316);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceMemberDeclarationContext::InterfaceMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConstantDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::constantDeclaration() {
  return getRuleContext<Java8Parser::ConstantDeclarationContext>(0);
}

Java8Parser::InterfaceMethodDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::interfaceMethodDeclaration() {
  return getRuleContext<Java8Parser::InterfaceMethodDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::InterfaceMemberDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::InterfaceMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMemberDeclaration;
}


antlrcpp::Any Java8Parser::InterfaceMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfaceMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceMemberDeclarationContext* Java8Parser::interfaceMemberDeclaration() {
  InterfaceMemberDeclarationContext *_localctx = _tracker.createInstance<InterfaceMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 208, Java8Parser::RuleInterfaceMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1318);
      constantDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1319);
      interfaceMethodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1320);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1321);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1322);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclarationContext ------------------------------------------------------------------

Java8Parser::ConstantDeclarationContext::ConstantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::ConstantDeclarationContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::ConstantDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

tree::TerminalNode* Java8Parser::ConstantDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::ConstantModifierContext *> Java8Parser::ConstantDeclarationContext::constantModifier() {
  return getRuleContexts<Java8Parser::ConstantModifierContext>();
}

Java8Parser::ConstantModifierContext* Java8Parser::ConstantDeclarationContext::constantModifier(size_t i) {
  return getRuleContext<Java8Parser::ConstantModifierContext>(i);
}


size_t Java8Parser::ConstantDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleConstantDeclaration;
}


antlrcpp::Any Java8Parser::ConstantDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConstantDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstantDeclarationContext* Java8Parser::constantDeclaration() {
  ConstantDeclarationContext *_localctx = _tracker.createInstance<ConstantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 210, Java8Parser::RuleConstantDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1328);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC))) != 0) || _la == Java8Parser::AT) {
      setState(1325);
      constantModifier();
      setState(1330);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1331);
    unanntype();
    setState(1332);
    variableDeclaratorList();
    setState(1333);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantModifierContext ------------------------------------------------------------------

Java8Parser::ConstantModifierContext::ConstantModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ConstantModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::ConstantModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::ConstantModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::ConstantModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}


size_t Java8Parser::ConstantModifierContext::getRuleIndex() const {
  return Java8Parser::RuleConstantModifier;
}


antlrcpp::Any Java8Parser::ConstantModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConstantModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstantModifierContext* Java8Parser::constantModifier() {
  ConstantModifierContext *_localctx = _tracker.createInstance<ConstantModifierContext>(_ctx, getState());
  enterRule(_localctx, 212, Java8Parser::RuleConstantModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1335);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1336);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 3);
        setState(1337);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 4);
        setState(1338);
        match(Java8Parser::FINAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceMethodDeclarationContext::InterfaceMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodHeaderContext* Java8Parser::InterfaceMethodDeclarationContext::methodHeader() {
  return getRuleContext<Java8Parser::MethodHeaderContext>(0);
}

Java8Parser::MethodBodyContext* Java8Parser::InterfaceMethodDeclarationContext::methodBody() {
  return getRuleContext<Java8Parser::MethodBodyContext>(0);
}

std::vector<Java8Parser::InterfaceMethodModifierContext *> Java8Parser::InterfaceMethodDeclarationContext::interfaceMethodModifier() {
  return getRuleContexts<Java8Parser::InterfaceMethodModifierContext>();
}

Java8Parser::InterfaceMethodModifierContext* Java8Parser::InterfaceMethodDeclarationContext::interfaceMethodModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceMethodModifierContext>(i);
}


size_t Java8Parser::InterfaceMethodDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMethodDeclaration;
}


antlrcpp::Any Java8Parser::InterfaceMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfaceMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceMethodDeclarationContext* Java8Parser::interfaceMethodDeclaration() {
  InterfaceMethodDeclarationContext *_localctx = _tracker.createInstance<InterfaceMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 214, Java8Parser::RuleInterfaceMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1344);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::DEFAULT)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1341);
      interfaceMethodModifier();
      setState(1346);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1347);
    methodHeader();
    setState(1348);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodModifierContext ------------------------------------------------------------------

Java8Parser::InterfaceMethodModifierContext::InterfaceMethodModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::InterfaceMethodModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::DEFAULT() {
  return getToken(Java8Parser::DEFAULT, 0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::STRICTFP() {
  return getToken(Java8Parser::STRICTFP, 0);
}


size_t Java8Parser::InterfaceMethodModifierContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMethodModifier;
}


antlrcpp::Any Java8Parser::InterfaceMethodModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInterfaceMethodModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceMethodModifierContext* Java8Parser::interfaceMethodModifier() {
  InterfaceMethodModifierContext *_localctx = _tracker.createInstance<InterfaceMethodModifierContext>(_ctx, getState());
  enterRule(_localctx, 216, Java8Parser::RuleInterfaceMethodModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1356);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1350);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1351);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(1352);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::DEFAULT: {
        enterOuterAlt(_localctx, 4);
        setState(1353);
        match(Java8Parser::DEFAULT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(1354);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 6);
        setState(1355);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationtypeDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationtypeDeclarationContext::AnnotationtypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AnnotationtypeDeclarationContext::AT() {
  return getToken(Java8Parser::AT, 0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeDeclarationContext::INTERFACE() {
  return getToken(Java8Parser::INTERFACE, 0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AnnotationtypeBodyContext* Java8Parser::AnnotationtypeDeclarationContext::annotationtypeBody() {
  return getRuleContext<Java8Parser::AnnotationtypeBodyContext>(0);
}

std::vector<Java8Parser::InterfaceModifierContext *> Java8Parser::AnnotationtypeDeclarationContext::interfaceModifier() {
  return getRuleContexts<Java8Parser::InterfaceModifierContext>();
}

Java8Parser::InterfaceModifierContext* Java8Parser::AnnotationtypeDeclarationContext::interfaceModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceModifierContext>(i);
}


size_t Java8Parser::AnnotationtypeDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationtypeDeclaration;
}


antlrcpp::Any Java8Parser::AnnotationtypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAnnotationtypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationtypeDeclarationContext* Java8Parser::annotationtypeDeclaration() {
  AnnotationtypeDeclarationContext *_localctx = _tracker.createInstance<AnnotationtypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 218, Java8Parser::RuleAnnotationtypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1361);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1358);
        interfaceModifier(); 
      }
      setState(1363);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
    }
    setState(1364);
    match(Java8Parser::AT);
    setState(1365);
    match(Java8Parser::INTERFACE);
    setState(1366);
    match(Java8Parser::Identifier);
    setState(1367);
    annotationtypeBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationtypeBodyContext ------------------------------------------------------------------

Java8Parser::AnnotationtypeBodyContext::AnnotationtypeBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AnnotationtypeBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

std::vector<Java8Parser::AnnotationtypeMemberDeclarationContext *> Java8Parser::AnnotationtypeBodyContext::annotationtypeMemberDeclaration() {
  return getRuleContexts<Java8Parser::AnnotationtypeMemberDeclarationContext>();
}

Java8Parser::AnnotationtypeMemberDeclarationContext* Java8Parser::AnnotationtypeBodyContext::annotationtypeMemberDeclaration(size_t i) {
  return getRuleContext<Java8Parser::AnnotationtypeMemberDeclarationContext>(i);
}


size_t Java8Parser::AnnotationtypeBodyContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationtypeBody;
}


antlrcpp::Any Java8Parser::AnnotationtypeBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAnnotationtypeBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationtypeBodyContext* Java8Parser::annotationtypeBody() {
  AnnotationtypeBodyContext *_localctx = _tracker.createInstance<AnnotationtypeBodyContext>(_ctx, getState());
  enterRule(_localctx, 220, Java8Parser::RuleAnnotationtypeBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1369);
    match(Java8Parser::LBRACE);
    setState(1373);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SEMI))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1370);
      annotationtypeMemberDeclaration();
      setState(1375);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1376);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationtypeMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationtypeMemberDeclarationContext::AnnotationtypeMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationtypeElementDeclarationContext* Java8Parser::AnnotationtypeMemberDeclarationContext::annotationtypeElementDeclaration() {
  return getRuleContext<Java8Parser::AnnotationtypeElementDeclarationContext>(0);
}

Java8Parser::ConstantDeclarationContext* Java8Parser::AnnotationtypeMemberDeclarationContext::constantDeclaration() {
  return getRuleContext<Java8Parser::ConstantDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::AnnotationtypeMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::AnnotationtypeMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeMemberDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::AnnotationtypeMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationtypeMemberDeclaration;
}


antlrcpp::Any Java8Parser::AnnotationtypeMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAnnotationtypeMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationtypeMemberDeclarationContext* Java8Parser::annotationtypeMemberDeclaration() {
  AnnotationtypeMemberDeclarationContext *_localctx = _tracker.createInstance<AnnotationtypeMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 222, Java8Parser::RuleAnnotationtypeMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1383);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1378);
      annotationtypeElementDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1379);
      constantDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1380);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1381);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1382);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationtypeElementDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationtypeElementDeclarationContext::AnnotationtypeElementDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::AnnotationtypeElementDeclarationContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeElementDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeElementDeclarationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeElementDeclarationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeElementDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::AnnotationtypeElementModifierContext *> Java8Parser::AnnotationtypeElementDeclarationContext::annotationtypeElementModifier() {
  return getRuleContexts<Java8Parser::AnnotationtypeElementModifierContext>();
}

Java8Parser::AnnotationtypeElementModifierContext* Java8Parser::AnnotationtypeElementDeclarationContext::annotationtypeElementModifier(size_t i) {
  return getRuleContext<Java8Parser::AnnotationtypeElementModifierContext>(i);
}

Java8Parser::DimsContext* Java8Parser::AnnotationtypeElementDeclarationContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::DefaultValueContext* Java8Parser::AnnotationtypeElementDeclarationContext::defaultValue() {
  return getRuleContext<Java8Parser::DefaultValueContext>(0);
}


size_t Java8Parser::AnnotationtypeElementDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationtypeElementDeclaration;
}


antlrcpp::Any Java8Parser::AnnotationtypeElementDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAnnotationtypeElementDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationtypeElementDeclarationContext* Java8Parser::annotationtypeElementDeclaration() {
  AnnotationtypeElementDeclarationContext *_localctx = _tracker.createInstance<AnnotationtypeElementDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 224, Java8Parser::RuleAnnotationtypeElementDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1388);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::ABSTRACT

    || _la == Java8Parser::PUBLIC || _la == Java8Parser::AT) {
      setState(1385);
      annotationtypeElementModifier();
      setState(1390);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1391);
    unanntype();
    setState(1392);
    match(Java8Parser::Identifier);
    setState(1393);
    match(Java8Parser::LPAREN);
    setState(1394);
    match(Java8Parser::RPAREN);
    setState(1396);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(1395);
      dims();
    }
    setState(1399);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::DEFAULT) {
      setState(1398);
      defaultValue();
    }
    setState(1401);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationtypeElementModifierContext ------------------------------------------------------------------

Java8Parser::AnnotationtypeElementModifierContext::AnnotationtypeElementModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::AnnotationtypeElementModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeElementModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::AnnotationtypeElementModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}


size_t Java8Parser::AnnotationtypeElementModifierContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationtypeElementModifier;
}


antlrcpp::Any Java8Parser::AnnotationtypeElementModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAnnotationtypeElementModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationtypeElementModifierContext* Java8Parser::annotationtypeElementModifier() {
  AnnotationtypeElementModifierContext *_localctx = _tracker.createInstance<AnnotationtypeElementModifierContext>(_ctx, getState());
  enterRule(_localctx, 226, Java8Parser::RuleAnnotationtypeElementModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1406);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1403);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1404);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(1405);
        match(Java8Parser::ABSTRACT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

Java8Parser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::DefaultValueContext::DEFAULT() {
  return getToken(Java8Parser::DEFAULT, 0);
}

Java8Parser::ElementValueContext* Java8Parser::DefaultValueContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}


size_t Java8Parser::DefaultValueContext::getRuleIndex() const {
  return Java8Parser::RuleDefaultValue;
}


antlrcpp::Any Java8Parser::DefaultValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitDefaultValue(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DefaultValueContext* Java8Parser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 228, Java8Parser::RuleDefaultValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1408);
    match(Java8Parser::DEFAULT);
    setState(1409);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

Java8Parser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalAnnotationContext* Java8Parser::AnnotationContext::normalAnnotation() {
  return getRuleContext<Java8Parser::NormalAnnotationContext>(0);
}

Java8Parser::MarkerAnnotationContext* Java8Parser::AnnotationContext::markerAnnotation() {
  return getRuleContext<Java8Parser::MarkerAnnotationContext>(0);
}

Java8Parser::SingleElementAnnotationContext* Java8Parser::AnnotationContext::singleElementAnnotation() {
  return getRuleContext<Java8Parser::SingleElementAnnotationContext>(0);
}


size_t Java8Parser::AnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotation;
}


antlrcpp::Any Java8Parser::AnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAnnotation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationContext* Java8Parser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 230, Java8Parser::RuleAnnotation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1414);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1411);
      normalAnnotation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1412);
      markerAnnotation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1413);
      singleElementAnnotation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalAnnotationContext ------------------------------------------------------------------

Java8Parser::NormalAnnotationContext::NormalAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::NormalAnnotationContext::AT() {
  return getToken(Java8Parser::AT, 0);
}

Java8Parser::TypeNameContext* Java8Parser::NormalAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::NormalAnnotationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::NormalAnnotationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ElementValuePairListContext* Java8Parser::NormalAnnotationContext::elementValuePairList() {
  return getRuleContext<Java8Parser::ElementValuePairListContext>(0);
}


size_t Java8Parser::NormalAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalAnnotation;
}


antlrcpp::Any Java8Parser::NormalAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitNormalAnnotation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::NormalAnnotationContext* Java8Parser::normalAnnotation() {
  NormalAnnotationContext *_localctx = _tracker.createInstance<NormalAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 232, Java8Parser::RuleNormalAnnotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1416);
    match(Java8Parser::AT);
    setState(1417);
    typeName();
    setState(1418);
    match(Java8Parser::LPAREN);
    setState(1420);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1419);
      elementValuePairList();
    }
    setState(1422);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairListContext ------------------------------------------------------------------

Java8Parser::ElementValuePairListContext::ElementValuePairListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ElementValuePairContext *> Java8Parser::ElementValuePairListContext::elementValuePair() {
  return getRuleContexts<Java8Parser::ElementValuePairContext>();
}

Java8Parser::ElementValuePairContext* Java8Parser::ElementValuePairListContext::elementValuePair(size_t i) {
  return getRuleContext<Java8Parser::ElementValuePairContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ElementValuePairListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::ElementValuePairListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::ElementValuePairListContext::getRuleIndex() const {
  return Java8Parser::RuleElementValuePairList;
}


antlrcpp::Any Java8Parser::ElementValuePairListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitElementValuePairList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValuePairListContext* Java8Parser::elementValuePairList() {
  ElementValuePairListContext *_localctx = _tracker.createInstance<ElementValuePairListContext>(_ctx, getState());
  enterRule(_localctx, 234, Java8Parser::RuleElementValuePairList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1424);
    elementValuePair();
    setState(1429);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1425);
      match(Java8Parser::COMMA);
      setState(1426);
      elementValuePair();
      setState(1431);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairContext ------------------------------------------------------------------

Java8Parser::ElementValuePairContext::ElementValuePairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ElementValuePairContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::ElementValuePairContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

Java8Parser::ElementValueContext* Java8Parser::ElementValuePairContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}


size_t Java8Parser::ElementValuePairContext::getRuleIndex() const {
  return Java8Parser::RuleElementValuePair;
}


antlrcpp::Any Java8Parser::ElementValuePairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitElementValuePair(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValuePairContext* Java8Parser::elementValuePair() {
  ElementValuePairContext *_localctx = _tracker.createInstance<ElementValuePairContext>(_ctx, getState());
  enterRule(_localctx, 236, Java8Parser::RuleElementValuePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1432);
    match(Java8Parser::Identifier);
    setState(1433);
    match(Java8Parser::ASSIGN);
    setState(1434);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueContext ------------------------------------------------------------------

Java8Parser::ElementValueContext::ElementValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalExpressionContext* Java8Parser::ElementValueContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}

Java8Parser::ElementValueArrayInitializerContext* Java8Parser::ElementValueContext::elementValueArrayInitializer() {
  return getRuleContext<Java8Parser::ElementValueArrayInitializerContext>(0);
}

Java8Parser::AnnotationContext* Java8Parser::ElementValueContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::ElementValueContext::getRuleIndex() const {
  return Java8Parser::RuleElementValue;
}


antlrcpp::Any Java8Parser::ElementValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitElementValue(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValueContext* Java8Parser::elementValue() {
  ElementValueContext *_localctx = _tracker.createInstance<ElementValueContext>(_ctx, getState());
  enterRule(_localctx, 238, Java8Parser::RuleElementValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1439);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1436);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1437);
      elementValueArrayInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1438);
      annotation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueArrayInitializerContext ------------------------------------------------------------------

Java8Parser::ElementValueArrayInitializerContext::ElementValueArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ElementValueArrayInitializerContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::ElementValueArrayInitializerContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::ElementValueListContext* Java8Parser::ElementValueArrayInitializerContext::elementValueList() {
  return getRuleContext<Java8Parser::ElementValueListContext>(0);
}

tree::TerminalNode* Java8Parser::ElementValueArrayInitializerContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::ElementValueArrayInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleElementValueArrayInitializer;
}


antlrcpp::Any Java8Parser::ElementValueArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitElementValueArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValueArrayInitializerContext* Java8Parser::elementValueArrayInitializer() {
  ElementValueArrayInitializerContext *_localctx = _tracker.createInstance<ElementValueArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 240, Java8Parser::RuleElementValueArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1441);
    match(Java8Parser::LBRACE);
    setState(1443);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1442);
      elementValueList();
    }
    setState(1446);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::DOT) {
      setState(1445);
      match(Java8Parser::DOT);
    }
    setState(1448);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueListContext ------------------------------------------------------------------

Java8Parser::ElementValueListContext::ElementValueListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ElementValueContext *> Java8Parser::ElementValueListContext::elementValue() {
  return getRuleContexts<Java8Parser::ElementValueContext>();
}

Java8Parser::ElementValueContext* Java8Parser::ElementValueListContext::elementValue(size_t i) {
  return getRuleContext<Java8Parser::ElementValueContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ElementValueListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::ElementValueListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::ElementValueListContext::getRuleIndex() const {
  return Java8Parser::RuleElementValueList;
}


antlrcpp::Any Java8Parser::ElementValueListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitElementValueList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValueListContext* Java8Parser::elementValueList() {
  ElementValueListContext *_localctx = _tracker.createInstance<ElementValueListContext>(_ctx, getState());
  enterRule(_localctx, 242, Java8Parser::RuleElementValueList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1450);
    elementValue();
    setState(1455);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1451);
      match(Java8Parser::COMMA);
      setState(1452);
      elementValue();
      setState(1457);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MarkerAnnotationContext ------------------------------------------------------------------

Java8Parser::MarkerAnnotationContext::MarkerAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MarkerAnnotationContext::AT() {
  return getToken(Java8Parser::AT, 0);
}

Java8Parser::TypeNameContext* Java8Parser::MarkerAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::MarkerAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleMarkerAnnotation;
}


antlrcpp::Any Java8Parser::MarkerAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMarkerAnnotation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MarkerAnnotationContext* Java8Parser::markerAnnotation() {
  MarkerAnnotationContext *_localctx = _tracker.createInstance<MarkerAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 244, Java8Parser::RuleMarkerAnnotation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1458);
    match(Java8Parser::AT);
    setState(1459);
    typeName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleElementAnnotationContext ------------------------------------------------------------------

Java8Parser::SingleElementAnnotationContext::SingleElementAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SingleElementAnnotationContext::AT() {
  return getToken(Java8Parser::AT, 0);
}

Java8Parser::TypeNameContext* Java8Parser::SingleElementAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::SingleElementAnnotationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ElementValueContext* Java8Parser::SingleElementAnnotationContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}

tree::TerminalNode* Java8Parser::SingleElementAnnotationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}


size_t Java8Parser::SingleElementAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleSingleElementAnnotation;
}


antlrcpp::Any Java8Parser::SingleElementAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSingleElementAnnotation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SingleElementAnnotationContext* Java8Parser::singleElementAnnotation() {
  SingleElementAnnotationContext *_localctx = _tracker.createInstance<SingleElementAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 246, Java8Parser::RuleSingleElementAnnotation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1461);
    match(Java8Parser::AT);
    setState(1462);
    typeName();
    setState(1463);
    match(Java8Parser::LPAREN);
    setState(1464);
    elementValue();
    setState(1465);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

Java8Parser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ArrayInitializerContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::ArrayInitializerContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::VariableInitializerListContext* Java8Parser::ArrayInitializerContext::variableInitializerList() {
  return getRuleContext<Java8Parser::VariableInitializerListContext>(0);
}

tree::TerminalNode* Java8Parser::ArrayInitializerContext::COMMA() {
  return getToken(Java8Parser::COMMA, 0);
}


size_t Java8Parser::ArrayInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleArrayInitializer;
}


antlrcpp::Any Java8Parser::ArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayInitializerContext* Java8Parser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 248, Java8Parser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1467);
    match(Java8Parser::LBRACE);
    setState(1469);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1468);
      variableInitializerList();
    }
    setState(1472);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COMMA) {
      setState(1471);
      match(Java8Parser::COMMA);
    }
    setState(1474);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerListContext ------------------------------------------------------------------

Java8Parser::VariableInitializerListContext::VariableInitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::VariableInitializerContext *> Java8Parser::VariableInitializerListContext::variableInitializer() {
  return getRuleContexts<Java8Parser::VariableInitializerContext>();
}

Java8Parser::VariableInitializerContext* Java8Parser::VariableInitializerListContext::variableInitializer(size_t i) {
  return getRuleContext<Java8Parser::VariableInitializerContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::VariableInitializerListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::VariableInitializerListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::VariableInitializerListContext::getRuleIndex() const {
  return Java8Parser::RuleVariableInitializerList;
}


antlrcpp::Any Java8Parser::VariableInitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitVariableInitializerList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableInitializerListContext* Java8Parser::variableInitializerList() {
  VariableInitializerListContext *_localctx = _tracker.createInstance<VariableInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 250, Java8Parser::RuleVariableInitializerList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1476);
    variableInitializer();
    setState(1481);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1477);
        match(Java8Parser::COMMA);
        setState(1478);
        variableInitializer(); 
      }
      setState(1483);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

Java8Parser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BlockContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::BlockContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::BlockStatementsContext* Java8Parser::BlockContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::BlockContext::getRuleIndex() const {
  return Java8Parser::RuleBlock;
}


antlrcpp::Any Java8Parser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BlockContext* Java8Parser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 252, Java8Parser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1484);
    match(Java8Parser::LBRACE);
    setState(1486);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1485);
      blockStatements();
    }
    setState(1488);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementsContext ------------------------------------------------------------------

Java8Parser::BlockStatementsContext::BlockStatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::BlockStatementContext *> Java8Parser::BlockStatementsContext::blockStatement() {
  return getRuleContexts<Java8Parser::BlockStatementContext>();
}

Java8Parser::BlockStatementContext* Java8Parser::BlockStatementsContext::blockStatement(size_t i) {
  return getRuleContext<Java8Parser::BlockStatementContext>(i);
}


size_t Java8Parser::BlockStatementsContext::getRuleIndex() const {
  return Java8Parser::RuleBlockStatements;
}


antlrcpp::Any Java8Parser::BlockStatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitBlockStatements(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BlockStatementsContext* Java8Parser::blockStatements() {
  BlockStatementsContext *_localctx = _tracker.createInstance<BlockStatementsContext>(_ctx, getState());
  enterRule(_localctx, 254, Java8Parser::RuleBlockStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1490);
    blockStatement();
    setState(1494);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1491);
      blockStatement();
      setState(1496);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

Java8Parser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LocalVariableDeclarationStatementContext* Java8Parser::BlockStatementContext::localVariableDeclarationStatement() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationStatementContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::BlockStatementContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::StatementContext* Java8Parser::BlockStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::BlockStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBlockStatement;
}


antlrcpp::Any Java8Parser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BlockStatementContext* Java8Parser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 256, Java8Parser::RuleBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1500);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1497);
      localVariableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1498);
      classDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1499);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationStatementContext ------------------------------------------------------------------

Java8Parser::LocalVariableDeclarationStatementContext::LocalVariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::LocalVariableDeclarationStatementContext::localVariableDeclaration() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::LocalVariableDeclarationStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::LocalVariableDeclarationStatementContext::getRuleIndex() const {
  return Java8Parser::RuleLocalVariableDeclarationStatement;
}


antlrcpp::Any Java8Parser::LocalVariableDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLocalVariableDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LocalVariableDeclarationStatementContext* Java8Parser::localVariableDeclarationStatement() {
  LocalVariableDeclarationStatementContext *_localctx = _tracker.createInstance<LocalVariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 258, Java8Parser::RuleLocalVariableDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1502);
    localVariableDeclaration();
    setState(1503);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationContext ------------------------------------------------------------------

Java8Parser::LocalVariableDeclarationContext::LocalVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::LocalVariableDeclarationContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::LocalVariableDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::LocalVariableDeclarationContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::LocalVariableDeclarationContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::LocalVariableDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleLocalVariableDeclaration;
}


antlrcpp::Any Java8Parser::LocalVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLocalVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::localVariableDeclaration() {
  LocalVariableDeclarationContext *_localctx = _tracker.createInstance<LocalVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 260, Java8Parser::RuleLocalVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1508);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1505);
      variableModifier();
      setState(1510);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1511);
    unanntype();
    setState(1512);
    variableDeclaratorList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

Java8Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::StatementContext::statementWithoutTrailingSubstatement() {
  return getRuleContext<Java8Parser::StatementWithoutTrailingSubstatementContext>(0);
}

Java8Parser::LabeledStatementContext* Java8Parser::StatementContext::labeledStatement() {
  return getRuleContext<Java8Parser::LabeledStatementContext>(0);
}

Java8Parser::IfThenStatementContext* Java8Parser::StatementContext::ifThenStatement() {
  return getRuleContext<Java8Parser::IfThenStatementContext>(0);
}

Java8Parser::IfThenElseStatementContext* Java8Parser::StatementContext::ifThenElseStatement() {
  return getRuleContext<Java8Parser::IfThenElseStatementContext>(0);
}

Java8Parser::WhileStatementContext* Java8Parser::StatementContext::whileStatement() {
  return getRuleContext<Java8Parser::WhileStatementContext>(0);
}

Java8Parser::ForStatementContext* Java8Parser::StatementContext::forStatement() {
  return getRuleContext<Java8Parser::ForStatementContext>(0);
}


size_t Java8Parser::StatementContext::getRuleIndex() const {
  return Java8Parser::RuleStatement;
}


antlrcpp::Any Java8Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementContext* Java8Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 262, Java8Parser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1520);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1514);
      statementWithoutTrailingSubstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1515);
      labeledStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1516);
      ifThenStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1517);
      ifThenElseStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1518);
      whileStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1519);
      forStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::StatementNoShortIfContext::StatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::StatementNoShortIfContext::statementWithoutTrailingSubstatement() {
  return getRuleContext<Java8Parser::StatementWithoutTrailingSubstatementContext>(0);
}

Java8Parser::LabeledStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::labeledStatementNoShortIf() {
  return getRuleContext<Java8Parser::LabeledStatementNoShortIfContext>(0);
}

Java8Parser::IfThenElseStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::ifThenElseStatementNoShortIf() {
  return getRuleContext<Java8Parser::IfThenElseStatementNoShortIfContext>(0);
}

Java8Parser::WhileStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::whileStatementNoShortIf() {
  return getRuleContext<Java8Parser::WhileStatementNoShortIfContext>(0);
}

Java8Parser::ForStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::forStatementNoShortIf() {
  return getRuleContext<Java8Parser::ForStatementNoShortIfContext>(0);
}


size_t Java8Parser::StatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleStatementNoShortIf;
}


antlrcpp::Any Java8Parser::StatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::statementNoShortIf() {
  StatementNoShortIfContext *_localctx = _tracker.createInstance<StatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 264, Java8Parser::RuleStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1527);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1522);
      statementWithoutTrailingSubstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1523);
      labeledStatementNoShortIf();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1524);
      ifThenElseStatementNoShortIf();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1525);
      whileStatementNoShortIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1526);
      forStatementNoShortIf();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementWithoutTrailingSubstatementContext ------------------------------------------------------------------

Java8Parser::StatementWithoutTrailingSubstatementContext::StatementWithoutTrailingSubstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::StatementWithoutTrailingSubstatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::EmptyStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::emptyStatement() {
  return getRuleContext<Java8Parser::EmptyStatementContext>(0);
}

Java8Parser::ExpressionStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::expressionStatement() {
  return getRuleContext<Java8Parser::ExpressionStatementContext>(0);
}

Java8Parser::AssertStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::assertStatement() {
  return getRuleContext<Java8Parser::AssertStatementContext>(0);
}

Java8Parser::SwitchStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::switchStatement() {
  return getRuleContext<Java8Parser::SwitchStatementContext>(0);
}

Java8Parser::DoStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::doStatement() {
  return getRuleContext<Java8Parser::DoStatementContext>(0);
}

Java8Parser::BreakStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::breakStatement() {
  return getRuleContext<Java8Parser::BreakStatementContext>(0);
}

Java8Parser::ContinueStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::continueStatement() {
  return getRuleContext<Java8Parser::ContinueStatementContext>(0);
}

Java8Parser::ReturnStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::returnStatement() {
  return getRuleContext<Java8Parser::ReturnStatementContext>(0);
}

Java8Parser::SynchronizedStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::synchronizedStatement() {
  return getRuleContext<Java8Parser::SynchronizedStatementContext>(0);
}

Java8Parser::ThrowStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::throwStatement() {
  return getRuleContext<Java8Parser::ThrowStatementContext>(0);
}

Java8Parser::TryStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::tryStatement() {
  return getRuleContext<Java8Parser::TryStatementContext>(0);
}


size_t Java8Parser::StatementWithoutTrailingSubstatementContext::getRuleIndex() const {
  return Java8Parser::RuleStatementWithoutTrailingSubstatement;
}


antlrcpp::Any Java8Parser::StatementWithoutTrailingSubstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitStatementWithoutTrailingSubstatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::statementWithoutTrailingSubstatement() {
  StatementWithoutTrailingSubstatementContext *_localctx = _tracker.createInstance<StatementWithoutTrailingSubstatementContext>(_ctx, getState());
  enterRule(_localctx, 266, Java8Parser::RuleStatementWithoutTrailingSubstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1541);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1529);
        block();
        break;
      }

      case Java8Parser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(1530);
        emptyStatement();
        break;
      }

      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 3);
        setState(1531);
        expressionStatement();
        break;
      }

      case Java8Parser::ASSERT: {
        enterOuterAlt(_localctx, 4);
        setState(1532);
        assertStatement();
        break;
      }

      case Java8Parser::SWITCH: {
        enterOuterAlt(_localctx, 5);
        setState(1533);
        switchStatement();
        break;
      }

      case Java8Parser::DO: {
        enterOuterAlt(_localctx, 6);
        setState(1534);
        doStatement();
        break;
      }

      case Java8Parser::BREAK: {
        enterOuterAlt(_localctx, 7);
        setState(1535);
        breakStatement();
        break;
      }

      case Java8Parser::CONTINUE: {
        enterOuterAlt(_localctx, 8);
        setState(1536);
        continueStatement();
        break;
      }

      case Java8Parser::RETURN: {
        enterOuterAlt(_localctx, 9);
        setState(1537);
        returnStatement();
        break;
      }

      case Java8Parser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 10);
        setState(1538);
        synchronizedStatement();
        break;
      }

      case Java8Parser::THROW: {
        enterOuterAlt(_localctx, 11);
        setState(1539);
        throwStatement();
        break;
      }

      case Java8Parser::TRY: {
        enterOuterAlt(_localctx, 12);
        setState(1540);
        tryStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

Java8Parser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EmptyStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::EmptyStatementContext::getRuleIndex() const {
  return Java8Parser::RuleEmptyStatement;
}


antlrcpp::Any Java8Parser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EmptyStatementContext* Java8Parser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 268, Java8Parser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1543);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

Java8Parser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LabeledStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::LabeledStatementContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::StatementContext* Java8Parser::LabeledStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::LabeledStatementContext::getRuleIndex() const {
  return Java8Parser::RuleLabeledStatement;
}


antlrcpp::Any Java8Parser::LabeledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLabeledStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LabeledStatementContext* Java8Parser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 270, Java8Parser::RuleLabeledStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1545);
    match(Java8Parser::Identifier);
    setState(1546);
    match(Java8Parser::COLON);
    setState(1547);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::LabeledStatementNoShortIfContext::LabeledStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LabeledStatementNoShortIfContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::LabeledStatementNoShortIfContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::LabeledStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}


size_t Java8Parser::LabeledStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleLabeledStatementNoShortIf;
}


antlrcpp::Any Java8Parser::LabeledStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLabeledStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LabeledStatementNoShortIfContext* Java8Parser::labeledStatementNoShortIf() {
  LabeledStatementNoShortIfContext *_localctx = _tracker.createInstance<LabeledStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 272, Java8Parser::RuleLabeledStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1549);
    match(Java8Parser::Identifier);
    setState(1550);
    match(Java8Parser::COLON);
    setState(1551);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

Java8Parser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionContext* Java8Parser::ExpressionStatementContext::statementExpression() {
  return getRuleContext<Java8Parser::StatementExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ExpressionStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::ExpressionStatementContext::getRuleIndex() const {
  return Java8Parser::RuleExpressionStatement;
}


antlrcpp::Any Java8Parser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExpressionStatementContext* Java8Parser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 274, Java8Parser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1553);
    statementExpression();
    setState(1554);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementExpressionContext ------------------------------------------------------------------

Java8Parser::StatementExpressionContext::StatementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AssignmentContext* Java8Parser::StatementExpressionContext::assignment() {
  return getRuleContext<Java8Parser::AssignmentContext>(0);
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::StatementExpressionContext::preIncrementExpression() {
  return getRuleContext<Java8Parser::PreIncrementExpressionContext>(0);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::StatementExpressionContext::preDecrementExpression() {
  return getRuleContext<Java8Parser::PreDecrementExpressionContext>(0);
}

Java8Parser::PostIncrementExpressionContext* Java8Parser::StatementExpressionContext::postIncrementExpression() {
  return getRuleContext<Java8Parser::PostIncrementExpressionContext>(0);
}

Java8Parser::PostDecrementExpressionContext* Java8Parser::StatementExpressionContext::postDecrementExpression() {
  return getRuleContext<Java8Parser::PostDecrementExpressionContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::StatementExpressionContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::StatementExpressionContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}


size_t Java8Parser::StatementExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleStatementExpression;
}


antlrcpp::Any Java8Parser::StatementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitStatementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementExpressionContext* Java8Parser::statementExpression() {
  StatementExpressionContext *_localctx = _tracker.createInstance<StatementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 276, Java8Parser::RuleStatementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1563);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1556);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1557);
      preIncrementExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1558);
      preDecrementExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1559);
      postIncrementExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1560);
      postDecrementExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1561);
      methodInvocation();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1562);
      classInstanceCreationExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenStatementContext ------------------------------------------------------------------

Java8Parser::IfThenStatementContext::IfThenStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::IfThenStatementContext::IF() {
  return getToken(Java8Parser::IF, 0);
}

tree::TerminalNode* Java8Parser::IfThenStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::IfThenStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::IfThenStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementContext* Java8Parser::IfThenStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::IfThenStatementContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenStatement;
}


antlrcpp::Any Java8Parser::IfThenStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitIfThenStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::IfThenStatementContext* Java8Parser::ifThenStatement() {
  IfThenStatementContext *_localctx = _tracker.createInstance<IfThenStatementContext>(_ctx, getState());
  enterRule(_localctx, 278, Java8Parser::RuleIfThenStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1565);
    match(Java8Parser::IF);
    setState(1566);
    match(Java8Parser::LPAREN);
    setState(1567);
    expression();
    setState(1568);
    match(Java8Parser::RPAREN);
    setState(1569);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenElseStatementContext ------------------------------------------------------------------

Java8Parser::IfThenElseStatementContext::IfThenElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::IfThenElseStatementContext::IF() {
  return getToken(Java8Parser::IF, 0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::IfThenElseStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::IfThenElseStatementContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementContext::ELSE() {
  return getToken(Java8Parser::ELSE, 0);
}

Java8Parser::StatementContext* Java8Parser::IfThenElseStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::IfThenElseStatementContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenElseStatement;
}


antlrcpp::Any Java8Parser::IfThenElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitIfThenElseStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::IfThenElseStatementContext* Java8Parser::ifThenElseStatement() {
  IfThenElseStatementContext *_localctx = _tracker.createInstance<IfThenElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 280, Java8Parser::RuleIfThenElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1571);
    match(Java8Parser::IF);
    setState(1572);
    match(Java8Parser::LPAREN);
    setState(1573);
    expression();
    setState(1574);
    match(Java8Parser::RPAREN);
    setState(1575);
    statementNoShortIf();
    setState(1576);
    match(Java8Parser::ELSE);
    setState(1577);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenElseStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::IfThenElseStatementNoShortIfContext::IfThenElseStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::IfThenElseStatementNoShortIfContext::IF() {
  return getToken(Java8Parser::IF, 0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementNoShortIfContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::IfThenElseStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementNoShortIfContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

std::vector<Java8Parser::StatementNoShortIfContext *> Java8Parser::IfThenElseStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContexts<Java8Parser::StatementNoShortIfContext>();
}

Java8Parser::StatementNoShortIfContext* Java8Parser::IfThenElseStatementNoShortIfContext::statementNoShortIf(size_t i) {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(i);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementNoShortIfContext::ELSE() {
  return getToken(Java8Parser::ELSE, 0);
}


size_t Java8Parser::IfThenElseStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenElseStatementNoShortIf;
}


antlrcpp::Any Java8Parser::IfThenElseStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitIfThenElseStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::IfThenElseStatementNoShortIfContext* Java8Parser::ifThenElseStatementNoShortIf() {
  IfThenElseStatementNoShortIfContext *_localctx = _tracker.createInstance<IfThenElseStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 282, Java8Parser::RuleIfThenElseStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1579);
    match(Java8Parser::IF);
    setState(1580);
    match(Java8Parser::LPAREN);
    setState(1581);
    expression();
    setState(1582);
    match(Java8Parser::RPAREN);
    setState(1583);
    statementNoShortIf();
    setState(1584);
    match(Java8Parser::ELSE);
    setState(1585);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssertStatementContext ------------------------------------------------------------------

Java8Parser::AssertStatementContext::AssertStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AssertStatementContext::ASSERT() {
  return getToken(Java8Parser::ASSERT, 0);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::AssertStatementContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::AssertStatementContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

tree::TerminalNode* Java8Parser::AssertStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

tree::TerminalNode* Java8Parser::AssertStatementContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}


size_t Java8Parser::AssertStatementContext::getRuleIndex() const {
  return Java8Parser::RuleAssertStatement;
}


antlrcpp::Any Java8Parser::AssertStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAssertStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AssertStatementContext* Java8Parser::assertStatement() {
  AssertStatementContext *_localctx = _tracker.createInstance<AssertStatementContext>(_ctx, getState());
  enterRule(_localctx, 284, Java8Parser::RuleAssertStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1597);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1587);
      match(Java8Parser::ASSERT);
      setState(1588);
      expression();
      setState(1589);
      match(Java8Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1591);
      match(Java8Parser::ASSERT);
      setState(1592);
      expression();
      setState(1593);
      match(Java8Parser::COLON);
      setState(1594);
      expression();
      setState(1595);
      match(Java8Parser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

Java8Parser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SwitchStatementContext::SWITCH() {
  return getToken(Java8Parser::SWITCH, 0);
}

tree::TerminalNode* Java8Parser::SwitchStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::SwitchStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::SwitchStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::SwitchBlockContext* Java8Parser::SwitchStatementContext::switchBlock() {
  return getRuleContext<Java8Parser::SwitchBlockContext>(0);
}


size_t Java8Parser::SwitchStatementContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchStatement;
}


antlrcpp::Any Java8Parser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchStatementContext* Java8Parser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 286, Java8Parser::RuleSwitchStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1599);
    match(Java8Parser::SWITCH);
    setState(1600);
    match(Java8Parser::LPAREN);
    setState(1601);
    expression();
    setState(1602);
    match(Java8Parser::RPAREN);
    setState(1603);
    switchBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockContext ------------------------------------------------------------------

Java8Parser::SwitchBlockContext::SwitchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SwitchBlockContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::SwitchBlockContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

std::vector<Java8Parser::SwitchBlockStatementGroupContext *> Java8Parser::SwitchBlockContext::switchBlockStatementGroup() {
  return getRuleContexts<Java8Parser::SwitchBlockStatementGroupContext>();
}

Java8Parser::SwitchBlockStatementGroupContext* Java8Parser::SwitchBlockContext::switchBlockStatementGroup(size_t i) {
  return getRuleContext<Java8Parser::SwitchBlockStatementGroupContext>(i);
}

std::vector<Java8Parser::SwitchLabelContext *> Java8Parser::SwitchBlockContext::switchLabel() {
  return getRuleContexts<Java8Parser::SwitchLabelContext>();
}

Java8Parser::SwitchLabelContext* Java8Parser::SwitchBlockContext::switchLabel(size_t i) {
  return getRuleContext<Java8Parser::SwitchLabelContext>(i);
}


size_t Java8Parser::SwitchBlockContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchBlock;
}


antlrcpp::Any Java8Parser::SwitchBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSwitchBlock(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchBlockContext* Java8Parser::switchBlock() {
  SwitchBlockContext *_localctx = _tracker.createInstance<SwitchBlockContext>(_ctx, getState());
  enterRule(_localctx, 288, Java8Parser::RuleSwitchBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1605);
    match(Java8Parser::LBRACE);
    setState(1609);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1606);
        switchBlockStatementGroup(); 
      }
      setState(1611);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    }
    setState(1615);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CASE

    || _la == Java8Parser::DEFAULT) {
      setState(1612);
      switchLabel();
      setState(1617);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1618);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockStatementGroupContext ------------------------------------------------------------------

Java8Parser::SwitchBlockStatementGroupContext::SwitchBlockStatementGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SwitchLabelsContext* Java8Parser::SwitchBlockStatementGroupContext::switchLabels() {
  return getRuleContext<Java8Parser::SwitchLabelsContext>(0);
}

Java8Parser::BlockStatementsContext* Java8Parser::SwitchBlockStatementGroupContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::SwitchBlockStatementGroupContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchBlockStatementGroup;
}


antlrcpp::Any Java8Parser::SwitchBlockStatementGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSwitchBlockStatementGroup(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchBlockStatementGroupContext* Java8Parser::switchBlockStatementGroup() {
  SwitchBlockStatementGroupContext *_localctx = _tracker.createInstance<SwitchBlockStatementGroupContext>(_ctx, getState());
  enterRule(_localctx, 290, Java8Parser::RuleSwitchBlockStatementGroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1620);
    switchLabels();
    setState(1621);
    blockStatements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelsContext ------------------------------------------------------------------

Java8Parser::SwitchLabelsContext::SwitchLabelsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::SwitchLabelContext *> Java8Parser::SwitchLabelsContext::switchLabel() {
  return getRuleContexts<Java8Parser::SwitchLabelContext>();
}

Java8Parser::SwitchLabelContext* Java8Parser::SwitchLabelsContext::switchLabel(size_t i) {
  return getRuleContext<Java8Parser::SwitchLabelContext>(i);
}


size_t Java8Parser::SwitchLabelsContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchLabels;
}


antlrcpp::Any Java8Parser::SwitchLabelsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSwitchLabels(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchLabelsContext* Java8Parser::switchLabels() {
  SwitchLabelsContext *_localctx = _tracker.createInstance<SwitchLabelsContext>(_ctx, getState());
  enterRule(_localctx, 292, Java8Parser::RuleSwitchLabels);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1623);
    switchLabel();
    setState(1627);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CASE

    || _la == Java8Parser::DEFAULT) {
      setState(1624);
      switchLabel();
      setState(1629);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

Java8Parser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SwitchLabelContext::CASE() {
  return getToken(Java8Parser::CASE, 0);
}

Java8Parser::ConstantExpressionContext* Java8Parser::SwitchLabelContext::constantExpression() {
  return getRuleContext<Java8Parser::ConstantExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::SwitchLabelContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::EnumconstantNameContext* Java8Parser::SwitchLabelContext::enumconstantName() {
  return getRuleContext<Java8Parser::EnumconstantNameContext>(0);
}

tree::TerminalNode* Java8Parser::SwitchLabelContext::DEFAULT() {
  return getToken(Java8Parser::DEFAULT, 0);
}


size_t Java8Parser::SwitchLabelContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchLabel;
}


antlrcpp::Any Java8Parser::SwitchLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSwitchLabel(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchLabelContext* Java8Parser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 294, Java8Parser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1640);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1630);
      match(Java8Parser::CASE);
      setState(1631);
      constantExpression();
      setState(1632);
      match(Java8Parser::COLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1634);
      match(Java8Parser::CASE);
      setState(1635);
      enumconstantName();
      setState(1636);
      match(Java8Parser::COLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1638);
      match(Java8Parser::DEFAULT);
      setState(1639);
      match(Java8Parser::COLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumconstantNameContext ------------------------------------------------------------------

Java8Parser::EnumconstantNameContext::EnumconstantNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumconstantNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::EnumconstantNameContext::getRuleIndex() const {
  return Java8Parser::RuleEnumconstantName;
}


antlrcpp::Any Java8Parser::EnumconstantNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnumconstantName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumconstantNameContext* Java8Parser::enumconstantName() {
  EnumconstantNameContext *_localctx = _tracker.createInstance<EnumconstantNameContext>(_ctx, getState());
  enterRule(_localctx, 296, Java8Parser::RuleEnumconstantName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1642);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

Java8Parser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::WhileStatementContext::WHILE() {
  return getToken(Java8Parser::WHILE, 0);
}

tree::TerminalNode* Java8Parser::WhileStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::WhileStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::WhileStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementContext* Java8Parser::WhileStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::WhileStatementContext::getRuleIndex() const {
  return Java8Parser::RuleWhileStatement;
}


antlrcpp::Any Java8Parser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::WhileStatementContext* Java8Parser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 298, Java8Parser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1644);
    match(Java8Parser::WHILE);
    setState(1645);
    match(Java8Parser::LPAREN);
    setState(1646);
    expression();
    setState(1647);
    match(Java8Parser::RPAREN);
    setState(1648);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::WhileStatementNoShortIfContext::WhileStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::WhileStatementNoShortIfContext::WHILE() {
  return getToken(Java8Parser::WHILE, 0);
}

tree::TerminalNode* Java8Parser::WhileStatementNoShortIfContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::WhileStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::WhileStatementNoShortIfContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::WhileStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}


size_t Java8Parser::WhileStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleWhileStatementNoShortIf;
}


antlrcpp::Any Java8Parser::WhileStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitWhileStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::WhileStatementNoShortIfContext* Java8Parser::whileStatementNoShortIf() {
  WhileStatementNoShortIfContext *_localctx = _tracker.createInstance<WhileStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 300, Java8Parser::RuleWhileStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1650);
    match(Java8Parser::WHILE);
    setState(1651);
    match(Java8Parser::LPAREN);
    setState(1652);
    expression();
    setState(1653);
    match(Java8Parser::RPAREN);
    setState(1654);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoStatementContext ------------------------------------------------------------------

Java8Parser::DoStatementContext::DoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::DoStatementContext::DO() {
  return getToken(Java8Parser::DO, 0);
}

Java8Parser::StatementContext* Java8Parser::DoStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

tree::TerminalNode* Java8Parser::DoStatementContext::WHILE() {
  return getToken(Java8Parser::WHILE, 0);
}

tree::TerminalNode* Java8Parser::DoStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::DoStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::DoStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

tree::TerminalNode* Java8Parser::DoStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::DoStatementContext::getRuleIndex() const {
  return Java8Parser::RuleDoStatement;
}


antlrcpp::Any Java8Parser::DoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitDoStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DoStatementContext* Java8Parser::doStatement() {
  DoStatementContext *_localctx = _tracker.createInstance<DoStatementContext>(_ctx, getState());
  enterRule(_localctx, 302, Java8Parser::RuleDoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1656);
    match(Java8Parser::DO);
    setState(1657);
    statement();
    setState(1658);
    match(Java8Parser::WHILE);
    setState(1659);
    match(Java8Parser::LPAREN);
    setState(1660);
    expression();
    setState(1661);
    match(Java8Parser::RPAREN);
    setState(1662);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

Java8Parser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BasicForStatementContext* Java8Parser::ForStatementContext::basicForStatement() {
  return getRuleContext<Java8Parser::BasicForStatementContext>(0);
}

Java8Parser::EnhancedForStatementContext* Java8Parser::ForStatementContext::enhancedForStatement() {
  return getRuleContext<Java8Parser::EnhancedForStatementContext>(0);
}


size_t Java8Parser::ForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleForStatement;
}


antlrcpp::Any Java8Parser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ForStatementContext* Java8Parser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 304, Java8Parser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1666);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1664);
      basicForStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1665);
      enhancedForStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::ForStatementNoShortIfContext::ForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BasicForStatementNoShortIfContext* Java8Parser::ForStatementNoShortIfContext::basicForStatementNoShortIf() {
  return getRuleContext<Java8Parser::BasicForStatementNoShortIfContext>(0);
}

Java8Parser::EnhancedForStatementNoShortIfContext* Java8Parser::ForStatementNoShortIfContext::enhancedForStatementNoShortIf() {
  return getRuleContext<Java8Parser::EnhancedForStatementNoShortIfContext>(0);
}


size_t Java8Parser::ForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleForStatementNoShortIf;
}


antlrcpp::Any Java8Parser::ForStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitForStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ForStatementNoShortIfContext* Java8Parser::forStatementNoShortIf() {
  ForStatementNoShortIfContext *_localctx = _tracker.createInstance<ForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 306, Java8Parser::RuleForStatementNoShortIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1670);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1668);
      basicForStatementNoShortIf();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1669);
      enhancedForStatementNoShortIf();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementContext ------------------------------------------------------------------

Java8Parser::BasicForStatementContext::BasicForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BasicForStatementContext::FOR() {
  return getToken(Java8Parser::FOR, 0);
}

tree::TerminalNode* Java8Parser::BasicForStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::BasicForStatementContext::SEMI() {
  return getTokens(Java8Parser::SEMI);
}

tree::TerminalNode* Java8Parser::BasicForStatementContext::SEMI(size_t i) {
  return getToken(Java8Parser::SEMI, i);
}

tree::TerminalNode* Java8Parser::BasicForStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementContext* Java8Parser::BasicForStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

Java8Parser::ForInitContext* Java8Parser::BasicForStatementContext::forInit() {
  return getRuleContext<Java8Parser::ForInitContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::BasicForStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ForUpdateContext* Java8Parser::BasicForStatementContext::forUpdate() {
  return getRuleContext<Java8Parser::ForUpdateContext>(0);
}


size_t Java8Parser::BasicForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBasicForStatement;
}


antlrcpp::Any Java8Parser::BasicForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitBasicForStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BasicForStatementContext* Java8Parser::basicForStatement() {
  BasicForStatementContext *_localctx = _tracker.createInstance<BasicForStatementContext>(_ctx, getState());
  enterRule(_localctx, 308, Java8Parser::RuleBasicForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1672);
    match(Java8Parser::FOR);
    setState(1673);
    match(Java8Parser::LPAREN);
    setState(1675);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1674);
      forInit();
    }
    setState(1677);
    match(Java8Parser::SEMI);
    setState(1679);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1678);
      expression();
    }
    setState(1681);
    match(Java8Parser::SEMI);
    setState(1683);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1682);
      forUpdate();
    }
    setState(1685);
    match(Java8Parser::RPAREN);
    setState(1686);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::BasicForStatementNoShortIfContext::BasicForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BasicForStatementNoShortIfContext::FOR() {
  return getToken(Java8Parser::FOR, 0);
}

tree::TerminalNode* Java8Parser::BasicForStatementNoShortIfContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::BasicForStatementNoShortIfContext::SEMI() {
  return getTokens(Java8Parser::SEMI);
}

tree::TerminalNode* Java8Parser::BasicForStatementNoShortIfContext::SEMI(size_t i) {
  return getToken(Java8Parser::SEMI, i);
}

tree::TerminalNode* Java8Parser::BasicForStatementNoShortIfContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::BasicForStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

Java8Parser::ForInitContext* Java8Parser::BasicForStatementNoShortIfContext::forInit() {
  return getRuleContext<Java8Parser::ForInitContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::BasicForStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ForUpdateContext* Java8Parser::BasicForStatementNoShortIfContext::forUpdate() {
  return getRuleContext<Java8Parser::ForUpdateContext>(0);
}


size_t Java8Parser::BasicForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleBasicForStatementNoShortIf;
}


antlrcpp::Any Java8Parser::BasicForStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitBasicForStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BasicForStatementNoShortIfContext* Java8Parser::basicForStatementNoShortIf() {
  BasicForStatementNoShortIfContext *_localctx = _tracker.createInstance<BasicForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 310, Java8Parser::RuleBasicForStatementNoShortIf);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1688);
    match(Java8Parser::FOR);
    setState(1689);
    match(Java8Parser::LPAREN);
    setState(1691);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1690);
      forInit();
    }
    setState(1693);
    match(Java8Parser::SEMI);
    setState(1695);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1694);
      expression();
    }
    setState(1697);
    match(Java8Parser::SEMI);
    setState(1699);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1698);
      forUpdate();
    }
    setState(1701);
    match(Java8Parser::RPAREN);
    setState(1702);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

Java8Parser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionListContext* Java8Parser::ForInitContext::statementExpressionList() {
  return getRuleContext<Java8Parser::StatementExpressionListContext>(0);
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::ForInitContext::localVariableDeclaration() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationContext>(0);
}


size_t Java8Parser::ForInitContext::getRuleIndex() const {
  return Java8Parser::RuleForInit;
}


antlrcpp::Any Java8Parser::ForInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitForInit(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ForInitContext* Java8Parser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 312, Java8Parser::RuleForInit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1706);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1704);
      statementExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1705);
      localVariableDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForUpdateContext ------------------------------------------------------------------

Java8Parser::ForUpdateContext::ForUpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionListContext* Java8Parser::ForUpdateContext::statementExpressionList() {
  return getRuleContext<Java8Parser::StatementExpressionListContext>(0);
}


size_t Java8Parser::ForUpdateContext::getRuleIndex() const {
  return Java8Parser::RuleForUpdate;
}


antlrcpp::Any Java8Parser::ForUpdateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitForUpdate(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ForUpdateContext* Java8Parser::forUpdate() {
  ForUpdateContext *_localctx = _tracker.createInstance<ForUpdateContext>(_ctx, getState());
  enterRule(_localctx, 314, Java8Parser::RuleForUpdate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1708);
    statementExpressionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementExpressionListContext ------------------------------------------------------------------

Java8Parser::StatementExpressionListContext::StatementExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::StatementExpressionContext *> Java8Parser::StatementExpressionListContext::statementExpression() {
  return getRuleContexts<Java8Parser::StatementExpressionContext>();
}

Java8Parser::StatementExpressionContext* Java8Parser::StatementExpressionListContext::statementExpression(size_t i) {
  return getRuleContext<Java8Parser::StatementExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::StatementExpressionListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::StatementExpressionListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::StatementExpressionListContext::getRuleIndex() const {
  return Java8Parser::RuleStatementExpressionList;
}


antlrcpp::Any Java8Parser::StatementExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitStatementExpressionList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementExpressionListContext* Java8Parser::statementExpressionList() {
  StatementExpressionListContext *_localctx = _tracker.createInstance<StatementExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 316, Java8Parser::RuleStatementExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1710);
    statementExpression();
    setState(1715);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1711);
      match(Java8Parser::COMMA);
      setState(1712);
      statementExpression();
      setState(1717);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnhancedForStatementContext ------------------------------------------------------------------

Java8Parser::EnhancedForStatementContext::EnhancedForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnhancedForStatementContext::FOR() {
  return getToken(Java8Parser::FOR, 0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::UnanntypeContext* Java8Parser::EnhancedForStatementContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::EnhancedForStatementContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::ExpressionContext* Java8Parser::EnhancedForStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementContext* Java8Parser::EnhancedForStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::EnhancedForStatementContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::EnhancedForStatementContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::EnhancedForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleEnhancedForStatement;
}


antlrcpp::Any Java8Parser::EnhancedForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnhancedForStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnhancedForStatementContext* Java8Parser::enhancedForStatement() {
  EnhancedForStatementContext *_localctx = _tracker.createInstance<EnhancedForStatementContext>(_ctx, getState());
  enterRule(_localctx, 318, Java8Parser::RuleEnhancedForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1718);
    match(Java8Parser::FOR);
    setState(1719);
    match(Java8Parser::LPAREN);
    setState(1723);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1720);
      variableModifier();
      setState(1725);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1726);
    unanntype();
    setState(1727);
    variableDeclaratorId();
    setState(1728);
    match(Java8Parser::COLON);
    setState(1729);
    expression();
    setState(1730);
    match(Java8Parser::RPAREN);
    setState(1731);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnhancedForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::EnhancedForStatementNoShortIfContext::EnhancedForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnhancedForStatementNoShortIfContext::FOR() {
  return getToken(Java8Parser::FOR, 0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementNoShortIfContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::UnanntypeContext* Java8Parser::EnhancedForStatementNoShortIfContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::EnhancedForStatementNoShortIfContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementNoShortIfContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::ExpressionContext* Java8Parser::EnhancedForStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementNoShortIfContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::EnhancedForStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::EnhancedForStatementNoShortIfContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::EnhancedForStatementNoShortIfContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::EnhancedForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleEnhancedForStatementNoShortIf;
}


antlrcpp::Any Java8Parser::EnhancedForStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEnhancedForStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnhancedForStatementNoShortIfContext* Java8Parser::enhancedForStatementNoShortIf() {
  EnhancedForStatementNoShortIfContext *_localctx = _tracker.createInstance<EnhancedForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 320, Java8Parser::RuleEnhancedForStatementNoShortIf);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1733);
    match(Java8Parser::FOR);
    setState(1734);
    match(Java8Parser::LPAREN);
    setState(1738);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1735);
      variableModifier();
      setState(1740);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1741);
    unanntype();
    setState(1742);
    variableDeclaratorId();
    setState(1743);
    match(Java8Parser::COLON);
    setState(1744);
    expression();
    setState(1745);
    match(Java8Parser::RPAREN);
    setState(1746);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

Java8Parser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BreakStatementContext::BREAK() {
  return getToken(Java8Parser::BREAK, 0);
}

tree::TerminalNode* Java8Parser::BreakStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

tree::TerminalNode* Java8Parser::BreakStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::BreakStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBreakStatement;
}


antlrcpp::Any Java8Parser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BreakStatementContext* Java8Parser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 322, Java8Parser::RuleBreakStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1748);
    match(Java8Parser::BREAK);
    setState(1750);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1749);
      match(Java8Parser::Identifier);
    }
    setState(1752);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

Java8Parser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ContinueStatementContext::CONTINUE() {
  return getToken(Java8Parser::CONTINUE, 0);
}

tree::TerminalNode* Java8Parser::ContinueStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

tree::TerminalNode* Java8Parser::ContinueStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::ContinueStatementContext::getRuleIndex() const {
  return Java8Parser::RuleContinueStatement;
}


antlrcpp::Any Java8Parser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ContinueStatementContext* Java8Parser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 324, Java8Parser::RuleContinueStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1754);
    match(Java8Parser::CONTINUE);
    setState(1756);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1755);
      match(Java8Parser::Identifier);
    }
    setState(1758);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

Java8Parser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ReturnStatementContext::RETURN() {
  return getToken(Java8Parser::RETURN, 0);
}

tree::TerminalNode* Java8Parser::ReturnStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

Java8Parser::ExpressionContext* Java8Parser::ReturnStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::ReturnStatementContext::getRuleIndex() const {
  return Java8Parser::RuleReturnStatement;
}


antlrcpp::Any Java8Parser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ReturnStatementContext* Java8Parser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 326, Java8Parser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1760);
    match(Java8Parser::RETURN);
    setState(1762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1761);
      expression();
    }
    setState(1764);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

Java8Parser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ThrowStatementContext::THROW() {
  return getToken(Java8Parser::THROW, 0);
}

tree::TerminalNode* Java8Parser::ThrowStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

Java8Parser::ExpressionContext* Java8Parser::ThrowStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::ThrowStatementContext::getRuleIndex() const {
  return Java8Parser::RuleThrowStatement;
}


antlrcpp::Any Java8Parser::ThrowStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitThrowStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ThrowStatementContext* Java8Parser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 328, Java8Parser::RuleThrowStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1766);
    match(Java8Parser::THROW);
    setState(1768);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1767);
      expression();
    }
    setState(1770);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SynchronizedStatementContext ------------------------------------------------------------------

Java8Parser::SynchronizedStatementContext::SynchronizedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SynchronizedStatementContext::SYNCHRONIZED() {
  return getToken(Java8Parser::SYNCHRONIZED, 0);
}

tree::TerminalNode* Java8Parser::SynchronizedStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::SynchronizedStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::SynchronizedStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::BlockContext* Java8Parser::SynchronizedStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::SynchronizedStatementContext::getRuleIndex() const {
  return Java8Parser::RuleSynchronizedStatement;
}


antlrcpp::Any Java8Parser::SynchronizedStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitSynchronizedStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SynchronizedStatementContext* Java8Parser::synchronizedStatement() {
  SynchronizedStatementContext *_localctx = _tracker.createInstance<SynchronizedStatementContext>(_ctx, getState());
  enterRule(_localctx, 330, Java8Parser::RuleSynchronizedStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1772);
    match(Java8Parser::SYNCHRONIZED);
    setState(1773);
    match(Java8Parser::LPAREN);
    setState(1774);
    expression();
    setState(1775);
    match(Java8Parser::RPAREN);
    setState(1776);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryStatementContext ------------------------------------------------------------------

Java8Parser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TryStatementContext::TRY() {
  return getToken(Java8Parser::TRY, 0);
}

Java8Parser::BlockContext* Java8Parser::TryStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::CatchesContext* Java8Parser::TryStatementContext::catches() {
  return getRuleContext<Java8Parser::CatchesContext>(0);
}

Java8Parser::Finally_Context* Java8Parser::TryStatementContext::finally_() {
  return getRuleContext<Java8Parser::Finally_Context>(0);
}

Java8Parser::TryWithResourcesStatementContext* Java8Parser::TryStatementContext::tryWithResourcesStatement() {
  return getRuleContext<Java8Parser::TryWithResourcesStatementContext>(0);
}


size_t Java8Parser::TryStatementContext::getRuleIndex() const {
  return Java8Parser::RuleTryStatement;
}


antlrcpp::Any Java8Parser::TryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTryStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TryStatementContext* Java8Parser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 332, Java8Parser::RuleTryStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1790);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1778);
      match(Java8Parser::TRY);
      setState(1779);
      block();
      setState(1780);
      catches();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1782);
      match(Java8Parser::TRY);
      setState(1783);
      block();
      setState(1785);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::CATCH) {
        setState(1784);
        catches();
      }
      setState(1787);
      finally_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1789);
      tryWithResourcesStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchesContext ------------------------------------------------------------------

Java8Parser::CatchesContext::CatchesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::CatchclauseContext *> Java8Parser::CatchesContext::catchclause() {
  return getRuleContexts<Java8Parser::CatchclauseContext>();
}

Java8Parser::CatchclauseContext* Java8Parser::CatchesContext::catchclause(size_t i) {
  return getRuleContext<Java8Parser::CatchclauseContext>(i);
}


size_t Java8Parser::CatchesContext::getRuleIndex() const {
  return Java8Parser::RuleCatches;
}


antlrcpp::Any Java8Parser::CatchesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitCatches(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CatchesContext* Java8Parser::catches() {
  CatchesContext *_localctx = _tracker.createInstance<CatchesContext>(_ctx, getState());
  enterRule(_localctx, 334, Java8Parser::RuleCatches);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1792);
    catchclause();
    setState(1796);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CATCH) {
      setState(1793);
      catchclause();
      setState(1798);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchclauseContext ------------------------------------------------------------------

Java8Parser::CatchclauseContext::CatchclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::CatchclauseContext::CATCH() {
  return getToken(Java8Parser::CATCH, 0);
}

tree::TerminalNode* Java8Parser::CatchclauseContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::CatchFormalParameterContext* Java8Parser::CatchclauseContext::catchFormalParameter() {
  return getRuleContext<Java8Parser::CatchFormalParameterContext>(0);
}

tree::TerminalNode* Java8Parser::CatchclauseContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::BlockContext* Java8Parser::CatchclauseContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::CatchclauseContext::getRuleIndex() const {
  return Java8Parser::RuleCatchclause;
}


antlrcpp::Any Java8Parser::CatchclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitCatchclause(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CatchclauseContext* Java8Parser::catchclause() {
  CatchclauseContext *_localctx = _tracker.createInstance<CatchclauseContext>(_ctx, getState());
  enterRule(_localctx, 336, Java8Parser::RuleCatchclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1799);
    match(Java8Parser::CATCH);
    setState(1800);
    match(Java8Parser::LPAREN);
    setState(1801);
    catchFormalParameter();
    setState(1802);
    match(Java8Parser::RPAREN);
    setState(1803);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchFormalParameterContext ------------------------------------------------------------------

Java8Parser::CatchFormalParameterContext::CatchFormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::CatchtypeContext* Java8Parser::CatchFormalParameterContext::catchtype() {
  return getRuleContext<Java8Parser::CatchtypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::CatchFormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::CatchFormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::CatchFormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::CatchFormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleCatchFormalParameter;
}


antlrcpp::Any Java8Parser::CatchFormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitCatchFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CatchFormalParameterContext* Java8Parser::catchFormalParameter() {
  CatchFormalParameterContext *_localctx = _tracker.createInstance<CatchFormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 338, Java8Parser::RuleCatchFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1808);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1805);
      variableModifier();
      setState(1810);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1811);
    catchtype();
    setState(1812);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchtypeContext ------------------------------------------------------------------

Java8Parser::CatchtypeContext::CatchtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassTypeContext* Java8Parser::CatchtypeContext::unannClassType() {
  return getRuleContext<Java8Parser::UnannClassTypeContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::CatchtypeContext::BITOR() {
  return getTokens(Java8Parser::BITOR);
}

tree::TerminalNode* Java8Parser::CatchtypeContext::BITOR(size_t i) {
  return getToken(Java8Parser::BITOR, i);
}

std::vector<Java8Parser::ClasstypeContext *> Java8Parser::CatchtypeContext::classtype() {
  return getRuleContexts<Java8Parser::ClasstypeContext>();
}

Java8Parser::ClasstypeContext* Java8Parser::CatchtypeContext::classtype(size_t i) {
  return getRuleContext<Java8Parser::ClasstypeContext>(i);
}


size_t Java8Parser::CatchtypeContext::getRuleIndex() const {
  return Java8Parser::RuleCatchtype;
}


antlrcpp::Any Java8Parser::CatchtypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitCatchtype(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CatchtypeContext* Java8Parser::catchtype() {
  CatchtypeContext *_localctx = _tracker.createInstance<CatchtypeContext>(_ctx, getState());
  enterRule(_localctx, 340, Java8Parser::RuleCatchtype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1814);
    unannClassType();
    setState(1819);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::BITOR) {
      setState(1815);
      match(Java8Parser::BITOR);
      setState(1816);
      classtype();
      setState(1821);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Finally_Context ------------------------------------------------------------------

Java8Parser::Finally_Context::Finally_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::Finally_Context::FINALLY() {
  return getToken(Java8Parser::FINALLY, 0);
}

Java8Parser::BlockContext* Java8Parser::Finally_Context::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::Finally_Context::getRuleIndex() const {
  return Java8Parser::RuleFinally_;
}


antlrcpp::Any Java8Parser::Finally_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFinally_(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::Finally_Context* Java8Parser::finally_() {
  Finally_Context *_localctx = _tracker.createInstance<Finally_Context>(_ctx, getState());
  enterRule(_localctx, 342, Java8Parser::RuleFinally_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1822);
    match(Java8Parser::FINALLY);
    setState(1823);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryWithResourcesStatementContext ------------------------------------------------------------------

Java8Parser::TryWithResourcesStatementContext::TryWithResourcesStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TryWithResourcesStatementContext::TRY() {
  return getToken(Java8Parser::TRY, 0);
}

Java8Parser::ResourceSpecificationContext* Java8Parser::TryWithResourcesStatementContext::resourceSpecification() {
  return getRuleContext<Java8Parser::ResourceSpecificationContext>(0);
}

Java8Parser::BlockContext* Java8Parser::TryWithResourcesStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::CatchesContext* Java8Parser::TryWithResourcesStatementContext::catches() {
  return getRuleContext<Java8Parser::CatchesContext>(0);
}

Java8Parser::Finally_Context* Java8Parser::TryWithResourcesStatementContext::finally_() {
  return getRuleContext<Java8Parser::Finally_Context>(0);
}


size_t Java8Parser::TryWithResourcesStatementContext::getRuleIndex() const {
  return Java8Parser::RuleTryWithResourcesStatement;
}


antlrcpp::Any Java8Parser::TryWithResourcesStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTryWithResourcesStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TryWithResourcesStatementContext* Java8Parser::tryWithResourcesStatement() {
  TryWithResourcesStatementContext *_localctx = _tracker.createInstance<TryWithResourcesStatementContext>(_ctx, getState());
  enterRule(_localctx, 344, Java8Parser::RuleTryWithResourcesStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1825);
    match(Java8Parser::TRY);
    setState(1826);
    resourceSpecification();
    setState(1827);
    block();
    setState(1829);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::CATCH) {
      setState(1828);
      catches();
    }
    setState(1832);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::FINALLY) {
      setState(1831);
      finally_();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceSpecificationContext ------------------------------------------------------------------

Java8Parser::ResourceSpecificationContext::ResourceSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ResourceSpecificationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ResourceListContext* Java8Parser::ResourceSpecificationContext::resourceList() {
  return getRuleContext<Java8Parser::ResourceListContext>(0);
}

tree::TerminalNode* Java8Parser::ResourceSpecificationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

tree::TerminalNode* Java8Parser::ResourceSpecificationContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}


size_t Java8Parser::ResourceSpecificationContext::getRuleIndex() const {
  return Java8Parser::RuleResourceSpecification;
}


antlrcpp::Any Java8Parser::ResourceSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitResourceSpecification(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ResourceSpecificationContext* Java8Parser::resourceSpecification() {
  ResourceSpecificationContext *_localctx = _tracker.createInstance<ResourceSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 346, Java8Parser::RuleResourceSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1834);
    match(Java8Parser::LPAREN);
    setState(1835);
    resourceList();
    setState(1837);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COLON) {
      setState(1836);
      match(Java8Parser::COLON);
    }
    setState(1839);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceListContext ------------------------------------------------------------------

Java8Parser::ResourceListContext::ResourceListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ResourceContext *> Java8Parser::ResourceListContext::resource() {
  return getRuleContexts<Java8Parser::ResourceContext>();
}

Java8Parser::ResourceContext* Java8Parser::ResourceListContext::resource(size_t i) {
  return getRuleContext<Java8Parser::ResourceContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ResourceListContext::SEMI() {
  return getTokens(Java8Parser::SEMI);
}

tree::TerminalNode* Java8Parser::ResourceListContext::SEMI(size_t i) {
  return getToken(Java8Parser::SEMI, i);
}


size_t Java8Parser::ResourceListContext::getRuleIndex() const {
  return Java8Parser::RuleResourceList;
}


antlrcpp::Any Java8Parser::ResourceListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitResourceList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ResourceListContext* Java8Parser::resourceList() {
  ResourceListContext *_localctx = _tracker.createInstance<ResourceListContext>(_ctx, getState());
  enterRule(_localctx, 348, Java8Parser::RuleResourceList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1841);
    resource();
    setState(1846);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::SEMI) {
      setState(1842);
      match(Java8Parser::SEMI);
      setState(1843);
      resource();
      setState(1848);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceContext ------------------------------------------------------------------

Java8Parser::ResourceContext::ResourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnanntypeContext* Java8Parser::ResourceContext::unanntype() {
  return getRuleContext<Java8Parser::UnanntypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::ResourceContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* Java8Parser::ResourceContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::ResourceContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::ResourceContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::ResourceContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::ResourceContext::getRuleIndex() const {
  return Java8Parser::RuleResource;
}


antlrcpp::Any Java8Parser::ResourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitResource(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ResourceContext* Java8Parser::resource() {
  ResourceContext *_localctx = _tracker.createInstance<ResourceContext>(_ctx, getState());
  enterRule(_localctx, 350, Java8Parser::RuleResource);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1852);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1849);
      variableModifier();
      setState(1854);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1855);
    unanntype();
    setState(1856);
    variableDeclaratorId();
    setState(1857);
    match(Java8Parser::ASSIGN);
    setState(1858);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

Java8Parser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryNoNewArray__2__primaryContext* Java8Parser::PrimaryContext::primaryNoNewArray__2__primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray__2__primaryContext>(0);
}

Java8Parser::ArrayCreationExpressionContext* Java8Parser::PrimaryContext::arrayCreationExpression() {
  return getRuleContext<Java8Parser::ArrayCreationExpressionContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray__1__primaryContext *> Java8Parser::PrimaryContext::primaryNoNewArray__1__primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray__1__primaryContext>();
}

Java8Parser::PrimaryNoNewArray__1__primaryContext* Java8Parser::PrimaryContext::primaryNoNewArray__1__primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray__1__primaryContext>(i);
}


size_t Java8Parser::PrimaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimary;
}


antlrcpp::Any Java8Parser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryContext* Java8Parser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 352, Java8Parser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1862);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
    case 1: {
      setState(1860);
      primaryNoNewArray__2__primary();
      break;
    }

    case 2: {
      setState(1861);
      arrayCreationExpression();
      break;
    }

    }
    setState(1867);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1864);
        primaryNoNewArray__1__primary(); 
      }
      setState(1869);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArrayContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArrayContext::PrimaryNoNewArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArrayContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArrayContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArrayContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArrayContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArrayContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::PrimaryNoNewArrayContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::PrimaryNoNewArrayContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::ArrayAccessContext* Java8Parser::PrimaryNoNewArrayContext::arrayAccess() {
  return getRuleContext<Java8Parser::ArrayAccessContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::PrimaryNoNewArrayContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::MethodReferenceContext* Java8Parser::PrimaryNoNewArrayContext::methodReference() {
  return getRuleContext<Java8Parser::MethodReferenceContext>(0);
}


size_t Java8Parser::PrimaryNoNewArrayContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArrayContext* Java8Parser::primaryNoNewArray() {
  PrimaryNoNewArrayContext *_localctx = _tracker.createInstance<PrimaryNoNewArrayContext>(_ctx, getState());
  enterRule(_localctx, 354, Java8Parser::RulePrimaryNoNewArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1899);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1870);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1871);
      typeName();
      setState(1876);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1872);
        match(Java8Parser::LBRACK);
        setState(1873);
        match(Java8Parser::RBRACK);
        setState(1878);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1879);
      match(Java8Parser::DOT);
      setState(1880);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1882);
      match(Java8Parser::VOID);
      setState(1883);
      match(Java8Parser::DOT);
      setState(1884);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1885);
      match(Java8Parser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1886);
      typeName();
      setState(1887);
      match(Java8Parser::DOT);
      setState(1888);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1890);
      match(Java8Parser::LPAREN);
      setState(1891);
      expression();
      setState(1892);
      match(Java8Parser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1894);
      classInstanceCreationExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1895);
      fieldAccess();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1896);
      arrayAccess();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1897);
      methodInvocation();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1898);
      methodReference();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray__1__arrayAccessContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray__1__arrayAccessContext::PrimaryNoNewArray__1__arrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray__1__arrayAccessContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray__1__arrayAccess;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray__1__arrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray__1__arrayAccess(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray__1__arrayAccessContext* Java8Parser::primaryNoNewArray__1__arrayAccess() {
  PrimaryNoNewArray__1__arrayAccessContext *_localctx = _tracker.createInstance<PrimaryNoNewArray__1__arrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 356, Java8Parser::RulePrimaryNoNewArray__1__arrayAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray__2__arrayAccessContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::PrimaryNoNewArray__2__arrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::MethodReferenceContext* Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::methodReference() {
  return getRuleContext<Java8Parser::MethodReferenceContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray__2__arrayAccess;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray__2__arrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray__2__arrayAccess(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray__2__arrayAccessContext* Java8Parser::primaryNoNewArray__2__arrayAccess() {
  PrimaryNoNewArray__2__arrayAccessContext *_localctx = _tracker.createInstance<PrimaryNoNewArray__2__arrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 358, Java8Parser::RulePrimaryNoNewArray__2__arrayAccess);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1931);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1903);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1904);
      typeName();
      setState(1909);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1905);
        match(Java8Parser::LBRACK);
        setState(1906);
        match(Java8Parser::RBRACK);
        setState(1911);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1912);
      match(Java8Parser::DOT);
      setState(1913);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1915);
      match(Java8Parser::VOID);
      setState(1916);
      match(Java8Parser::DOT);
      setState(1917);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1918);
      match(Java8Parser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1919);
      typeName();
      setState(1920);
      match(Java8Parser::DOT);
      setState(1921);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1923);
      match(Java8Parser::LPAREN);
      setState(1924);
      expression();
      setState(1925);
      match(Java8Parser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1927);
      classInstanceCreationExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1928);
      fieldAccess();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1929);
      methodInvocation();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1930);
      methodReference();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray__1__primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray__1__primaryContext::PrimaryNoNewArray__1__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassInstanceCreationExpression__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primaryContext::classInstanceCreationExpression__1__primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression__1__primaryContext>(0);
}

Java8Parser::FieldAccess__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primaryContext::fieldAccess__1__primary() {
  return getRuleContext<Java8Parser::FieldAccess__1__primaryContext>(0);
}

Java8Parser::ArrayAccess__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primaryContext::arrayAccess__1__primary() {
  return getRuleContext<Java8Parser::ArrayAccess__1__primaryContext>(0);
}

Java8Parser::MethodInvocation__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primaryContext::methodInvocation__1__primary() {
  return getRuleContext<Java8Parser::MethodInvocation__1__primaryContext>(0);
}

Java8Parser::MethodReference__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primaryContext::methodReference__1__primary() {
  return getRuleContext<Java8Parser::MethodReference__1__primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray__1__primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray__1__primary;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray__1__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray__1__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray__1__primaryContext* Java8Parser::primaryNoNewArray__1__primary() {
  PrimaryNoNewArray__1__primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray__1__primaryContext>(_ctx, getState());
  enterRule(_localctx, 360, Java8Parser::RulePrimaryNoNewArray__1__primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1938);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1933);
      classInstanceCreationExpression__1__primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1934);
      fieldAccess__1__primary();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1935);
      arrayAccess__1__primary();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1936);
      methodInvocation__1__primary();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1937);
      methodReference__1__primary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray__1__primary__1__arrayAccess__1__primary;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray__1__primary__1__arrayAccess__1__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext* Java8Parser::primaryNoNewArray__1__primary__1__arrayAccess__1__primary() {
  PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext>(_ctx, getState());
  enterRule(_localctx, 362, Java8Parser::RulePrimaryNoNewArray__1__primary__1__arrayAccess__1__primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassInstanceCreationExpression__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext::classInstanceCreationExpression__1__primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression__1__primaryContext>(0);
}

Java8Parser::FieldAccess__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext::fieldAccess__1__primary() {
  return getRuleContext<Java8Parser::FieldAccess__1__primaryContext>(0);
}

Java8Parser::MethodInvocation__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext::methodInvocation__1__primary() {
  return getRuleContext<Java8Parser::MethodInvocation__1__primaryContext>(0);
}

Java8Parser::MethodReference__1__primaryContext* Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext::methodReference__1__primary() {
  return getRuleContext<Java8Parser::MethodReference__1__primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray__1__primary__2__arrayAccess__1__primary;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray__1__primary__2__arrayAccess__1__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext* Java8Parser::primaryNoNewArray__1__primary__2__arrayAccess__1__primary() {
  PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext>(_ctx, getState());
  enterRule(_localctx, 364, Java8Parser::RulePrimaryNoNewArray__1__primary__2__arrayAccess__1__primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1946);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1942);
      classInstanceCreationExpression__1__primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1943);
      fieldAccess__1__primary();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1944);
      methodInvocation__1__primary();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1945);
      methodReference__1__primary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray__2__primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray__2__primaryContext::PrimaryNoNewArray__2__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primaryContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray__2__primaryContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primaryContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray__2__primaryContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primaryContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primaryContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primaryContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassInstanceCreationExpression__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::classInstanceCreationExpression__2__primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression__2__primaryContext>(0);
}

Java8Parser::FieldAccess__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::fieldAccess__2__primary() {
  return getRuleContext<Java8Parser::FieldAccess__2__primaryContext>(0);
}

Java8Parser::ArrayAccess__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::arrayAccess__2__primary() {
  return getRuleContext<Java8Parser::ArrayAccess__2__primaryContext>(0);
}

Java8Parser::MethodInvocation__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::methodInvocation__2__primary() {
  return getRuleContext<Java8Parser::MethodInvocation__2__primaryContext>(0);
}

Java8Parser::MethodReference__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primaryContext::methodReference__2__primary() {
  return getRuleContext<Java8Parser::MethodReference__2__primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray__2__primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray__2__primary;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray__2__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray__2__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray__2__primaryContext* Java8Parser::primaryNoNewArray__2__primary() {
  PrimaryNoNewArray__2__primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray__2__primaryContext>(_ctx, getState());
  enterRule(_localctx, 366, Java8Parser::RulePrimaryNoNewArray__2__primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1988);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1948);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1949);
      typeName();
      setState(1954);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1950);
        match(Java8Parser::LBRACK);
        setState(1951);
        match(Java8Parser::RBRACK);
        setState(1956);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1957);
      match(Java8Parser::DOT);
      setState(1958);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1960);
      unannPrimitiveType();
      setState(1965);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1961);
        match(Java8Parser::LBRACK);
        setState(1962);
        match(Java8Parser::RBRACK);
        setState(1967);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1968);
      match(Java8Parser::DOT);
      setState(1969);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1971);
      match(Java8Parser::VOID);
      setState(1972);
      match(Java8Parser::DOT);
      setState(1973);
      match(Java8Parser::CLASS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1974);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1975);
      typeName();
      setState(1976);
      match(Java8Parser::DOT);
      setState(1977);
      match(Java8Parser::THIS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1979);
      match(Java8Parser::LPAREN);
      setState(1980);
      expression();
      setState(1981);
      match(Java8Parser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1983);
      classInstanceCreationExpression__2__primary();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1984);
      fieldAccess__2__primary();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1985);
      arrayAccess__2__primary();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1986);
      methodInvocation__2__primary();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1987);
      methodReference__2__primary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray__2__primary__1__arrayAccess__2__primary;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray__2__primary__1__arrayAccess__2__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext* Java8Parser::primaryNoNewArray__2__primary__1__arrayAccess__2__primary() {
  PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext>(_ctx, getState());
  enterRule(_localctx, 368, Java8Parser::RulePrimaryNoNewArray__2__primary__1__arrayAccess__2__primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassInstanceCreationExpression__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::classInstanceCreationExpression__2__primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression__2__primaryContext>(0);
}

Java8Parser::FieldAccess__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::fieldAccess__2__primary() {
  return getRuleContext<Java8Parser::FieldAccess__2__primaryContext>(0);
}

Java8Parser::MethodInvocation__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::methodInvocation__2__primary() {
  return getRuleContext<Java8Parser::MethodInvocation__2__primaryContext>(0);
}

Java8Parser::MethodReference__2__primaryContext* Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::methodReference__2__primary() {
  return getRuleContext<Java8Parser::MethodReference__2__primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray__2__primary__2__arrayAccess__2__primary;
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray__2__primary__2__arrayAccess__2__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext* Java8Parser::primaryNoNewArray__2__primary__2__arrayAccess__2__primary() {
  PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext>(_ctx, getState());
  enterRule(_localctx, 370, Java8Parser::RulePrimaryNoNewArray__2__primary__2__arrayAccess__2__primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2031);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1992);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1993);
      typeName();
      setState(1998);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1994);
        match(Java8Parser::LBRACK);
        setState(1995);
        match(Java8Parser::RBRACK);
        setState(2000);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2001);
      match(Java8Parser::DOT);
      setState(2002);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2004);
      unannPrimitiveType();
      setState(2009);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(2005);
        match(Java8Parser::LBRACK);
        setState(2006);
        match(Java8Parser::RBRACK);
        setState(2011);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2012);
      match(Java8Parser::DOT);
      setState(2013);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2015);
      match(Java8Parser::VOID);
      setState(2016);
      match(Java8Parser::DOT);
      setState(2017);
      match(Java8Parser::CLASS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2018);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2019);
      typeName();
      setState(2020);
      match(Java8Parser::DOT);
      setState(2021);
      match(Java8Parser::THIS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2023);
      match(Java8Parser::LPAREN);
      setState(2024);
      expression();
      setState(2025);
      match(Java8Parser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2027);
      classInstanceCreationExpression__2__primary();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2028);
      fieldAccess__2__primary();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2029);
      methodInvocation__2__primary();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2030);
      methodReference__2__primary();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpressionContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpressionContext::ClassInstanceCreationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpressionContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpressionContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpressionContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpressionContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpressionContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpressionContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpressionContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpressionContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ClassInstanceCreationExpressionContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::ClassInstanceCreationExpressionContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression;
}


antlrcpp::Any Java8Parser::ClassInstanceCreationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassInstanceCreationExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::classInstanceCreationExpression() {
  ClassInstanceCreationExpressionContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpressionContext>(_ctx, getState());
  enterRule(_localctx, 372, Java8Parser::RuleClassInstanceCreationExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2116);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2033);
      match(Java8Parser::NEW);
      setState(2035);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2034);
        typeArguments();
      }
      setState(2040);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2037);
        annotation();
        setState(2042);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2043);
      match(Java8Parser::Identifier);
      setState(2054);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::DOT) {
        setState(2044);
        match(Java8Parser::DOT);
        setState(2048);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2045);
          annotation();
          setState(2050);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2051);
        match(Java8Parser::Identifier);
        setState(2056);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2058);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2057);
        typeArgumentsOrDiamond();
      }
      setState(2060);
      match(Java8Parser::LPAREN);
      setState(2062);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2061);
        argumentList();
      }
      setState(2064);
      match(Java8Parser::RPAREN);
      setState(2066);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2065);
        classBody();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2068);
      expressionName();
      setState(2069);
      match(Java8Parser::DOT);
      setState(2070);
      match(Java8Parser::NEW);
      setState(2072);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2071);
        typeArguments();
      }
      setState(2077);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2074);
        annotation();
        setState(2079);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2080);
      match(Java8Parser::Identifier);
      setState(2082);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2081);
        typeArgumentsOrDiamond();
      }
      setState(2084);
      match(Java8Parser::LPAREN);
      setState(2086);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2085);
        argumentList();
      }
      setState(2088);
      match(Java8Parser::RPAREN);
      setState(2090);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2089);
        classBody();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2092);
      primary();
      setState(2093);
      match(Java8Parser::DOT);
      setState(2094);
      match(Java8Parser::NEW);
      setState(2096);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2095);
        typeArguments();
      }
      setState(2101);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2098);
        annotation();
        setState(2103);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2104);
      match(Java8Parser::Identifier);
      setState(2106);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2105);
        typeArgumentsOrDiamond();
      }
      setState(2108);
      match(Java8Parser::LPAREN);
      setState(2110);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2109);
        argumentList();
      }
      setState(2112);
      match(Java8Parser::RPAREN);
      setState(2114);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2113);
        classBody();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpression__1__primaryContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpression__1__primaryContext::ClassInstanceCreationExpression__1__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpression__1__primaryContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpression__1__primaryContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpression__1__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression__1__primary;
}


antlrcpp::Any Java8Parser::ClassInstanceCreationExpression__1__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassInstanceCreationExpression__1__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassInstanceCreationExpression__1__primaryContext* Java8Parser::classInstanceCreationExpression__1__primary() {
  ClassInstanceCreationExpression__1__primaryContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpression__1__primaryContext>(_ctx, getState());
  enterRule(_localctx, 374, Java8Parser::RuleClassInstanceCreationExpression__1__primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2118);
    match(Java8Parser::DOT);
    setState(2119);
    match(Java8Parser::NEW);
    setState(2121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2120);
      typeArguments();
    }
    setState(2126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(2123);
      annotation();
      setState(2128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2129);
    match(Java8Parser::Identifier);
    setState(2131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2130);
      typeArgumentsOrDiamond();
    }
    setState(2133);
    match(Java8Parser::LPAREN);
    setState(2135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(2134);
      argumentList();
    }
    setState(2137);
    match(Java8Parser::RPAREN);
    setState(2139);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 226, _ctx)) {
    case 1: {
      setState(2138);
      classBody();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpression__2__primaryContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpression__2__primaryContext::ClassInstanceCreationExpression__2__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpression__2__primaryContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpression__2__primaryContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpression__2__primaryContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ClassInstanceCreationExpression__2__primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpression__2__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression__2__primary;
}


antlrcpp::Any Java8Parser::ClassInstanceCreationExpression__2__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitClassInstanceCreationExpression__2__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassInstanceCreationExpression__2__primaryContext* Java8Parser::classInstanceCreationExpression__2__primary() {
  ClassInstanceCreationExpression__2__primaryContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpression__2__primaryContext>(_ctx, getState());
  enterRule(_localctx, 376, Java8Parser::RuleClassInstanceCreationExpression__2__primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2200);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::NEW: {
        enterOuterAlt(_localctx, 1);
        setState(2141);
        match(Java8Parser::NEW);
        setState(2143);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2142);
          typeArguments();
        }
        setState(2148);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2145);
          annotation();
          setState(2150);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2151);
        match(Java8Parser::Identifier);
        setState(2162);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::DOT) {
          setState(2152);
          match(Java8Parser::DOT);
          setState(2156);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == Java8Parser::AT) {
            setState(2153);
            annotation();
            setState(2158);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2159);
          match(Java8Parser::Identifier);
          setState(2164);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2166);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2165);
          typeArgumentsOrDiamond();
        }
        setState(2168);
        match(Java8Parser::LPAREN);
        setState(2170);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
          | (1ULL << Java8Parser::BYTE)
          | (1ULL << Java8Parser::CHAR)
          | (1ULL << Java8Parser::DOUBLE)
          | (1ULL << Java8Parser::FLOAT)
          | (1ULL << Java8Parser::INT)
          | (1ULL << Java8Parser::LONG)
          | (1ULL << Java8Parser::NEW)
          | (1ULL << Java8Parser::SHORT)
          | (1ULL << Java8Parser::SUPER)
          | (1ULL << Java8Parser::THIS)
          | (1ULL << Java8Parser::VOID)
          | (1ULL << Java8Parser::IntegerLiteral)
          | (1ULL << Java8Parser::FloatingPointLiteral)
          | (1ULL << Java8Parser::BooleanLiteral)
          | (1ULL << Java8Parser::CharacterLiteral)
          | (1ULL << Java8Parser::StringLiteral)
          | (1ULL << Java8Parser::NullLiteral)
          | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
          | (1ULL << (Java8Parser::TILDE - 69))
          | (1ULL << (Java8Parser::INC - 69))
          | (1ULL << (Java8Parser::DEC - 69))
          | (1ULL << (Java8Parser::ADD - 69))
          | (1ULL << (Java8Parser::SUB - 69))
          | (1ULL << (Java8Parser::Identifier - 69))
          | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
          setState(2169);
          argumentList();
        }
        setState(2172);
        match(Java8Parser::RPAREN);
        setState(2174);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
        case 1: {
          setState(2173);
          classBody();
          break;
        }

        }
        break;
      }

      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2176);
        expressionName();
        setState(2177);
        match(Java8Parser::DOT);
        setState(2178);
        match(Java8Parser::NEW);
        setState(2180);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2179);
          typeArguments();
        }
        setState(2185);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2182);
          annotation();
          setState(2187);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2188);
        match(Java8Parser::Identifier);
        setState(2190);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2189);
          typeArgumentsOrDiamond();
        }
        setState(2192);
        match(Java8Parser::LPAREN);
        setState(2194);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
          | (1ULL << Java8Parser::BYTE)
          | (1ULL << Java8Parser::CHAR)
          | (1ULL << Java8Parser::DOUBLE)
          | (1ULL << Java8Parser::FLOAT)
          | (1ULL << Java8Parser::INT)
          | (1ULL << Java8Parser::LONG)
          | (1ULL << Java8Parser::NEW)
          | (1ULL << Java8Parser::SHORT)
          | (1ULL << Java8Parser::SUPER)
          | (1ULL << Java8Parser::THIS)
          | (1ULL << Java8Parser::VOID)
          | (1ULL << Java8Parser::IntegerLiteral)
          | (1ULL << Java8Parser::FloatingPointLiteral)
          | (1ULL << Java8Parser::BooleanLiteral)
          | (1ULL << Java8Parser::CharacterLiteral)
          | (1ULL << Java8Parser::StringLiteral)
          | (1ULL << Java8Parser::NullLiteral)
          | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
          | (1ULL << (Java8Parser::TILDE - 69))
          | (1ULL << (Java8Parser::INC - 69))
          | (1ULL << (Java8Parser::DEC - 69))
          | (1ULL << (Java8Parser::ADD - 69))
          | (1ULL << (Java8Parser::SUB - 69))
          | (1ULL << (Java8Parser::Identifier - 69))
          | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
          setState(2193);
          argumentList();
        }
        setState(2196);
        match(Java8Parser::RPAREN);
        setState(2198);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 238, _ctx)) {
        case 1: {
          setState(2197);
          classBody();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsOrDiamondContext ------------------------------------------------------------------

Java8Parser::TypeArgumentsOrDiamondContext::TypeArgumentsOrDiamondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeArgumentsContext* Java8Parser::TypeArgumentsOrDiamondContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

tree::TerminalNode* Java8Parser::TypeArgumentsOrDiamondContext::LT() {
  return getToken(Java8Parser::LT, 0);
}

tree::TerminalNode* Java8Parser::TypeArgumentsOrDiamondContext::GT() {
  return getToken(Java8Parser::GT, 0);
}


size_t Java8Parser::TypeArgumentsOrDiamondContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgumentsOrDiamond;
}


antlrcpp::Any Java8Parser::TypeArgumentsOrDiamondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitTypeArgumentsOrDiamond(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::typeArgumentsOrDiamond() {
  TypeArgumentsOrDiamondContext *_localctx = _tracker.createInstance<TypeArgumentsOrDiamondContext>(_ctx, getState());
  enterRule(_localctx, 378, Java8Parser::RuleTypeArgumentsOrDiamond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 240, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2202);
      typeArguments();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2203);
      match(Java8Parser::LT);
      setState(2204);
      match(Java8Parser::GT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccessContext ------------------------------------------------------------------

Java8Parser::FieldAccessContext::FieldAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryContext* Java8Parser::FieldAccessContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::FieldAccessContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::FieldAccessContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

tree::TerminalNode* Java8Parser::FieldAccessContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::FieldAccessContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

Java8Parser::TypeNameContext* Java8Parser::FieldAccessContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::FieldAccessContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess;
}


antlrcpp::Any Java8Parser::FieldAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFieldAccess(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldAccessContext* Java8Parser::fieldAccess() {
  FieldAccessContext *_localctx = _tracker.createInstance<FieldAccessContext>(_ctx, getState());
  enterRule(_localctx, 380, Java8Parser::RuleFieldAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2207);
      primary();
      setState(2208);
      match(Java8Parser::DOT);
      setState(2209);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2211);
      match(Java8Parser::SUPER);
      setState(2212);
      match(Java8Parser::DOT);
      setState(2213);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2214);
      typeName();
      setState(2215);
      match(Java8Parser::DOT);
      setState(2216);
      match(Java8Parser::SUPER);
      setState(2217);
      match(Java8Parser::DOT);
      setState(2218);
      match(Java8Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccess__1__primaryContext ------------------------------------------------------------------

Java8Parser::FieldAccess__1__primaryContext::FieldAccess__1__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::FieldAccess__1__primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::FieldAccess__1__primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::FieldAccess__1__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess__1__primary;
}


antlrcpp::Any Java8Parser::FieldAccess__1__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFieldAccess__1__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldAccess__1__primaryContext* Java8Parser::fieldAccess__1__primary() {
  FieldAccess__1__primaryContext *_localctx = _tracker.createInstance<FieldAccess__1__primaryContext>(_ctx, getState());
  enterRule(_localctx, 382, Java8Parser::RuleFieldAccess__1__primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2222);
    match(Java8Parser::DOT);
    setState(2223);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccess__2__primaryContext ------------------------------------------------------------------

Java8Parser::FieldAccess__2__primaryContext::FieldAccess__2__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::FieldAccess__2__primaryContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::FieldAccess__2__primaryContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::FieldAccess__2__primaryContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

tree::TerminalNode* Java8Parser::FieldAccess__2__primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeNameContext* Java8Parser::FieldAccess__2__primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::FieldAccess__2__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess__2__primary;
}


antlrcpp::Any Java8Parser::FieldAccess__2__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitFieldAccess__2__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldAccess__2__primaryContext* Java8Parser::fieldAccess__2__primary() {
  FieldAccess__2__primaryContext *_localctx = _tracker.createInstance<FieldAccess__2__primaryContext>(_ctx, getState());
  enterRule(_localctx, 384, Java8Parser::RuleFieldAccess__2__primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2234);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::SUPER: {
        enterOuterAlt(_localctx, 1);
        setState(2225);
        match(Java8Parser::SUPER);
        setState(2226);
        match(Java8Parser::DOT);
        setState(2227);
        match(Java8Parser::Identifier);
        break;
      }

      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2228);
        typeName();
        setState(2229);
        match(Java8Parser::DOT);
        setState(2230);
        match(Java8Parser::SUPER);
        setState(2231);
        match(Java8Parser::DOT);
        setState(2232);
        match(Java8Parser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccessContext ------------------------------------------------------------------

Java8Parser::ArrayAccessContext::ArrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::ArrayAccessContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccessContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccessContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccessContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccessContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccessContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccessContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

Java8Parser::PrimaryNoNewArray__2__arrayAccessContext* Java8Parser::ArrayAccessContext::primaryNoNewArray__2__arrayAccess() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray__2__arrayAccessContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray__1__arrayAccessContext *> Java8Parser::ArrayAccessContext::primaryNoNewArray__1__arrayAccess() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray__1__arrayAccessContext>();
}

Java8Parser::PrimaryNoNewArray__1__arrayAccessContext* Java8Parser::ArrayAccessContext::primaryNoNewArray__1__arrayAccess(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray__1__arrayAccessContext>(i);
}


size_t Java8Parser::ArrayAccessContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess;
}


antlrcpp::Any Java8Parser::ArrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitArrayAccess(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayAccessContext* Java8Parser::arrayAccess() {
  ArrayAccessContext *_localctx = _tracker.createInstance<ArrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 386, Java8Parser::RuleArrayAccess);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 243, _ctx)) {
    case 1: {
      setState(2236);
      expressionName();
      setState(2237);
      match(Java8Parser::LBRACK);
      setState(2238);
      expression();
      setState(2239);
      match(Java8Parser::RBRACK);
      break;
    }

    case 2: {
      setState(2241);
      primaryNoNewArray__2__arrayAccess();
      setState(2242);
      match(Java8Parser::LBRACK);
      setState(2243);
      expression();
      setState(2244);
      match(Java8Parser::RBRACK);
      break;
    }

    }
    setState(2255);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::LBRACK) {
      setState(2248);
      primaryNoNewArray__1__arrayAccess();
      setState(2249);
      match(Java8Parser::LBRACK);
      setState(2250);
      expression();
      setState(2251);
      match(Java8Parser::RBRACK);
      setState(2257);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccess__1__primaryContext ------------------------------------------------------------------

Java8Parser::ArrayAccess__1__primaryContext::ArrayAccess__1__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext* Java8Parser::ArrayAccess__1__primaryContext::primaryNoNewArray__1__primary__2__arrayAccess__1__primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray__1__primary__2__arrayAccess__1__primaryContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccess__1__primaryContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccess__1__primaryContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccess__1__primaryContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccess__1__primaryContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccess__1__primaryContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccess__1__primaryContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

std::vector<Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext *> Java8Parser::ArrayAccess__1__primaryContext::primaryNoNewArray__1__primary__1__arrayAccess__1__primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext>();
}

Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext* Java8Parser::ArrayAccess__1__primaryContext::primaryNoNewArray__1__primary__1__arrayAccess__1__primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray__1__primary__1__arrayAccess__1__primaryContext>(i);
}


size_t Java8Parser::ArrayAccess__1__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess__1__primary;
}


antlrcpp::Any Java8Parser::ArrayAccess__1__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitArrayAccess__1__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayAccess__1__primaryContext* Java8Parser::arrayAccess__1__primary() {
  ArrayAccess__1__primaryContext *_localctx = _tracker.createInstance<ArrayAccess__1__primaryContext>(_ctx, getState());
  enterRule(_localctx, 388, Java8Parser::RuleArrayAccess__1__primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2258);
    primaryNoNewArray__1__primary__2__arrayAccess__1__primary();
    setState(2259);
    match(Java8Parser::LBRACK);
    setState(2260);
    expression();
    setState(2261);
    match(Java8Parser::RBRACK);
    setState(2270);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2263);
        primaryNoNewArray__1__primary__1__arrayAccess__1__primary();
        setState(2264);
        match(Java8Parser::LBRACK);
        setState(2265);
        expression();
        setState(2266);
        match(Java8Parser::RBRACK); 
      }
      setState(2272);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccess__2__primaryContext ------------------------------------------------------------------

Java8Parser::ArrayAccess__2__primaryContext::ArrayAccess__2__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::ArrayAccess__2__primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccess__2__primaryContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccess__2__primaryContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccess__2__primaryContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccess__2__primaryContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccess__2__primaryContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccess__2__primaryContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext* Java8Parser::ArrayAccess__2__primaryContext::primaryNoNewArray__2__primary__2__arrayAccess__2__primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray__2__primary__2__arrayAccess__2__primaryContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext *> Java8Parser::ArrayAccess__2__primaryContext::primaryNoNewArray__2__primary__1__arrayAccess__2__primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext>();
}

Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext* Java8Parser::ArrayAccess__2__primaryContext::primaryNoNewArray__2__primary__1__arrayAccess__2__primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray__2__primary__1__arrayAccess__2__primaryContext>(i);
}


size_t Java8Parser::ArrayAccess__2__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess__2__primary;
}


antlrcpp::Any Java8Parser::ArrayAccess__2__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitArrayAccess__2__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayAccess__2__primaryContext* Java8Parser::arrayAccess__2__primary() {
  ArrayAccess__2__primaryContext *_localctx = _tracker.createInstance<ArrayAccess__2__primaryContext>(_ctx, getState());
  enterRule(_localctx, 390, Java8Parser::RuleArrayAccess__2__primary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2283);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
    case 1: {
      setState(2273);
      expressionName();
      setState(2274);
      match(Java8Parser::LBRACK);
      setState(2275);
      expression();
      setState(2276);
      match(Java8Parser::RBRACK);
      break;
    }

    case 2: {
      setState(2278);
      primaryNoNewArray__2__primary__2__arrayAccess__2__primary();
      setState(2279);
      match(Java8Parser::LBRACK);
      setState(2280);
      expression();
      setState(2281);
      match(Java8Parser::RBRACK);
      break;
    }

    }
    setState(2292);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2285);
        primaryNoNewArray__2__primary__1__arrayAccess__2__primary();
        setState(2286);
        match(Java8Parser::LBRACK);
        setState(2287);
        expression();
        setState(2288);
        match(Java8Parser::RBRACK); 
      }
      setState(2294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocationContext ------------------------------------------------------------------

Java8Parser::MethodInvocationContext::MethodInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodNameContext* Java8Parser::MethodInvocationContext::methodName() {
  return getRuleContext<Java8Parser::MethodNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocationContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodInvocationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::MethodInvocationContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocationContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodInvocationContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::MethodInvocationContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}


size_t Java8Parser::MethodInvocationContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation;
}


antlrcpp::Any Java8Parser::MethodInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodInvocation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodInvocationContext* Java8Parser::methodInvocation() {
  MethodInvocationContext *_localctx = _tracker.createInstance<MethodInvocationContext>(_ctx, getState());
  enterRule(_localctx, 392, Java8Parser::RuleMethodInvocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2363);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2295);
      methodName();
      setState(2296);
      match(Java8Parser::LPAREN);
      setState(2298);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2297);
        argumentList();
      }
      setState(2300);
      match(Java8Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2302);
      typeName();
      setState(2303);
      match(Java8Parser::DOT);
      setState(2305);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2304);
        typeArguments();
      }
      setState(2307);
      match(Java8Parser::Identifier);
      setState(2308);
      match(Java8Parser::LPAREN);
      setState(2310);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2309);
        argumentList();
      }
      setState(2312);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2314);
      expressionName();
      setState(2315);
      match(Java8Parser::DOT);
      setState(2317);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2316);
        typeArguments();
      }
      setState(2319);
      match(Java8Parser::Identifier);
      setState(2320);
      match(Java8Parser::LPAREN);
      setState(2322);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2321);
        argumentList();
      }
      setState(2324);
      match(Java8Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2326);
      primary();
      setState(2327);
      match(Java8Parser::DOT);
      setState(2329);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2328);
        typeArguments();
      }
      setState(2331);
      match(Java8Parser::Identifier);
      setState(2332);
      match(Java8Parser::LPAREN);
      setState(2334);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2333);
        argumentList();
      }
      setState(2336);
      match(Java8Parser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2338);
      match(Java8Parser::SUPER);
      setState(2339);
      match(Java8Parser::DOT);
      setState(2341);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2340);
        typeArguments();
      }
      setState(2343);
      match(Java8Parser::Identifier);
      setState(2344);
      match(Java8Parser::LPAREN);
      setState(2346);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2345);
        argumentList();
      }
      setState(2348);
      match(Java8Parser::RPAREN);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2349);
      typeName();
      setState(2350);
      match(Java8Parser::DOT);
      setState(2351);
      match(Java8Parser::SUPER);
      setState(2352);
      match(Java8Parser::DOT);
      setState(2354);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2353);
        typeArguments();
      }
      setState(2356);
      match(Java8Parser::Identifier);
      setState(2357);
      match(Java8Parser::LPAREN);
      setState(2359);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2358);
        argumentList();
      }
      setState(2361);
      match(Java8Parser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocation__1__primaryContext ------------------------------------------------------------------

Java8Parser::MethodInvocation__1__primaryContext::MethodInvocation__1__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodInvocation__1__primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocation__1__primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocation__1__primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocation__1__primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocation__1__primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocation__1__primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}


size_t Java8Parser::MethodInvocation__1__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation__1__primary;
}


antlrcpp::Any Java8Parser::MethodInvocation__1__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodInvocation__1__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodInvocation__1__primaryContext* Java8Parser::methodInvocation__1__primary() {
  MethodInvocation__1__primaryContext *_localctx = _tracker.createInstance<MethodInvocation__1__primaryContext>(_ctx, getState());
  enterRule(_localctx, 394, Java8Parser::RuleMethodInvocation__1__primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2365);
    match(Java8Parser::DOT);
    setState(2367);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2366);
      typeArguments();
    }
    setState(2369);
    match(Java8Parser::Identifier);
    setState(2370);
    match(Java8Parser::LPAREN);
    setState(2372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(2371);
      argumentList();
    }
    setState(2374);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocation__2__primaryContext ------------------------------------------------------------------

Java8Parser::MethodInvocation__2__primaryContext::MethodInvocation__2__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodNameContext* Java8Parser::MethodInvocation__2__primaryContext::methodName() {
  return getRuleContext<Java8Parser::MethodNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocation__2__primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocation__2__primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocation__2__primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodInvocation__2__primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::MethodInvocation__2__primaryContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::MethodInvocation__2__primaryContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

tree::TerminalNode* Java8Parser::MethodInvocation__2__primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocation__2__primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodInvocation__2__primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocation__2__primaryContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}


size_t Java8Parser::MethodInvocation__2__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation__2__primary;
}


antlrcpp::Any Java8Parser::MethodInvocation__2__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodInvocation__2__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodInvocation__2__primaryContext* Java8Parser::methodInvocation__2__primary() {
  MethodInvocation__2__primaryContext *_localctx = _tracker.createInstance<MethodInvocation__2__primaryContext>(_ctx, getState());
  enterRule(_localctx, 396, Java8Parser::RuleMethodInvocation__2__primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2432);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2376);
      methodName();
      setState(2377);
      match(Java8Parser::LPAREN);
      setState(2379);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2378);
        argumentList();
      }
      setState(2381);
      match(Java8Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2383);
      typeName();
      setState(2384);
      match(Java8Parser::DOT);
      setState(2386);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2385);
        typeArguments();
      }
      setState(2388);
      match(Java8Parser::Identifier);
      setState(2389);
      match(Java8Parser::LPAREN);
      setState(2391);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2390);
        argumentList();
      }
      setState(2393);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2395);
      expressionName();
      setState(2396);
      match(Java8Parser::DOT);
      setState(2398);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2397);
        typeArguments();
      }
      setState(2400);
      match(Java8Parser::Identifier);
      setState(2401);
      match(Java8Parser::LPAREN);
      setState(2403);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2402);
        argumentList();
      }
      setState(2405);
      match(Java8Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2407);
      match(Java8Parser::SUPER);
      setState(2408);
      match(Java8Parser::DOT);
      setState(2410);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2409);
        typeArguments();
      }
      setState(2412);
      match(Java8Parser::Identifier);
      setState(2413);
      match(Java8Parser::LPAREN);
      setState(2415);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2414);
        argumentList();
      }
      setState(2417);
      match(Java8Parser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2418);
      typeName();
      setState(2419);
      match(Java8Parser::DOT);
      setState(2420);
      match(Java8Parser::SUPER);
      setState(2421);
      match(Java8Parser::DOT);
      setState(2423);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2422);
        typeArguments();
      }
      setState(2425);
      match(Java8Parser::Identifier);
      setState(2426);
      match(Java8Parser::LPAREN);
      setState(2428);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2427);
        argumentList();
      }
      setState(2430);
      match(Java8Parser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

Java8Parser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArgumentListContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ArgumentListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::ArgumentListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::ArgumentListContext::getRuleIndex() const {
  return Java8Parser::RuleArgumentList;
}


antlrcpp::Any Java8Parser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArgumentListContext* Java8Parser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 398, Java8Parser::RuleArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2434);
    expression();
    setState(2439);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(2435);
      match(Java8Parser::COMMA);
      setState(2436);
      expression();
      setState(2441);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReferenceContext ------------------------------------------------------------------

Java8Parser::MethodReferenceContext::MethodReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodReferenceContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::COLONCOLON() {
  return getToken(Java8Parser::COLONCOLON, 0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReferenceContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ReferencetypeContext* Java8Parser::MethodReferenceContext::referencetype() {
  return getRuleContext<Java8Parser::ReferencetypeContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::MethodReferenceContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodReferenceContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

Java8Parser::ClasstypeContext* Java8Parser::MethodReferenceContext::classtype() {
  return getRuleContext<Java8Parser::ClasstypeContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

Java8Parser::ArraytypeContext* Java8Parser::MethodReferenceContext::arraytype() {
  return getRuleContext<Java8Parser::ArraytypeContext>(0);
}


size_t Java8Parser::MethodReferenceContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference;
}


antlrcpp::Any Java8Parser::MethodReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodReference(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodReferenceContext* Java8Parser::methodReference() {
  MethodReferenceContext *_localctx = _tracker.createInstance<MethodReferenceContext>(_ctx, getState());
  enterRule(_localctx, 400, Java8Parser::RuleMethodReference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2489);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2442);
      expressionName();
      setState(2443);
      match(Java8Parser::COLONCOLON);
      setState(2445);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2444);
        typeArguments();
      }
      setState(2447);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2449);
      referencetype();
      setState(2450);
      match(Java8Parser::COLONCOLON);
      setState(2452);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2451);
        typeArguments();
      }
      setState(2454);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2456);
      primary();
      setState(2457);
      match(Java8Parser::COLONCOLON);
      setState(2459);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2458);
        typeArguments();
      }
      setState(2461);
      match(Java8Parser::Identifier);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2463);
      match(Java8Parser::SUPER);
      setState(2464);
      match(Java8Parser::COLONCOLON);
      setState(2466);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2465);
        typeArguments();
      }
      setState(2468);
      match(Java8Parser::Identifier);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2469);
      typeName();
      setState(2470);
      match(Java8Parser::DOT);
      setState(2471);
      match(Java8Parser::SUPER);
      setState(2472);
      match(Java8Parser::COLONCOLON);
      setState(2474);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2473);
        typeArguments();
      }
      setState(2476);
      match(Java8Parser::Identifier);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2478);
      classtype();
      setState(2479);
      match(Java8Parser::COLONCOLON);
      setState(2481);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2480);
        typeArguments();
      }
      setState(2483);
      match(Java8Parser::NEW);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2485);
      arraytype();
      setState(2486);
      match(Java8Parser::COLONCOLON);
      setState(2487);
      match(Java8Parser::NEW);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReference__1__primaryContext ------------------------------------------------------------------

Java8Parser::MethodReference__1__primaryContext::MethodReference__1__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodReference__1__primaryContext::COLONCOLON() {
  return getToken(Java8Parser::COLONCOLON, 0);
}

tree::TerminalNode* Java8Parser::MethodReference__1__primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReference__1__primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::MethodReference__1__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference__1__primary;
}


antlrcpp::Any Java8Parser::MethodReference__1__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodReference__1__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodReference__1__primaryContext* Java8Parser::methodReference__1__primary() {
  MethodReference__1__primaryContext *_localctx = _tracker.createInstance<MethodReference__1__primaryContext>(_ctx, getState());
  enterRule(_localctx, 402, Java8Parser::RuleMethodReference__1__primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2491);
    match(Java8Parser::COLONCOLON);
    setState(2493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2492);
      typeArguments();
    }
    setState(2495);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReference__2__primaryContext ------------------------------------------------------------------

Java8Parser::MethodReference__2__primaryContext::MethodReference__2__primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodReference__2__primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference__2__primaryContext::COLONCOLON() {
  return getToken(Java8Parser::COLONCOLON, 0);
}

tree::TerminalNode* Java8Parser::MethodReference__2__primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReference__2__primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ReferencetypeContext* Java8Parser::MethodReference__2__primaryContext::referencetype() {
  return getRuleContext<Java8Parser::ReferencetypeContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference__2__primaryContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodReference__2__primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference__2__primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

Java8Parser::ClasstypeContext* Java8Parser::MethodReference__2__primaryContext::classtype() {
  return getRuleContext<Java8Parser::ClasstypeContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference__2__primaryContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

Java8Parser::ArraytypeContext* Java8Parser::MethodReference__2__primaryContext::arraytype() {
  return getRuleContext<Java8Parser::ArraytypeContext>(0);
}


size_t Java8Parser::MethodReference__2__primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference__2__primary;
}


antlrcpp::Any Java8Parser::MethodReference__2__primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMethodReference__2__primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodReference__2__primaryContext* Java8Parser::methodReference__2__primary() {
  MethodReference__2__primaryContext *_localctx = _tracker.createInstance<MethodReference__2__primaryContext>(_ctx, getState());
  enterRule(_localctx, 404, Java8Parser::RuleMethodReference__2__primary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2537);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2497);
      expressionName();
      setState(2498);
      match(Java8Parser::COLONCOLON);
      setState(2500);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2499);
        typeArguments();
      }
      setState(2502);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2504);
      referencetype();
      setState(2505);
      match(Java8Parser::COLONCOLON);
      setState(2507);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2506);
        typeArguments();
      }
      setState(2509);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2511);
      match(Java8Parser::SUPER);
      setState(2512);
      match(Java8Parser::COLONCOLON);
      setState(2514);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2513);
        typeArguments();
      }
      setState(2516);
      match(Java8Parser::Identifier);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2517);
      typeName();
      setState(2518);
      match(Java8Parser::DOT);
      setState(2519);
      match(Java8Parser::SUPER);
      setState(2520);
      match(Java8Parser::COLONCOLON);
      setState(2522);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2521);
        typeArguments();
      }
      setState(2524);
      match(Java8Parser::Identifier);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2526);
      classtype();
      setState(2527);
      match(Java8Parser::COLONCOLON);
      setState(2529);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2528);
        typeArguments();
      }
      setState(2531);
      match(Java8Parser::NEW);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2533);
      arraytype();
      setState(2534);
      match(Java8Parser::COLONCOLON);
      setState(2535);
      match(Java8Parser::NEW);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayCreationExpressionContext ------------------------------------------------------------------

Java8Parser::ArrayCreationExpressionContext::ArrayCreationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ArrayCreationExpressionContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

Java8Parser::PrimitivetypeContext* Java8Parser::ArrayCreationExpressionContext::primitivetype() {
  return getRuleContext<Java8Parser::PrimitivetypeContext>(0);
}

Java8Parser::DimExprsContext* Java8Parser::ArrayCreationExpressionContext::dimExprs() {
  return getRuleContext<Java8Parser::DimExprsContext>(0);
}

Java8Parser::DimsContext* Java8Parser::ArrayCreationExpressionContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ArrayCreationExpressionContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::ArrayInitializerContext* Java8Parser::ArrayCreationExpressionContext::arrayInitializer() {
  return getRuleContext<Java8Parser::ArrayInitializerContext>(0);
}


size_t Java8Parser::ArrayCreationExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleArrayCreationExpression;
}


antlrcpp::Any Java8Parser::ArrayCreationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitArrayCreationExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayCreationExpressionContext* Java8Parser::arrayCreationExpression() {
  ArrayCreationExpressionContext *_localctx = _tracker.createInstance<ArrayCreationExpressionContext>(_ctx, getState());
  enterRule(_localctx, 406, Java8Parser::RuleArrayCreationExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2561);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2539);
      match(Java8Parser::NEW);
      setState(2540);
      primitivetype();
      setState(2541);
      dimExprs();
      setState(2543);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx)) {
      case 1: {
        setState(2542);
        dims();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2545);
      match(Java8Parser::NEW);
      setState(2546);
      classOrInterfaceType();
      setState(2547);
      dimExprs();
      setState(2549);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx)) {
      case 1: {
        setState(2548);
        dims();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2551);
      match(Java8Parser::NEW);
      setState(2552);
      primitivetype();
      setState(2553);
      dims();
      setState(2554);
      arrayInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2556);
      match(Java8Parser::NEW);
      setState(2557);
      classOrInterfaceType();
      setState(2558);
      dims();
      setState(2559);
      arrayInitializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimExprsContext ------------------------------------------------------------------

Java8Parser::DimExprsContext::DimExprsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::DimExprContext *> Java8Parser::DimExprsContext::dimExpr() {
  return getRuleContexts<Java8Parser::DimExprContext>();
}

Java8Parser::DimExprContext* Java8Parser::DimExprsContext::dimExpr(size_t i) {
  return getRuleContext<Java8Parser::DimExprContext>(i);
}


size_t Java8Parser::DimExprsContext::getRuleIndex() const {
  return Java8Parser::RuleDimExprs;
}


antlrcpp::Any Java8Parser::DimExprsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitDimExprs(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DimExprsContext* Java8Parser::dimExprs() {
  DimExprsContext *_localctx = _tracker.createInstance<DimExprsContext>(_ctx, getState());
  enterRule(_localctx, 408, Java8Parser::RuleDimExprs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2563);
    dimExpr();
    setState(2567);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2564);
        dimExpr(); 
      }
      setState(2569);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimExprContext ------------------------------------------------------------------

Java8Parser::DimExprContext::DimExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::DimExprContext::LBRACK() {
  return getToken(Java8Parser::LBRACK, 0);
}

Java8Parser::ExpressionContext* Java8Parser::DimExprContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::DimExprContext::RBRACK() {
  return getToken(Java8Parser::RBRACK, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::DimExprContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::DimExprContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::DimExprContext::getRuleIndex() const {
  return Java8Parser::RuleDimExpr;
}


antlrcpp::Any Java8Parser::DimExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitDimExpr(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DimExprContext* Java8Parser::dimExpr() {
  DimExprContext *_localctx = _tracker.createInstance<DimExprContext>(_ctx, getState());
  enterRule(_localctx, 410, Java8Parser::RuleDimExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2573);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(2570);
      annotation();
      setState(2575);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2576);
    match(Java8Parser::LBRACK);
    setState(2577);
    expression();
    setState(2578);
    match(Java8Parser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

Java8Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LambdaExpressionContext* Java8Parser::ExpressionContext::lambdaExpression() {
  return getRuleContext<Java8Parser::LambdaExpressionContext>(0);
}

Java8Parser::AssignmentExpressionContext* Java8Parser::ExpressionContext::assignmentExpression() {
  return getRuleContext<Java8Parser::AssignmentExpressionContext>(0);
}


size_t Java8Parser::ExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleExpression;
}


antlrcpp::Any Java8Parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExpressionContext* Java8Parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 412, Java8Parser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2582);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2580);
      lambdaExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2581);
      assignmentExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

Java8Parser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LambdaParametersContext* Java8Parser::LambdaExpressionContext::lambdaParameters() {
  return getRuleContext<Java8Parser::LambdaParametersContext>(0);
}

tree::TerminalNode* Java8Parser::LambdaExpressionContext::ARROW() {
  return getToken(Java8Parser::ARROW, 0);
}

Java8Parser::LambdaBodyContext* Java8Parser::LambdaExpressionContext::lambdaBody() {
  return getRuleContext<Java8Parser::LambdaBodyContext>(0);
}


size_t Java8Parser::LambdaExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaExpression;
}


antlrcpp::Any Java8Parser::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLambdaExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LambdaExpressionContext* Java8Parser::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 414, Java8Parser::RuleLambdaExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2584);
    lambdaParameters();
    setState(2585);
    match(Java8Parser::ARROW);
    setState(2586);
    lambdaBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParametersContext ------------------------------------------------------------------

Java8Parser::LambdaParametersContext::LambdaParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LambdaParametersContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::LambdaParametersContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::LambdaParametersContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::FormalParameterListContext* Java8Parser::LambdaParametersContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}

Java8Parser::InferredFormalParameterListContext* Java8Parser::LambdaParametersContext::inferredFormalParameterList() {
  return getRuleContext<Java8Parser::InferredFormalParameterListContext>(0);
}


size_t Java8Parser::LambdaParametersContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaParameters;
}


antlrcpp::Any Java8Parser::LambdaParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLambdaParameters(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LambdaParametersContext* Java8Parser::lambdaParameters() {
  LambdaParametersContext *_localctx = _tracker.createInstance<LambdaParametersContext>(_ctx, getState());
  enterRule(_localctx, 416, Java8Parser::RuleLambdaParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2598);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2588);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2589);
      match(Java8Parser::LPAREN);
      setState(2591);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FINAL)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

      || _la == Java8Parser::AT) {
        setState(2590);
        formalParameterList();
      }
      setState(2593);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2594);
      match(Java8Parser::LPAREN);
      setState(2595);
      inferredFormalParameterList();
      setState(2596);
      match(Java8Parser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InferredFormalParameterListContext ------------------------------------------------------------------

Java8Parser::InferredFormalParameterListContext::InferredFormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Java8Parser::InferredFormalParameterListContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::InferredFormalParameterListContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

std::vector<tree::TerminalNode *> Java8Parser::InferredFormalParameterListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::InferredFormalParameterListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::InferredFormalParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleInferredFormalParameterList;
}


antlrcpp::Any Java8Parser::InferredFormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInferredFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InferredFormalParameterListContext* Java8Parser::inferredFormalParameterList() {
  InferredFormalParameterListContext *_localctx = _tracker.createInstance<InferredFormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 418, Java8Parser::RuleInferredFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2600);
    match(Java8Parser::Identifier);
    setState(2605);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(2601);
      match(Java8Parser::COMMA);
      setState(2602);
      match(Java8Parser::Identifier);
      setState(2607);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaBodyContext ------------------------------------------------------------------

Java8Parser::LambdaBodyContext::LambdaBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::LambdaBodyContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::BlockContext* Java8Parser::LambdaBodyContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::LambdaBodyContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaBody;
}


antlrcpp::Any Java8Parser::LambdaBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLambdaBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LambdaBodyContext* Java8Parser::lambdaBody() {
  LambdaBodyContext *_localctx = _tracker.createInstance<LambdaBodyContext>(_ctx, getState());
  enterRule(_localctx, 420, Java8Parser::RuleLambdaBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2610);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::ADD:
      case Java8Parser::SUB:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(2608);
        expression();
        break;
      }

      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(2609);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

Java8Parser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalExpressionContext* Java8Parser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}

Java8Parser::AssignmentContext* Java8Parser::AssignmentExpressionContext::assignment() {
  return getRuleContext<Java8Parser::AssignmentContext>(0);
}


size_t Java8Parser::AssignmentExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAssignmentExpression;
}


antlrcpp::Any Java8Parser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AssignmentExpressionContext* Java8Parser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 422, Java8Parser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2614);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2612);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2613);
      assignment();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

Java8Parser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LeftHandSideContext* Java8Parser::AssignmentContext::leftHandSide() {
  return getRuleContext<Java8Parser::LeftHandSideContext>(0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::AssignmentContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::MUL_ASSIGN() {
  return getToken(Java8Parser::MUL_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::DIV_ASSIGN() {
  return getToken(Java8Parser::DIV_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::MOD_ASSIGN() {
  return getToken(Java8Parser::MOD_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::ADD_ASSIGN() {
  return getToken(Java8Parser::ADD_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::SUB_ASSIGN() {
  return getToken(Java8Parser::SUB_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::LSHIFT_ASSIGN() {
  return getToken(Java8Parser::LSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::RSHIFT_ASSIGN() {
  return getToken(Java8Parser::RSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::URSHIFT_ASSIGN() {
  return getToken(Java8Parser::URSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::AND_ASSIGN() {
  return getToken(Java8Parser::AND_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::XOR_ASSIGN() {
  return getToken(Java8Parser::XOR_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentContext::OR_ASSIGN() {
  return getToken(Java8Parser::OR_ASSIGN, 0);
}


size_t Java8Parser::AssignmentContext::getRuleIndex() const {
  return Java8Parser::RuleAssignment;
}


antlrcpp::Any Java8Parser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AssignmentContext* Java8Parser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 424, Java8Parser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2664);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2616);
      leftHandSide();
      setState(2617);
      match(Java8Parser::ASSIGN);
      setState(2618);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2620);
      leftHandSide();
      setState(2621);
      match(Java8Parser::MUL_ASSIGN);
      setState(2622);
      expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2624);
      leftHandSide();
      setState(2625);
      match(Java8Parser::DIV_ASSIGN);
      setState(2626);
      expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2628);
      leftHandSide();
      setState(2629);
      match(Java8Parser::MOD_ASSIGN);
      setState(2630);
      expression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2632);
      leftHandSide();
      setState(2633);
      match(Java8Parser::ADD_ASSIGN);
      setState(2634);
      expression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2636);
      leftHandSide();
      setState(2637);
      match(Java8Parser::SUB_ASSIGN);
      setState(2638);
      expression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2640);
      leftHandSide();
      setState(2641);
      match(Java8Parser::LSHIFT_ASSIGN);
      setState(2642);
      expression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2644);
      leftHandSide();
      setState(2645);
      match(Java8Parser::RSHIFT_ASSIGN);
      setState(2646);
      expression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2648);
      leftHandSide();
      setState(2649);
      match(Java8Parser::URSHIFT_ASSIGN);
      setState(2650);
      expression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2652);
      leftHandSide();
      setState(2653);
      match(Java8Parser::AND_ASSIGN);
      setState(2654);
      expression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2656);
      leftHandSide();
      setState(2657);
      match(Java8Parser::XOR_ASSIGN);
      setState(2658);
      expression();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2660);
      leftHandSide();
      setState(2661);
      match(Java8Parser::OR_ASSIGN);
      setState(2662);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftHandSideContext ------------------------------------------------------------------

Java8Parser::LeftHandSideContext::LeftHandSideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::LeftHandSideContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::LeftHandSideContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::ArrayAccessContext* Java8Parser::LeftHandSideContext::arrayAccess() {
  return getRuleContext<Java8Parser::ArrayAccessContext>(0);
}


size_t Java8Parser::LeftHandSideContext::getRuleIndex() const {
  return Java8Parser::RuleLeftHandSide;
}


antlrcpp::Any Java8Parser::LeftHandSideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitLeftHandSide(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LeftHandSideContext* Java8Parser::leftHandSide() {
  LeftHandSideContext *_localctx = _tracker.createInstance<LeftHandSideContext>(_ctx, getState());
  enterRule(_localctx, 426, Java8Parser::RuleLeftHandSide);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2669);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2666);
      expressionName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2667);
      fieldAccess();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2668);
      arrayAccess();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::ConditionalExpressionContext::conditionalOrExpression() {
  return getRuleContext<Java8Parser::ConditionalOrExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ConditionalExpressionContext::QUESTION() {
  return getToken(Java8Parser::QUESTION, 0);
}

Java8Parser::ExpressionContext* Java8Parser::ConditionalExpressionContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ConditionalExpressionContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::ConditionalExpressionContext* Java8Parser::ConditionalExpressionContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}

Java8Parser::LambdaExpressionContext* Java8Parser::ConditionalExpressionContext::lambdaExpression() {
  return getRuleContext<Java8Parser::LambdaExpressionContext>(0);
}


size_t Java8Parser::ConditionalExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalExpression;
}


antlrcpp::Any Java8Parser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConditionalExpressionContext* Java8Parser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 428, Java8Parser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2684);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 300, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2671);
      conditionalOrExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2672);
      conditionalOrExpression(0);
      setState(2673);
      match(Java8Parser::QUESTION);
      setState(2674);
      expression();
      setState(2675);
      match(Java8Parser::COLON);
      setState(2676);
      conditionalExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2678);
      conditionalOrExpression(0);
      setState(2679);
      match(Java8Parser::QUESTION);
      setState(2680);
      expression();
      setState(2681);
      match(Java8Parser::COLON);
      setState(2682);
      lambdaExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalOrExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalOrExpressionContext::ConditionalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::ConditionalOrExpressionContext::conditionalAndExpression() {
  return getRuleContext<Java8Parser::ConditionalAndExpressionContext>(0);
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::ConditionalOrExpressionContext::conditionalOrExpression() {
  return getRuleContext<Java8Parser::ConditionalOrExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ConditionalOrExpressionContext::OR() {
  return getToken(Java8Parser::OR, 0);
}


size_t Java8Parser::ConditionalOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalOrExpression;
}


antlrcpp::Any Java8Parser::ConditionalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConditionalOrExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::ConditionalOrExpressionContext* Java8Parser::conditionalOrExpression() {
   return conditionalOrExpression(0);
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::conditionalOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ConditionalOrExpressionContext *_localctx = _tracker.createInstance<ConditionalOrExpressionContext>(_ctx, parentState);
  Java8Parser::ConditionalOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 430;
  enterRecursionRule(_localctx, 430, Java8Parser::RuleConditionalOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2687);
    conditionalAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2694);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConditionalOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConditionalOrExpression);
        setState(2689);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2690);
        match(Java8Parser::OR);
        setState(2691);
        conditionalAndExpression(0); 
      }
      setState(2696);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalAndExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalAndExpressionContext::ConditionalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::ConditionalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContext<Java8Parser::InclusiveOrExpressionContext>(0);
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::ConditionalAndExpressionContext::conditionalAndExpression() {
  return getRuleContext<Java8Parser::ConditionalAndExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ConditionalAndExpressionContext::AND() {
  return getToken(Java8Parser::AND, 0);
}


size_t Java8Parser::ConditionalAndExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalAndExpression;
}


antlrcpp::Any Java8Parser::ConditionalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConditionalAndExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::ConditionalAndExpressionContext* Java8Parser::conditionalAndExpression() {
   return conditionalAndExpression(0);
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::conditionalAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ConditionalAndExpressionContext *_localctx = _tracker.createInstance<ConditionalAndExpressionContext>(_ctx, parentState);
  Java8Parser::ConditionalAndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 432;
  enterRecursionRule(_localctx, 432, Java8Parser::RuleConditionalAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2698);
    inclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2705);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConditionalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConditionalAndExpression);
        setState(2700);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2701);
        match(Java8Parser::AND);
        setState(2702);
        inclusiveOrExpression(0); 
      }
      setState(2707);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

Java8Parser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<Java8Parser::ExclusiveOrExpressionContext>(0);
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::InclusiveOrExpressionContext::inclusiveOrExpression() {
  return getRuleContext<Java8Parser::InclusiveOrExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::InclusiveOrExpressionContext::BITOR() {
  return getToken(Java8Parser::BITOR, 0);
}


size_t Java8Parser::InclusiveOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleInclusiveOrExpression;
}


antlrcpp::Any Java8Parser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::InclusiveOrExpressionContext* Java8Parser::inclusiveOrExpression() {
   return inclusiveOrExpression(0);
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::inclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, parentState);
  Java8Parser::InclusiveOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 434;
  enterRecursionRule(_localctx, 434, Java8Parser::RuleInclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2709);
    exclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2716);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveOrExpression);
        setState(2711);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2712);
        match(Java8Parser::BITOR);
        setState(2713);
        exclusiveOrExpression(0); 
      }
      setState(2718);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

Java8Parser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AndExpressionContext* Java8Parser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContext<Java8Parser::AndExpressionContext>(0);
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::ExclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<Java8Parser::ExclusiveOrExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ExclusiveOrExpressionContext::CARET() {
  return getToken(Java8Parser::CARET, 0);
}


size_t Java8Parser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleExclusiveOrExpression;
}


antlrcpp::Any Java8Parser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::ExclusiveOrExpressionContext* Java8Parser::exclusiveOrExpression() {
   return exclusiveOrExpression(0);
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::exclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, parentState);
  Java8Parser::ExclusiveOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 436;
  enterRecursionRule(_localctx, 436, Java8Parser::RuleExclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2720);
    andExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2727);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 304, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveOrExpression);
        setState(2722);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2723);
        match(Java8Parser::CARET);
        setState(2724);
        andExpression(0); 
      }
      setState(2729);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 304, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

Java8Parser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::EqualityExpressionContext* Java8Parser::AndExpressionContext::equalityExpression() {
  return getRuleContext<Java8Parser::EqualityExpressionContext>(0);
}

Java8Parser::AndExpressionContext* Java8Parser::AndExpressionContext::andExpression() {
  return getRuleContext<Java8Parser::AndExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::AndExpressionContext::BITAND() {
  return getToken(Java8Parser::BITAND, 0);
}


size_t Java8Parser::AndExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAndExpression;
}


antlrcpp::Any Java8Parser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::AndExpressionContext* Java8Parser::andExpression() {
   return andExpression(0);
}

Java8Parser::AndExpressionContext* Java8Parser::andExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, parentState);
  Java8Parser::AndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 438;
  enterRecursionRule(_localctx, 438, Java8Parser::RuleAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2731);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2738);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndExpression);
        setState(2733);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2734);
        match(Java8Parser::BITAND);
        setState(2735);
        equalityExpression(0); 
      }
      setState(2740);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

Java8Parser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::RelationalExpressionContext* Java8Parser::EqualityExpressionContext::relationalExpression() {
  return getRuleContext<Java8Parser::RelationalExpressionContext>(0);
}

Java8Parser::EqualityExpressionContext* Java8Parser::EqualityExpressionContext::equalityExpression() {
  return getRuleContext<Java8Parser::EqualityExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::EqualityExpressionContext::EQUAL() {
  return getToken(Java8Parser::EQUAL, 0);
}

tree::TerminalNode* Java8Parser::EqualityExpressionContext::NOTEQUAL() {
  return getToken(Java8Parser::NOTEQUAL, 0);
}


size_t Java8Parser::EqualityExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleEqualityExpression;
}


antlrcpp::Any Java8Parser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::EqualityExpressionContext* Java8Parser::equalityExpression() {
   return equalityExpression(0);
}

Java8Parser::EqualityExpressionContext* Java8Parser::equalityExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, parentState);
  Java8Parser::EqualityExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 440;
  enterRecursionRule(_localctx, 440, Java8Parser::RuleEqualityExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2742);
    relationalExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2752);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2750);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(2744);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2745);
          match(Java8Parser::EQUAL);
          setState(2746);
          relationalExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(2747);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2748);
          match(Java8Parser::NOTEQUAL);
          setState(2749);
          relationalExpression(0);
          break;
        }

        } 
      }
      setState(2754);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

Java8Parser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ShiftExpressionContext* Java8Parser::RelationalExpressionContext::shiftExpression() {
  return getRuleContext<Java8Parser::ShiftExpressionContext>(0);
}

Java8Parser::RelationalExpressionContext* Java8Parser::RelationalExpressionContext::relationalExpression() {
  return getRuleContext<Java8Parser::RelationalExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::LT() {
  return getToken(Java8Parser::LT, 0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::GT() {
  return getToken(Java8Parser::GT, 0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::LE() {
  return getToken(Java8Parser::LE, 0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::GE() {
  return getToken(Java8Parser::GE, 0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::INSTANCEOF() {
  return getToken(Java8Parser::INSTANCEOF, 0);
}

Java8Parser::ReferencetypeContext* Java8Parser::RelationalExpressionContext::referencetype() {
  return getRuleContext<Java8Parser::ReferencetypeContext>(0);
}


size_t Java8Parser::RelationalExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleRelationalExpression;
}


antlrcpp::Any Java8Parser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::RelationalExpressionContext* Java8Parser::relationalExpression() {
   return relationalExpression(0);
}

Java8Parser::RelationalExpressionContext* Java8Parser::relationalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, parentState);
  Java8Parser::RelationalExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 442;
  enterRecursionRule(_localctx, 442, Java8Parser::RuleRelationalExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2756);
    shiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2775);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2773);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2758);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(2759);
          match(Java8Parser::LT);
          setState(2760);
          shiftExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2761);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(2762);
          match(Java8Parser::GT);
          setState(2763);
          shiftExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2764);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2765);
          match(Java8Parser::LE);
          setState(2766);
          shiftExpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2767);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2768);
          match(Java8Parser::GE);
          setState(2769);
          shiftExpression(0);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2770);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2771);
          match(Java8Parser::INSTANCEOF);
          setState(2772);
          referencetype();
          break;
        }

        } 
      }
      setState(2777);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

Java8Parser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AdditiveExpressionContext* Java8Parser::ShiftExpressionContext::additiveExpression() {
  return getRuleContext<Java8Parser::AdditiveExpressionContext>(0);
}

Java8Parser::ShiftExpressionContext* Java8Parser::ShiftExpressionContext::shiftExpression() {
  return getRuleContext<Java8Parser::ShiftExpressionContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::ShiftExpressionContext::LT() {
  return getTokens(Java8Parser::LT);
}

tree::TerminalNode* Java8Parser::ShiftExpressionContext::LT(size_t i) {
  return getToken(Java8Parser::LT, i);
}

std::vector<tree::TerminalNode *> Java8Parser::ShiftExpressionContext::GT() {
  return getTokens(Java8Parser::GT);
}

tree::TerminalNode* Java8Parser::ShiftExpressionContext::GT(size_t i) {
  return getToken(Java8Parser::GT, i);
}


size_t Java8Parser::ShiftExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleShiftExpression;
}


antlrcpp::Any Java8Parser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::ShiftExpressionContext* Java8Parser::shiftExpression() {
   return shiftExpression(0);
}

Java8Parser::ShiftExpressionContext* Java8Parser::shiftExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, parentState);
  Java8Parser::ShiftExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 444;
  enterRecursionRule(_localctx, 444, Java8Parser::RuleShiftExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2779);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2796);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2794);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2781);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2782);
          match(Java8Parser::LT);
          setState(2783);
          match(Java8Parser::LT);
          setState(2784);
          additiveExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2785);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2786);
          match(Java8Parser::GT);
          setState(2787);
          match(Java8Parser::GT);
          setState(2788);
          additiveExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2789);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2790);
          match(Java8Parser::GT);
          setState(2791);
          match(Java8Parser::GT);
          setState(2792);
          match(Java8Parser::GT);
          setState(2793);
          additiveExpression(0);
          break;
        }

        } 
      }
      setState(2798);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

Java8Parser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<Java8Parser::MultiplicativeExpressionContext>(0);
}

Java8Parser::AdditiveExpressionContext* Java8Parser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<Java8Parser::AdditiveExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::AdditiveExpressionContext::ADD() {
  return getToken(Java8Parser::ADD, 0);
}

tree::TerminalNode* Java8Parser::AdditiveExpressionContext::SUB() {
  return getToken(Java8Parser::SUB, 0);
}


size_t Java8Parser::AdditiveExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAdditiveExpression;
}


antlrcpp::Any Java8Parser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::AdditiveExpressionContext* Java8Parser::additiveExpression() {
   return additiveExpression(0);
}

Java8Parser::AdditiveExpressionContext* Java8Parser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  Java8Parser::AdditiveExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 446;
  enterRecursionRule(_localctx, 446, Java8Parser::RuleAdditiveExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2800);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2810);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2808);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(2802);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2803);
          match(Java8Parser::ADD);
          setState(2804);
          multiplicativeExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(2805);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2806);
          match(Java8Parser::SUB);
          setState(2807);
          multiplicativeExpression(0);
          break;
        }

        } 
      }
      setState(2812);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

Java8Parser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnaryExpressionContext* Java8Parser::MultiplicativeExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<Java8Parser::MultiplicativeExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::MultiplicativeExpressionContext::MUL() {
  return getToken(Java8Parser::MUL, 0);
}

tree::TerminalNode* Java8Parser::MultiplicativeExpressionContext::DIV() {
  return getToken(Java8Parser::DIV, 0);
}

tree::TerminalNode* Java8Parser::MultiplicativeExpressionContext::MOD() {
  return getToken(Java8Parser::MOD, 0);
}


size_t Java8Parser::MultiplicativeExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleMultiplicativeExpression;
}


antlrcpp::Any Java8Parser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::MultiplicativeExpressionContext* Java8Parser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  Java8Parser::MultiplicativeExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 448;
  enterRecursionRule(_localctx, 448, Java8Parser::RuleMultiplicativeExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2814);
    unaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(2827);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 315, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2825);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2816);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2817);
          match(Java8Parser::MUL);
          setState(2818);
          unaryExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2819);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2820);
          match(Java8Parser::DIV);
          setState(2821);
          unaryExpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2822);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2823);
          match(Java8Parser::MOD);
          setState(2824);
          unaryExpression();
          break;
        }

        } 
      }
      setState(2829);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 315, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

Java8Parser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::UnaryExpressionContext::preIncrementExpression() {
  return getRuleContext<Java8Parser::PreIncrementExpressionContext>(0);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::UnaryExpressionContext::preDecrementExpression() {
  return getRuleContext<Java8Parser::PreDecrementExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::UnaryExpressionContext::ADD() {
  return getToken(Java8Parser::ADD, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::UnaryExpressionContext::SUB() {
  return getToken(Java8Parser::SUB, 0);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::UnaryExpressionContext::unaryExpressionNotPlusMinus() {
  return getRuleContext<Java8Parser::UnaryExpressionNotPlusMinusContext>(0);
}


size_t Java8Parser::UnaryExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleUnaryExpression;
}


antlrcpp::Any Java8Parser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnaryExpressionContext* Java8Parser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 450, Java8Parser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2837);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::INC: {
        enterOuterAlt(_localctx, 1);
        setState(2830);
        preIncrementExpression();
        break;
      }

      case Java8Parser::DEC: {
        enterOuterAlt(_localctx, 2);
        setState(2831);
        preDecrementExpression();
        break;
      }

      case Java8Parser::ADD: {
        enterOuterAlt(_localctx, 3);
        setState(2832);
        match(Java8Parser::ADD);
        setState(2833);
        unaryExpression();
        break;
      }

      case Java8Parser::SUB: {
        enterOuterAlt(_localctx, 4);
        setState(2834);
        match(Java8Parser::SUB);
        setState(2835);
        unaryExpression();
        break;
      }

      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 5);
        setState(2836);
        unaryExpressionNotPlusMinus();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreIncrementExpressionContext ------------------------------------------------------------------

Java8Parser::PreIncrementExpressionContext::PreIncrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PreIncrementExpressionContext::INC() {
  return getToken(Java8Parser::INC, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::PreIncrementExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}


size_t Java8Parser::PreIncrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePreIncrementExpression;
}


antlrcpp::Any Java8Parser::PreIncrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPreIncrementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::preIncrementExpression() {
  PreIncrementExpressionContext *_localctx = _tracker.createInstance<PreIncrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 452, Java8Parser::RulePreIncrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2839);
    match(Java8Parser::INC);
    setState(2840);
    unaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreDecrementExpressionContext ------------------------------------------------------------------

Java8Parser::PreDecrementExpressionContext::PreDecrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PreDecrementExpressionContext::DEC() {
  return getToken(Java8Parser::DEC, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::PreDecrementExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}


size_t Java8Parser::PreDecrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePreDecrementExpression;
}


antlrcpp::Any Java8Parser::PreDecrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPreDecrementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::preDecrementExpression() {
  PreDecrementExpressionContext *_localctx = _tracker.createInstance<PreDecrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 454, Java8Parser::RulePreDecrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2842);
    match(Java8Parser::DEC);
    setState(2843);
    unaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionNotPlusMinusContext ------------------------------------------------------------------

Java8Parser::UnaryExpressionNotPlusMinusContext::UnaryExpressionNotPlusMinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::UnaryExpressionNotPlusMinusContext::TILDE() {
  return getToken(Java8Parser::TILDE, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::UnaryExpressionNotPlusMinusContext::BANG() {
  return getToken(Java8Parser::BANG, 0);
}

Java8Parser::CastExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::castExpression() {
  return getRuleContext<Java8Parser::CastExpressionContext>(0);
}


size_t Java8Parser::UnaryExpressionNotPlusMinusContext::getRuleIndex() const {
  return Java8Parser::RuleUnaryExpressionNotPlusMinus;
}


antlrcpp::Any Java8Parser::UnaryExpressionNotPlusMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitUnaryExpressionNotPlusMinus(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::unaryExpressionNotPlusMinus() {
  UnaryExpressionNotPlusMinusContext *_localctx = _tracker.createInstance<UnaryExpressionNotPlusMinusContext>(_ctx, getState());
  enterRule(_localctx, 456, Java8Parser::RuleUnaryExpressionNotPlusMinus);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2851);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 317, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2845);
      postfixExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2846);
      match(Java8Parser::TILDE);
      setState(2847);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2848);
      match(Java8Parser::BANG);
      setState(2849);
      unaryExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2850);
      castExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryContext* Java8Parser::PostfixExpressionContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::PostfixExpressionContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<Java8Parser::PostIncrementExpression__1__postfixExpressionContext *> Java8Parser::PostfixExpressionContext::postIncrementExpression__1__postfixExpression() {
  return getRuleContexts<Java8Parser::PostIncrementExpression__1__postfixExpressionContext>();
}

Java8Parser::PostIncrementExpression__1__postfixExpressionContext* Java8Parser::PostfixExpressionContext::postIncrementExpression__1__postfixExpression(size_t i) {
  return getRuleContext<Java8Parser::PostIncrementExpression__1__postfixExpressionContext>(i);
}

std::vector<Java8Parser::PostDecrementExpression__1__postfixExpressionContext *> Java8Parser::PostfixExpressionContext::postDecrementExpression__1__postfixExpression() {
  return getRuleContexts<Java8Parser::PostDecrementExpression__1__postfixExpressionContext>();
}

Java8Parser::PostDecrementExpression__1__postfixExpressionContext* Java8Parser::PostfixExpressionContext::postDecrementExpression__1__postfixExpression(size_t i) {
  return getRuleContext<Java8Parser::PostDecrementExpression__1__postfixExpressionContext>(i);
}


size_t Java8Parser::PostfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostfixExpression;
}


antlrcpp::Any Java8Parser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostfixExpressionContext* Java8Parser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 458, Java8Parser::RulePostfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2855);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 318, _ctx)) {
    case 1: {
      setState(2853);
      primary();
      break;
    }

    case 2: {
      setState(2854);
      expressionName();
      break;
    }

    }
    setState(2861);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 320, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2859);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Java8Parser::INC: {
            setState(2857);
            postIncrementExpression__1__postfixExpression();
            break;
          }

          case Java8Parser::DEC: {
            setState(2858);
            postDecrementExpression__1__postfixExpression();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(2863);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 320, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostIncrementExpressionContext ------------------------------------------------------------------

Java8Parser::PostIncrementExpressionContext::PostIncrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::PostIncrementExpressionContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PostIncrementExpressionContext::INC() {
  return getToken(Java8Parser::INC, 0);
}


size_t Java8Parser::PostIncrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostIncrementExpression;
}


antlrcpp::Any Java8Parser::PostIncrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPostIncrementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostIncrementExpressionContext* Java8Parser::postIncrementExpression() {
  PostIncrementExpressionContext *_localctx = _tracker.createInstance<PostIncrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 460, Java8Parser::RulePostIncrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2864);
    postfixExpression();
    setState(2865);
    match(Java8Parser::INC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostIncrementExpression__1__postfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostIncrementExpression__1__postfixExpressionContext::PostIncrementExpression__1__postfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PostIncrementExpression__1__postfixExpressionContext::INC() {
  return getToken(Java8Parser::INC, 0);
}


size_t Java8Parser::PostIncrementExpression__1__postfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostIncrementExpression__1__postfixExpression;
}


antlrcpp::Any Java8Parser::PostIncrementExpression__1__postfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPostIncrementExpression__1__postfixExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostIncrementExpression__1__postfixExpressionContext* Java8Parser::postIncrementExpression__1__postfixExpression() {
  PostIncrementExpression__1__postfixExpressionContext *_localctx = _tracker.createInstance<PostIncrementExpression__1__postfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 462, Java8Parser::RulePostIncrementExpression__1__postfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2867);
    match(Java8Parser::INC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostDecrementExpressionContext ------------------------------------------------------------------

Java8Parser::PostDecrementExpressionContext::PostDecrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::PostDecrementExpressionContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PostDecrementExpressionContext::DEC() {
  return getToken(Java8Parser::DEC, 0);
}


size_t Java8Parser::PostDecrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostDecrementExpression;
}


antlrcpp::Any Java8Parser::PostDecrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPostDecrementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostDecrementExpressionContext* Java8Parser::postDecrementExpression() {
  PostDecrementExpressionContext *_localctx = _tracker.createInstance<PostDecrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 464, Java8Parser::RulePostDecrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2869);
    postfixExpression();
    setState(2870);
    match(Java8Parser::DEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostDecrementExpression__1__postfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostDecrementExpression__1__postfixExpressionContext::PostDecrementExpression__1__postfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PostDecrementExpression__1__postfixExpressionContext::DEC() {
  return getToken(Java8Parser::DEC, 0);
}


size_t Java8Parser::PostDecrementExpression__1__postfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostDecrementExpression__1__postfixExpression;
}


antlrcpp::Any Java8Parser::PostDecrementExpression__1__postfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitPostDecrementExpression__1__postfixExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostDecrementExpression__1__postfixExpressionContext* Java8Parser::postDecrementExpression__1__postfixExpression() {
  PostDecrementExpression__1__postfixExpressionContext *_localctx = _tracker.createInstance<PostDecrementExpression__1__postfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 466, Java8Parser::RulePostDecrementExpression__1__postfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2872);
    match(Java8Parser::DEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

Java8Parser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::CastExpressionContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::PrimitivetypeContext* Java8Parser::CastExpressionContext::primitivetype() {
  return getRuleContext<Java8Parser::PrimitivetypeContext>(0);
}

tree::TerminalNode* Java8Parser::CastExpressionContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::CastExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

Java8Parser::ReferencetypeContext* Java8Parser::CastExpressionContext::referencetype() {
  return getRuleContext<Java8Parser::ReferencetypeContext>(0);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::CastExpressionContext::unaryExpressionNotPlusMinus() {
  return getRuleContext<Java8Parser::UnaryExpressionNotPlusMinusContext>(0);
}

std::vector<Java8Parser::AdditionalBoundContext *> Java8Parser::CastExpressionContext::additionalBound() {
  return getRuleContexts<Java8Parser::AdditionalBoundContext>();
}

Java8Parser::AdditionalBoundContext* Java8Parser::CastExpressionContext::additionalBound(size_t i) {
  return getRuleContext<Java8Parser::AdditionalBoundContext>(i);
}

Java8Parser::LambdaExpressionContext* Java8Parser::CastExpressionContext::lambdaExpression() {
  return getRuleContext<Java8Parser::LambdaExpressionContext>(0);
}


size_t Java8Parser::CastExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleCastExpression;
}


antlrcpp::Any Java8Parser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CastExpressionContext* Java8Parser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 468, Java8Parser::RuleCastExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2901);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 323, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2874);
      match(Java8Parser::LPAREN);
      setState(2875);
      primitivetype();
      setState(2876);
      match(Java8Parser::RPAREN);
      setState(2877);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2879);
      match(Java8Parser::LPAREN);
      setState(2880);
      referencetype();
      setState(2884);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(2881);
        additionalBound();
        setState(2886);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2887);
      match(Java8Parser::RPAREN);
      setState(2888);
      unaryExpressionNotPlusMinus();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2890);
      match(Java8Parser::LPAREN);
      setState(2891);
      referencetype();
      setState(2895);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(2892);
        additionalBound();
        setState(2897);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2898);
      match(Java8Parser::RPAREN);
      setState(2899);
      lambdaExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

Java8Parser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::ConstantExpressionContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::ConstantExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConstantExpression;
}


antlrcpp::Any Java8Parser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstantExpressionContext* Java8Parser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 470, Java8Parser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2903);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool Java8Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 27: return packageOrtypeNameSempred(dynamic_cast<PackageOrtypeNameContext *>(context), predicateIndex);
    case 30: return packageNameSempred(dynamic_cast<PackageNameContext *>(context), predicateIndex);
    case 31: return ambiguousNameSempred(dynamic_cast<AmbiguousNameContext *>(context), predicateIndex);
    case 215: return conditionalOrExpressionSempred(dynamic_cast<ConditionalOrExpressionContext *>(context), predicateIndex);
    case 216: return conditionalAndExpressionSempred(dynamic_cast<ConditionalAndExpressionContext *>(context), predicateIndex);
    case 217: return inclusiveOrExpressionSempred(dynamic_cast<InclusiveOrExpressionContext *>(context), predicateIndex);
    case 218: return exclusiveOrExpressionSempred(dynamic_cast<ExclusiveOrExpressionContext *>(context), predicateIndex);
    case 219: return andExpressionSempred(dynamic_cast<AndExpressionContext *>(context), predicateIndex);
    case 220: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 221: return relationalExpressionSempred(dynamic_cast<RelationalExpressionContext *>(context), predicateIndex);
    case 222: return shiftExpressionSempred(dynamic_cast<ShiftExpressionContext *>(context), predicateIndex);
    case 223: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 224: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Java8Parser::packageOrtypeNameSempred(PackageOrtypeNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::packageNameSempred(PackageNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::ambiguousNameSempred(AmbiguousNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::conditionalOrExpressionSempred(ConditionalOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::conditionalAndExpressionSempred(ConditionalAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 2);
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 3);
    case 21: return precpred(_ctx, 2);
    case 22: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> Java8Parser::_decisionToDFA;
atn::PredictionContextCache Java8Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Java8Parser::_atn;
std::vector<uint16_t> Java8Parser::_serializedATN;

std::vector<std::string> Java8Parser::_ruleNames = {
  "literal", "type_", "primitivetype", "numerictype", "integraltype", "floatingPointtype", 
  "referencetype", "classOrInterfaceType", "classtype", "classType__1__classOrInterfaceType", 
  "classType__2__classOrInterfaceType", "interfacetype", "interfaceType__1__classOrInterfaceType", 
  "interfaceType__2__classOrInterfaceType", "typeVariable", "arraytype", 
  "dims", "typeParameter", "typeParameterModifier", "typeBound", "additionalBound", 
  "typeArguments", "typeArgumentList", "typeArgument", "wildcard", "wildcardBounds", 
  "typeName", "packageOrtypeName", "expressionName", "methodName", "packageName", 
  "ambiguousName", "compilationUnit", "packageDeclaration", "packageModifier", 
  "importDeclaration", "singletypeImportDeclaration", "typeImportOnDemandDeclaration", 
  "singleStaticImportDeclaration", "staticImportOnDemandDeclaration", "typeDeclaration", 
  "classDeclaration", "normalclassDeclaration", "classModifier", "typeParameters", 
  "typeParameterList", "superclass", "superinterfaces", "interfacetypeList", 
  "classBody", "classBodyDeclaration", "classMemberDeclaration", "fieldDeclaration", 
  "fieldModifier", "variableDeclaratorList", "variableDeclarator", "variableDeclaratorId", 
  "variableInitializer", "unanntype", "unannPrimitiveType", "unannReferencetype", 
  "unannClassOrInterfaceType", "unannClassType", "unannClassType__1__unannClassOrInterfaceType", 
  "unannClassType__2__unannClassOrInterfaceType", "unannInterfaceType", 
  "unannInterfaceType__1__unannClassOrInterfaceType", "unannInterfaceType__2__unannClassOrInterfaceType", 
  "unanntypeVariable", "unannArraytype", "methodDeclaration", "methodModifier", 
  "methodHeader", "result", "methodDeclarator", "formalParameterList", "formalParameters", 
  "formalParameter", "variableModifier", "lastFormalParameter", "receiverParameter", 
  "throws_", "exceptiontypeList", "exceptiontype", "methodBody", "instanceInitializer", 
  "staticInitializer", "constructorDeclaration", "constructionModifier", 
  "constructorDeclarator", "simpletypeName", "constructorBody", "explicitconstructorInvocation", 
  "enumDeclaration", "enumBody", "enumconstantList", "enumconstant", "enumconstantModifier", 
  "enumBodyDeclarations", "interfaceDeclaration", "normalInterfaceDeclaration", 
  "interfaceModifier", "extendsInterfaces", "interfaceBody", "interfaceMemberDeclaration", 
  "constantDeclaration", "constantModifier", "interfaceMethodDeclaration", 
  "interfaceMethodModifier", "annotationtypeDeclaration", "annotationtypeBody", 
  "annotationtypeMemberDeclaration", "annotationtypeElementDeclaration", 
  "annotationtypeElementModifier", "defaultValue", "annotation", "normalAnnotation", 
  "elementValuePairList", "elementValuePair", "elementValue", "elementValueArrayInitializer", 
  "elementValueList", "markerAnnotation", "singleElementAnnotation", "arrayInitializer", 
  "variableInitializerList", "block", "blockStatements", "blockStatement", 
  "localVariableDeclarationStatement", "localVariableDeclaration", "statement", 
  "statementNoShortIf", "statementWithoutTrailingSubstatement", "emptyStatement", 
  "labeledStatement", "labeledStatementNoShortIf", "expressionStatement", 
  "statementExpression", "ifThenStatement", "ifThenElseStatement", "ifThenElseStatementNoShortIf", 
  "assertStatement", "switchStatement", "switchBlock", "switchBlockStatementGroup", 
  "switchLabels", "switchLabel", "enumconstantName", "whileStatement", "whileStatementNoShortIf", 
  "doStatement", "forStatement", "forStatementNoShortIf", "basicForStatement", 
  "basicForStatementNoShortIf", "forInit", "forUpdate", "statementExpressionList", 
  "enhancedForStatement", "enhancedForStatementNoShortIf", "breakStatement", 
  "continueStatement", "returnStatement", "throwStatement", "synchronizedStatement", 
  "tryStatement", "catches", "catchclause", "catchFormalParameter", "catchtype", 
  "finally_", "tryWithResourcesStatement", "resourceSpecification", "resourceList", 
  "resource", "primary", "primaryNoNewArray", "primaryNoNewArray__1__arrayAccess", 
  "primaryNoNewArray__2__arrayAccess", "primaryNoNewArray__1__primary", 
  "primaryNoNewArray__1__primary__1__arrayAccess__1__primary", "primaryNoNewArray__1__primary__2__arrayAccess__1__primary", 
  "primaryNoNewArray__2__primary", "primaryNoNewArray__2__primary__1__arrayAccess__2__primary", 
  "primaryNoNewArray__2__primary__2__arrayAccess__2__primary", "classInstanceCreationExpression", 
  "classInstanceCreationExpression__1__primary", "classInstanceCreationExpression__2__primary", 
  "typeArgumentsOrDiamond", "fieldAccess", "fieldAccess__1__primary", "fieldAccess__2__primary", 
  "arrayAccess", "arrayAccess__1__primary", "arrayAccess__2__primary", "methodInvocation", 
  "methodInvocation__1__primary", "methodInvocation__2__primary", "argumentList", 
  "methodReference", "methodReference__1__primary", "methodReference__2__primary", 
  "arrayCreationExpression", "dimExprs", "dimExpr", "expression", "lambdaExpression", 
  "lambdaParameters", "inferredFormalParameterList", "lambdaBody", "assignmentExpression", 
  "assignment", "leftHandSide", "conditionalExpression", "conditionalOrExpression", 
  "conditionalAndExpression", "inclusiveOrExpression", "exclusiveOrExpression", 
  "andExpression", "equalityExpression", "relationalExpression", "shiftExpression", 
  "additiveExpression", "multiplicativeExpression", "unaryExpression", "preIncrementExpression", 
  "preDecrementExpression", "unaryExpressionNotPlusMinus", "postfixExpression", 
  "postIncrementExpression", "postIncrementExpression__1__postfixExpression", 
  "postDecrementExpression", "postDecrementExpression__1__postfixExpression", 
  "castExpression", "constantExpression"
};

std::vector<std::string> Java8Parser::_literalNames = {
  "", "'abstract'", "'assert'", "'boolean'", "'break'", "'byte'", "'case'", 
  "'catch'", "'char'", "'class'", "'const'", "'continue'", "'default'", 
  "'do'", "'double'", "'else'", "'enum'", "'extends'", "'final'", "'finally'", 
  "'float'", "'for'", "'if'", "'goto'", "'implements'", "'import'", "'instanceof'", 
  "'int'", "'interface'", "'long'", "'native'", "'new'", "'package'", "'private'", 
  "'protected'", "'public'", "'return'", "'short'", "'static'", "'strictfp'", 
  "'super'", "'switch'", "'synchronized'", "'this'", "'throw'", "'throws'", 
  "'transient'", "'try'", "'void'", "'volatile'", "'while'", "", "", "", 
  "", "", "'null'", "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", "','", 
  "'.'", "'='", "'>'", "'<'", "'!'", "'~'", "'?'", "':'", "'=='", "'<='", 
  "'>='", "'!='", "'&&'", "'||'", "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", 
  "'&'", "'|'", "'^'", "'%'", "'->'", "'::'", "'+='", "'-='", "'*='", "'/='", 
  "'&='", "'|='", "'^='", "'%='", "'<<='", "'>>='", "'>>>='", "", "'@'", 
  "'...'"
};

std::vector<std::string> Java8Parser::_symbolicNames = {
  "", "ABSTRACT", "ASSERT", "BOOLEAN", "BREAK", "BYTE", "CASE", "CATCH", 
  "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", 
  "ENUM", "EXTENDS", "FINAL", "FINALLY", "FLOAT", "FOR", "IF", "GOTO", "IMPLEMENTS", 
  "IMPORT", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE", "NEW", "PACKAGE", 
  "PRIVATE", "PROTECTED", "PUBLIC", "RETURN", "SHORT", "STATIC", "STRICTFP", 
  "SUPER", "SWITCH", "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", 
  "TRY", "VOID", "VOLATILE", "WHILE", "IntegerLiteral", "FloatingPointLiteral", 
  "BooleanLiteral", "CharacterLiteral", "StringLiteral", "NullLiteral", 
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", 
  "DOT", "ASSIGN", "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", 
  "LE", "GE", "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", 
  "DIV", "BITAND", "BITOR", "CARET", "MOD", "ARROW", "COLONCOLON", "ADD_ASSIGN", 
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
  "MOD_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "Identifier", 
  "AT", "ELLIPSIS", "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary Java8Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Java8Parser::_tokenNames;

Java8Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x6d, 0xb5c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
       0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x4, 0xcd, 0x9, 0xcd, 0x4, 0xce, 
       0x9, 0xce, 0x4, 0xcf, 0x9, 0xcf, 0x4, 0xd0, 0x9, 0xd0, 0x4, 0xd1, 
       0x9, 0xd1, 0x4, 0xd2, 0x9, 0xd2, 0x4, 0xd3, 0x9, 0xd3, 0x4, 0xd4, 
       0x9, 0xd4, 0x4, 0xd5, 0x9, 0xd5, 0x4, 0xd6, 0x9, 0xd6, 0x4, 0xd7, 
       0x9, 0xd7, 0x4, 0xd8, 0x9, 0xd8, 0x4, 0xd9, 0x9, 0xd9, 0x4, 0xda, 
       0x9, 0xda, 0x4, 0xdb, 0x9, 0xdb, 0x4, 0xdc, 0x9, 0xdc, 0x4, 0xdd, 
       0x9, 0xdd, 0x4, 0xde, 0x9, 0xde, 0x4, 0xdf, 0x9, 0xdf, 0x4, 0xe0, 
       0x9, 0xe0, 0x4, 0xe1, 0x9, 0xe1, 0x4, 0xe2, 0x9, 0xe2, 0x4, 0xe3, 
       0x9, 0xe3, 0x4, 0xe4, 0x9, 0xe4, 0x4, 0xe5, 0x9, 0xe5, 0x4, 0xe6, 
       0x9, 0xe6, 0x4, 0xe7, 0x9, 0xe7, 0x4, 0xe8, 0x9, 0xe8, 0x4, 0xe9, 
       0x9, 0xe9, 0x4, 0xea, 0x9, 0xea, 0x4, 0xeb, 0x9, 0xeb, 0x4, 0xec, 
       0x9, 0xec, 0x4, 0xed, 0x9, 0xed, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
       0x3, 0x5, 0x3, 0x1df, 0xa, 0x3, 0x3, 0x4, 0x7, 0x4, 0x1e2, 0xa, 0x4, 
       0xc, 0x4, 0xe, 0x4, 0x1e5, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 
       0x1e9, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x1ec, 0xb, 0x4, 0x3, 0x4, 0x5, 
       0x4, 0x1ef, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x1f3, 0xa, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x5, 0x8, 0x1fc, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x200, 
       0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x204, 0xa, 0x9, 0xc, 0x9, 
       0xe, 0x9, 0x207, 0xb, 0x9, 0x3, 0xa, 0x7, 0xa, 0x20a, 0xa, 0xa, 0xc, 
       0xa, 0xe, 0xa, 0x20d, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x211, 
       0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x216, 0xa, 0xa, 
       0xc, 0xa, 0xe, 0xa, 0x219, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
       0x21d, 0xa, 0xa, 0x5, 0xa, 0x21f, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 
       0xb, 0x223, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x226, 0xb, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x5, 0xb, 0x22a, 0xa, 0xb, 0x3, 0xc, 0x7, 0xc, 0x22d, 0xa, 
       0xc, 0xc, 0xc, 0xe, 0xc, 0x230, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
       0xc, 0x234, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0x10, 0x7, 0x10, 0x23d, 0xa, 0x10, 0xc, 0x10, 
       0xe, 0x10, 0x240, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x5, 0x11, 0x24d, 0xa, 0x11, 0x3, 0x12, 0x7, 0x12, 
       0x250, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x253, 0xb, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x258, 0xa, 0x12, 0xc, 0x12, 0xe, 
       0x12, 0x25b, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x25f, 0xa, 
       0x12, 0xc, 0x12, 0xe, 0x12, 0x262, 0xb, 0x12, 0x3, 0x13, 0x7, 0x13, 
       0x265, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x268, 0xb, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x5, 0x13, 0x26c, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x275, 
       0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x278, 0xb, 0x15, 0x5, 0x15, 0x27a, 
       0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 
       0x286, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x289, 0xb, 0x18, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x28d, 0xa, 0x19, 0x3, 0x1a, 0x7, 0x1a, 0x290, 
       0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x293, 0xb, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x5, 0x1a, 0x297, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x5, 0x1b, 0x29d, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2a4, 0xa, 0x1c, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 
       0x2ac, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x2af, 0xb, 0x1d, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x2b6, 0xa, 
       0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x2c0, 0xa, 0x20, 0xc, 0x20, 
       0xe, 0x20, 0x2c3, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x2cb, 0xa, 0x21, 0xc, 0x21, 
       0xe, 0x21, 0x2ce, 0xb, 0x21, 0x3, 0x22, 0x5, 0x22, 0x2d1, 0xa, 0x22, 
       0x3, 0x22, 0x7, 0x22, 0x2d4, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x2d7, 
       0xb, 0x22, 0x3, 0x22, 0x7, 0x22, 0x2da, 0xa, 0x22, 0xc, 0x22, 0xe, 
       0x22, 0x2dd, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x7, 0x23, 
       0x2e2, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2e5, 0xb, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x2eb, 0xa, 0x23, 0xc, 
       0x23, 0xe, 0x23, 0x2ee, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
       0x2f8, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x315, 
       0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x319, 0xa, 0x2b, 0x3, 
       0x2c, 0x7, 0x2c, 0x31c, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x31f, 0xb, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x324, 0xa, 0x2c, 
       0x3, 0x2c, 0x5, 0x2c, 0x327, 0xa, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x32a, 
       0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 
       0x336, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x33f, 0xa, 0x2f, 0xc, 0x2f, 
       0xe, 0x2f, 0x342, 0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 
       0x32, 0x34d, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x350, 0xb, 0x32, 0x3, 
       0x33, 0x3, 0x33, 0x7, 0x33, 0x354, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 
       0x357, 0xb, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x5, 0x34, 0x35f, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x366, 0xa, 0x35, 0x3, 
       0x36, 0x7, 0x36, 0x369, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x36c, 0xb, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x5, 0x37, 0x37a, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x7, 0x38, 0x37f, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x382, 0xb, 0x38, 
       0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x387, 0xa, 0x39, 0x3, 
       0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x38b, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
       0x5, 0x3b, 0x38f, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x393, 
       0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x397, 0xa, 0x3d, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x39c, 0xa, 0x3e, 0x3, 0x3f, 
       0x3, 0x3f, 0x5, 0x3f, 0x3a0, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 
       0x3f, 0x3a4, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x3a7, 0xb, 0x3f, 0x3, 
       0x40, 0x3, 0x40, 0x5, 0x40, 0x3ab, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 
       0x3, 0x40, 0x7, 0x40, 0x3b0, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x3b3, 
       0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x3b7, 0xa, 0x40, 0x5, 
       0x40, 0x3b9, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x3bd, 0xa, 
       0x41, 0xc, 0x41, 0xe, 0x41, 0x3c0, 0xb, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x5, 0x41, 0x3c4, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x3c8, 
       0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 
       0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x5, 0x47, 0x3db, 0xa, 0x47, 0x3, 0x48, 0x7, 0x48, 0x3de, 0xa, 0x48, 
       0xc, 0x48, 0xe, 0x48, 0x3e1, 0xb, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x3f0, 
       0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x3f5, 0xa, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x3f9, 0xa, 0x4a, 0xc, 0x4a, 
       0xe, 0x4a, 0x3fc, 0xb, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 
       0x4a, 0x401, 0xa, 0x4a, 0x5, 0x4a, 0x403, 0xa, 0x4a, 0x3, 0x4b, 0x3, 
       0x4b, 0x5, 0x4b, 0x407, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x5, 0x4c, 0x40c, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x410, 
       0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x5, 0x4d, 0x418, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4e, 0x7, 0x4e, 0x41d, 0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x420, 0xb, 
       0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x7, 0x4e, 0x425, 0xa, 0x4e, 
       0xc, 0x4e, 0xe, 0x4e, 0x428, 0xb, 0x4e, 0x5, 0x4e, 0x42a, 0xa, 0x4e, 
       0x3, 0x4f, 0x7, 0x4f, 0x42d, 0xa, 0x4f, 0xc, 0x4f, 0xe, 0x4f, 0x430, 
       0xb, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 
       0x5, 0x50, 0x437, 0xa, 0x50, 0x3, 0x51, 0x7, 0x51, 0x43a, 0xa, 0x51, 
       0xc, 0x51, 0xe, 0x51, 0x43d, 0xb, 0x51, 0x3, 0x51, 0x3, 0x51, 0x7, 
       0x51, 0x441, 0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 0x444, 0xb, 0x51, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x44a, 0xa, 0x51, 
       0x3, 0x52, 0x7, 0x52, 0x44d, 0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x450, 
       0xb, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
       0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 
       0x3, 0x54, 0x7, 0x54, 0x45e, 0xa, 0x54, 0xc, 0x54, 0xe, 0x54, 0x461, 
       0xb, 0x54, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x465, 0xa, 0x55, 0x3, 
       0x56, 0x3, 0x56, 0x5, 0x56, 0x469, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x7, 0x59, 0x471, 0xa, 
       0x59, 0xc, 0x59, 0xe, 0x59, 0x474, 0xb, 0x59, 0x3, 0x59, 0x3, 0x59, 
       0x5, 0x59, 0x478, 0xa, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x480, 0xa, 0x5a, 0x3, 0x5b, 
       0x5, 0x5b, 0x483, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 
       0x5b, 0x488, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 
       0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x490, 0xa, 0x5d, 0x3, 0x5d, 0x5, 
       0x5d, 0x493, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x5, 0x5e, 
       0x498, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x49d, 
       0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4a2, 0xa, 
       0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4a7, 0xa, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 
       0x4ae, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4b3, 
       0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x5, 0x5e, 0x4bb, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5e, 0x5, 0x5e, 0x4c0, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x5, 0x5e, 0x4c5, 0xa, 0x5e, 0x3, 0x5f, 0x7, 0x5f, 0x4c8, 0xa, 0x5f, 
       0xc, 0x5f, 0xe, 0x5f, 0x4cb, 0xb, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x5, 0x5f, 0x4d0, 0xa, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 
       0x3, 0x60, 0x5, 0x60, 0x4d6, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x5, 
       0x60, 0x4da, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 
       0x3, 0x61, 0x7, 0x61, 0x4e1, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x4e4, 
       0xb, 0x61, 0x3, 0x62, 0x7, 0x62, 0x4e7, 0xa, 0x62, 0xc, 0x62, 0xe, 
       0x62, 0x4ea, 0xb, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 
       0x4ef, 0xa, 0x62, 0x3, 0x62, 0x5, 0x62, 0x4f2, 0xa, 0x62, 0x3, 0x62, 
       0x5, 0x62, 0x4f5, 0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 
       0x64, 0x7, 0x64, 0x4fb, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x4fe, 0xb, 
       0x64, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x502, 0xa, 0x65, 0x3, 0x66, 
       0x7, 0x66, 0x505, 0xa, 0x66, 0xc, 0x66, 0xe, 0x66, 0x508, 0xb, 0x66, 
       0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x50d, 0xa, 0x66, 0x3, 
       0x66, 0x5, 0x66, 0x510, 0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 
       0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
       0x5, 0x67, 0x51b, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
       0x69, 0x3, 0x69, 0x7, 0x69, 0x522, 0xa, 0x69, 0xc, 0x69, 0xe, 0x69, 
       0x525, 0xb, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x52e, 0xa, 0x6a, 0x3, 0x6b, 
       0x7, 0x6b, 0x531, 0xa, 0x6b, 0xc, 0x6b, 0xe, 0x6b, 0x534, 0xb, 0x6b, 
       0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 
       0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x53e, 0xa, 0x6c, 0x3, 0x6d, 0x7, 
       0x6d, 0x541, 0xa, 0x6d, 0xc, 0x6d, 0xe, 0x6d, 0x544, 0xb, 0x6d, 0x3, 
       0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
       0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x54f, 0xa, 0x6e, 0x3, 0x6f, 
       0x7, 0x6f, 0x552, 0xa, 0x6f, 0xc, 0x6f, 0xe, 0x6f, 0x555, 0xb, 0x6f, 
       0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 
       0x3, 0x70, 0x7, 0x70, 0x55e, 0xa, 0x70, 0xc, 0x70, 0xe, 0x70, 0x561, 
       0xb, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 
       0x3, 0x71, 0x3, 0x71, 0x5, 0x71, 0x56a, 0xa, 0x71, 0x3, 0x72, 0x7, 
       0x72, 0x56d, 0xa, 0x72, 0xc, 0x72, 0xe, 0x72, 0x570, 0xb, 0x72, 0x3, 
       0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x577, 
       0xa, 0x72, 0x3, 0x72, 0x5, 0x72, 0x57a, 0xa, 0x72, 0x3, 0x72, 0x3, 
       0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x581, 0xa, 0x73, 
       0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
       0x5, 0x75, 0x589, 0xa, 0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
       0x76, 0x5, 0x76, 0x58f, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 
       0x3, 0x77, 0x3, 0x77, 0x7, 0x77, 0x596, 0xa, 0x77, 0xc, 0x77, 0xe, 
       0x77, 0x599, 0xb, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 
       0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x5a2, 0xa, 0x79, 0x3, 
       0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x5a6, 0xa, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 
       0x5a9, 0xa, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 
       0x7b, 0x7, 0x7b, 0x5b0, 0xa, 0x7b, 0xc, 0x7b, 0xe, 0x7b, 0x5b3, 0xb, 
       0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
       0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x5, 
       0x7e, 0x5c0, 0xa, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5c3, 0xa, 0x7e, 0x3, 
       0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x7, 0x7f, 0x5ca, 
       0xa, 0x7f, 0xc, 0x7f, 0xe, 0x7f, 0x5cd, 0xb, 0x7f, 0x3, 0x80, 0x3, 
       0x80, 0x5, 0x80, 0x5d1, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 
       0x3, 0x81, 0x7, 0x81, 0x5d7, 0xa, 0x81, 0xc, 0x81, 0xe, 0x81, 0x5da, 
       0xb, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x5df, 0xa, 
       0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x84, 0x7, 0x84, 0x5e5, 
       0xa, 0x84, 0xc, 0x84, 0xe, 0x84, 0x5e8, 0xb, 0x84, 0x3, 0x84, 0x3, 
       0x84, 0x3, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
       0x85, 0x3, 0x85, 0x5, 0x85, 0x5f3, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 
       0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x5fa, 0xa, 0x86, 0x3, 
       0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
       0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 
       0x87, 0x608, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x89, 0x3, 0x89, 
       0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 
       0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 
       0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x61e, 0xa, 
       0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
       0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x640, 0xa, 0x90, 0x3, 0x91, 
       0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 
       0x3, 0x92, 0x7, 0x92, 0x64a, 0xa, 0x92, 0xc, 0x92, 0xe, 0x92, 0x64d, 
       0xb, 0x92, 0x3, 0x92, 0x7, 0x92, 0x650, 0xa, 0x92, 0xc, 0x92, 0xe, 
       0x92, 0x653, 0xb, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x93, 0x3, 0x93, 
       0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x7, 0x94, 0x65c, 0xa, 0x94, 0xc, 
       0x94, 0xe, 0x94, 0x65f, 0xb, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x3, 0x95, 0x5, 0x95, 0x66b, 0xa, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 
       0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
       0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
       0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 
       0x99, 0x3, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x685, 0xa, 0x9a, 
       0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x689, 0xa, 0x9b, 0x3, 0x9c, 0x3, 
       0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x68e, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 
       0x5, 0x9c, 0x692, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x696, 
       0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 
       0x3, 0x9d, 0x5, 0x9d, 0x69e, 0xa, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 
       0x9d, 0x6a2, 0xa, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x6a6, 0xa, 
       0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x5, 
       0x9e, 0x6ad, 0xa, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 
       0x3, 0xa0, 0x7, 0xa0, 0x6b4, 0xa, 0xa0, 0xc, 0xa0, 0xe, 0xa0, 0x6b7, 
       0xb, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x7, 0xa1, 0x6bc, 0xa, 
       0xa1, 0xc, 0xa1, 0xe, 0xa1, 0x6bf, 0xb, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa2, 
       0x3, 0xa2, 0x3, 0xa2, 0x7, 0xa2, 0x6cb, 0xa, 0xa2, 0xc, 0xa2, 0xe, 
       0xa2, 0x6ce, 0xb, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 
       0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 
       0x6d9, 0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x5, 
       0xa4, 0x6df, 0xa, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 
       0x5, 0xa5, 0x6e5, 0xa, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa6, 0x3, 
       0xa6, 0x5, 0xa6, 0x6eb, 0xa, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 
       0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa8, 
       0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 
       0x5, 0xa8, 0x6fc, 0xa, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 
       0xa8, 0x701, 0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x7, 0xa9, 0x705, 0xa, 
       0xa9, 0xc, 0xa9, 0xe, 0xa9, 0x708, 0xb, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 
       0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xab, 0x7, 0xab, 
       0x711, 0xa, 0xab, 0xc, 0xab, 0xe, 0xab, 0x714, 0xb, 0xab, 0x3, 0xab, 
       0x3, 0xab, 0x3, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x7, 0xac, 
       0x71c, 0xa, 0xac, 0xc, 0xac, 0xe, 0xac, 0x71f, 0xb, 0xac, 0x3, 0xad, 
       0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 
       0x5, 0xae, 0x728, 0xa, 0xae, 0x3, 0xae, 0x5, 0xae, 0x72b, 0xa, 0xae, 
       0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x730, 0xa, 0xaf, 0x3, 
       0xaf, 0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x7, 0xb0, 0x737, 
       0xa, 0xb0, 0xc, 0xb0, 0xe, 0xb0, 0x73a, 0xb, 0xb0, 0x3, 0xb1, 0x7, 
       0xb1, 0x73d, 0xa, 0xb1, 0xc, 0xb1, 0xe, 0xb1, 0x740, 0xb, 0xb1, 0x3, 
       0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb2, 0x3, 
       0xb2, 0x5, 0xb2, 0x749, 0xa, 0xb2, 0x3, 0xb2, 0x7, 0xb2, 0x74c, 0xa, 
       0xb2, 0xc, 0xb2, 0xe, 0xb2, 0x74f, 0xb, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x7, 0xb3, 0x755, 0xa, 0xb3, 0xc, 0xb3, 0xe, 
       0xb3, 0x758, 0xb, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 0x76e, 0xa, 
       0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x7, 0xb5, 0x776, 0xa, 0xb5, 0xc, 0xb5, 0xe, 0xb5, 0x779, 0xb, 
       0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x5, 0xb5, 0x78e, 0xa, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 
       0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 0x795, 0xa, 0xb6, 0x3, 
       0xb7, 0x3, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x5, 
       0xb8, 0x79d, 0xa, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x7, 0xb9, 0x7a3, 0xa, 0xb9, 0xc, 0xb9, 0xe, 0xb9, 0x7a6, 0xb, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x7, 0xb9, 0x7ae, 0xa, 0xb9, 0xc, 0xb9, 0xe, 0xb9, 0x7b1, 0xb, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 0x7c7, 0xa, 0xb9, 0x3, 0xba, 0x3, 
       0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x7, 0xbb, 0x7cf, 
       0xa, 0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x7d2, 0xb, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x7, 0xbb, 0x7da, 
       0xa, 0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x7dd, 0xb, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 
       0xbb, 0x7f2, 0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x7f6, 0xa, 
       0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x7f9, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 
       0x7fc, 0xb, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x801, 
       0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x804, 0xb, 0xbc, 0x3, 0xbc, 0x7, 
       0xbc, 0x807, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x80a, 0xb, 0xbc, 0x3, 
       0xbc, 0x5, 0xbc, 0x80d, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 
       0x811, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x815, 0xa, 0xbc, 
       0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x81b, 0xa, 
       0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x81e, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 
       0x821, 0xb, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x825, 0xa, 0xbc, 
       0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x829, 0xa, 0xbc, 0x3, 0xbc, 0x3, 
       0xbc, 0x5, 0xbc, 0x82d, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
       0x3, 0xbc, 0x5, 0xbc, 0x833, 0xa, 0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x836, 
       0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x839, 0xb, 0xbc, 0x3, 0xbc, 0x3, 
       0xbc, 0x5, 0xbc, 0x83d, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 
       0x841, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x845, 0xa, 0xbc, 
       0x5, 0xbc, 0x847, 0xa, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 
       0xbd, 0x84c, 0xa, 0xbd, 0x3, 0xbd, 0x7, 0xbd, 0x84f, 0xa, 0xbd, 0xc, 
       0xbd, 0xe, 0xbd, 0x852, 0xb, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 
       0x856, 0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x85a, 0xa, 0xbd, 
       0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x85e, 0xa, 0xbd, 0x3, 0xbe, 0x3, 
       0xbe, 0x5, 0xbe, 0x862, 0xa, 0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x865, 0xa, 
       0xbe, 0xc, 0xbe, 0xe, 0xbe, 0x868, 0xb, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
       0x3, 0xbe, 0x7, 0xbe, 0x86d, 0xa, 0xbe, 0xc, 0xbe, 0xe, 0xbe, 0x870, 
       0xb, 0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x873, 0xa, 0xbe, 0xc, 0xbe, 0xe, 
       0xbe, 0x876, 0xb, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x879, 0xa, 0xbe, 0x3, 
       0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x87d, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
       0x5, 0xbe, 0x881, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
       0xbe, 0x5, 0xbe, 0x887, 0xa, 0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x88a, 0xa, 
       0xbe, 0xc, 0xbe, 0xe, 0xbe, 0x88d, 0xb, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
       0x5, 0xbe, 0x891, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x895, 
       0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x899, 0xa, 0xbe, 0x5, 
       0xbe, 0x89b, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 
       0x8a0, 0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 
       0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 
       0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x8af, 0xa, 0xc0, 0x3, 0xc1, 
       0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 
       0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 
       0x8bd, 0xa, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 
       0xc3, 0x8c9, 0xa, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 
       0x3, 0xc3, 0x7, 0xc3, 0x8d0, 0xa, 0xc3, 0xc, 0xc3, 0xe, 0xc3, 0x8d3, 
       0xb, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x7, 0xc4, 
       0x8df, 0xa, 0xc4, 0xc, 0xc4, 0xe, 0xc4, 0x8e2, 0xb, 0xc4, 0x3, 0xc5, 
       0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
       0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x8ee, 0xa, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x7, 0xc5, 0x8f5, 
       0xa, 0xc5, 0xc, 0xc5, 0xe, 0xc5, 0x8f8, 0xb, 0xc5, 0x3, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x8fd, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x904, 0xa, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x909, 0xa, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x910, 0xa, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x915, 0xa, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 
       0x91c, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x921, 
       0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x5, 0xc6, 0x928, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 
       0xc6, 0x92d, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x935, 0xa, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x93a, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x5, 0xc6, 0x93e, 0xa, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x942, 
       0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x947, 0xa, 
       0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 
       0xc8, 0x94e, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x5, 0xc8, 0x955, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x5, 0xc8, 0x95a, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x961, 0xa, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x966, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x96d, 0xa, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x972, 0xa, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 
       0x97a, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x97f, 
       0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x983, 0xa, 0xc8, 0x3, 
       0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x7, 0xc9, 0x988, 0xa, 0xc9, 0xc, 0xc9, 
       0xe, 0xc9, 0x98b, 0xb, 0xc9, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 
       0xca, 0x990, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x3, 0xca, 0x5, 0xca, 0x997, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x99e, 0xa, 0xca, 0x3, 0xca, 
       0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x9a5, 0xa, 
       0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x5, 0xca, 0x9ad, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x9b4, 0xa, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x9bc, 
       0xa, 0xca, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 0x9c0, 0xa, 0xcb, 0x3, 
       0xcb, 0x3, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9c7, 
       0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x5, 0xcc, 0x9ce, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9d5, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9dd, 0xa, 
       0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 
       0xcc, 0x9e4, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9ec, 0xa, 0xcc, 0x3, 0xcd, 0x3, 
       0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0x9f2, 0xa, 0xcd, 0x3, 0xcd, 
       0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0x9f8, 0xa, 0xcd, 0x3, 
       0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 
       0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0xa04, 0xa, 0xcd, 
       0x3, 0xce, 0x3, 0xce, 0x7, 0xce, 0xa08, 0xa, 0xce, 0xc, 0xce, 0xe, 
       0xce, 0xa0b, 0xb, 0xce, 0x3, 0xcf, 0x7, 0xcf, 0xa0e, 0xa, 0xcf, 0xc, 
       0xcf, 0xe, 0xcf, 0xa11, 0xb, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x5, 0xd0, 0xa19, 0xa, 0xd0, 0x3, 
       0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd2, 0x3, 0xd2, 0x3, 
       0xd2, 0x5, 0xd2, 0xa22, 0xa, 0xd2, 0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd2, 
       0x3, 0xd2, 0x3, 0xd2, 0x5, 0xd2, 0xa29, 0xa, 0xd2, 0x3, 0xd3, 0x3, 
       0xd3, 0x3, 0xd3, 0x7, 0xd3, 0xa2e, 0xa, 0xd3, 0xc, 0xd3, 0xe, 0xd3, 
       0xa31, 0xb, 0xd3, 0x3, 0xd4, 0x3, 0xd4, 0x5, 0xd4, 0xa35, 0xa, 0xd4, 
       0x3, 0xd5, 0x3, 0xd5, 0x5, 0xd5, 0xa39, 0xa, 0xd5, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x5, 0xd6, 0xa6b, 
       0xa, 0xd6, 0x3, 0xd7, 0x3, 0xd7, 0x3, 0xd7, 0x5, 0xd7, 0xa70, 0xa, 
       0xd7, 0x3, 0xd8, 0x3, 0xd8, 0x3, 0xd8, 0x3, 0xd8, 0x3, 0xd8, 0x3, 
       0xd8, 0x3, 0xd8, 0x3, 0xd8, 0x3, 0xd8, 0x3, 0xd8, 0x3, 0xd8, 0x3, 
       0xd8, 0x3, 0xd8, 0x5, 0xd8, 0xa7f, 0xa, 0xd8, 0x3, 0xd9, 0x3, 0xd9, 
       0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x7, 0xd9, 0xa87, 0xa, 
       0xd9, 0xc, 0xd9, 0xe, 0xd9, 0xa8a, 0xb, 0xd9, 0x3, 0xda, 0x3, 0xda, 
       0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x7, 0xda, 0xa92, 0xa, 
       0xda, 0xc, 0xda, 0xe, 0xda, 0xa95, 0xb, 0xda, 0x3, 0xdb, 0x3, 0xdb, 
       0x3, 0xdb, 0x3, 0xdb, 0x3, 0xdb, 0x3, 0xdb, 0x7, 0xdb, 0xa9d, 0xa, 
       0xdb, 0xc, 0xdb, 0xe, 0xdb, 0xaa0, 0xb, 0xdb, 0x3, 0xdc, 0x3, 0xdc, 
       0x3, 0xdc, 0x3, 0xdc, 0x3, 0xdc, 0x3, 0xdc, 0x7, 0xdc, 0xaa8, 0xa, 
       0xdc, 0xc, 0xdc, 0xe, 0xdc, 0xaab, 0xb, 0xdc, 0x3, 0xdd, 0x3, 0xdd, 
       0x3, 0xdd, 0x3, 0xdd, 0x3, 0xdd, 0x3, 0xdd, 0x7, 0xdd, 0xab3, 0xa, 
       0xdd, 0xc, 0xdd, 0xe, 0xdd, 0xab6, 0xb, 0xdd, 0x3, 0xde, 0x3, 0xde, 
       0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 
       0x3, 0xde, 0x7, 0xde, 0xac1, 0xa, 0xde, 0xc, 0xde, 0xe, 0xde, 0xac4, 
       0xb, 0xde, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 
       0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 
       0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 
       0x3, 0xdf, 0x7, 0xdf, 0xad8, 0xa, 0xdf, 0xc, 0xdf, 0xe, 0xdf, 0xadb, 
       0xb, 0xdf, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 
       0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 
       0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x7, 0xe0, 
       0xaed, 0xa, 0xe0, 0xc, 0xe0, 0xe, 0xe0, 0xaf0, 0xb, 0xe0, 0x3, 0xe1, 
       0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 
       0x3, 0xe1, 0x3, 0xe1, 0x7, 0xe1, 0xafb, 0xa, 0xe1, 0xc, 0xe1, 0xe, 
       0xe1, 0xafe, 0xb, 0xe1, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 
       0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 
       0x3, 0xe2, 0x3, 0xe2, 0x7, 0xe2, 0xb0c, 0xa, 0xe2, 0xc, 0xe2, 0xe, 
       0xe2, 0xb0f, 0xb, 0xe2, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 
       0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x5, 0xe3, 0xb18, 0xa, 0xe3, 0x3, 
       0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 0x3, 
       0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x5, 
       0xe6, 0xb26, 0xa, 0xe6, 0x3, 0xe7, 0x3, 0xe7, 0x5, 0xe7, 0xb2a, 0xa, 
       0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x7, 0xe7, 0xb2e, 0xa, 0xe7, 0xc, 0xe7, 
       0xe, 0xe7, 0xb31, 0xb, 0xe7, 0x3, 0xe8, 0x3, 0xe8, 0x3, 0xe8, 0x3, 
       0xe9, 0x3, 0xe9, 0x3, 0xea, 0x3, 0xea, 0x3, 0xea, 0x3, 0xeb, 0x3, 
       0xeb, 0x3, 0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 
       0xec, 0x3, 0xec, 0x3, 0xec, 0x7, 0xec, 0xb45, 0xa, 0xec, 0xc, 0xec, 
       0xe, 0xec, 0xb48, 0xb, 0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 
       0xec, 0x3, 0xec, 0x3, 0xec, 0x7, 0xec, 0xb50, 0xa, 0xec, 0xc, 0xec, 
       0xe, 0xec, 0xb53, 0xb, 0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 0xec, 0x5, 
       0xec, 0xb58, 0xa, 0xec, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x2, 0xf, 
       0x38, 0x3e, 0x40, 0x1b0, 0x1b2, 0x1b4, 0x1b6, 0x1b8, 0x1ba, 0x1bc, 
       0x1be, 0x1c0, 0x1c2, 0xee, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
       0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
       0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
       0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
       0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 
       0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
       0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 
       0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 
       0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
       0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 
       0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 
       0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 
       0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 
       0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 
       0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 
       0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 
       0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 
       0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 
       0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 
       0x190, 0x192, 0x194, 0x196, 0x198, 0x19a, 0x19c, 0x19e, 0x1a0, 0x1a2, 
       0x1a4, 0x1a6, 0x1a8, 0x1aa, 0x1ac, 0x1ae, 0x1b0, 0x1b2, 0x1b4, 0x1b6, 
       0x1b8, 0x1ba, 0x1bc, 0x1be, 0x1c0, 0x1c2, 0x1c4, 0x1c6, 0x1c8, 0x1ca, 
       0x1cc, 0x1ce, 0x1d0, 0x1d2, 0x1d4, 0x1d6, 0x1d8, 0x2, 0x5, 0x3, 0x2, 
       0x35, 0x3a, 0x7, 0x2, 0x7, 0x7, 0xa, 0xa, 0x1d, 0x1d, 0x1f, 0x1f, 
       0x27, 0x27, 0x4, 0x2, 0x10, 0x10, 0x16, 0x16, 0x2, 0xc5a, 0x2, 0x1da, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1ee, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1f4, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1fb, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x12, 0x21e, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0x220, 0x3, 0x2, 0x2, 0x2, 0x16, 0x22e, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0x235, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x237, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0x239, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x23e, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x22, 0x251, 0x3, 0x2, 0x2, 
       0x2, 0x24, 0x266, 0x3, 0x2, 0x2, 0x2, 0x26, 0x26d, 0x3, 0x2, 0x2, 
       0x2, 0x28, 0x279, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x27b, 0x3, 0x2, 0x2, 
       0x2, 0x2c, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x282, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x291, 0x3, 0x2, 0x2, 
       0x2, 0x34, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2a3, 0x3, 0x2, 0x2, 
       0x2, 0x38, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x2b5, 0x3, 0x2, 0x2, 
       0x2, 0x3c, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x2b9, 0x3, 0x2, 0x2, 
       0x2, 0x40, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x42, 0x2d0, 0x3, 0x2, 0x2, 
       0x2, 0x44, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x46, 0x2f1, 0x3, 0x2, 0x2, 
       0x2, 0x48, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2f9, 0x3, 0x2, 0x2, 
       0x2, 0x4c, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x303, 0x3, 0x2, 0x2, 
       0x2, 0x50, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x314, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0x318, 0x3, 0x2, 0x2, 0x2, 0x56, 0x31d, 0x3, 0x2, 0x2, 
       0x2, 0x58, 0x335, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x337, 0x3, 0x2, 0x2, 
       0x2, 0x5c, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x343, 0x3, 0x2, 0x2, 
       0x2, 0x60, 0x346, 0x3, 0x2, 0x2, 0x2, 0x62, 0x349, 0x3, 0x2, 0x2, 
       0x2, 0x64, 0x351, 0x3, 0x2, 0x2, 0x2, 0x66, 0x35e, 0x3, 0x2, 0x2, 
       0x2, 0x68, 0x365, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x36a, 0x3, 0x2, 0x2, 
       0x2, 0x6c, 0x379, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x37b, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x383, 0x3, 0x2, 0x2, 0x2, 0x72, 0x388, 0x3, 0x2, 0x2, 
       0x2, 0x74, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x76, 0x392, 0x3, 0x2, 0x2, 
       0x2, 0x78, 0x396, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x39b, 0x3, 0x2, 0x2, 
       0x2, 0x7c, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x3b8, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x82, 0x3c5, 0x3, 0x2, 0x2, 
       0x2, 0x84, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x86, 0x3cb, 0x3, 0x2, 0x2, 
       0x2, 0x88, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x3cf, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3df, 0x3, 0x2, 0x2, 
       0x2, 0x90, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x92, 0x402, 0x3, 0x2, 0x2, 
       0x2, 0x94, 0x406, 0x3, 0x2, 0x2, 0x2, 0x96, 0x408, 0x3, 0x2, 0x2, 
       0x2, 0x98, 0x417, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x429, 0x3, 0x2, 0x2, 
       0x2, 0x9c, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x436, 0x3, 0x2, 0x2, 
       0x2, 0xa0, 0x449, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x44e, 0x3, 0x2, 0x2, 
       0x2, 0xa4, 0x457, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x45a, 0x3, 0x2, 0x2, 
       0x2, 0xa8, 0x464, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x468, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0x46a, 0x3, 0x2, 0x2, 0x2, 0xae, 0x46c, 0x3, 0x2, 0x2, 
       0x2, 0xb0, 0x472, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x47f, 0x3, 0x2, 0x2, 
       0x2, 0xb4, 0x482, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x48b, 0x3, 0x2, 0x2, 
       0x2, 0xb8, 0x48d, 0x3, 0x2, 0x2, 0x2, 0xba, 0x4c4, 0x3, 0x2, 0x2, 
       0x2, 0xbc, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x4d3, 0x3, 0x2, 0x2, 
       0x2, 0xc0, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x4e8, 0x3, 0x2, 0x2, 
       0x2, 0xc4, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x4f8, 0x3, 0x2, 0x2, 
       0x2, 0xc8, 0x501, 0x3, 0x2, 0x2, 0x2, 0xca, 0x506, 0x3, 0x2, 0x2, 
       0x2, 0xcc, 0x51a, 0x3, 0x2, 0x2, 0x2, 0xce, 0x51c, 0x3, 0x2, 0x2, 
       0x2, 0xd0, 0x51f, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x52d, 0x3, 0x2, 0x2, 
       0x2, 0xd4, 0x532, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x53d, 0x3, 0x2, 0x2, 
       0x2, 0xd8, 0x542, 0x3, 0x2, 0x2, 0x2, 0xda, 0x54e, 0x3, 0x2, 0x2, 
       0x2, 0xdc, 0x553, 0x3, 0x2, 0x2, 0x2, 0xde, 0x55b, 0x3, 0x2, 0x2, 
       0x2, 0xe0, 0x569, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x56e, 0x3, 0x2, 0x2, 
       0x2, 0xe4, 0x580, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x582, 0x3, 0x2, 0x2, 
       0x2, 0xe8, 0x588, 0x3, 0x2, 0x2, 0x2, 0xea, 0x58a, 0x3, 0x2, 0x2, 
       0x2, 0xec, 0x592, 0x3, 0x2, 0x2, 0x2, 0xee, 0x59a, 0x3, 0x2, 0x2, 
       0x2, 0xf0, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x5a3, 0x3, 0x2, 0x2, 
       0x2, 0xf4, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x5b4, 0x3, 0x2, 0x2, 
       0x2, 0xf8, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x5bd, 0x3, 0x2, 0x2, 
       0x2, 0xfc, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x5ce, 0x3, 0x2, 0x2, 
       0x2, 0x100, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x102, 0x5de, 0x3, 0x2, 0x2, 
       0x2, 0x104, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0x106, 0x5e6, 0x3, 0x2, 0x2, 
       0x2, 0x108, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x5f9, 0x3, 0x2, 0x2, 
       0x2, 0x10c, 0x607, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x609, 0x3, 0x2, 0x2, 
       0x2, 0x110, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x112, 0x60f, 0x3, 0x2, 0x2, 
       0x2, 0x114, 0x613, 0x3, 0x2, 0x2, 0x2, 0x116, 0x61d, 0x3, 0x2, 0x2, 
       0x2, 0x118, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x625, 0x3, 0x2, 0x2, 
       0x2, 0x11c, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x63f, 0x3, 0x2, 0x2, 
       0x2, 0x120, 0x641, 0x3, 0x2, 0x2, 0x2, 0x122, 0x647, 0x3, 0x2, 0x2, 
       0x2, 0x124, 0x656, 0x3, 0x2, 0x2, 0x2, 0x126, 0x659, 0x3, 0x2, 0x2, 
       0x2, 0x128, 0x66a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x66c, 0x3, 0x2, 0x2, 
       0x2, 0x12c, 0x66e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x674, 0x3, 0x2, 0x2, 
       0x2, 0x130, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x132, 0x684, 0x3, 0x2, 0x2, 
       0x2, 0x134, 0x688, 0x3, 0x2, 0x2, 0x2, 0x136, 0x68a, 0x3, 0x2, 0x2, 
       0x2, 0x138, 0x69a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x6ac, 0x3, 0x2, 0x2, 
       0x2, 0x13c, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x6b0, 0x3, 0x2, 0x2, 
       0x2, 0x140, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x142, 0x6c7, 0x3, 0x2, 0x2, 
       0x2, 0x144, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x146, 0x6dc, 0x3, 0x2, 0x2, 
       0x2, 0x148, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x6e8, 0x3, 0x2, 0x2, 
       0x2, 0x14c, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x700, 0x3, 0x2, 0x2, 
       0x2, 0x150, 0x702, 0x3, 0x2, 0x2, 0x2, 0x152, 0x709, 0x3, 0x2, 0x2, 
       0x2, 0x154, 0x712, 0x3, 0x2, 0x2, 0x2, 0x156, 0x718, 0x3, 0x2, 0x2, 
       0x2, 0x158, 0x720, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x723, 0x3, 0x2, 0x2, 
       0x2, 0x15c, 0x72c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x733, 0x3, 0x2, 0x2, 
       0x2, 0x160, 0x73e, 0x3, 0x2, 0x2, 0x2, 0x162, 0x748, 0x3, 0x2, 0x2, 
       0x2, 0x164, 0x76d, 0x3, 0x2, 0x2, 0x2, 0x166, 0x76f, 0x3, 0x2, 0x2, 
       0x2, 0x168, 0x78d, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x794, 0x3, 0x2, 0x2, 
       0x2, 0x16c, 0x796, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x79c, 0x3, 0x2, 0x2, 
       0x2, 0x170, 0x7c6, 0x3, 0x2, 0x2, 0x2, 0x172, 0x7c8, 0x3, 0x2, 0x2, 
       0x2, 0x174, 0x7f1, 0x3, 0x2, 0x2, 0x2, 0x176, 0x846, 0x3, 0x2, 0x2, 
       0x2, 0x178, 0x848, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x89a, 0x3, 0x2, 0x2, 
       0x2, 0x17c, 0x89f, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x8ae, 0x3, 0x2, 0x2, 
       0x2, 0x180, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x182, 0x8bc, 0x3, 0x2, 0x2, 
       0x2, 0x184, 0x8c8, 0x3, 0x2, 0x2, 0x2, 0x186, 0x8d4, 0x3, 0x2, 0x2, 
       0x2, 0x188, 0x8ed, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x93d, 0x3, 0x2, 0x2, 
       0x2, 0x18c, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x982, 0x3, 0x2, 0x2, 
       0x2, 0x190, 0x984, 0x3, 0x2, 0x2, 0x2, 0x192, 0x9bb, 0x3, 0x2, 0x2, 
       0x2, 0x194, 0x9bd, 0x3, 0x2, 0x2, 0x2, 0x196, 0x9eb, 0x3, 0x2, 0x2, 
       0x2, 0x198, 0xa03, 0x3, 0x2, 0x2, 0x2, 0x19a, 0xa05, 0x3, 0x2, 0x2, 
       0x2, 0x19c, 0xa0f, 0x3, 0x2, 0x2, 0x2, 0x19e, 0xa18, 0x3, 0x2, 0x2, 
       0x2, 0x1a0, 0xa1a, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0xa28, 0x3, 0x2, 0x2, 
       0x2, 0x1a4, 0xa2a, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0xa34, 0x3, 0x2, 0x2, 
       0x2, 0x1a8, 0xa38, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0xa6a, 0x3, 0x2, 0x2, 
       0x2, 0x1ac, 0xa6f, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0xa7e, 0x3, 0x2, 0x2, 
       0x2, 0x1b0, 0xa80, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0xa8b, 0x3, 0x2, 0x2, 
       0x2, 0x1b4, 0xa96, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0xaa1, 0x3, 0x2, 0x2, 
       0x2, 0x1b8, 0xaac, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0xab7, 0x3, 0x2, 0x2, 
       0x2, 0x1bc, 0xac5, 0x3, 0x2, 0x2, 0x2, 0x1be, 0xadc, 0x3, 0x2, 0x2, 
       0x2, 0x1c0, 0xaf1, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0xaff, 0x3, 0x2, 0x2, 
       0x2, 0x1c4, 0xb17, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0xb19, 0x3, 0x2, 0x2, 
       0x2, 0x1c8, 0xb1c, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0xb25, 0x3, 0x2, 0x2, 
       0x2, 0x1cc, 0xb29, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0xb32, 0x3, 0x2, 0x2, 
       0x2, 0x1d0, 0xb35, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0xb37, 0x3, 0x2, 0x2, 
       0x2, 0x1d4, 0xb3a, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0xb57, 0x3, 0x2, 0x2, 
       0x2, 0x1d8, 0xb59, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x9, 0x2, 0x2, 
       0x2, 0x1db, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1df, 0x5, 0x6, 0x4, 
       0x2, 0x1dd, 0x1df, 0x5, 0xe, 0x8, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 
       0x2, 0x1de, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x5, 0x3, 0x2, 0x2, 
       0x2, 0x1e0, 0x1e2, 0x5, 0xe8, 0x75, 0x2, 0x1e1, 0x1e0, 0x3, 0x2, 
       0x2, 0x2, 0x1e2, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e1, 0x3, 0x2, 
       0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e6, 0x3, 0x2, 
       0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1ef, 0x5, 0x8, 
       0x5, 0x2, 0x1e7, 0x1e9, 0x5, 0xe8, 0x75, 0x2, 0x1e8, 0x1e7, 0x3, 
       0x2, 0x2, 0x2, 0x1e9, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1e8, 0x3, 
       0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ed, 0x3, 
       0x2, 0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ef, 0x7, 
       0x5, 0x2, 0x2, 0x1ee, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ea, 0x3, 
       0x2, 0x2, 0x2, 0x1ef, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f3, 0x5, 
       0xa, 0x6, 0x2, 0x1f1, 0x1f3, 0x5, 0xc, 0x7, 0x2, 0x1f2, 0x1f0, 0x3, 
       0x2, 0x2, 0x2, 0x1f2, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x9, 0x3, 0x2, 0x2, 0x1f5, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x9, 0x4, 0x2, 0x2, 0x1f7, 0xd, 0x3, 
       0x2, 0x2, 0x2, 0x1f8, 0x1fc, 0x5, 0x10, 0x9, 0x2, 0x1f9, 0x1fc, 0x5, 
       0x1e, 0x10, 0x2, 0x1fa, 0x1fc, 0x5, 0x20, 0x11, 0x2, 0x1fb, 0x1f8, 
       0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fa, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x200, 
       0x5, 0x16, 0xc, 0x2, 0x1fe, 0x200, 0x5, 0x1c, 0xf, 0x2, 0x1ff, 0x1fd, 
       0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x205, 
       0x3, 0x2, 0x2, 0x2, 0x201, 0x204, 0x5, 0x14, 0xb, 0x2, 0x202, 0x204, 
       0x5, 0x1a, 0xe, 0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x202, 
       0x3, 0x2, 0x2, 0x2, 0x204, 0x207, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 
       0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20a, 
       0x5, 0xe8, 0x75, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20d, 
       0x3, 0x2, 0x2, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 
       0x3, 0x2, 0x2, 0x2, 0x20c, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20b, 
       0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 0x7, 0x68, 0x2, 0x2, 0x20f, 0x211, 
       0x5, 0x2c, 0x17, 0x2, 0x210, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 
       0x5, 0x10, 0x9, 0x2, 0x213, 0x217, 0x7, 0x43, 0x2, 0x2, 0x214, 0x216, 
       0x5, 0xe8, 0x75, 0x2, 0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x219, 
       0x3, 0x2, 0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 
       0x3, 0x2, 0x2, 0x2, 0x218, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x21c, 0x7, 0x68, 0x2, 0x2, 0x21b, 0x21d, 
       0x5, 0x2c, 0x17, 0x2, 0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 
       0x3, 0x2, 0x2, 0x2, 0x21d, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x20b, 
       0x3, 0x2, 0x2, 0x2, 0x21e, 0x212, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x220, 0x224, 0x7, 0x43, 0x2, 0x2, 0x221, 0x223, 
       0x5, 0xe8, 0x75, 0x2, 0x222, 0x221, 0x3, 0x2, 0x2, 0x2, 0x223, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x225, 0x227, 0x3, 0x2, 0x2, 0x2, 0x226, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x227, 0x229, 0x7, 0x68, 0x2, 0x2, 0x228, 0x22a, 
       0x5, 0x2c, 0x17, 0x2, 0x229, 0x228, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x22a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22d, 
       0x5, 0xe8, 0x75, 0x2, 0x22c, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x230, 
       0x3, 0x2, 0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x22f, 0x231, 0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 
       0x3, 0x2, 0x2, 0x2, 0x231, 0x233, 0x7, 0x68, 0x2, 0x2, 0x232, 0x234, 
       0x5, 0x2c, 0x17, 0x2, 0x233, 0x232, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x17, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 
       0x5, 0x12, 0xa, 0x2, 0x236, 0x19, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 
       0x5, 0x14, 0xb, 0x2, 0x238, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 
       0x5, 0x16, 0xc, 0x2, 0x23a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23d, 
       0x5, 0xe8, 0x75, 0x2, 0x23c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x240, 
       0x3, 0x2, 0x2, 0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x241, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x7, 0x68, 0x2, 0x2, 0x242, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x5, 0x6, 0x4, 0x2, 0x244, 0x245, 
       0x5, 0x22, 0x12, 0x2, 0x245, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 
       0x5, 0x10, 0x9, 0x2, 0x247, 0x248, 0x5, 0x22, 0x12, 0x2, 0x248, 0x24d, 
       0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x5, 0x1e, 0x10, 0x2, 0x24a, 0x24b, 
       0x5, 0x22, 0x12, 0x2, 0x24b, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x243, 
       0x3, 0x2, 0x2, 0x2, 0x24c, 0x246, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x249, 
       0x3, 0x2, 0x2, 0x2, 0x24d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x250, 
       0x5, 0xe8, 0x75, 0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x250, 0x253, 
       0x3, 0x2, 0x2, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 
       0x3, 0x2, 0x2, 0x2, 0x252, 0x254, 0x3, 0x2, 0x2, 0x2, 0x253, 0x251, 
       0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x7, 0x3f, 0x2, 0x2, 0x255, 0x260, 
       0x7, 0x40, 0x2, 0x2, 0x256, 0x258, 0x5, 0xe8, 0x75, 0x2, 0x257, 0x256, 
       0x3, 0x2, 0x2, 0x2, 0x258, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x259, 0x257, 
       0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25c, 
       0x3, 0x2, 0x2, 0x2, 0x25b, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 
       0x7, 0x3f, 0x2, 0x2, 0x25d, 0x25f, 0x7, 0x40, 0x2, 0x2, 0x25e, 0x259, 
       0x3, 0x2, 0x2, 0x2, 0x25f, 0x262, 0x3, 0x2, 0x2, 0x2, 0x260, 0x25e, 
       0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x263, 0x265, 
       0x5, 0x26, 0x14, 0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x268, 
       0x3, 0x2, 0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 
       0x3, 0x2, 0x2, 0x2, 0x267, 0x269, 0x3, 0x2, 0x2, 0x2, 0x268, 0x266, 
       0x3, 0x2, 0x2, 0x2, 0x269, 0x26b, 0x7, 0x68, 0x2, 0x2, 0x26a, 0x26c, 
       0x5, 0x28, 0x15, 0x2, 0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 
       0x3, 0x2, 0x2, 0x2, 0x26c, 0x25, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 
       0x5, 0xe8, 0x75, 0x2, 0x26e, 0x27, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 
       0x7, 0x13, 0x2, 0x2, 0x270, 0x27a, 0x5, 0x1e, 0x10, 0x2, 0x271, 0x272, 
       0x7, 0x13, 0x2, 0x2, 0x272, 0x276, 0x5, 0x10, 0x9, 0x2, 0x273, 0x275, 
       0x5, 0x2a, 0x16, 0x2, 0x274, 0x273, 0x3, 0x2, 0x2, 0x2, 0x275, 0x278, 
       0x3, 0x2, 0x2, 0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 
       0x3, 0x2, 0x2, 0x2, 0x277, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x278, 0x276, 
       0x3, 0x2, 0x2, 0x2, 0x279, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x279, 0x271, 
       0x3, 0x2, 0x2, 0x2, 0x27a, 0x29, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 
       0x7, 0x57, 0x2, 0x2, 0x27c, 0x27d, 0x5, 0x18, 0xd, 0x2, 0x27d, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0x46, 0x2, 0x2, 0x27f, 0x280, 
       0x5, 0x2e, 0x18, 0x2, 0x280, 0x281, 0x7, 0x45, 0x2, 0x2, 0x281, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x282, 0x287, 0x5, 0x30, 0x19, 0x2, 0x283, 0x284, 
       0x7, 0x42, 0x2, 0x2, 0x284, 0x286, 0x5, 0x30, 0x19, 0x2, 0x285, 0x283, 
       0x3, 0x2, 0x2, 0x2, 0x286, 0x289, 0x3, 0x2, 0x2, 0x2, 0x287, 0x285, 
       0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 0x2, 0x2, 0x288, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x289, 0x287, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28d, 
       0x5, 0xe, 0x8, 0x2, 0x28b, 0x28d, 0x5, 0x32, 0x1a, 0x2, 0x28c, 0x28a, 
       0x3, 0x2, 0x2, 0x2, 0x28c, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x28e, 0x290, 0x5, 0xe8, 0x75, 0x2, 0x28f, 0x28e, 
       0x3, 0x2, 0x2, 0x2, 0x290, 0x293, 0x3, 0x2, 0x2, 0x2, 0x291, 0x28f, 
       0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 0x292, 0x294, 
       0x3, 0x2, 0x2, 0x2, 0x293, 0x291, 0x3, 0x2, 0x2, 0x2, 0x294, 0x296, 
       0x7, 0x49, 0x2, 0x2, 0x295, 0x297, 0x5, 0x34, 0x1b, 0x2, 0x296, 0x295, 
       0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 0x2, 0x2, 0x297, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x298, 0x299, 0x7, 0x13, 0x2, 0x2, 0x299, 0x29d, 
       0x5, 0xe, 0x8, 0x2, 0x29a, 0x29b, 0x7, 0x2a, 0x2, 0x2, 0x29b, 0x29d, 
       0x5, 0xe, 0x8, 0x2, 0x29c, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29a, 
       0x3, 0x2, 0x2, 0x2, 0x29d, 0x35, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x2a4, 
       0x7, 0x68, 0x2, 0x2, 0x29f, 0x2a0, 0x5, 0x38, 0x1d, 0x2, 0x2a0, 0x2a1, 
       0x7, 0x43, 0x2, 0x2, 0x2a1, 0x2a2, 0x7, 0x68, 0x2, 0x2, 0x2a2, 0x2a4, 
       0x3, 0x2, 0x2, 0x2, 0x2a3, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x29f, 
       0x3, 0x2, 0x2, 0x2, 0x2a4, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 
       0x8, 0x1d, 0x1, 0x2, 0x2a6, 0x2a7, 0x7, 0x68, 0x2, 0x2, 0x2a7, 0x2ad, 
       0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 0xc, 0x3, 0x2, 0x2, 0x2a9, 0x2aa, 
       0x7, 0x43, 0x2, 0x2, 0x2aa, 0x2ac, 0x7, 0x68, 0x2, 0x2, 0x2ab, 0x2a8, 
       0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ab, 
       0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b6, 
       0x7, 0x68, 0x2, 0x2, 0x2b1, 0x2b2, 0x5, 0x40, 0x21, 0x2, 0x2b2, 0x2b3, 
       0xb, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x7, 0x68, 0x2, 0x2, 0x2b4, 0x2b6, 
       0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b1, 
       0x3, 0x2, 0x2, 0x2, 0x2b6, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 
       0x7, 0x68, 0x2, 0x2, 0x2b8, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 
       0x8, 0x20, 0x1, 0x2, 0x2ba, 0x2bb, 0x7, 0x68, 0x2, 0x2, 0x2bb, 0x2c1, 
       0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0xc, 0x3, 0x2, 0x2, 0x2bd, 0x2be, 
       0x7, 0x43, 0x2, 0x2, 0x2be, 0x2c0, 0x7, 0x68, 0x2, 0x2, 0x2bf, 0x2bc, 
       0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2bf, 
       0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 
       0x8, 0x21, 0x1, 0x2, 0x2c5, 0x2c6, 0x7, 0x68, 0x2, 0x2, 0x2c6, 0x2cc, 
       0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0xc, 0x3, 0x2, 0x2, 0x2c8, 0x2c9, 
       0x7, 0x43, 0x2, 0x2, 0x2c9, 0x2cb, 0x7, 0x68, 0x2, 0x2, 0x2ca, 0x2c7, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2ca, 
       0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d1, 
       0x5, 0x44, 0x23, 0x2, 0x2d0, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 
       0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d4, 
       0x5, 0x48, 0x25, 0x2, 0x2d3, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d7, 
       0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 
       0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d5, 
       0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2da, 0x5, 0x52, 0x2a, 0x2, 0x2d9, 0x2d8, 
       0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d9, 
       0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2de, 
       0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 
       0x7, 0x2, 0x2, 0x3, 0x2df, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e2, 
       0x5, 0x46, 0x24, 0x2, 0x2e1, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 
       0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 
       0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 
       0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x7, 0x22, 0x2, 0x2, 0x2e7, 0x2ec, 
       0x7, 0x68, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x43, 0x2, 0x2, 0x2e9, 0x2eb, 
       0x7, 0x68, 0x2, 0x2, 0x2ea, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ee, 
       0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 
       0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ec, 
       0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0x7, 0x41, 0x2, 0x2, 0x2f0, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x5, 0xe8, 0x75, 0x2, 0x2f2, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f8, 0x5, 0x4a, 0x26, 0x2, 0x2f4, 0x2f8, 
       0x5, 0x4c, 0x27, 0x2, 0x2f5, 0x2f8, 0x5, 0x4e, 0x28, 0x2, 0x2f6, 
       0x2f8, 0x5, 0x50, 0x29, 0x2, 0x2f7, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f7, 
       0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f7, 
       0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2f9, 
       0x2fa, 0x7, 0x1b, 0x2, 0x2, 0x2fa, 0x2fb, 0x5, 0x36, 0x1c, 0x2, 0x2fb, 
       0x2fc, 0x7, 0x41, 0x2, 0x2, 0x2fc, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2fd, 
       0x2fe, 0x7, 0x1b, 0x2, 0x2, 0x2fe, 0x2ff, 0x5, 0x38, 0x1d, 0x2, 0x2ff, 
       0x300, 0x7, 0x43, 0x2, 0x2, 0x300, 0x301, 0x7, 0x55, 0x2, 0x2, 0x301, 
       0x302, 0x7, 0x41, 0x2, 0x2, 0x302, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x303, 
       0x304, 0x7, 0x1b, 0x2, 0x2, 0x304, 0x305, 0x7, 0x28, 0x2, 0x2, 0x305, 
       0x306, 0x5, 0x36, 0x1c, 0x2, 0x306, 0x307, 0x7, 0x43, 0x2, 0x2, 0x307, 
       0x308, 0x7, 0x68, 0x2, 0x2, 0x308, 0x309, 0x7, 0x41, 0x2, 0x2, 0x309, 
       0x4f, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30b, 0x7, 0x1b, 0x2, 0x2, 0x30b, 
       0x30c, 0x7, 0x28, 0x2, 0x2, 0x30c, 0x30d, 0x5, 0x36, 0x1c, 0x2, 0x30d, 
       0x30e, 0x7, 0x43, 0x2, 0x2, 0x30e, 0x30f, 0x7, 0x55, 0x2, 0x2, 0x30f, 
       0x310, 0x7, 0x41, 0x2, 0x2, 0x310, 0x51, 0x3, 0x2, 0x2, 0x2, 0x311, 
       0x315, 0x5, 0x54, 0x2b, 0x2, 0x312, 0x315, 0x5, 0xc8, 0x65, 0x2, 
       0x313, 0x315, 0x7, 0x41, 0x2, 0x2, 0x314, 0x311, 0x3, 0x2, 0x2, 0x2, 
       0x314, 0x312, 0x3, 0x2, 0x2, 0x2, 0x314, 0x313, 0x3, 0x2, 0x2, 0x2, 
       0x315, 0x53, 0x3, 0x2, 0x2, 0x2, 0x316, 0x319, 0x5, 0x56, 0x2c, 0x2, 
       0x317, 0x319, 0x5, 0xbc, 0x5f, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 
       0x2, 0x318, 0x317, 0x3, 0x2, 0x2, 0x2, 0x319, 0x55, 0x3, 0x2, 0x2, 
       0x2, 0x31a, 0x31c, 0x5, 0x58, 0x2d, 0x2, 0x31b, 0x31a, 0x3, 0x2, 
       0x2, 0x2, 0x31c, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31b, 0x3, 0x2, 
       0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x320, 0x3, 0x2, 
       0x2, 0x2, 0x31f, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x7, 0xb, 
       0x2, 0x2, 0x321, 0x323, 0x7, 0x68, 0x2, 0x2, 0x322, 0x324, 0x5, 0x5a, 
       0x2e, 0x2, 0x323, 0x322, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x3, 0x2, 
       0x2, 0x2, 0x324, 0x326, 0x3, 0x2, 0x2, 0x2, 0x325, 0x327, 0x5, 0x5e, 
       0x30, 0x2, 0x326, 0x325, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x3, 0x2, 
       0x2, 0x2, 0x327, 0x329, 0x3, 0x2, 0x2, 0x2, 0x328, 0x32a, 0x5, 0x60, 
       0x31, 0x2, 0x329, 0x328, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32a, 0x3, 0x2, 
       0x2, 0x2, 0x32a, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 0x5, 0x64, 
       0x33, 0x2, 0x32c, 0x57, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x336, 0x5, 0xe8, 
       0x75, 0x2, 0x32e, 0x336, 0x7, 0x25, 0x2, 0x2, 0x32f, 0x336, 0x7, 
       0x24, 0x2, 0x2, 0x330, 0x336, 0x7, 0x23, 0x2, 0x2, 0x331, 0x336, 
       0x7, 0x3, 0x2, 0x2, 0x332, 0x336, 0x7, 0x28, 0x2, 0x2, 0x333, 0x336, 
       0x7, 0x14, 0x2, 0x2, 0x334, 0x336, 0x7, 0x29, 0x2, 0x2, 0x335, 0x32d, 
       0x3, 0x2, 0x2, 0x2, 0x335, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x335, 0x32f, 
       0x3, 0x2, 0x2, 0x2, 0x335, 0x330, 0x3, 0x2, 0x2, 0x2, 0x335, 0x331, 
       0x3, 0x2, 0x2, 0x2, 0x335, 0x332, 0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 
       0x3, 0x2, 0x2, 0x2, 0x335, 0x334, 0x3, 0x2, 0x2, 0x2, 0x336, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 0x7, 0x46, 0x2, 0x2, 0x338, 0x339, 
       0x5, 0x5c, 0x2f, 0x2, 0x339, 0x33a, 0x7, 0x45, 0x2, 0x2, 0x33a, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x33b, 0x340, 0x5, 0x24, 0x13, 0x2, 0x33c, 0x33d, 
       0x7, 0x42, 0x2, 0x2, 0x33d, 0x33f, 0x5, 0x24, 0x13, 0x2, 0x33e, 0x33c, 
       0x3, 0x2, 0x2, 0x2, 0x33f, 0x342, 0x3, 0x2, 0x2, 0x2, 0x340, 0x33e, 
       0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 0x2, 0x2, 0x341, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x342, 0x340, 0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 
       0x7, 0x13, 0x2, 0x2, 0x344, 0x345, 0x5, 0x12, 0xa, 0x2, 0x345, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x346, 0x347, 0x7, 0x1a, 0x2, 0x2, 0x347, 0x348, 
       0x5, 0x62, 0x32, 0x2, 0x348, 0x61, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34e, 
       0x5, 0x18, 0xd, 0x2, 0x34a, 0x34b, 0x7, 0x42, 0x2, 0x2, 0x34b, 0x34d, 
       0x5, 0x18, 0xd, 0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x350, 
       0x3, 0x2, 0x2, 0x2, 0x34e, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34f, 
       0x3, 0x2, 0x2, 0x2, 0x34f, 0x63, 0x3, 0x2, 0x2, 0x2, 0x350, 0x34e, 
       0x3, 0x2, 0x2, 0x2, 0x351, 0x355, 0x7, 0x3d, 0x2, 0x2, 0x352, 0x354, 
       0x5, 0x66, 0x34, 0x2, 0x353, 0x352, 0x3, 0x2, 0x2, 0x2, 0x354, 0x357, 
       0x3, 0x2, 0x2, 0x2, 0x355, 0x353, 0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 
       0x3, 0x2, 0x2, 0x2, 0x356, 0x358, 0x3, 0x2, 0x2, 0x2, 0x357, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x7, 0x3e, 0x2, 0x2, 0x359, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x35a, 0x35f, 0x5, 0x68, 0x35, 0x2, 0x35b, 0x35f, 
       0x5, 0xac, 0x57, 0x2, 0x35c, 0x35f, 0x5, 0xae, 0x58, 0x2, 0x35d, 
       0x35f, 0x5, 0xb0, 0x59, 0x2, 0x35e, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35e, 
       0x35b, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35e, 
       0x35d, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x67, 0x3, 0x2, 0x2, 0x2, 0x360, 
       0x366, 0x5, 0x6a, 0x36, 0x2, 0x361, 0x366, 0x5, 0x8e, 0x48, 0x2, 
       0x362, 0x366, 0x5, 0x54, 0x2b, 0x2, 0x363, 0x366, 0x5, 0xc8, 0x65, 
       0x2, 0x364, 0x366, 0x7, 0x41, 0x2, 0x2, 0x365, 0x360, 0x3, 0x2, 0x2, 
       0x2, 0x365, 0x361, 0x3, 0x2, 0x2, 0x2, 0x365, 0x362, 0x3, 0x2, 0x2, 
       0x2, 0x365, 0x363, 0x3, 0x2, 0x2, 0x2, 0x365, 0x364, 0x3, 0x2, 0x2, 
       0x2, 0x366, 0x69, 0x3, 0x2, 0x2, 0x2, 0x367, 0x369, 0x5, 0x6c, 0x37, 
       0x2, 0x368, 0x367, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36c, 0x3, 0x2, 0x2, 
       0x2, 0x36a, 0x368, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 0x3, 0x2, 0x2, 
       0x2, 0x36b, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36a, 0x3, 0x2, 0x2, 
       0x2, 0x36d, 0x36e, 0x5, 0x76, 0x3c, 0x2, 0x36e, 0x36f, 0x5, 0x6e, 
       0x38, 0x2, 0x36f, 0x370, 0x7, 0x41, 0x2, 0x2, 0x370, 0x6b, 0x3, 0x2, 
       0x2, 0x2, 0x371, 0x37a, 0x5, 0xe8, 0x75, 0x2, 0x372, 0x37a, 0x7, 
       0x25, 0x2, 0x2, 0x373, 0x37a, 0x7, 0x24, 0x2, 0x2, 0x374, 0x37a, 
       0x7, 0x23, 0x2, 0x2, 0x375, 0x37a, 0x7, 0x28, 0x2, 0x2, 0x376, 0x37a, 
       0x7, 0x14, 0x2, 0x2, 0x377, 0x37a, 0x7, 0x30, 0x2, 0x2, 0x378, 0x37a, 
       0x7, 0x33, 0x2, 0x2, 0x379, 0x371, 0x3, 0x2, 0x2, 0x2, 0x379, 0x372, 
       0x3, 0x2, 0x2, 0x2, 0x379, 0x373, 0x3, 0x2, 0x2, 0x2, 0x379, 0x374, 
       0x3, 0x2, 0x2, 0x2, 0x379, 0x375, 0x3, 0x2, 0x2, 0x2, 0x379, 0x376, 
       0x3, 0x2, 0x2, 0x2, 0x379, 0x377, 0x3, 0x2, 0x2, 0x2, 0x379, 0x378, 
       0x3, 0x2, 0x2, 0x2, 0x37a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x380, 
       0x5, 0x70, 0x39, 0x2, 0x37c, 0x37d, 0x7, 0x42, 0x2, 0x2, 0x37d, 0x37f, 
       0x5, 0x70, 0x39, 0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x382, 
       0x3, 0x2, 0x2, 0x2, 0x380, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 
       0x3, 0x2, 0x2, 0x2, 0x381, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x382, 0x380, 
       0x3, 0x2, 0x2, 0x2, 0x383, 0x386, 0x5, 0x72, 0x3a, 0x2, 0x384, 0x385, 
       0x7, 0x44, 0x2, 0x2, 0x385, 0x387, 0x5, 0x74, 0x3b, 0x2, 0x386, 0x384, 
       0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 0x3, 0x2, 0x2, 0x2, 0x387, 0x71, 
       0x3, 0x2, 0x2, 0x2, 0x388, 0x38a, 0x7, 0x68, 0x2, 0x2, 0x389, 0x38b, 
       0x5, 0x22, 0x12, 0x2, 0x38a, 0x389, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 
       0x3, 0x2, 0x2, 0x2, 0x38b, 0x73, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38f, 
       0x5, 0x19e, 0xd0, 0x2, 0x38d, 0x38f, 0x5, 0xfa, 0x7e, 0x2, 0x38e, 
       0x38c, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x38f, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x390, 0x393, 0x5, 0x78, 0x3d, 0x2, 0x391, 
       0x393, 0x5, 0x7a, 0x3e, 0x2, 0x392, 0x390, 0x3, 0x2, 0x2, 0x2, 0x392, 
       0x391, 0x3, 0x2, 0x2, 0x2, 0x393, 0x77, 0x3, 0x2, 0x2, 0x2, 0x394, 
       0x397, 0x5, 0x8, 0x5, 0x2, 0x395, 0x397, 0x7, 0x5, 0x2, 0x2, 0x396, 
       0x394, 0x3, 0x2, 0x2, 0x2, 0x396, 0x395, 0x3, 0x2, 0x2, 0x2, 0x397, 
       0x79, 0x3, 0x2, 0x2, 0x2, 0x398, 0x39c, 0x5, 0x7c, 0x3f, 0x2, 0x399, 
       0x39c, 0x5, 0x8a, 0x46, 0x2, 0x39a, 0x39c, 0x5, 0x8c, 0x47, 0x2, 
       0x39b, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x399, 0x3, 0x2, 0x2, 0x2, 
       0x39b, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x7b, 0x3, 0x2, 0x2, 0x2, 
       0x39d, 0x3a0, 0x5, 0x82, 0x42, 0x2, 0x39e, 0x3a0, 0x5, 0x88, 0x45, 
       0x2, 0x39f, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x39e, 0x3, 0x2, 0x2, 
       0x2, 0x3a0, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a4, 0x5, 0x80, 0x41, 
       0x2, 0x3a2, 0x3a4, 0x5, 0x86, 0x44, 0x2, 0x3a3, 0x3a1, 0x3, 0x2, 
       0x2, 0x2, 0x3a3, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a7, 0x3, 0x2, 
       0x2, 0x2, 0x3a5, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a6, 0x3, 0x2, 
       0x2, 0x2, 0x3a6, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a5, 0x3, 0x2, 
       0x2, 0x2, 0x3a8, 0x3aa, 0x7, 0x68, 0x2, 0x2, 0x3a9, 0x3ab, 0x5, 0x2c, 
       0x17, 0x2, 0x3aa, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 
       0x2, 0x2, 0x3ab, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0x7c, 
       0x3f, 0x2, 0x3ad, 0x3b1, 0x7, 0x43, 0x2, 0x2, 0x3ae, 0x3b0, 0x5, 
       0xe8, 0x75, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b3, 
       0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 
       0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b1, 
       0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x7, 0x68, 0x2, 0x2, 0x3b5, 0x3b7, 
       0x5, 0x2c, 0x17, 0x2, 0x3b6, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 
       0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3a8, 
       0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3be, 0x7, 0x43, 0x2, 0x2, 0x3bb, 0x3bd, 
       0x5, 0xe8, 0x75, 0x2, 0x3bc, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3c0, 
       0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 
       0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3be, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c3, 0x7, 0x68, 0x2, 0x2, 0x3c2, 0x3c4, 
       0x5, 0x2c, 0x17, 0x2, 0x3c3, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c4, 
       0x3, 0x2, 0x2, 0x2, 0x3c4, 0x81, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c7, 
       0x7, 0x68, 0x2, 0x2, 0x3c6, 0x3c8, 0x5, 0x2c, 0x17, 0x2, 0x3c7, 0x3c6, 
       0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3ca, 0x5, 0x7e, 0x40, 0x2, 0x3ca, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3cc, 0x5, 0x80, 0x41, 0x2, 0x3cc, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 0x5, 0x82, 0x42, 0x2, 0x3ce, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x7, 0x68, 0x2, 0x2, 0x3d0, 0x8b, 
       0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x5, 0x78, 0x3d, 0x2, 0x3d2, 0x3d3, 
       0x5, 0x22, 0x12, 0x2, 0x3d3, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d5, 
       0x5, 0x7c, 0x3f, 0x2, 0x3d5, 0x3d6, 0x5, 0x22, 0x12, 0x2, 0x3d6, 
       0x3db, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x5, 0x8a, 0x46, 0x2, 0x3d8, 
       0x3d9, 0x5, 0x22, 0x12, 0x2, 0x3d9, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3da, 
       0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3da, 
       0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3dc, 
       0x3de, 0x5, 0x90, 0x49, 0x2, 0x3dd, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3de, 
       0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3df, 
       0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e1, 
       0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x5, 0x92, 0x4a, 0x2, 0x3e3, 
       0x3e4, 0x5, 0xaa, 0x56, 0x2, 0x3e4, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3e5, 
       0x3f0, 0x5, 0xe8, 0x75, 0x2, 0x3e6, 0x3f0, 0x7, 0x25, 0x2, 0x2, 0x3e7, 
       0x3f0, 0x7, 0x24, 0x2, 0x2, 0x3e8, 0x3f0, 0x7, 0x23, 0x2, 0x2, 0x3e9, 
       0x3f0, 0x7, 0x3, 0x2, 0x2, 0x3ea, 0x3f0, 0x7, 0x28, 0x2, 0x2, 0x3eb, 
       0x3f0, 0x7, 0x14, 0x2, 0x2, 0x3ec, 0x3f0, 0x7, 0x2c, 0x2, 0x2, 0x3ed, 
       0x3f0, 0x7, 0x20, 0x2, 0x2, 0x3ee, 0x3f0, 0x7, 0x29, 0x2, 0x2, 0x3ef, 
       0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
       0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
       0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
       0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
       0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f0, 
       0x91, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 0x5, 0x94, 0x4b, 0x2, 0x3f2, 
       0x3f4, 0x5, 0x96, 0x4c, 0x2, 0x3f3, 0x3f5, 0x5, 0xa4, 0x53, 0x2, 
       0x3f4, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 0x3, 0x2, 0x2, 0x2, 
       0x3f5, 0x403, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3fa, 0x5, 0x5a, 0x2e, 
       0x2, 0x3f7, 0x3f9, 0x5, 0xe8, 0x75, 0x2, 0x3f8, 0x3f7, 0x3, 0x2, 
       0x2, 0x2, 0x3f9, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3f8, 0x3, 0x2, 
       0x2, 0x2, 0x3fa, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fd, 0x3, 0x2, 
       0x2, 0x2, 0x3fc, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fe, 0x5, 0x94, 
       0x4b, 0x2, 0x3fe, 0x400, 0x5, 0x96, 0x4c, 0x2, 0x3ff, 0x401, 0x5, 
       0xa4, 0x53, 0x2, 0x400, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x400, 0x401, 
       0x3, 0x2, 0x2, 0x2, 0x401, 0x403, 0x3, 0x2, 0x2, 0x2, 0x402, 0x3f1, 
       0x3, 0x2, 0x2, 0x2, 0x402, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x403, 0x93, 
       0x3, 0x2, 0x2, 0x2, 0x404, 0x407, 0x5, 0x76, 0x3c, 0x2, 0x405, 0x407, 
       0x7, 0x32, 0x2, 0x2, 0x406, 0x404, 0x3, 0x2, 0x2, 0x2, 0x406, 0x405, 
       0x3, 0x2, 0x2, 0x2, 0x407, 0x95, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 
       0x7, 0x68, 0x2, 0x2, 0x409, 0x40b, 0x7, 0x3b, 0x2, 0x2, 0x40a, 0x40c, 
       0x5, 0x98, 0x4d, 0x2, 0x40b, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 
       0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40f, 
       0x7, 0x3c, 0x2, 0x2, 0x40e, 0x410, 0x5, 0x22, 0x12, 0x2, 0x40f, 0x40e, 
       0x3, 0x2, 0x2, 0x2, 0x40f, 0x410, 0x3, 0x2, 0x2, 0x2, 0x410, 0x97, 
       0x3, 0x2, 0x2, 0x2, 0x411, 0x418, 0x5, 0xa2, 0x52, 0x2, 0x412, 0x413, 
       0x5, 0x9a, 0x4e, 0x2, 0x413, 0x414, 0x7, 0x42, 0x2, 0x2, 0x414, 0x415, 
       0x5, 0xa0, 0x51, 0x2, 0x415, 0x418, 0x3, 0x2, 0x2, 0x2, 0x416, 0x418, 
       0x5, 0xa0, 0x51, 0x2, 0x417, 0x411, 0x3, 0x2, 0x2, 0x2, 0x417, 0x412, 
       0x3, 0x2, 0x2, 0x2, 0x417, 0x416, 0x3, 0x2, 0x2, 0x2, 0x418, 0x99, 
       0x3, 0x2, 0x2, 0x2, 0x419, 0x41e, 0x5, 0x9c, 0x4f, 0x2, 0x41a, 0x41b, 
       0x7, 0x42, 0x2, 0x2, 0x41b, 0x41d, 0x5, 0x9c, 0x4f, 0x2, 0x41c, 0x41a, 
       0x3, 0x2, 0x2, 0x2, 0x41d, 0x420, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41e, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x42a, 
       0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x421, 0x426, 
       0x5, 0xa2, 0x52, 0x2, 0x422, 0x423, 0x7, 0x42, 0x2, 0x2, 0x423, 0x425, 
       0x5, 0x9c, 0x4f, 0x2, 0x424, 0x422, 0x3, 0x2, 0x2, 0x2, 0x425, 0x428, 
       0x3, 0x2, 0x2, 0x2, 0x426, 0x424, 0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 
       0x3, 0x2, 0x2, 0x2, 0x427, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x428, 0x426, 
       0x3, 0x2, 0x2, 0x2, 0x429, 0x419, 0x3, 0x2, 0x2, 0x2, 0x429, 0x421, 
       0x3, 0x2, 0x2, 0x2, 0x42a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42d, 
       0x5, 0x9e, 0x50, 0x2, 0x42c, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x430, 
       0x3, 0x2, 0x2, 0x2, 0x42e, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42f, 
       0x3, 0x2, 0x2, 0x2, 0x42f, 0x431, 0x3, 0x2, 0x2, 0x2, 0x430, 0x42e, 
       0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 0x5, 0x76, 0x3c, 0x2, 0x432, 0x433, 
       0x5, 0x72, 0x3a, 0x2, 0x433, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x434, 0x437, 
       0x5, 0xe8, 0x75, 0x2, 0x435, 0x437, 0x7, 0x14, 0x2, 0x2, 0x436, 0x434, 
       0x3, 0x2, 0x2, 0x2, 0x436, 0x435, 0x3, 0x2, 0x2, 0x2, 0x437, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x438, 0x43a, 0x5, 0x9e, 0x50, 0x2, 0x439, 0x438, 
       0x3, 0x2, 0x2, 0x2, 0x43a, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x439, 
       0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43e, 
       0x3, 0x2, 0x2, 0x2, 0x43d, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x442, 
       0x5, 0x76, 0x3c, 0x2, 0x43f, 0x441, 0x5, 0xe8, 0x75, 0x2, 0x440, 
       0x43f, 0x3, 0x2, 0x2, 0x2, 0x441, 0x444, 0x3, 0x2, 0x2, 0x2, 0x442, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0x442, 0x443, 0x3, 0x2, 0x2, 0x2, 0x443, 
       0x445, 0x3, 0x2, 0x2, 0x2, 0x444, 0x442, 0x3, 0x2, 0x2, 0x2, 0x445, 
       0x446, 0x7, 0x6a, 0x2, 0x2, 0x446, 0x447, 0x5, 0x72, 0x3a, 0x2, 0x447, 
       0x44a, 0x3, 0x2, 0x2, 0x2, 0x448, 0x44a, 0x5, 0x9c, 0x4f, 0x2, 0x449, 
       0x43b, 0x3, 0x2, 0x2, 0x2, 0x449, 0x448, 0x3, 0x2, 0x2, 0x2, 0x44a, 
       0xa1, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44d, 0x5, 0xe8, 0x75, 0x2, 0x44c, 
       0x44b, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x450, 0x3, 0x2, 0x2, 0x2, 0x44e, 
       0x44c, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x44f, 
       0x451, 0x3, 0x2, 0x2, 0x2, 0x450, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x451, 
       0x452, 0x5, 0x76, 0x3c, 0x2, 0x452, 0x453, 0x7, 0x68, 0x2, 0x2, 0x453, 
       0x454, 0x7, 0x43, 0x2, 0x2, 0x454, 0x455, 0x3, 0x2, 0x2, 0x2, 0x455, 
       0x456, 0x7, 0x2d, 0x2, 0x2, 0x456, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x457, 
       0x458, 0x7, 0x2f, 0x2, 0x2, 0x458, 0x459, 0x5, 0xa6, 0x54, 0x2, 0x459, 
       0xa5, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x45f, 0x5, 0xa8, 0x55, 0x2, 0x45b, 
       0x45c, 0x7, 0x42, 0x2, 0x2, 0x45c, 0x45e, 0x5, 0xa8, 0x55, 0x2, 0x45d, 
       0x45b, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x461, 0x3, 0x2, 0x2, 0x2, 0x45f, 
       0x45d, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x460, 0x3, 0x2, 0x2, 0x2, 0x460, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0x461, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x462, 
       0x465, 0x5, 0x12, 0xa, 0x2, 0x463, 0x465, 0x5, 0x1e, 0x10, 0x2, 0x464, 
       0x462, 0x3, 0x2, 0x2, 0x2, 0x464, 0x463, 0x3, 0x2, 0x2, 0x2, 0x465, 
       0xa9, 0x3, 0x2, 0x2, 0x2, 0x466, 0x469, 0x5, 0xfe, 0x80, 0x2, 0x467, 
       0x469, 0x7, 0x41, 0x2, 0x2, 0x468, 0x466, 0x3, 0x2, 0x2, 0x2, 0x468, 
       0x467, 0x3, 0x2, 0x2, 0x2, 0x469, 0xab, 0x3, 0x2, 0x2, 0x2, 0x46a, 
       0x46b, 0x5, 0xfe, 0x80, 0x2, 0x46b, 0xad, 0x3, 0x2, 0x2, 0x2, 0x46c, 
       0x46d, 0x7, 0x28, 0x2, 0x2, 0x46d, 0x46e, 0x5, 0xfe, 0x80, 0x2, 0x46e, 
       0xaf, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x471, 0x5, 0xb2, 0x5a, 0x2, 0x470, 
       0x46f, 0x3, 0x2, 0x2, 0x2, 0x471, 0x474, 0x3, 0x2, 0x2, 0x2, 0x472, 
       0x470, 0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x3, 0x2, 0x2, 0x2, 0x473, 
       0x475, 0x3, 0x2, 0x2, 0x2, 0x474, 0x472, 0x3, 0x2, 0x2, 0x2, 0x475, 
       0x477, 0x5, 0xb4, 0x5b, 0x2, 0x476, 0x478, 0x5, 0xa4, 0x53, 0x2, 
       0x477, 0x476, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 0x3, 0x2, 0x2, 0x2, 
       0x478, 0x479, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47a, 0x5, 0xb8, 0x5d, 
       0x2, 0x47a, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x480, 0x5, 0xe8, 0x75, 
       0x2, 0x47c, 0x480, 0x7, 0x25, 0x2, 0x2, 0x47d, 0x480, 0x7, 0x24, 
       0x2, 0x2, 0x47e, 0x480, 0x7, 0x23, 0x2, 0x2, 0x47f, 0x47b, 0x3, 0x2, 
       0x2, 0x2, 0x47f, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x47d, 0x3, 0x2, 
       0x2, 0x2, 0x47f, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x480, 0xb3, 0x3, 0x2, 
       0x2, 0x2, 0x481, 0x483, 0x5, 0x5a, 0x2e, 0x2, 0x482, 0x481, 0x3, 
       0x2, 0x2, 0x2, 0x482, 0x483, 0x3, 0x2, 0x2, 0x2, 0x483, 0x484, 0x3, 
       0x2, 0x2, 0x2, 0x484, 0x485, 0x5, 0xb6, 0x5c, 0x2, 0x485, 0x487, 
       0x7, 0x3b, 0x2, 0x2, 0x486, 0x488, 0x5, 0x98, 0x4d, 0x2, 0x487, 0x486, 
       0x3, 0x2, 0x2, 0x2, 0x487, 0x488, 0x3, 0x2, 0x2, 0x2, 0x488, 0x489, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0x7, 0x3c, 0x2, 0x2, 0x48a, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x48b, 0x48c, 0x7, 0x68, 0x2, 0x2, 0x48c, 0xb7, 
       0x3, 0x2, 0x2, 0x2, 0x48d, 0x48f, 0x7, 0x3d, 0x2, 0x2, 0x48e, 0x490, 
       0x5, 0xba, 0x5e, 0x2, 0x48f, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x490, 
       0x3, 0x2, 0x2, 0x2, 0x490, 0x492, 0x3, 0x2, 0x2, 0x2, 0x491, 0x493, 
       0x5, 0x100, 0x81, 0x2, 0x492, 0x491, 0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 
       0x3, 0x2, 0x2, 0x2, 0x493, 0x494, 0x3, 0x2, 0x2, 0x2, 0x494, 0x495, 
       0x7, 0x3e, 0x2, 0x2, 0x495, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x496, 0x498, 
       0x5, 0x2c, 0x17, 0x2, 0x497, 0x496, 0x3, 0x2, 0x2, 0x2, 0x497, 0x498, 
       0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 
       0x7, 0x2d, 0x2, 0x2, 0x49a, 0x49c, 0x7, 0x3b, 0x2, 0x2, 0x49b, 0x49d, 
       0x5, 0x190, 0xc9, 0x2, 0x49c, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49d, 
       0x3, 0x2, 0x2, 0x2, 0x49d, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 
       0x7, 0x3c, 0x2, 0x2, 0x49f, 0x4c5, 0x7, 0x41, 0x2, 0x2, 0x4a0, 0x4a2, 
       0x5, 0x2c, 0x17, 0x2, 0x4a1, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4a2, 
       0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a4, 
       0x7, 0x2a, 0x2, 0x2, 0x4a4, 0x4a6, 0x7, 0x3b, 0x2, 0x2, 0x4a5, 0x4a7, 
       0x5, 0x190, 0xc9, 0x2, 0x4a6, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 
       0x3, 0x2, 0x2, 0x2, 0x4a7, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 
       0x7, 0x3c, 0x2, 0x2, 0x4a9, 0x4c5, 0x7, 0x41, 0x2, 0x2, 0x4aa, 0x4ab, 
       0x5, 0x3a, 0x1e, 0x2, 0x4ab, 0x4ad, 0x7, 0x43, 0x2, 0x2, 0x4ac, 0x4ae, 
       0x5, 0x2c, 0x17, 0x2, 0x4ad, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4ae, 
       0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b0, 
       0x7, 0x2a, 0x2, 0x2, 0x4b0, 0x4b2, 0x7, 0x3b, 0x2, 0x2, 0x4b1, 0x4b3, 
       0x5, 0x190, 0xc9, 0x2, 0x4b2, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b3, 
       0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b5, 
       0x7, 0x3c, 0x2, 0x2, 0x4b5, 0x4b6, 0x7, 0x41, 0x2, 0x2, 0x4b6, 0x4c5, 
       0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x5, 0x162, 0xb2, 0x2, 0x4b8, 0x4ba, 
       0x7, 0x43, 0x2, 0x2, 0x4b9, 0x4bb, 0x5, 0x2c, 0x17, 0x2, 0x4ba, 0x4b9, 
       0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4bc, 
       0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4bd, 0x7, 0x2a, 0x2, 0x2, 0x4bd, 0x4bf, 
       0x7, 0x3b, 0x2, 0x2, 0x4be, 0x4c0, 0x5, 0x190, 0xc9, 0x2, 0x4bf, 
       0x4be, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c0, 
       0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c2, 0x7, 0x3c, 0x2, 0x2, 0x4c2, 
       0x4c3, 0x7, 0x41, 0x2, 0x2, 0x4c3, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c4, 
       0x497, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4c4, 
       0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4c5, 
       0xbb, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c8, 0x5, 0x58, 0x2d, 0x2, 0x4c7, 
       0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4c9, 
       0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4ca, 
       0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4cc, 
       0x4cd, 0x7, 0x12, 0x2, 0x2, 0x4cd, 0x4cf, 0x7, 0x68, 0x2, 0x2, 0x4ce, 
       0x4d0, 0x5, 0x60, 0x31, 0x2, 0x4cf, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
       0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4d1, 
       0x4d2, 0x5, 0xbe, 0x60, 0x2, 0x4d2, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x4d3, 
       0x4d5, 0x7, 0x3d, 0x2, 0x2, 0x4d4, 0x4d6, 0x5, 0xc0, 0x61, 0x2, 0x4d5, 
       0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d6, 
       0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4d9, 0x7, 0x42, 0x2, 0x2, 0x4d8, 
       0x4da, 0x5, 0xc6, 0x64, 0x2, 0x4d9, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4d9, 
       0x4da, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4db, 
       0x4dc, 0x7, 0x3e, 0x2, 0x2, 0x4dc, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4e2, 0x5, 0xc2, 0x62, 0x2, 0x4de, 0x4df, 0x7, 0x42, 0x2, 0x2, 0x4df, 
       0x4e1, 0x5, 0xc2, 0x62, 0x2, 0x4e0, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x4e1, 
       0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e2, 
       0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x4e4, 
       0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4e7, 0x5, 0xc4, 0x63, 0x2, 0x4e6, 
       0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4e8, 
       0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x4e9, 
       0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4eb, 
       0x4f1, 0x7, 0x68, 0x2, 0x2, 0x4ec, 0x4ee, 0x7, 0x3b, 0x2, 0x2, 0x4ed, 
       0x4ef, 0x5, 0x190, 0xc9, 0x2, 0x4ee, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x4ee, 
       0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f0, 
       0x4f2, 0x7, 0x3c, 0x2, 0x2, 0x4f1, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4f1, 
       0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f3, 
       0x4f5, 0x5, 0x64, 0x33, 0x2, 0x4f4, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f4, 
       0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x4f6, 
       0x4f7, 0x5, 0xe8, 0x75, 0x2, 0x4f7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x4f8, 
       0x4fc, 0x7, 0x41, 0x2, 0x2, 0x4f9, 0x4fb, 0x5, 0x66, 0x34, 0x2, 0x4fa, 
       0x4f9, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x4fc, 
       0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4fd, 
       0xc7, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4ff, 
       0x502, 0x5, 0xca, 0x66, 0x2, 0x500, 0x502, 0x5, 0xdc, 0x6f, 0x2, 
       0x501, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x501, 0x500, 0x3, 0x2, 0x2, 0x2, 
       0x502, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x503, 0x505, 0x5, 0xcc, 0x67, 0x2, 
       0x504, 0x503, 0x3, 0x2, 0x2, 0x2, 0x505, 0x508, 0x3, 0x2, 0x2, 0x2, 
       0x506, 0x504, 0x3, 0x2, 0x2, 0x2, 0x506, 0x507, 0x3, 0x2, 0x2, 0x2, 
       0x507, 0x509, 0x3, 0x2, 0x2, 0x2, 0x508, 0x506, 0x3, 0x2, 0x2, 0x2, 
       0x509, 0x50a, 0x7, 0x1e, 0x2, 0x2, 0x50a, 0x50c, 0x7, 0x68, 0x2, 
       0x2, 0x50b, 0x50d, 0x5, 0x5a, 0x2e, 0x2, 0x50c, 0x50b, 0x3, 0x2, 
       0x2, 0x2, 0x50c, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50f, 0x3, 0x2, 
       0x2, 0x2, 0x50e, 0x510, 0x5, 0xce, 0x68, 0x2, 0x50f, 0x50e, 0x3, 
       0x2, 0x2, 0x2, 0x50f, 0x510, 0x3, 0x2, 0x2, 0x2, 0x510, 0x511, 0x3, 
       0x2, 0x2, 0x2, 0x511, 0x512, 0x5, 0xd0, 0x69, 0x2, 0x512, 0xcb, 0x3, 
       0x2, 0x2, 0x2, 0x513, 0x51b, 0x5, 0xe8, 0x75, 0x2, 0x514, 0x51b, 
       0x7, 0x25, 0x2, 0x2, 0x515, 0x51b, 0x7, 0x24, 0x2, 0x2, 0x516, 0x51b, 
       0x7, 0x23, 0x2, 0x2, 0x517, 0x51b, 0x7, 0x3, 0x2, 0x2, 0x518, 0x51b, 
       0x7, 0x28, 0x2, 0x2, 0x519, 0x51b, 0x7, 0x29, 0x2, 0x2, 0x51a, 0x513, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x514, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x515, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x516, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x517, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x518, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x519, 
       0x3, 0x2, 0x2, 0x2, 0x51b, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51d, 
       0x7, 0x13, 0x2, 0x2, 0x51d, 0x51e, 0x5, 0x62, 0x32, 0x2, 0x51e, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x51f, 0x523, 0x7, 0x3d, 0x2, 0x2, 0x520, 0x522, 
       0x5, 0xd2, 0x6a, 0x2, 0x521, 0x520, 0x3, 0x2, 0x2, 0x2, 0x522, 0x525, 
       0x3, 0x2, 0x2, 0x2, 0x523, 0x521, 0x3, 0x2, 0x2, 0x2, 0x523, 0x524, 
       0x3, 0x2, 0x2, 0x2, 0x524, 0x526, 0x3, 0x2, 0x2, 0x2, 0x525, 0x523, 
       0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x7, 0x3e, 0x2, 0x2, 0x527, 0xd1, 
       0x3, 0x2, 0x2, 0x2, 0x528, 0x52e, 0x5, 0xd4, 0x6b, 0x2, 0x529, 0x52e, 
       0x5, 0xd8, 0x6d, 0x2, 0x52a, 0x52e, 0x5, 0x54, 0x2b, 0x2, 0x52b, 
       0x52e, 0x5, 0xc8, 0x65, 0x2, 0x52c, 0x52e, 0x7, 0x41, 0x2, 0x2, 0x52d, 
       0x528, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x529, 0x3, 0x2, 0x2, 0x2, 0x52d, 
       0x52a, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52b, 0x3, 0x2, 0x2, 0x2, 0x52d, 
       0x52c, 0x3, 0x2, 0x2, 0x2, 0x52e, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x52f, 
       0x531, 0x5, 0xd6, 0x6c, 0x2, 0x530, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x531, 
       0x534, 0x3, 0x2, 0x2, 0x2, 0x532, 0x530, 0x3, 0x2, 0x2, 0x2, 0x532, 
       0x533, 0x3, 0x2, 0x2, 0x2, 0x533, 0x535, 0x3, 0x2, 0x2, 0x2, 0x534, 
       0x532, 0x3, 0x2, 0x2, 0x2, 0x535, 0x536, 0x5, 0x76, 0x3c, 0x2, 0x536, 
       0x537, 0x5, 0x6e, 0x38, 0x2, 0x537, 0x538, 0x7, 0x41, 0x2, 0x2, 0x538, 
       0xd5, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53e, 0x5, 0xe8, 0x75, 0x2, 0x53a, 
       0x53e, 0x7, 0x25, 0x2, 0x2, 0x53b, 0x53e, 0x7, 0x28, 0x2, 0x2, 0x53c, 
       0x53e, 0x7, 0x14, 0x2, 0x2, 0x53d, 0x539, 0x3, 0x2, 0x2, 0x2, 0x53d, 
       0x53a, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x53d, 
       0x53c, 0x3, 0x2, 0x2, 0x2, 0x53e, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x53f, 
       0x541, 0x5, 0xda, 0x6e, 0x2, 0x540, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x541, 
       0x544, 0x3, 0x2, 0x2, 0x2, 0x542, 0x540, 0x3, 0x2, 0x2, 0x2, 0x542, 
       0x543, 0x3, 0x2, 0x2, 0x2, 0x543, 0x545, 0x3, 0x2, 0x2, 0x2, 0x544, 
       0x542, 0x3, 0x2, 0x2, 0x2, 0x545, 0x546, 0x5, 0x92, 0x4a, 0x2, 0x546, 
       0x547, 0x5, 0xaa, 0x56, 0x2, 0x547, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x548, 
       0x54f, 0x5, 0xe8, 0x75, 0x2, 0x549, 0x54f, 0x7, 0x25, 0x2, 0x2, 0x54a, 
       0x54f, 0x7, 0x3, 0x2, 0x2, 0x54b, 0x54f, 0x7, 0xe, 0x2, 0x2, 0x54c, 
       0x54f, 0x7, 0x28, 0x2, 0x2, 0x54d, 0x54f, 0x7, 0x29, 0x2, 0x2, 0x54e, 
       0x548, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x549, 0x3, 0x2, 0x2, 0x2, 0x54e, 
       0x54a, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54e, 
       0x54c, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54d, 0x3, 0x2, 0x2, 0x2, 0x54f, 
       0xdb, 0x3, 0x2, 0x2, 0x2, 0x550, 0x552, 0x5, 0xcc, 0x67, 0x2, 0x551, 
       0x550, 0x3, 0x2, 0x2, 0x2, 0x552, 0x555, 0x3, 0x2, 0x2, 0x2, 0x553, 
       0x551, 0x3, 0x2, 0x2, 0x2, 0x553, 0x554, 0x3, 0x2, 0x2, 0x2, 0x554, 
       0x556, 0x3, 0x2, 0x2, 0x2, 0x555, 0x553, 0x3, 0x2, 0x2, 0x2, 0x556, 
       0x557, 0x7, 0x69, 0x2, 0x2, 0x557, 0x558, 0x7, 0x1e, 0x2, 0x2, 0x558, 
       0x559, 0x7, 0x68, 0x2, 0x2, 0x559, 0x55a, 0x5, 0xde, 0x70, 0x2, 0x55a, 
       0xdd, 0x3, 0x2, 0x2, 0x2, 0x55b, 0x55f, 0x7, 0x3d, 0x2, 0x2, 0x55c, 
       0x55e, 0x5, 0xe0, 0x71, 0x2, 0x55d, 0x55c, 0x3, 0x2, 0x2, 0x2, 0x55e, 
       0x561, 0x3, 0x2, 0x2, 0x2, 0x55f, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x55f, 
       0x560, 0x3, 0x2, 0x2, 0x2, 0x560, 0x562, 0x3, 0x2, 0x2, 0x2, 0x561, 
       0x55f, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x7, 0x3e, 0x2, 0x2, 0x563, 
       0xdf, 0x3, 0x2, 0x2, 0x2, 0x564, 0x56a, 0x5, 0xe2, 0x72, 0x2, 0x565, 
       0x56a, 0x5, 0xd4, 0x6b, 0x2, 0x566, 0x56a, 0x5, 0x54, 0x2b, 0x2, 
       0x567, 0x56a, 0x5, 0xc8, 0x65, 0x2, 0x568, 0x56a, 0x7, 0x41, 0x2, 
       0x2, 0x569, 0x564, 0x3, 0x2, 0x2, 0x2, 0x569, 0x565, 0x3, 0x2, 0x2, 
       0x2, 0x569, 0x566, 0x3, 0x2, 0x2, 0x2, 0x569, 0x567, 0x3, 0x2, 0x2, 
       0x2, 0x569, 0x568, 0x3, 0x2, 0x2, 0x2, 0x56a, 0xe1, 0x3, 0x2, 0x2, 
       0x2, 0x56b, 0x56d, 0x5, 0xe4, 0x73, 0x2, 0x56c, 0x56b, 0x3, 0x2, 
       0x2, 0x2, 0x56d, 0x570, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x56c, 0x3, 0x2, 
       0x2, 0x2, 0x56e, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x571, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x571, 0x572, 0x5, 0x76, 
       0x3c, 0x2, 0x572, 0x573, 0x7, 0x68, 0x2, 0x2, 0x573, 0x574, 0x7, 
       0x3b, 0x2, 0x2, 0x574, 0x576, 0x7, 0x3c, 0x2, 0x2, 0x575, 0x577, 
       0x5, 0x22, 0x12, 0x2, 0x576, 0x575, 0x3, 0x2, 0x2, 0x2, 0x576, 0x577, 
       0x3, 0x2, 0x2, 0x2, 0x577, 0x579, 0x3, 0x2, 0x2, 0x2, 0x578, 0x57a, 
       0x5, 0xe6, 0x74, 0x2, 0x579, 0x578, 0x3, 0x2, 0x2, 0x2, 0x579, 0x57a, 
       0x3, 0x2, 0x2, 0x2, 0x57a, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57c, 
       0x7, 0x41, 0x2, 0x2, 0x57c, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x581, 
       0x5, 0xe8, 0x75, 0x2, 0x57e, 0x581, 0x7, 0x25, 0x2, 0x2, 0x57f, 0x581, 
       0x7, 0x3, 0x2, 0x2, 0x580, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x580, 0x57e, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x581, 0xe5, 
       0x3, 0x2, 0x2, 0x2, 0x582, 0x583, 0x7, 0xe, 0x2, 0x2, 0x583, 0x584, 
       0x5, 0xf0, 0x79, 0x2, 0x584, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x585, 0x589, 
       0x5, 0xea, 0x76, 0x2, 0x586, 0x589, 0x5, 0xf6, 0x7c, 0x2, 0x587, 
       0x589, 0x5, 0xf8, 0x7d, 0x2, 0x588, 0x585, 0x3, 0x2, 0x2, 0x2, 0x588, 
       0x586, 0x3, 0x2, 0x2, 0x2, 0x588, 0x587, 0x3, 0x2, 0x2, 0x2, 0x589, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x58b, 0x7, 0x69, 0x2, 0x2, 0x58b, 
       0x58c, 0x5, 0x36, 0x1c, 0x2, 0x58c, 0x58e, 0x7, 0x3b, 0x2, 0x2, 0x58d, 
       0x58f, 0x5, 0xec, 0x77, 0x2, 0x58e, 0x58d, 0x3, 0x2, 0x2, 0x2, 0x58e, 
       0x58f, 0x3, 0x2, 0x2, 0x2, 0x58f, 0x590, 0x3, 0x2, 0x2, 0x2, 0x590, 
       0x591, 0x7, 0x3c, 0x2, 0x2, 0x591, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x592, 
       0x597, 0x5, 0xee, 0x78, 0x2, 0x593, 0x594, 0x7, 0x42, 0x2, 0x2, 0x594, 
       0x596, 0x5, 0xee, 0x78, 0x2, 0x595, 0x593, 0x3, 0x2, 0x2, 0x2, 0x596, 
       0x599, 0x3, 0x2, 0x2, 0x2, 0x597, 0x595, 0x3, 0x2, 0x2, 0x2, 0x597, 
       0x598, 0x3, 0x2, 0x2, 0x2, 0x598, 0xed, 0x3, 0x2, 0x2, 0x2, 0x599, 
       0x597, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59b, 0x7, 0x68, 0x2, 0x2, 0x59b, 
       0x59c, 0x7, 0x44, 0x2, 0x2, 0x59c, 0x59d, 0x5, 0xf0, 0x79, 0x2, 0x59d, 
       0xef, 0x3, 0x2, 0x2, 0x2, 0x59e, 0x5a2, 0x5, 0x1ae, 0xd8, 0x2, 0x59f, 
       0x5a2, 0x5, 0xf2, 0x7a, 0x2, 0x5a0, 0x5a2, 0x5, 0xe8, 0x75, 0x2, 
       0x5a1, 0x59e, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0x59f, 0x3, 0x2, 0x2, 0x2, 
       0x5a1, 0x5a0, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0xf1, 0x3, 0x2, 0x2, 0x2, 
       0x5a3, 0x5a5, 0x7, 0x3d, 0x2, 0x2, 0x5a4, 0x5a6, 0x5, 0xf4, 0x7b, 
       0x2, 0x5a5, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a6, 0x3, 0x2, 0x2, 
       0x2, 0x5a6, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a9, 0x7, 0x43, 0x2, 
       0x2, 0x5a8, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x5a9, 0x3, 0x2, 0x2, 
       0x2, 0x5a9, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ab, 0x7, 0x3e, 0x2, 
       0x2, 0x5ab, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5b1, 0x5, 0xf0, 0x79, 
       0x2, 0x5ad, 0x5ae, 0x7, 0x42, 0x2, 0x2, 0x5ae, 0x5b0, 0x5, 0xf0, 
       0x79, 0x2, 0x5af, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5b3, 0x3, 0x2, 
       0x2, 0x2, 0x5b1, 0x5af, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b2, 0x3, 0x2, 
       0x2, 0x2, 0x5b2, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5b1, 0x3, 0x2, 
       0x2, 0x2, 0x5b4, 0x5b5, 0x7, 0x69, 0x2, 0x2, 0x5b5, 0x5b6, 0x5, 0x36, 
       0x1c, 0x2, 0x5b6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x69, 
       0x2, 0x2, 0x5b8, 0x5b9, 0x5, 0x36, 0x1c, 0x2, 0x5b9, 0x5ba, 0x7, 
       0x3b, 0x2, 0x2, 0x5ba, 0x5bb, 0x5, 0xf0, 0x79, 0x2, 0x5bb, 0x5bc, 
       0x7, 0x3c, 0x2, 0x2, 0x5bc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5bf, 
       0x7, 0x3d, 0x2, 0x2, 0x5be, 0x5c0, 0x5, 0xfc, 0x7f, 0x2, 0x5bf, 0x5be, 
       0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c2, 
       0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c3, 0x7, 0x42, 0x2, 0x2, 0x5c2, 0x5c1, 
       0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c4, 
       0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c5, 0x7, 0x3e, 0x2, 0x2, 0x5c5, 0xfb, 
       0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5cb, 0x5, 0x74, 0x3b, 0x2, 0x5c7, 0x5c8, 
       0x7, 0x42, 0x2, 0x2, 0x5c8, 0x5ca, 0x5, 0x74, 0x3b, 0x2, 0x5c9, 0x5c7, 
       0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5c9, 
       0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0xfd, 
       0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5d0, 
       0x7, 0x3d, 0x2, 0x2, 0x5cf, 0x5d1, 0x5, 0x100, 0x81, 0x2, 0x5d0, 
       0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d1, 
       0x5d2, 0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d3, 0x7, 0x3e, 0x2, 0x2, 0x5d3, 
       0xff, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d8, 0x5, 0x102, 0x82, 0x2, 0x5d5, 
       0x5d7, 0x5, 0x102, 0x82, 0x2, 0x5d6, 0x5d5, 0x3, 0x2, 0x2, 0x2, 0x5d7, 
       0x5da, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d8, 
       0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x101, 0x3, 0x2, 0x2, 0x2, 0x5da, 
       0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x5df, 0x5, 0x104, 0x83, 0x2, 0x5dc, 
       0x5df, 0x5, 0x54, 0x2b, 0x2, 0x5dd, 0x5df, 0x5, 0x108, 0x85, 0x2, 
       0x5de, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x5de, 0x5dc, 0x3, 0x2, 0x2, 0x2, 
       0x5de, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x103, 0x3, 0x2, 0x2, 0x2, 
       0x5e0, 0x5e1, 0x5, 0x106, 0x84, 0x2, 0x5e1, 0x5e2, 0x7, 0x41, 0x2, 
       0x2, 0x5e2, 0x105, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5e5, 0x5, 0x9e, 0x50, 
       0x2, 0x5e4, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e8, 0x3, 0x2, 0x2, 
       0x2, 0x5e6, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e7, 0x3, 0x2, 0x2, 
       0x2, 0x5e7, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5e6, 0x3, 0x2, 0x2, 
       0x2, 0x5e9, 0x5ea, 0x5, 0x76, 0x3c, 0x2, 0x5ea, 0x5eb, 0x5, 0x6e, 
       0x38, 0x2, 0x5eb, 0x107, 0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5f3, 0x5, 0x10c, 
       0x87, 0x2, 0x5ed, 0x5f3, 0x5, 0x110, 0x89, 0x2, 0x5ee, 0x5f3, 0x5, 
       0x118, 0x8d, 0x2, 0x5ef, 0x5f3, 0x5, 0x11a, 0x8e, 0x2, 0x5f0, 0x5f3, 
       0x5, 0x12c, 0x97, 0x2, 0x5f1, 0x5f3, 0x5, 0x132, 0x9a, 0x2, 0x5f2, 
       0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5f2, 
       0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0x5f2, 
       0x5f0, 0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f3, 
       0x109, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5fa, 0x5, 0x10c, 0x87, 0x2, 0x5f5, 
       0x5fa, 0x5, 0x112, 0x8a, 0x2, 0x5f6, 0x5fa, 0x5, 0x11c, 0x8f, 0x2, 
       0x5f7, 0x5fa, 0x5, 0x12e, 0x98, 0x2, 0x5f8, 0x5fa, 0x5, 0x134, 0x9b, 
       0x2, 0x5f9, 0x5f4, 0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5f5, 0x3, 0x2, 0x2, 
       0x2, 0x5f9, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5f7, 0x3, 0x2, 0x2, 
       0x2, 0x5f9, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x10b, 0x3, 0x2, 0x2, 
       0x2, 0x5fb, 0x608, 0x5, 0xfe, 0x80, 0x2, 0x5fc, 0x608, 0x5, 0x10e, 
       0x88, 0x2, 0x5fd, 0x608, 0x5, 0x114, 0x8b, 0x2, 0x5fe, 0x608, 0x5, 
       0x11e, 0x90, 0x2, 0x5ff, 0x608, 0x5, 0x120, 0x91, 0x2, 0x600, 0x608, 
       0x5, 0x130, 0x99, 0x2, 0x601, 0x608, 0x5, 0x144, 0xa3, 0x2, 0x602, 
       0x608, 0x5, 0x146, 0xa4, 0x2, 0x603, 0x608, 0x5, 0x148, 0xa5, 0x2, 
       0x604, 0x608, 0x5, 0x14c, 0xa7, 0x2, 0x605, 0x608, 0x5, 0x14a, 0xa6, 
       0x2, 0x606, 0x608, 0x5, 0x14e, 0xa8, 0x2, 0x607, 0x5fb, 0x3, 0x2, 
       0x2, 0x2, 0x607, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0x607, 0x5fd, 0x3, 0x2, 
       0x2, 0x2, 0x607, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0x607, 0x5ff, 0x3, 0x2, 
       0x2, 0x2, 0x607, 0x600, 0x3, 0x2, 0x2, 0x2, 0x607, 0x601, 0x3, 0x2, 
       0x2, 0x2, 0x607, 0x602, 0x3, 0x2, 0x2, 0x2, 0x607, 0x603, 0x3, 0x2, 
       0x2, 0x2, 0x607, 0x604, 0x3, 0x2, 0x2, 0x2, 0x607, 0x605, 0x3, 0x2, 
       0x2, 0x2, 0x607, 0x606, 0x3, 0x2, 0x2, 0x2, 0x608, 0x10d, 0x3, 0x2, 
       0x2, 0x2, 0x609, 0x60a, 0x7, 0x41, 0x2, 0x2, 0x60a, 0x10f, 0x3, 0x2, 
       0x2, 0x2, 0x60b, 0x60c, 0x7, 0x68, 0x2, 0x2, 0x60c, 0x60d, 0x7, 0x4a, 
       0x2, 0x2, 0x60d, 0x60e, 0x5, 0x108, 0x85, 0x2, 0x60e, 0x111, 0x3, 
       0x2, 0x2, 0x2, 0x60f, 0x610, 0x7, 0x68, 0x2, 0x2, 0x610, 0x611, 0x7, 
       0x4a, 0x2, 0x2, 0x611, 0x612, 0x5, 0x10a, 0x86, 0x2, 0x612, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x613, 0x614, 0x5, 0x116, 0x8c, 0x2, 0x614, 0x615, 
       0x7, 0x41, 0x2, 0x2, 0x615, 0x115, 0x3, 0x2, 0x2, 0x2, 0x616, 0x61e, 
       0x5, 0x1aa, 0xd6, 0x2, 0x617, 0x61e, 0x5, 0x1c6, 0xe4, 0x2, 0x618, 
       0x61e, 0x5, 0x1c8, 0xe5, 0x2, 0x619, 0x61e, 0x5, 0x1ce, 0xe8, 0x2, 
       0x61a, 0x61e, 0x5, 0x1d2, 0xea, 0x2, 0x61b, 0x61e, 0x5, 0x18a, 0xc6, 
       0x2, 0x61c, 0x61e, 0x5, 0x176, 0xbc, 0x2, 0x61d, 0x616, 0x3, 0x2, 
       0x2, 0x2, 0x61d, 0x617, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x618, 0x3, 0x2, 
       0x2, 0x2, 0x61d, 0x619, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x61a, 0x3, 0x2, 
       0x2, 0x2, 0x61d, 0x61b, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x61c, 0x3, 0x2, 
       0x2, 0x2, 0x61e, 0x117, 0x3, 0x2, 0x2, 0x2, 0x61f, 0x620, 0x7, 0x18, 
       0x2, 0x2, 0x620, 0x621, 0x7, 0x3b, 0x2, 0x2, 0x621, 0x622, 0x5, 0x19e, 
       0xd0, 0x2, 0x622, 0x623, 0x7, 0x3c, 0x2, 0x2, 0x623, 0x624, 0x5, 
       0x108, 0x85, 0x2, 0x624, 0x119, 0x3, 0x2, 0x2, 0x2, 0x625, 0x626, 
       0x7, 0x18, 0x2, 0x2, 0x626, 0x627, 0x7, 0x3b, 0x2, 0x2, 0x627, 0x628, 
       0x5, 0x19e, 0xd0, 0x2, 0x628, 0x629, 0x7, 0x3c, 0x2, 0x2, 0x629, 
       0x62a, 0x5, 0x10a, 0x86, 0x2, 0x62a, 0x62b, 0x7, 0x11, 0x2, 0x2, 
       0x62b, 0x62c, 0x5, 0x108, 0x85, 0x2, 0x62c, 0x11b, 0x3, 0x2, 0x2, 
       0x2, 0x62d, 0x62e, 0x7, 0x18, 0x2, 0x2, 0x62e, 0x62f, 0x7, 0x3b, 
       0x2, 0x2, 0x62f, 0x630, 0x5, 0x19e, 0xd0, 0x2, 0x630, 0x631, 0x7, 
       0x3c, 0x2, 0x2, 0x631, 0x632, 0x5, 0x10a, 0x86, 0x2, 0x632, 0x633, 
       0x7, 0x11, 0x2, 0x2, 0x633, 0x634, 0x5, 0x10a, 0x86, 0x2, 0x634, 
       0x11d, 0x3, 0x2, 0x2, 0x2, 0x635, 0x636, 0x7, 0x4, 0x2, 0x2, 0x636, 
       0x637, 0x5, 0x19e, 0xd0, 0x2, 0x637, 0x638, 0x7, 0x41, 0x2, 0x2, 
       0x638, 0x640, 0x3, 0x2, 0x2, 0x2, 0x639, 0x63a, 0x7, 0x4, 0x2, 0x2, 
       0x63a, 0x63b, 0x5, 0x19e, 0xd0, 0x2, 0x63b, 0x63c, 0x7, 0x4a, 0x2, 
       0x2, 0x63c, 0x63d, 0x5, 0x19e, 0xd0, 0x2, 0x63d, 0x63e, 0x7, 0x41, 
       0x2, 0x2, 0x63e, 0x640, 0x3, 0x2, 0x2, 0x2, 0x63f, 0x635, 0x3, 0x2, 
       0x2, 0x2, 0x63f, 0x639, 0x3, 0x2, 0x2, 0x2, 0x640, 0x11f, 0x3, 0x2, 
       0x2, 0x2, 0x641, 0x642, 0x7, 0x2b, 0x2, 0x2, 0x642, 0x643, 0x7, 0x3b, 
       0x2, 0x2, 0x643, 0x644, 0x5, 0x19e, 0xd0, 0x2, 0x644, 0x645, 0x7, 
       0x3c, 0x2, 0x2, 0x645, 0x646, 0x5, 0x122, 0x92, 0x2, 0x646, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x647, 0x64b, 0x7, 0x3d, 0x2, 0x2, 0x648, 0x64a, 
       0x5, 0x124, 0x93, 0x2, 0x649, 0x648, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64d, 
       0x3, 0x2, 0x2, 0x2, 0x64b, 0x649, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x64c, 
       0x3, 0x2, 0x2, 0x2, 0x64c, 0x651, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x64b, 
       0x3, 0x2, 0x2, 0x2, 0x64e, 0x650, 0x5, 0x128, 0x95, 0x2, 0x64f, 0x64e, 
       0x3, 0x2, 0x2, 0x2, 0x650, 0x653, 0x3, 0x2, 0x2, 0x2, 0x651, 0x64f, 
       0x3, 0x2, 0x2, 0x2, 0x651, 0x652, 0x3, 0x2, 0x2, 0x2, 0x652, 0x654, 
       0x3, 0x2, 0x2, 0x2, 0x653, 0x651, 0x3, 0x2, 0x2, 0x2, 0x654, 0x655, 
       0x7, 0x3e, 0x2, 0x2, 0x655, 0x123, 0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 
       0x5, 0x126, 0x94, 0x2, 0x657, 0x658, 0x5, 0x100, 0x81, 0x2, 0x658, 
       0x125, 0x3, 0x2, 0x2, 0x2, 0x659, 0x65d, 0x5, 0x128, 0x95, 0x2, 0x65a, 
       0x65c, 0x5, 0x128, 0x95, 0x2, 0x65b, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x65c, 
       0x65f, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65b, 0x3, 0x2, 0x2, 0x2, 0x65d, 
       0x65e, 0x3, 0x2, 0x2, 0x2, 0x65e, 0x127, 0x3, 0x2, 0x2, 0x2, 0x65f, 
       0x65d, 0x3, 0x2, 0x2, 0x2, 0x660, 0x661, 0x7, 0x8, 0x2, 0x2, 0x661, 
       0x662, 0x5, 0x1d8, 0xed, 0x2, 0x662, 0x663, 0x7, 0x4a, 0x2, 0x2, 
       0x663, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x664, 0x665, 0x7, 0x8, 0x2, 0x2, 
       0x665, 0x666, 0x5, 0x12a, 0x96, 0x2, 0x666, 0x667, 0x7, 0x4a, 0x2, 
       0x2, 0x667, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x668, 0x669, 0x7, 0xe, 0x2, 
       0x2, 0x669, 0x66b, 0x7, 0x4a, 0x2, 0x2, 0x66a, 0x660, 0x3, 0x2, 0x2, 
       0x2, 0x66a, 0x664, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x668, 0x3, 0x2, 0x2, 
       0x2, 0x66b, 0x129, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x66d, 0x7, 0x68, 0x2, 
       0x2, 0x66d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x66f, 0x7, 0x34, 0x2, 
       0x2, 0x66f, 0x670, 0x7, 0x3b, 0x2, 0x2, 0x670, 0x671, 0x5, 0x19e, 
       0xd0, 0x2, 0x671, 0x672, 0x7, 0x3c, 0x2, 0x2, 0x672, 0x673, 0x5, 
       0x108, 0x85, 0x2, 0x673, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x674, 0x675, 
       0x7, 0x34, 0x2, 0x2, 0x675, 0x676, 0x7, 0x3b, 0x2, 0x2, 0x676, 0x677, 
       0x5, 0x19e, 0xd0, 0x2, 0x677, 0x678, 0x7, 0x3c, 0x2, 0x2, 0x678, 
       0x679, 0x5, 0x10a, 0x86, 0x2, 0x679, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x67a, 
       0x67b, 0x7, 0xf, 0x2, 0x2, 0x67b, 0x67c, 0x5, 0x108, 0x85, 0x2, 0x67c, 
       0x67d, 0x7, 0x34, 0x2, 0x2, 0x67d, 0x67e, 0x7, 0x3b, 0x2, 0x2, 0x67e, 
       0x67f, 0x5, 0x19e, 0xd0, 0x2, 0x67f, 0x680, 0x7, 0x3c, 0x2, 0x2, 
       0x680, 0x681, 0x7, 0x41, 0x2, 0x2, 0x681, 0x131, 0x3, 0x2, 0x2, 0x2, 
       0x682, 0x685, 0x5, 0x136, 0x9c, 0x2, 0x683, 0x685, 0x5, 0x140, 0xa1, 
       0x2, 0x684, 0x682, 0x3, 0x2, 0x2, 0x2, 0x684, 0x683, 0x3, 0x2, 0x2, 
       0x2, 0x685, 0x133, 0x3, 0x2, 0x2, 0x2, 0x686, 0x689, 0x5, 0x138, 
       0x9d, 0x2, 0x687, 0x689, 0x5, 0x142, 0xa2, 0x2, 0x688, 0x686, 0x3, 
       0x2, 0x2, 0x2, 0x688, 0x687, 0x3, 0x2, 0x2, 0x2, 0x689, 0x135, 0x3, 
       0x2, 0x2, 0x2, 0x68a, 0x68b, 0x7, 0x17, 0x2, 0x2, 0x68b, 0x68d, 0x7, 
       0x3b, 0x2, 0x2, 0x68c, 0x68e, 0x5, 0x13a, 0x9e, 0x2, 0x68d, 0x68c, 
       0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x68e, 0x68f, 
       0x3, 0x2, 0x2, 0x2, 0x68f, 0x691, 0x7, 0x41, 0x2, 0x2, 0x690, 0x692, 
       0x5, 0x19e, 0xd0, 0x2, 0x691, 0x690, 0x3, 0x2, 0x2, 0x2, 0x691, 0x692, 
       0x3, 0x2, 0x2, 0x2, 0x692, 0x693, 0x3, 0x2, 0x2, 0x2, 0x693, 0x695, 
       0x7, 0x41, 0x2, 0x2, 0x694, 0x696, 0x5, 0x13c, 0x9f, 0x2, 0x695, 
       0x694, 0x3, 0x2, 0x2, 0x2, 0x695, 0x696, 0x3, 0x2, 0x2, 0x2, 0x696, 
       0x697, 0x3, 0x2, 0x2, 0x2, 0x697, 0x698, 0x7, 0x3c, 0x2, 0x2, 0x698, 
       0x699, 0x5, 0x108, 0x85, 0x2, 0x699, 0x137, 0x3, 0x2, 0x2, 0x2, 0x69a, 
       0x69b, 0x7, 0x17, 0x2, 0x2, 0x69b, 0x69d, 0x7, 0x3b, 0x2, 0x2, 0x69c, 
       0x69e, 0x5, 0x13a, 0x9e, 0x2, 0x69d, 0x69c, 0x3, 0x2, 0x2, 0x2, 0x69d, 
       0x69e, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x69f, 
       0x6a1, 0x7, 0x41, 0x2, 0x2, 0x6a0, 0x6a2, 0x5, 0x19e, 0xd0, 0x2, 
       0x6a1, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a1, 0x6a2, 0x3, 0x2, 0x2, 0x2, 
       0x6a2, 0x6a3, 0x3, 0x2, 0x2, 0x2, 0x6a3, 0x6a5, 0x7, 0x41, 0x2, 0x2, 
       0x6a4, 0x6a6, 0x5, 0x13c, 0x9f, 0x2, 0x6a5, 0x6a4, 0x3, 0x2, 0x2, 
       0x2, 0x6a5, 0x6a6, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a7, 0x3, 0x2, 0x2, 
       0x2, 0x6a7, 0x6a8, 0x7, 0x3c, 0x2, 0x2, 0x6a8, 0x6a9, 0x5, 0x10a, 
       0x86, 0x2, 0x6a9, 0x139, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ad, 0x5, 0x13e, 
       0xa0, 0x2, 0x6ab, 0x6ad, 0x5, 0x106, 0x84, 0x2, 0x6ac, 0x6aa, 0x3, 
       0x2, 0x2, 0x2, 0x6ac, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x13b, 0x3, 
       0x2, 0x2, 0x2, 0x6ae, 0x6af, 0x5, 0x13e, 0xa0, 0x2, 0x6af, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x6b0, 0x6b5, 0x5, 0x116, 0x8c, 0x2, 0x6b1, 0x6b2, 
       0x7, 0x42, 0x2, 0x2, 0x6b2, 0x6b4, 0x5, 0x116, 0x8c, 0x2, 0x6b3, 
       0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x6b5, 
       0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b5, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b6, 
       0x13f, 0x3, 0x2, 0x2, 0x2, 0x6b7, 0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6b8, 
       0x6b9, 0x7, 0x17, 0x2, 0x2, 0x6b9, 0x6bd, 0x7, 0x3b, 0x2, 0x2, 0x6ba, 
       0x6bc, 0x5, 0x9e, 0x50, 0x2, 0x6bb, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6bc, 
       0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6bb, 0x3, 0x2, 0x2, 0x2, 0x6bd, 
       0x6be, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6bf, 
       0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c1, 0x5, 0x76, 0x3c, 0x2, 0x6c1, 
       0x6c2, 0x5, 0x72, 0x3a, 0x2, 0x6c2, 0x6c3, 0x7, 0x4a, 0x2, 0x2, 0x6c3, 
       0x6c4, 0x5, 0x19e, 0xd0, 0x2, 0x6c4, 0x6c5, 0x7, 0x3c, 0x2, 0x2, 
       0x6c5, 0x6c6, 0x5, 0x108, 0x85, 0x2, 0x6c6, 0x141, 0x3, 0x2, 0x2, 
       0x2, 0x6c7, 0x6c8, 0x7, 0x17, 0x2, 0x2, 0x6c8, 0x6cc, 0x7, 0x3b, 
       0x2, 0x2, 0x6c9, 0x6cb, 0x5, 0x9e, 0x50, 0x2, 0x6ca, 0x6c9, 0x3, 
       0x2, 0x2, 0x2, 0x6cb, 0x6ce, 0x3, 0x2, 0x2, 0x2, 0x6cc, 0x6ca, 0x3, 
       0x2, 0x2, 0x2, 0x6cc, 0x6cd, 0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6cf, 0x3, 
       0x2, 0x2, 0x2, 0x6ce, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6d0, 0x5, 
       0x76, 0x3c, 0x2, 0x6d0, 0x6d1, 0x5, 0x72, 0x3a, 0x2, 0x6d1, 0x6d2, 
       0x7, 0x4a, 0x2, 0x2, 0x6d2, 0x6d3, 0x5, 0x19e, 0xd0, 0x2, 0x6d3, 
       0x6d4, 0x7, 0x3c, 0x2, 0x2, 0x6d4, 0x6d5, 0x5, 0x10a, 0x86, 0x2, 
       0x6d5, 0x143, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d8, 0x7, 0x6, 0x2, 0x2, 
       0x6d7, 0x6d9, 0x7, 0x68, 0x2, 0x2, 0x6d8, 0x6d7, 0x3, 0x2, 0x2, 0x2, 
       0x6d8, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6d9, 0x6da, 0x3, 0x2, 0x2, 0x2, 
       0x6da, 0x6db, 0x7, 0x41, 0x2, 0x2, 0x6db, 0x145, 0x3, 0x2, 0x2, 0x2, 
       0x6dc, 0x6de, 0x7, 0xd, 0x2, 0x2, 0x6dd, 0x6df, 0x7, 0x68, 0x2, 0x2, 
       0x6de, 0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6de, 0x6df, 0x3, 0x2, 0x2, 0x2, 
       0x6df, 0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6e1, 0x7, 0x41, 0x2, 0x2, 
       0x6e1, 0x147, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6e4, 0x7, 0x26, 0x2, 0x2, 
       0x6e3, 0x6e5, 0x5, 0x19e, 0xd0, 0x2, 0x6e4, 0x6e3, 0x3, 0x2, 0x2, 
       0x2, 0x6e4, 0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6e5, 0x6e6, 0x3, 0x2, 0x2, 
       0x2, 0x6e6, 0x6e7, 0x7, 0x41, 0x2, 0x2, 0x6e7, 0x149, 0x3, 0x2, 0x2, 
       0x2, 0x6e8, 0x6ea, 0x7, 0x2e, 0x2, 0x2, 0x6e9, 0x6eb, 0x5, 0x19e, 
       0xd0, 0x2, 0x6ea, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6eb, 0x3, 0x2, 
       0x2, 0x2, 0x6eb, 0x6ec, 0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6ed, 0x7, 0x41, 
       0x2, 0x2, 0x6ed, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6ef, 0x7, 0x2c, 
       0x2, 0x2, 0x6ef, 0x6f0, 0x7, 0x3b, 0x2, 0x2, 0x6f0, 0x6f1, 0x5, 0x19e, 
       0xd0, 0x2, 0x6f1, 0x6f2, 0x7, 0x3c, 0x2, 0x2, 0x6f2, 0x6f3, 0x5, 
       0xfe, 0x80, 0x2, 0x6f3, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f5, 
       0x7, 0x31, 0x2, 0x2, 0x6f5, 0x6f6, 0x5, 0xfe, 0x80, 0x2, 0x6f6, 0x6f7, 
       0x5, 0x150, 0xa9, 0x2, 0x6f7, 0x701, 0x3, 0x2, 0x2, 0x2, 0x6f8, 0x6f9, 
       0x7, 0x31, 0x2, 0x2, 0x6f9, 0x6fb, 0x5, 0xfe, 0x80, 0x2, 0x6fa, 0x6fc, 
       0x5, 0x150, 0xa9, 0x2, 0x6fb, 0x6fa, 0x3, 0x2, 0x2, 0x2, 0x6fb, 0x6fc, 
       0x3, 0x2, 0x2, 0x2, 0x6fc, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6fe, 
       0x5, 0x158, 0xad, 0x2, 0x6fe, 0x701, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x701, 
       0x5, 0x15a, 0xae, 0x2, 0x700, 0x6f4, 0x3, 0x2, 0x2, 0x2, 0x700, 0x6f8, 
       0x3, 0x2, 0x2, 0x2, 0x700, 0x6ff, 0x3, 0x2, 0x2, 0x2, 0x701, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x702, 0x706, 0x5, 0x152, 0xaa, 0x2, 0x703, 0x705, 
       0x5, 0x152, 0xaa, 0x2, 0x704, 0x703, 0x3, 0x2, 0x2, 0x2, 0x705, 0x708, 
       0x3, 0x2, 0x2, 0x2, 0x706, 0x704, 0x3, 0x2, 0x2, 0x2, 0x706, 0x707, 
       0x3, 0x2, 0x2, 0x2, 0x707, 0x151, 0x3, 0x2, 0x2, 0x2, 0x708, 0x706, 
       0x3, 0x2, 0x2, 0x2, 0x709, 0x70a, 0x7, 0x9, 0x2, 0x2, 0x70a, 0x70b, 
       0x7, 0x3b, 0x2, 0x2, 0x70b, 0x70c, 0x5, 0x154, 0xab, 0x2, 0x70c, 
       0x70d, 0x7, 0x3c, 0x2, 0x2, 0x70d, 0x70e, 0x5, 0xfe, 0x80, 0x2, 0x70e, 
       0x153, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x711, 0x5, 0x9e, 0x50, 0x2, 0x710, 
       0x70f, 0x3, 0x2, 0x2, 0x2, 0x711, 0x714, 0x3, 0x2, 0x2, 0x2, 0x712, 
       0x710, 0x3, 0x2, 0x2, 0x2, 0x712, 0x713, 0x3, 0x2, 0x2, 0x2, 0x713, 
       0x715, 0x3, 0x2, 0x2, 0x2, 0x714, 0x712, 0x3, 0x2, 0x2, 0x2, 0x715, 
       0x716, 0x5, 0x156, 0xac, 0x2, 0x716, 0x717, 0x5, 0x72, 0x3a, 0x2, 
       0x717, 0x155, 0x3, 0x2, 0x2, 0x2, 0x718, 0x71d, 0x5, 0x7e, 0x40, 
       0x2, 0x719, 0x71a, 0x7, 0x58, 0x2, 0x2, 0x71a, 0x71c, 0x5, 0x12, 
       0xa, 0x2, 0x71b, 0x719, 0x3, 0x2, 0x2, 0x2, 0x71c, 0x71f, 0x3, 0x2, 
       0x2, 0x2, 0x71d, 0x71b, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 0x3, 0x2, 
       0x2, 0x2, 0x71e, 0x157, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x71d, 0x3, 0x2, 
       0x2, 0x2, 0x720, 0x721, 0x7, 0x15, 0x2, 0x2, 0x721, 0x722, 0x5, 0xfe, 
       0x80, 0x2, 0x722, 0x159, 0x3, 0x2, 0x2, 0x2, 0x723, 0x724, 0x7, 0x31, 
       0x2, 0x2, 0x724, 0x725, 0x5, 0x15c, 0xaf, 0x2, 0x725, 0x727, 0x5, 
       0xfe, 0x80, 0x2, 0x726, 0x728, 0x5, 0x150, 0xa9, 0x2, 0x727, 0x726, 
       0x3, 0x2, 0x2, 0x2, 0x727, 0x728, 0x3, 0x2, 0x2, 0x2, 0x728, 0x72a, 
       0x3, 0x2, 0x2, 0x2, 0x729, 0x72b, 0x5, 0x158, 0xad, 0x2, 0x72a, 0x729, 
       0x3, 0x2, 0x2, 0x2, 0x72a, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x72c, 0x72d, 0x7, 0x3b, 0x2, 0x2, 0x72d, 0x72f, 
       0x5, 0x15e, 0xb0, 0x2, 0x72e, 0x730, 0x7, 0x4a, 0x2, 0x2, 0x72f, 
       0x72e, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x730, 0x3, 0x2, 0x2, 0x2, 0x730, 
       0x731, 0x3, 0x2, 0x2, 0x2, 0x731, 0x732, 0x7, 0x3c, 0x2, 0x2, 0x732, 
       0x15d, 0x3, 0x2, 0x2, 0x2, 0x733, 0x738, 0x5, 0x160, 0xb1, 0x2, 0x734, 
       0x735, 0x7, 0x41, 0x2, 0x2, 0x735, 0x737, 0x5, 0x160, 0xb1, 0x2, 
       0x736, 0x734, 0x3, 0x2, 0x2, 0x2, 0x737, 0x73a, 0x3, 0x2, 0x2, 0x2, 
       0x738, 0x736, 0x3, 0x2, 0x2, 0x2, 0x738, 0x739, 0x3, 0x2, 0x2, 0x2, 
       0x739, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x73a, 0x738, 0x3, 0x2, 0x2, 0x2, 
       0x73b, 0x73d, 0x5, 0x9e, 0x50, 0x2, 0x73c, 0x73b, 0x3, 0x2, 0x2, 
       0x2, 0x73d, 0x740, 0x3, 0x2, 0x2, 0x2, 0x73e, 0x73c, 0x3, 0x2, 0x2, 
       0x2, 0x73e, 0x73f, 0x3, 0x2, 0x2, 0x2, 0x73f, 0x741, 0x3, 0x2, 0x2, 
       0x2, 0x740, 0x73e, 0x3, 0x2, 0x2, 0x2, 0x741, 0x742, 0x5, 0x76, 0x3c, 
       0x2, 0x742, 0x743, 0x5, 0x72, 0x3a, 0x2, 0x743, 0x744, 0x7, 0x44, 
       0x2, 0x2, 0x744, 0x745, 0x5, 0x19e, 0xd0, 0x2, 0x745, 0x161, 0x3, 
       0x2, 0x2, 0x2, 0x746, 0x749, 0x5, 0x170, 0xb9, 0x2, 0x747, 0x749, 
       0x5, 0x198, 0xcd, 0x2, 0x748, 0x746, 0x3, 0x2, 0x2, 0x2, 0x748, 0x747, 
       0x3, 0x2, 0x2, 0x2, 0x749, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x74c, 
       0x5, 0x16a, 0xb6, 0x2, 0x74b, 0x74a, 0x3, 0x2, 0x2, 0x2, 0x74c, 0x74f, 
       0x3, 0x2, 0x2, 0x2, 0x74d, 0x74b, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x74e, 
       0x3, 0x2, 0x2, 0x2, 0x74e, 0x163, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x74d, 
       0x3, 0x2, 0x2, 0x2, 0x750, 0x76e, 0x5, 0x2, 0x2, 0x2, 0x751, 0x756, 
       0x5, 0x36, 0x1c, 0x2, 0x752, 0x753, 0x7, 0x3f, 0x2, 0x2, 0x753, 0x755, 
       0x7, 0x40, 0x2, 0x2, 0x754, 0x752, 0x3, 0x2, 0x2, 0x2, 0x755, 0x758, 
       0x3, 0x2, 0x2, 0x2, 0x756, 0x754, 0x3, 0x2, 0x2, 0x2, 0x756, 0x757, 
       0x3, 0x2, 0x2, 0x2, 0x757, 0x759, 0x3, 0x2, 0x2, 0x2, 0x758, 0x756, 
       0x3, 0x2, 0x2, 0x2, 0x759, 0x75a, 0x7, 0x43, 0x2, 0x2, 0x75a, 0x75b, 
       0x7, 0xb, 0x2, 0x2, 0x75b, 0x76e, 0x3, 0x2, 0x2, 0x2, 0x75c, 0x75d, 
       0x7, 0x32, 0x2, 0x2, 0x75d, 0x75e, 0x7, 0x43, 0x2, 0x2, 0x75e, 0x76e, 
       0x7, 0xb, 0x2, 0x2, 0x75f, 0x76e, 0x7, 0x2d, 0x2, 0x2, 0x760, 0x761, 
       0x5, 0x36, 0x1c, 0x2, 0x761, 0x762, 0x7, 0x43, 0x2, 0x2, 0x762, 0x763, 
       0x7, 0x2d, 0x2, 0x2, 0x763, 0x76e, 0x3, 0x2, 0x2, 0x2, 0x764, 0x765, 
       0x7, 0x3b, 0x2, 0x2, 0x765, 0x766, 0x5, 0x19e, 0xd0, 0x2, 0x766, 
       0x767, 0x7, 0x3c, 0x2, 0x2, 0x767, 0x76e, 0x3, 0x2, 0x2, 0x2, 0x768, 
       0x76e, 0x5, 0x176, 0xbc, 0x2, 0x769, 0x76e, 0x5, 0x17e, 0xc0, 0x2, 
       0x76a, 0x76e, 0x5, 0x184, 0xc3, 0x2, 0x76b, 0x76e, 0x5, 0x18a, 0xc6, 
       0x2, 0x76c, 0x76e, 0x5, 0x192, 0xca, 0x2, 0x76d, 0x750, 0x3, 0x2, 
       0x2, 0x2, 0x76d, 0x751, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x75c, 0x3, 0x2, 
       0x2, 0x2, 0x76d, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x760, 0x3, 0x2, 
       0x2, 0x2, 0x76d, 0x764, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x768, 0x3, 0x2, 
       0x2, 0x2, 0x76d, 0x769, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x76a, 0x3, 0x2, 
       0x2, 0x2, 0x76d, 0x76b, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x76c, 0x3, 0x2, 
       0x2, 0x2, 0x76e, 0x165, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x770, 0x3, 0x2, 
       0x2, 0x2, 0x770, 0x167, 0x3, 0x2, 0x2, 0x2, 0x771, 0x78e, 0x5, 0x2, 
       0x2, 0x2, 0x772, 0x777, 0x5, 0x36, 0x1c, 0x2, 0x773, 0x774, 0x7, 
       0x3f, 0x2, 0x2, 0x774, 0x776, 0x7, 0x40, 0x2, 0x2, 0x775, 0x773, 
       0x3, 0x2, 0x2, 0x2, 0x776, 0x779, 0x3, 0x2, 0x2, 0x2, 0x777, 0x775, 
       0x3, 0x2, 0x2, 0x2, 0x777, 0x778, 0x3, 0x2, 0x2, 0x2, 0x778, 0x77a, 
       0x3, 0x2, 0x2, 0x2, 0x779, 0x777, 0x3, 0x2, 0x2, 0x2, 0x77a, 0x77b, 
       0x7, 0x43, 0x2, 0x2, 0x77b, 0x77c, 0x7, 0xb, 0x2, 0x2, 0x77c, 0x78e, 
       0x3, 0x2, 0x2, 0x2, 0x77d, 0x77e, 0x7, 0x32, 0x2, 0x2, 0x77e, 0x77f, 
       0x7, 0x43, 0x2, 0x2, 0x77f, 0x78e, 0x7, 0xb, 0x2, 0x2, 0x780, 0x78e, 
       0x7, 0x2d, 0x2, 0x2, 0x781, 0x782, 0x5, 0x36, 0x1c, 0x2, 0x782, 0x783, 
       0x7, 0x43, 0x2, 0x2, 0x783, 0x784, 0x7, 0x2d, 0x2, 0x2, 0x784, 0x78e, 
       0x3, 0x2, 0x2, 0x2, 0x785, 0x786, 0x7, 0x3b, 0x2, 0x2, 0x786, 0x787, 
       0x5, 0x19e, 0xd0, 0x2, 0x787, 0x788, 0x7, 0x3c, 0x2, 0x2, 0x788, 
       0x78e, 0x3, 0x2, 0x2, 0x2, 0x789, 0x78e, 0x5, 0x176, 0xbc, 0x2, 0x78a, 
       0x78e, 0x5, 0x17e, 0xc0, 0x2, 0x78b, 0x78e, 0x5, 0x18a, 0xc6, 0x2, 
       0x78c, 0x78e, 0x5, 0x192, 0xca, 0x2, 0x78d, 0x771, 0x3, 0x2, 0x2, 
       0x2, 0x78d, 0x772, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x77d, 0x3, 0x2, 0x2, 
       0x2, 0x78d, 0x780, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x781, 0x3, 0x2, 0x2, 
       0x2, 0x78d, 0x785, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x789, 0x3, 0x2, 0x2, 
       0x2, 0x78d, 0x78a, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x78b, 0x3, 0x2, 0x2, 
       0x2, 0x78d, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x78e, 0x169, 0x3, 0x2, 0x2, 
       0x2, 0x78f, 0x795, 0x5, 0x178, 0xbd, 0x2, 0x790, 0x795, 0x5, 0x180, 
       0xc1, 0x2, 0x791, 0x795, 0x5, 0x186, 0xc4, 0x2, 0x792, 0x795, 0x5, 
       0x18c, 0xc7, 0x2, 0x793, 0x795, 0x5, 0x194, 0xcb, 0x2, 0x794, 0x78f, 
       0x3, 0x2, 0x2, 0x2, 0x794, 0x790, 0x3, 0x2, 0x2, 0x2, 0x794, 0x791, 
       0x3, 0x2, 0x2, 0x2, 0x794, 0x792, 0x3, 0x2, 0x2, 0x2, 0x794, 0x793, 
       0x3, 0x2, 0x2, 0x2, 0x795, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x796, 0x797, 
       0x3, 0x2, 0x2, 0x2, 0x797, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x798, 0x79d, 
       0x5, 0x178, 0xbd, 0x2, 0x799, 0x79d, 0x5, 0x180, 0xc1, 0x2, 0x79a, 
       0x79d, 0x5, 0x18c, 0xc7, 0x2, 0x79b, 0x79d, 0x5, 0x194, 0xcb, 0x2, 
       0x79c, 0x798, 0x3, 0x2, 0x2, 0x2, 0x79c, 0x799, 0x3, 0x2, 0x2, 0x2, 
       0x79c, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x79c, 0x79b, 0x3, 0x2, 0x2, 0x2, 
       0x79d, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x7c7, 0x5, 0x2, 0x2, 0x2, 
       0x79f, 0x7a4, 0x5, 0x36, 0x1c, 0x2, 0x7a0, 0x7a1, 0x7, 0x3f, 0x2, 
       0x2, 0x7a1, 0x7a3, 0x7, 0x40, 0x2, 0x2, 0x7a2, 0x7a0, 0x3, 0x2, 0x2, 
       0x2, 0x7a3, 0x7a6, 0x3, 0x2, 0x2, 0x2, 0x7a4, 0x7a2, 0x3, 0x2, 0x2, 
       0x2, 0x7a4, 0x7a5, 0x3, 0x2, 0x2, 0x2, 0x7a5, 0x7a7, 0x3, 0x2, 0x2, 
       0x2, 0x7a6, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7a8, 0x7, 0x43, 0x2, 
       0x2, 0x7a8, 0x7a9, 0x7, 0xb, 0x2, 0x2, 0x7a9, 0x7c7, 0x3, 0x2, 0x2, 
       0x2, 0x7aa, 0x7af, 0x5, 0x78, 0x3d, 0x2, 0x7ab, 0x7ac, 0x7, 0x3f, 
       0x2, 0x2, 0x7ac, 0x7ae, 0x7, 0x40, 0x2, 0x2, 0x7ad, 0x7ab, 0x3, 0x2, 
       0x2, 0x2, 0x7ae, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7af, 0x7ad, 0x3, 0x2, 
       0x2, 0x2, 0x7af, 0x7b0, 0x3, 0x2, 0x2, 0x2, 0x7b0, 0x7b2, 0x3, 0x2, 
       0x2, 0x2, 0x7b1, 0x7af, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b3, 0x7, 0x43, 
       0x2, 0x2, 0x7b3, 0x7b4, 0x7, 0xb, 0x2, 0x2, 0x7b4, 0x7c7, 0x3, 0x2, 
       0x2, 0x2, 0x7b5, 0x7b6, 0x7, 0x32, 0x2, 0x2, 0x7b6, 0x7b7, 0x7, 0x43, 
       0x2, 0x2, 0x7b7, 0x7c7, 0x7, 0xb, 0x2, 0x2, 0x7b8, 0x7c7, 0x7, 0x2d, 
       0x2, 0x2, 0x7b9, 0x7ba, 0x5, 0x36, 0x1c, 0x2, 0x7ba, 0x7bb, 0x7, 
       0x43, 0x2, 0x2, 0x7bb, 0x7bc, 0x7, 0x2d, 0x2, 0x2, 0x7bc, 0x7c7, 
       0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7be, 0x7, 0x3b, 0x2, 0x2, 0x7be, 0x7bf, 
       0x5, 0x19e, 0xd0, 0x2, 0x7bf, 0x7c0, 0x7, 0x3c, 0x2, 0x2, 0x7c0, 
       0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7c7, 0x5, 0x17a, 0xbe, 0x2, 0x7c2, 
       0x7c7, 0x5, 0x182, 0xc2, 0x2, 0x7c3, 0x7c7, 0x5, 0x188, 0xc5, 0x2, 
       0x7c4, 0x7c7, 0x5, 0x18e, 0xc8, 0x2, 0x7c5, 0x7c7, 0x5, 0x196, 0xcc, 
       0x2, 0x7c6, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x79f, 0x3, 0x2, 0x2, 
       0x2, 0x7c6, 0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7b5, 0x3, 0x2, 0x2, 
       0x2, 0x7c6, 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7b9, 0x3, 0x2, 0x2, 
       0x2, 0x7c6, 0x7bd, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7c1, 0x3, 0x2, 0x2, 
       0x2, 0x7c6, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7c3, 0x3, 0x2, 0x2, 
       0x2, 0x7c6, 0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7c5, 0x3, 0x2, 0x2, 
       0x2, 0x7c7, 0x171, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7c9, 0x3, 0x2, 0x2, 
       0x2, 0x7c9, 0x173, 0x3, 0x2, 0x2, 0x2, 0x7ca, 0x7f2, 0x5, 0x2, 0x2, 
       0x2, 0x7cb, 0x7d0, 0x5, 0x36, 0x1c, 0x2, 0x7cc, 0x7cd, 0x7, 0x3f, 
       0x2, 0x2, 0x7cd, 0x7cf, 0x7, 0x40, 0x2, 0x2, 0x7ce, 0x7cc, 0x3, 0x2, 
       0x2, 0x2, 0x7cf, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7ce, 0x3, 0x2, 
       0x2, 0x2, 0x7d0, 0x7d1, 0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7d3, 0x3, 0x2, 
       0x2, 0x2, 0x7d2, 0x7d0, 0x3, 0x2, 0x2, 0x2, 0x7d3, 0x7d4, 0x7, 0x43, 
       0x2, 0x2, 0x7d4, 0x7d5, 0x7, 0xb, 0x2, 0x2, 0x7d5, 0x7f2, 0x3, 0x2, 
       0x2, 0x2, 0x7d6, 0x7db, 0x5, 0x78, 0x3d, 0x2, 0x7d7, 0x7d8, 0x7, 
       0x3f, 0x2, 0x2, 0x7d8, 0x7da, 0x7, 0x40, 0x2, 0x2, 0x7d9, 0x7d7, 
       0x3, 0x2, 0x2, 0x2, 0x7da, 0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x7d9, 
       0x3, 0x2, 0x2, 0x2, 0x7db, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7de, 
       0x3, 0x2, 0x2, 0x2, 0x7dd, 0x7db, 0x3, 0x2, 0x2, 0x2, 0x7de, 0x7df, 
       0x7, 0x43, 0x2, 0x2, 0x7df, 0x7e0, 0x7, 0xb, 0x2, 0x2, 0x7e0, 0x7f2, 
       0x3, 0x2, 0x2, 0x2, 0x7e1, 0x7e2, 0x7, 0x32, 0x2, 0x2, 0x7e2, 0x7e3, 
       0x7, 0x43, 0x2, 0x2, 0x7e3, 0x7f2, 0x7, 0xb, 0x2, 0x2, 0x7e4, 0x7f2, 
       0x7, 0x2d, 0x2, 0x2, 0x7e5, 0x7e6, 0x5, 0x36, 0x1c, 0x2, 0x7e6, 0x7e7, 
       0x7, 0x43, 0x2, 0x2, 0x7e7, 0x7e8, 0x7, 0x2d, 0x2, 0x2, 0x7e8, 0x7f2, 
       0x3, 0x2, 0x2, 0x2, 0x7e9, 0x7ea, 0x7, 0x3b, 0x2, 0x2, 0x7ea, 0x7eb, 
       0x5, 0x19e, 0xd0, 0x2, 0x7eb, 0x7ec, 0x7, 0x3c, 0x2, 0x2, 0x7ec, 
       0x7f2, 0x3, 0x2, 0x2, 0x2, 0x7ed, 0x7f2, 0x5, 0x17a, 0xbe, 0x2, 0x7ee, 
       0x7f2, 0x5, 0x182, 0xc2, 0x2, 0x7ef, 0x7f2, 0x5, 0x18e, 0xc8, 0x2, 
       0x7f0, 0x7f2, 0x5, 0x196, 0xcc, 0x2, 0x7f1, 0x7ca, 0x3, 0x2, 0x2, 
       0x2, 0x7f1, 0x7cb, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7d6, 0x3, 0x2, 0x2, 
       0x2, 0x7f1, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7e4, 0x3, 0x2, 0x2, 
       0x2, 0x7f1, 0x7e5, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7e9, 0x3, 0x2, 0x2, 
       0x2, 0x7f1, 0x7ed, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7ee, 0x3, 0x2, 0x2, 
       0x2, 0x7f1, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7f0, 0x3, 0x2, 0x2, 
       0x2, 0x7f2, 0x175, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f5, 0x7, 0x21, 0x2, 
       0x2, 0x7f4, 0x7f6, 0x5, 0x2c, 0x17, 0x2, 0x7f5, 0x7f4, 0x3, 0x2, 
       0x2, 0x2, 0x7f5, 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7fa, 0x3, 0x2, 
       0x2, 0x2, 0x7f7, 0x7f9, 0x5, 0xe8, 0x75, 0x2, 0x7f8, 0x7f7, 0x3, 
       0x2, 0x2, 0x2, 0x7f9, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7fa, 0x7f8, 0x3, 
       0x2, 0x2, 0x2, 0x7fa, 0x7fb, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fd, 0x3, 
       0x2, 0x2, 0x2, 0x7fc, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x808, 0x7, 
       0x68, 0x2, 0x2, 0x7fe, 0x802, 0x7, 0x43, 0x2, 0x2, 0x7ff, 0x801, 
       0x5, 0xe8, 0x75, 0x2, 0x800, 0x7ff, 0x3, 0x2, 0x2, 0x2, 0x801, 0x804, 
       0x3, 0x2, 0x2, 0x2, 0x802, 0x800, 0x3, 0x2, 0x2, 0x2, 0x802, 0x803, 
       0x3, 0x2, 0x2, 0x2, 0x803, 0x805, 0x3, 0x2, 0x2, 0x2, 0x804, 0x802, 
       0x3, 0x2, 0x2, 0x2, 0x805, 0x807, 0x7, 0x68, 0x2, 0x2, 0x806, 0x7fe, 
       0x3, 0x2, 0x2, 0x2, 0x807, 0x80a, 0x3, 0x2, 0x2, 0x2, 0x808, 0x806, 
       0x3, 0x2, 0x2, 0x2, 0x808, 0x809, 0x3, 0x2, 0x2, 0x2, 0x809, 0x80c, 
       0x3, 0x2, 0x2, 0x2, 0x80a, 0x808, 0x3, 0x2, 0x2, 0x2, 0x80b, 0x80d, 
       0x5, 0x17c, 0xbf, 0x2, 0x80c, 0x80b, 0x3, 0x2, 0x2, 0x2, 0x80c, 0x80d, 
       0x3, 0x2, 0x2, 0x2, 0x80d, 0x80e, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x810, 
       0x7, 0x3b, 0x2, 0x2, 0x80f, 0x811, 0x5, 0x190, 0xc9, 0x2, 0x810, 
       0x80f, 0x3, 0x2, 0x2, 0x2, 0x810, 0x811, 0x3, 0x2, 0x2, 0x2, 0x811, 
       0x812, 0x3, 0x2, 0x2, 0x2, 0x812, 0x814, 0x7, 0x3c, 0x2, 0x2, 0x813, 
       0x815, 0x5, 0x64, 0x33, 0x2, 0x814, 0x813, 0x3, 0x2, 0x2, 0x2, 0x814, 
       0x815, 0x3, 0x2, 0x2, 0x2, 0x815, 0x847, 0x3, 0x2, 0x2, 0x2, 0x816, 
       0x817, 0x5, 0x3a, 0x1e, 0x2, 0x817, 0x818, 0x7, 0x43, 0x2, 0x2, 0x818, 
       0x81a, 0x7, 0x21, 0x2, 0x2, 0x819, 0x81b, 0x5, 0x2c, 0x17, 0x2, 0x81a, 
       0x819, 0x3, 0x2, 0x2, 0x2, 0x81a, 0x81b, 0x3, 0x2, 0x2, 0x2, 0x81b, 
       0x81f, 0x3, 0x2, 0x2, 0x2, 0x81c, 0x81e, 0x5, 0xe8, 0x75, 0x2, 0x81d, 
       0x81c, 0x3, 0x2, 0x2, 0x2, 0x81e, 0x821, 0x3, 0x2, 0x2, 0x2, 0x81f, 
       0x81d, 0x3, 0x2, 0x2, 0x2, 0x81f, 0x820, 0x3, 0x2, 0x2, 0x2, 0x820, 
       0x822, 0x3, 0x2, 0x2, 0x2, 0x821, 0x81f, 0x3, 0x2, 0x2, 0x2, 0x822, 
       0x824, 0x7, 0x68, 0x2, 0x2, 0x823, 0x825, 0x5, 0x17c, 0xbf, 0x2, 
       0x824, 0x823, 0x3, 0x2, 0x2, 0x2, 0x824, 0x825, 0x3, 0x2, 0x2, 0x2, 
       0x825, 0x826, 0x3, 0x2, 0x2, 0x2, 0x826, 0x828, 0x7, 0x3b, 0x2, 0x2, 
       0x827, 0x829, 0x5, 0x190, 0xc9, 0x2, 0x828, 0x827, 0x3, 0x2, 0x2, 
       0x2, 0x828, 0x829, 0x3, 0x2, 0x2, 0x2, 0x829, 0x82a, 0x3, 0x2, 0x2, 
       0x2, 0x82a, 0x82c, 0x7, 0x3c, 0x2, 0x2, 0x82b, 0x82d, 0x5, 0x64, 
       0x33, 0x2, 0x82c, 0x82b, 0x3, 0x2, 0x2, 0x2, 0x82c, 0x82d, 0x3, 0x2, 
       0x2, 0x2, 0x82d, 0x847, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x82f, 0x5, 0x162, 
       0xb2, 0x2, 0x82f, 0x830, 0x7, 0x43, 0x2, 0x2, 0x830, 0x832, 0x7, 
       0x21, 0x2, 0x2, 0x831, 0x833, 0x5, 0x2c, 0x17, 0x2, 0x832, 0x831, 
       0x3, 0x2, 0x2, 0x2, 0x832, 0x833, 0x3, 0x2, 0x2, 0x2, 0x833, 0x837, 
       0x3, 0x2, 0x2, 0x2, 0x834, 0x836, 0x5, 0xe8, 0x75, 0x2, 0x835, 0x834, 
       0x3, 0x2, 0x2, 0x2, 0x836, 0x839, 0x3, 0x2, 0x2, 0x2, 0x837, 0x835, 
       0x3, 0x2, 0x2, 0x2, 0x837, 0x838, 0x3, 0x2, 0x2, 0x2, 0x838, 0x83a, 
       0x3, 0x2, 0x2, 0x2, 0x839, 0x837, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x83c, 
       0x7, 0x68, 0x2, 0x2, 0x83b, 0x83d, 0x5, 0x17c, 0xbf, 0x2, 0x83c, 
       0x83b, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x83d, 0x3, 0x2, 0x2, 0x2, 0x83d, 
       0x83e, 0x3, 0x2, 0x2, 0x2, 0x83e, 0x840, 0x7, 0x3b, 0x2, 0x2, 0x83f, 
       0x841, 0x5, 0x190, 0xc9, 0x2, 0x840, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x840, 
       0x841, 0x3, 0x2, 0x2, 0x2, 0x841, 0x842, 0x3, 0x2, 0x2, 0x2, 0x842, 
       0x844, 0x7, 0x3c, 0x2, 0x2, 0x843, 0x845, 0x5, 0x64, 0x33, 0x2, 0x844, 
       0x843, 0x3, 0x2, 0x2, 0x2, 0x844, 0x845, 0x3, 0x2, 0x2, 0x2, 0x845, 
       0x847, 0x3, 0x2, 0x2, 0x2, 0x846, 0x7f3, 0x3, 0x2, 0x2, 0x2, 0x846, 
       0x816, 0x3, 0x2, 0x2, 0x2, 0x846, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x847, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x848, 0x849, 0x7, 0x43, 0x2, 0x2, 0x849, 
       0x84b, 0x7, 0x21, 0x2, 0x2, 0x84a, 0x84c, 0x5, 0x2c, 0x17, 0x2, 0x84b, 
       0x84a, 0x3, 0x2, 0x2, 0x2, 0x84b, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x84c, 
       0x850, 0x3, 0x2, 0x2, 0x2, 0x84d, 0x84f, 0x5, 0xe8, 0x75, 0x2, 0x84e, 
       0x84d, 0x3, 0x2, 0x2, 0x2, 0x84f, 0x852, 0x3, 0x2, 0x2, 0x2, 0x850, 
       0x84e, 0x3, 0x2, 0x2, 0x2, 0x850, 0x851, 0x3, 0x2, 0x2, 0x2, 0x851, 
       0x853, 0x3, 0x2, 0x2, 0x2, 0x852, 0x850, 0x3, 0x2, 0x2, 0x2, 0x853, 
       0x855, 0x7, 0x68, 0x2, 0x2, 0x854, 0x856, 0x5, 0x17c, 0xbf, 0x2, 
       0x855, 0x854, 0x3, 0x2, 0x2, 0x2, 0x855, 0x856, 0x3, 0x2, 0x2, 0x2, 
       0x856, 0x857, 0x3, 0x2, 0x2, 0x2, 0x857, 0x859, 0x7, 0x3b, 0x2, 0x2, 
       0x858, 0x85a, 0x5, 0x190, 0xc9, 0x2, 0x859, 0x858, 0x3, 0x2, 0x2, 
       0x2, 0x859, 0x85a, 0x3, 0x2, 0x2, 0x2, 0x85a, 0x85b, 0x3, 0x2, 0x2, 
       0x2, 0x85b, 0x85d, 0x7, 0x3c, 0x2, 0x2, 0x85c, 0x85e, 0x5, 0x64, 
       0x33, 0x2, 0x85d, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x85d, 0x85e, 0x3, 0x2, 
       0x2, 0x2, 0x85e, 0x179, 0x3, 0x2, 0x2, 0x2, 0x85f, 0x861, 0x7, 0x21, 
       0x2, 0x2, 0x860, 0x862, 0x5, 0x2c, 0x17, 0x2, 0x861, 0x860, 0x3, 
       0x2, 0x2, 0x2, 0x861, 0x862, 0x3, 0x2, 0x2, 0x2, 0x862, 0x866, 0x3, 
       0x2, 0x2, 0x2, 0x863, 0x865, 0x5, 0xe8, 0x75, 0x2, 0x864, 0x863, 
       0x3, 0x2, 0x2, 0x2, 0x865, 0x868, 0x3, 0x2, 0x2, 0x2, 0x866, 0x864, 
       0x3, 0x2, 0x2, 0x2, 0x866, 0x867, 0x3, 0x2, 0x2, 0x2, 0x867, 0x869, 
       0x3, 0x2, 0x2, 0x2, 0x868, 0x866, 0x3, 0x2, 0x2, 0x2, 0x869, 0x874, 
       0x7, 0x68, 0x2, 0x2, 0x86a, 0x86e, 0x7, 0x43, 0x2, 0x2, 0x86b, 0x86d, 
       0x5, 0xe8, 0x75, 0x2, 0x86c, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x86d, 0x870, 
       0x3, 0x2, 0x2, 0x2, 0x86e, 0x86c, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86f, 
       0x3, 0x2, 0x2, 0x2, 0x86f, 0x871, 0x3, 0x2, 0x2, 0x2, 0x870, 0x86e, 
       0x3, 0x2, 0x2, 0x2, 0x871, 0x873, 0x7, 0x68, 0x2, 0x2, 0x872, 0x86a, 
       0x3, 0x2, 0x2, 0x2, 0x873, 0x876, 0x3, 0x2, 0x2, 0x2, 0x874, 0x872, 
       0x3, 0x2, 0x2, 0x2, 0x874, 0x875, 0x3, 0x2, 0x2, 0x2, 0x875, 0x878, 
       0x3, 0x2, 0x2, 0x2, 0x876, 0x874, 0x3, 0x2, 0x2, 0x2, 0x877, 0x879, 
       0x5, 0x17c, 0xbf, 0x2, 0x878, 0x877, 0x3, 0x2, 0x2, 0x2, 0x878, 0x879, 
       0x3, 0x2, 0x2, 0x2, 0x879, 0x87a, 0x3, 0x2, 0x2, 0x2, 0x87a, 0x87c, 
       0x7, 0x3b, 0x2, 0x2, 0x87b, 0x87d, 0x5, 0x190, 0xc9, 0x2, 0x87c, 
       0x87b, 0x3, 0x2, 0x2, 0x2, 0x87c, 0x87d, 0x3, 0x2, 0x2, 0x2, 0x87d, 
       0x87e, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x880, 0x7, 0x3c, 0x2, 0x2, 0x87f, 
       0x881, 0x5, 0x64, 0x33, 0x2, 0x880, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x880, 
       0x881, 0x3, 0x2, 0x2, 0x2, 0x881, 0x89b, 0x3, 0x2, 0x2, 0x2, 0x882, 
       0x883, 0x5, 0x3a, 0x1e, 0x2, 0x883, 0x884, 0x7, 0x43, 0x2, 0x2, 0x884, 
       0x886, 0x7, 0x21, 0x2, 0x2, 0x885, 0x887, 0x5, 0x2c, 0x17, 0x2, 0x886, 
       0x885, 0x3, 0x2, 0x2, 0x2, 0x886, 0x887, 0x3, 0x2, 0x2, 0x2, 0x887, 
       0x88b, 0x3, 0x2, 0x2, 0x2, 0x888, 0x88a, 0x5, 0xe8, 0x75, 0x2, 0x889, 
       0x888, 0x3, 0x2, 0x2, 0x2, 0x88a, 0x88d, 0x3, 0x2, 0x2, 0x2, 0x88b, 
       0x889, 0x3, 0x2, 0x2, 0x2, 0x88b, 0x88c, 0x3, 0x2, 0x2, 0x2, 0x88c, 
       0x88e, 0x3, 0x2, 0x2, 0x2, 0x88d, 0x88b, 0x3, 0x2, 0x2, 0x2, 0x88e, 
       0x890, 0x7, 0x68, 0x2, 0x2, 0x88f, 0x891, 0x5, 0x17c, 0xbf, 0x2, 
       0x890, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x890, 0x891, 0x3, 0x2, 0x2, 0x2, 
       0x891, 0x892, 0x3, 0x2, 0x2, 0x2, 0x892, 0x894, 0x7, 0x3b, 0x2, 0x2, 
       0x893, 0x895, 0x5, 0x190, 0xc9, 0x2, 0x894, 0x893, 0x3, 0x2, 0x2, 
       0x2, 0x894, 0x895, 0x3, 0x2, 0x2, 0x2, 0x895, 0x896, 0x3, 0x2, 0x2, 
       0x2, 0x896, 0x898, 0x7, 0x3c, 0x2, 0x2, 0x897, 0x899, 0x5, 0x64, 
       0x33, 0x2, 0x898, 0x897, 0x3, 0x2, 0x2, 0x2, 0x898, 0x899, 0x3, 0x2, 
       0x2, 0x2, 0x899, 0x89b, 0x3, 0x2, 0x2, 0x2, 0x89a, 0x85f, 0x3, 0x2, 
       0x2, 0x2, 0x89a, 0x882, 0x3, 0x2, 0x2, 0x2, 0x89b, 0x17b, 0x3, 0x2, 
       0x2, 0x2, 0x89c, 0x8a0, 0x5, 0x2c, 0x17, 0x2, 0x89d, 0x89e, 0x7, 
       0x46, 0x2, 0x2, 0x89e, 0x8a0, 0x7, 0x45, 0x2, 0x2, 0x89f, 0x89c, 
       0x3, 0x2, 0x2, 0x2, 0x89f, 0x89d, 0x3, 0x2, 0x2, 0x2, 0x8a0, 0x17d, 
       0x3, 0x2, 0x2, 0x2, 0x8a1, 0x8a2, 0x5, 0x162, 0xb2, 0x2, 0x8a2, 0x8a3, 
       0x7, 0x43, 0x2, 0x2, 0x8a3, 0x8a4, 0x7, 0x68, 0x2, 0x2, 0x8a4, 0x8af, 
       0x3, 0x2, 0x2, 0x2, 0x8a5, 0x8a6, 0x7, 0x2a, 0x2, 0x2, 0x8a6, 0x8a7, 
       0x7, 0x43, 0x2, 0x2, 0x8a7, 0x8af, 0x7, 0x68, 0x2, 0x2, 0x8a8, 0x8a9, 
       0x5, 0x36, 0x1c, 0x2, 0x8a9, 0x8aa, 0x7, 0x43, 0x2, 0x2, 0x8aa, 0x8ab, 
       0x7, 0x2a, 0x2, 0x2, 0x8ab, 0x8ac, 0x7, 0x43, 0x2, 0x2, 0x8ac, 0x8ad, 
       0x7, 0x68, 0x2, 0x2, 0x8ad, 0x8af, 0x3, 0x2, 0x2, 0x2, 0x8ae, 0x8a1, 
       0x3, 0x2, 0x2, 0x2, 0x8ae, 0x8a5, 0x3, 0x2, 0x2, 0x2, 0x8ae, 0x8a8, 
       0x3, 0x2, 0x2, 0x2, 0x8af, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8b1, 
       0x7, 0x43, 0x2, 0x2, 0x8b1, 0x8b2, 0x7, 0x68, 0x2, 0x2, 0x8b2, 0x181, 
       0x3, 0x2, 0x2, 0x2, 0x8b3, 0x8b4, 0x7, 0x2a, 0x2, 0x2, 0x8b4, 0x8b5, 
       0x7, 0x43, 0x2, 0x2, 0x8b5, 0x8bd, 0x7, 0x68, 0x2, 0x2, 0x8b6, 0x8b7, 
       0x5, 0x36, 0x1c, 0x2, 0x8b7, 0x8b8, 0x7, 0x43, 0x2, 0x2, 0x8b8, 0x8b9, 
       0x7, 0x2a, 0x2, 0x2, 0x8b9, 0x8ba, 0x7, 0x43, 0x2, 0x2, 0x8ba, 0x8bb, 
       0x7, 0x68, 0x2, 0x2, 0x8bb, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8b3, 
       0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8b6, 0x3, 0x2, 0x2, 0x2, 0x8bd, 0x183, 
       0x3, 0x2, 0x2, 0x2, 0x8be, 0x8bf, 0x5, 0x3a, 0x1e, 0x2, 0x8bf, 0x8c0, 
       0x7, 0x3f, 0x2, 0x2, 0x8c0, 0x8c1, 0x5, 0x19e, 0xd0, 0x2, 0x8c1, 
       0x8c2, 0x7, 0x40, 0x2, 0x2, 0x8c2, 0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8c3, 
       0x8c4, 0x5, 0x168, 0xb5, 0x2, 0x8c4, 0x8c5, 0x7, 0x3f, 0x2, 0x2, 
       0x8c5, 0x8c6, 0x5, 0x19e, 0xd0, 0x2, 0x8c6, 0x8c7, 0x7, 0x40, 0x2, 
       0x2, 0x8c7, 0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8be, 0x3, 0x2, 0x2, 
       0x2, 0x8c8, 0x8c3, 0x3, 0x2, 0x2, 0x2, 0x8c9, 0x8d1, 0x3, 0x2, 0x2, 
       0x2, 0x8ca, 0x8cb, 0x5, 0x166, 0xb4, 0x2, 0x8cb, 0x8cc, 0x7, 0x3f, 
       0x2, 0x2, 0x8cc, 0x8cd, 0x5, 0x19e, 0xd0, 0x2, 0x8cd, 0x8ce, 0x7, 
       0x40, 0x2, 0x2, 0x8ce, 0x8d0, 0x3, 0x2, 0x2, 0x2, 0x8cf, 0x8ca, 0x3, 
       0x2, 0x2, 0x2, 0x8d0, 0x8d3, 0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8cf, 0x3, 
       0x2, 0x2, 0x2, 0x8d1, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d2, 0x185, 0x3, 
       0x2, 0x2, 0x2, 0x8d3, 0x8d1, 0x3, 0x2, 0x2, 0x2, 0x8d4, 0x8d5, 0x5, 
       0x16e, 0xb8, 0x2, 0x8d5, 0x8d6, 0x7, 0x3f, 0x2, 0x2, 0x8d6, 0x8d7, 
       0x5, 0x19e, 0xd0, 0x2, 0x8d7, 0x8d8, 0x7, 0x40, 0x2, 0x2, 0x8d8, 
       0x8e0, 0x3, 0x2, 0x2, 0x2, 0x8d9, 0x8da, 0x5, 0x16c, 0xb7, 0x2, 0x8da, 
       0x8db, 0x7, 0x3f, 0x2, 0x2, 0x8db, 0x8dc, 0x5, 0x19e, 0xd0, 0x2, 
       0x8dc, 0x8dd, 0x7, 0x40, 0x2, 0x2, 0x8dd, 0x8df, 0x3, 0x2, 0x2, 0x2, 
       0x8de, 0x8d9, 0x3, 0x2, 0x2, 0x2, 0x8df, 0x8e2, 0x3, 0x2, 0x2, 0x2, 
       0x8e0, 0x8de, 0x3, 0x2, 0x2, 0x2, 0x8e0, 0x8e1, 0x3, 0x2, 0x2, 0x2, 
       0x8e1, 0x187, 0x3, 0x2, 0x2, 0x2, 0x8e2, 0x8e0, 0x3, 0x2, 0x2, 0x2, 
       0x8e3, 0x8e4, 0x5, 0x3a, 0x1e, 0x2, 0x8e4, 0x8e5, 0x7, 0x3f, 0x2, 
       0x2, 0x8e5, 0x8e6, 0x5, 0x19e, 0xd0, 0x2, 0x8e6, 0x8e7, 0x7, 0x40, 
       0x2, 0x2, 0x8e7, 0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8e8, 0x8e9, 0x5, 0x174, 
       0xbb, 0x2, 0x8e9, 0x8ea, 0x7, 0x3f, 0x2, 0x2, 0x8ea, 0x8eb, 0x5, 
       0x19e, 0xd0, 0x2, 0x8eb, 0x8ec, 0x7, 0x40, 0x2, 0x2, 0x8ec, 0x8ee, 
       0x3, 0x2, 0x2, 0x2, 0x8ed, 0x8e3, 0x3, 0x2, 0x2, 0x2, 0x8ed, 0x8e8, 
       0x3, 0x2, 0x2, 0x2, 0x8ee, 0x8f6, 0x3, 0x2, 0x2, 0x2, 0x8ef, 0x8f0, 
       0x5, 0x172, 0xba, 0x2, 0x8f0, 0x8f1, 0x7, 0x3f, 0x2, 0x2, 0x8f1, 
       0x8f2, 0x5, 0x19e, 0xd0, 0x2, 0x8f2, 0x8f3, 0x7, 0x40, 0x2, 0x2, 
       0x8f3, 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8ef, 0x3, 0x2, 0x2, 0x2, 
       0x8f5, 0x8f8, 0x3, 0x2, 0x2, 0x2, 0x8f6, 0x8f4, 0x3, 0x2, 0x2, 0x2, 
       0x8f6, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f7, 0x189, 0x3, 0x2, 0x2, 0x2, 
       0x8f8, 0x8f6, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fa, 0x5, 0x3c, 0x1f, 
       0x2, 0x8fa, 0x8fc, 0x7, 0x3b, 0x2, 0x2, 0x8fb, 0x8fd, 0x5, 0x190, 
       0xc9, 0x2, 0x8fc, 0x8fb, 0x3, 0x2, 0x2, 0x2, 0x8fc, 0x8fd, 0x3, 0x2, 
       0x2, 0x2, 0x8fd, 0x8fe, 0x3, 0x2, 0x2, 0x2, 0x8fe, 0x8ff, 0x7, 0x3c, 
       0x2, 0x2, 0x8ff, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x900, 0x901, 0x5, 0x36, 
       0x1c, 0x2, 0x901, 0x903, 0x7, 0x43, 0x2, 0x2, 0x902, 0x904, 0x5, 
       0x2c, 0x17, 0x2, 0x903, 0x902, 0x3, 0x2, 0x2, 0x2, 0x903, 0x904, 
       0x3, 0x2, 0x2, 0x2, 0x904, 0x905, 0x3, 0x2, 0x2, 0x2, 0x905, 0x906, 
       0x7, 0x68, 0x2, 0x2, 0x906, 0x908, 0x7, 0x3b, 0x2, 0x2, 0x907, 0x909, 
       0x5, 0x190, 0xc9, 0x2, 0x908, 0x907, 0x3, 0x2, 0x2, 0x2, 0x908, 0x909, 
       0x3, 0x2, 0x2, 0x2, 0x909, 0x90a, 0x3, 0x2, 0x2, 0x2, 0x90a, 0x90b, 
       0x7, 0x3c, 0x2, 0x2, 0x90b, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x90c, 0x90d, 
       0x5, 0x3a, 0x1e, 0x2, 0x90d, 0x90f, 0x7, 0x43, 0x2, 0x2, 0x90e, 0x910, 
       0x5, 0x2c, 0x17, 0x2, 0x90f, 0x90e, 0x3, 0x2, 0x2, 0x2, 0x90f, 0x910, 
       0x3, 0x2, 0x2, 0x2, 0x910, 0x911, 0x3, 0x2, 0x2, 0x2, 0x911, 0x912, 
       0x7, 0x68, 0x2, 0x2, 0x912, 0x914, 0x7, 0x3b, 0x2, 0x2, 0x913, 0x915, 
       0x5, 0x190, 0xc9, 0x2, 0x914, 0x913, 0x3, 0x2, 0x2, 0x2, 0x914, 0x915, 
       0x3, 0x2, 0x2, 0x2, 0x915, 0x916, 0x3, 0x2, 0x2, 0x2, 0x916, 0x917, 
       0x7, 0x3c, 0x2, 0x2, 0x917, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x918, 0x919, 
       0x5, 0x162, 0xb2, 0x2, 0x919, 0x91b, 0x7, 0x43, 0x2, 0x2, 0x91a, 
       0x91c, 0x5, 0x2c, 0x17, 0x2, 0x91b, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x91b, 
       0x91c, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x91d, 0x3, 0x2, 0x2, 0x2, 0x91d, 
       0x91e, 0x7, 0x68, 0x2, 0x2, 0x91e, 0x920, 0x7, 0x3b, 0x2, 0x2, 0x91f, 
       0x921, 0x5, 0x190, 0xc9, 0x2, 0x920, 0x91f, 0x3, 0x2, 0x2, 0x2, 0x920, 
       0x921, 0x3, 0x2, 0x2, 0x2, 0x921, 0x922, 0x3, 0x2, 0x2, 0x2, 0x922, 
       0x923, 0x7, 0x3c, 0x2, 0x2, 0x923, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x924, 
       0x925, 0x7, 0x2a, 0x2, 0x2, 0x925, 0x927, 0x7, 0x43, 0x2, 0x2, 0x926, 
       0x928, 0x5, 0x2c, 0x17, 0x2, 0x927, 0x926, 0x3, 0x2, 0x2, 0x2, 0x927, 
       0x928, 0x3, 0x2, 0x2, 0x2, 0x928, 0x929, 0x3, 0x2, 0x2, 0x2, 0x929, 
       0x92a, 0x7, 0x68, 0x2, 0x2, 0x92a, 0x92c, 0x7, 0x3b, 0x2, 0x2, 0x92b, 
       0x92d, 0x5, 0x190, 0xc9, 0x2, 0x92c, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x92c, 
       0x92d, 0x3, 0x2, 0x2, 0x2, 0x92d, 0x92e, 0x3, 0x2, 0x2, 0x2, 0x92e, 
       0x93e, 0x7, 0x3c, 0x2, 0x2, 0x92f, 0x930, 0x5, 0x36, 0x1c, 0x2, 0x930, 
       0x931, 0x7, 0x43, 0x2, 0x2, 0x931, 0x932, 0x7, 0x2a, 0x2, 0x2, 0x932, 
       0x934, 0x7, 0x43, 0x2, 0x2, 0x933, 0x935, 0x5, 0x2c, 0x17, 0x2, 0x934, 
       0x933, 0x3, 0x2, 0x2, 0x2, 0x934, 0x935, 0x3, 0x2, 0x2, 0x2, 0x935, 
       0x936, 0x3, 0x2, 0x2, 0x2, 0x936, 0x937, 0x7, 0x68, 0x2, 0x2, 0x937, 
       0x939, 0x7, 0x3b, 0x2, 0x2, 0x938, 0x93a, 0x5, 0x190, 0xc9, 0x2, 
       0x939, 0x938, 0x3, 0x2, 0x2, 0x2, 0x939, 0x93a, 0x3, 0x2, 0x2, 0x2, 
       0x93a, 0x93b, 0x3, 0x2, 0x2, 0x2, 0x93b, 0x93c, 0x7, 0x3c, 0x2, 0x2, 
       0x93c, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x93d, 0x8f9, 0x3, 0x2, 0x2, 0x2, 
       0x93d, 0x900, 0x3, 0x2, 0x2, 0x2, 0x93d, 0x90c, 0x3, 0x2, 0x2, 0x2, 
       0x93d, 0x918, 0x3, 0x2, 0x2, 0x2, 0x93d, 0x924, 0x3, 0x2, 0x2, 0x2, 
       0x93d, 0x92f, 0x3, 0x2, 0x2, 0x2, 0x93e, 0x18b, 0x3, 0x2, 0x2, 0x2, 
       0x93f, 0x941, 0x7, 0x43, 0x2, 0x2, 0x940, 0x942, 0x5, 0x2c, 0x17, 
       0x2, 0x941, 0x940, 0x3, 0x2, 0x2, 0x2, 0x941, 0x942, 0x3, 0x2, 0x2, 
       0x2, 0x942, 0x943, 0x3, 0x2, 0x2, 0x2, 0x943, 0x944, 0x7, 0x68, 0x2, 
       0x2, 0x944, 0x946, 0x7, 0x3b, 0x2, 0x2, 0x945, 0x947, 0x5, 0x190, 
       0xc9, 0x2, 0x946, 0x945, 0x3, 0x2, 0x2, 0x2, 0x946, 0x947, 0x3, 0x2, 
       0x2, 0x2, 0x947, 0x948, 0x3, 0x2, 0x2, 0x2, 0x948, 0x949, 0x7, 0x3c, 
       0x2, 0x2, 0x949, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x94a, 0x94b, 0x5, 0x3c, 
       0x1f, 0x2, 0x94b, 0x94d, 0x7, 0x3b, 0x2, 0x2, 0x94c, 0x94e, 0x5, 
       0x190, 0xc9, 0x2, 0x94d, 0x94c, 0x3, 0x2, 0x2, 0x2, 0x94d, 0x94e, 
       0x3, 0x2, 0x2, 0x2, 0x94e, 0x94f, 0x3, 0x2, 0x2, 0x2, 0x94f, 0x950, 
       0x7, 0x3c, 0x2, 0x2, 0x950, 0x983, 0x3, 0x2, 0x2, 0x2, 0x951, 0x952, 
       0x5, 0x36, 0x1c, 0x2, 0x952, 0x954, 0x7, 0x43, 0x2, 0x2, 0x953, 0x955, 
       0x5, 0x2c, 0x17, 0x2, 0x954, 0x953, 0x3, 0x2, 0x2, 0x2, 0x954, 0x955, 
       0x3, 0x2, 0x2, 0x2, 0x955, 0x956, 0x3, 0x2, 0x2, 0x2, 0x956, 0x957, 
       0x7, 0x68, 0x2, 0x2, 0x957, 0x959, 0x7, 0x3b, 0x2, 0x2, 0x958, 0x95a, 
       0x5, 0x190, 0xc9, 0x2, 0x959, 0x958, 0x3, 0x2, 0x2, 0x2, 0x959, 0x95a, 
       0x3, 0x2, 0x2, 0x2, 0x95a, 0x95b, 0x3, 0x2, 0x2, 0x2, 0x95b, 0x95c, 
       0x7, 0x3c, 0x2, 0x2, 0x95c, 0x983, 0x3, 0x2, 0x2, 0x2, 0x95d, 0x95e, 
       0x5, 0x3a, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x1e, 0x2, 0x95e, 0x960, 0x7, 0x43, 0x2, 0x2, 0x95f, 0x961, 0x5, 0x2c, 
       0x17, 0x2, 0x960, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x960, 0x961, 0x3, 0x2, 
       0x2, 0x2, 0x961, 0x962, 0x3, 0x2, 0x2, 0x2, 0x962, 0x963, 0x7, 0x68, 
       0x2, 0x2, 0x963, 0x965, 0x7, 0x3b, 0x2, 0x2, 0x964, 0x966, 0x5, 0x190, 
       0xc9, 0x2, 0x965, 0x964, 0x3, 0x2, 0x2, 0x2, 0x965, 0x966, 0x3, 0x2, 
       0x2, 0x2, 0x966, 0x967, 0x3, 0x2, 0x2, 0x2, 0x967, 0x968, 0x7, 0x3c, 
       0x2, 0x2, 0x968, 0x983, 0x3, 0x2, 0x2, 0x2, 0x969, 0x96a, 0x7, 0x2a, 
       0x2, 0x2, 0x96a, 0x96c, 0x7, 0x43, 0x2, 0x2, 0x96b, 0x96d, 0x5, 0x2c, 
       0x17, 0x2, 0x96c, 0x96b, 0x3, 0x2, 0x2, 0x2, 0x96c, 0x96d, 0x3, 0x2, 
       0x2, 0x2, 0x96d, 0x96e, 0x3, 0x2, 0x2, 0x2, 0x96e, 0x96f, 0x7, 0x68, 
       0x2, 0x2, 0x96f, 0x971, 0x7, 0x3b, 0x2, 0x2, 0x970, 0x972, 0x5, 0x190, 
       0xc9, 0x2, 0x971, 0x970, 0x3, 0x2, 0x2, 0x2, 0x971, 0x972, 0x3, 0x2, 
       0x2, 0x2, 0x972, 0x973, 0x3, 0x2, 0x2, 0x2, 0x973, 0x983, 0x7, 0x3c, 
       0x2, 0x2, 0x974, 0x975, 0x5, 0x36, 0x1c, 0x2, 0x975, 0x976, 0x7, 
       0x43, 0x2, 0x2, 0x976, 0x977, 0x7, 0x2a, 0x2, 0x2, 0x977, 0x979, 
       0x7, 0x43, 0x2, 0x2, 0x978, 0x97a, 0x5, 0x2c, 0x17, 0x2, 0x979, 0x978, 
       0x3, 0x2, 0x2, 0x2, 0x979, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x97a, 0x97b, 
       0x3, 0x2, 0x2, 0x2, 0x97b, 0x97c, 0x7, 0x68, 0x2, 0x2, 0x97c, 0x97e, 
       0x7, 0x3b, 0x2, 0x2, 0x97d, 0x97f, 0x5, 0x190, 0xc9, 0x2, 0x97e, 
       0x97d, 0x3, 0x2, 0x2, 0x2, 0x97e, 0x97f, 0x3, 0x2, 0x2, 0x2, 0x97f, 
       0x980, 0x3, 0x2, 0x2, 0x2, 0x980, 0x981, 0x7, 0x3c, 0x2, 0x2, 0x981, 
       0x983, 0x3, 0x2, 0x2, 0x2, 0x982, 0x94a, 0x3, 0x2, 0x2, 0x2, 0x982, 
       0x951, 0x3, 0x2, 0x2, 0x2, 0x982, 0x95d, 0x3, 0x2, 0x2, 0x2, 0x982, 
       0x969, 0x3, 0x2, 0x2, 0x2, 0x982, 0x974, 0x3, 0x2, 0x2, 0x2, 0x983, 
       0x18f, 0x3, 0x2, 0x2, 0x2, 0x984, 0x989, 0x5, 0x19e, 0xd0, 0x2, 0x985, 
       0x986, 0x7, 0x42, 0x2, 0x2, 0x986, 0x988, 0x5, 0x19e, 0xd0, 0x2, 
       0x987, 0x985, 0x3, 0x2, 0x2, 0x2, 0x988, 0x98b, 0x3, 0x2, 0x2, 0x2, 
       0x989, 0x987, 0x3, 0x2, 0x2, 0x2, 0x989, 0x98a, 0x3, 0x2, 0x2, 0x2, 
       0x98a, 0x191, 0x3, 0x2, 0x2, 0x2, 0x98b, 0x989, 0x3, 0x2, 0x2, 0x2, 
       0x98c, 0x98d, 0x5, 0x3a, 0x1e, 0x2, 0x98d, 0x98f, 0x7, 0x5c, 0x2, 
       0x2, 0x98e, 0x990, 0x5, 0x2c, 0x17, 0x2, 0x98f, 0x98e, 0x3, 0x2, 
       0x2, 0x2, 0x98f, 0x990, 0x3, 0x2, 0x2, 0x2, 0x990, 0x991, 0x3, 0x2, 
       0x2, 0x2, 0x991, 0x992, 0x7, 0x68, 0x2, 0x2, 0x992, 0x9bc, 0x3, 0x2, 
       0x2, 0x2, 0x993, 0x994, 0x5, 0xe, 0x8, 0x2, 0x994, 0x996, 0x7, 0x5c, 
       0x2, 0x2, 0x995, 0x997, 0x5, 0x2c, 0x17, 0x2, 0x996, 0x995, 0x3, 
       0x2, 0x2, 0x2, 0x996, 0x997, 0x3, 0x2, 0x2, 0x2, 0x997, 0x998, 0x3, 
       0x2, 0x2, 0x2, 0x998, 0x999, 0x7, 0x68, 0x2, 0x2, 0x999, 0x9bc, 0x3, 
       0x2, 0x2, 0x2, 0x99a, 0x99b, 0x5, 0x162, 0xb2, 0x2, 0x99b, 0x99d, 
       0x7, 0x5c, 0x2, 0x2, 0x99c, 0x99e, 0x5, 0x2c, 0x17, 0x2, 0x99d, 0x99c, 
       0x3, 0x2, 0x2, 0x2, 0x99d, 0x99e, 0x3, 0x2, 0x2, 0x2, 0x99e, 0x99f, 
       0x3, 0x2, 0x2, 0x2, 0x99f, 0x9a0, 0x7, 0x68, 0x2, 0x2, 0x9a0, 0x9bc, 
       0x3, 0x2, 0x2, 0x2, 0x9a1, 0x9a2, 0x7, 0x2a, 0x2, 0x2, 0x9a2, 0x9a4, 
       0x7, 0x5c, 0x2, 0x2, 0x9a3, 0x9a5, 0x5, 0x2c, 0x17, 0x2, 0x9a4, 0x9a3, 
       0x3, 0x2, 0x2, 0x2, 0x9a4, 0x9a5, 0x3, 0x2, 0x2, 0x2, 0x9a5, 0x9a6, 
       0x3, 0x2, 0x2, 0x2, 0x9a6, 0x9bc, 0x7, 0x68, 0x2, 0x2, 0x9a7, 0x9a8, 
       0x5, 0x36, 0x1c, 0x2, 0x9a8, 0x9a9, 0x7, 0x43, 0x2, 0x2, 0x9a9, 0x9aa, 
       0x7, 0x2a, 0x2, 0x2, 0x9aa, 0x9ac, 0x7, 0x5c, 0x2, 0x2, 0x9ab, 0x9ad, 
       0x5, 0x2c, 0x17, 0x2, 0x9ac, 0x9ab, 0x3, 0x2, 0x2, 0x2, 0x9ac, 0x9ad, 
       0x3, 0x2, 0x2, 0x2, 0x9ad, 0x9ae, 0x3, 0x2, 0x2, 0x2, 0x9ae, 0x9af, 
       0x7, 0x68, 0x2, 0x2, 0x9af, 0x9bc, 0x3, 0x2, 0x2, 0x2, 0x9b0, 0x9b1, 
       0x5, 0x12, 0xa, 0x2, 0x9b1, 0x9b3, 0x7, 0x5c, 0x2, 0x2, 0x9b2, 0x9b4, 
       0x5, 0x2c, 0x17, 0x2, 0x9b3, 0x9b2, 0x3, 0x2, 0x2, 0x2, 0x9b3, 0x9b4, 
       0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9b5, 0x3, 0x2, 0x2, 0x2, 0x9b5, 0x9b6, 
       0x7, 0x21, 0x2, 0x2, 0x9b6, 0x9bc, 0x3, 0x2, 0x2, 0x2, 0x9b7, 0x9b8, 
       0x5, 0x20, 0x11, 0x2, 0x9b8, 0x9b9, 0x7, 0x5c, 0x2, 0x2, 0x9b9, 0x9ba, 
       0x7, 0x21, 0x2, 0x2, 0x9ba, 0x9bc, 0x3, 0x2, 0x2, 0x2, 0x9bb, 0x98c, 
       0x3, 0x2, 0x2, 0x2, 0x9bb, 0x993, 0x3, 0x2, 0x2, 0x2, 0x9bb, 0x99a, 
       0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9a1, 0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9a7, 
       0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9b7, 
       0x3, 0x2, 0x2, 0x2, 0x9bc, 0x193, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9bf, 
       0x7, 0x5c, 0x2, 0x2, 0x9be, 0x9c0, 0x5, 0x2c, 0x17, 0x2, 0x9bf, 0x9be, 
       0x3, 0x2, 0x2, 0x2, 0x9bf, 0x9c0, 0x3, 0x2, 0x2, 0x2, 0x9c0, 0x9c1, 
       0x3, 0x2, 0x2, 0x2, 0x9c1, 0x9c2, 0x7, 0x68, 0x2, 0x2, 0x9c2, 0x195, 
       0x3, 0x2, 0x2, 0x2, 0x9c3, 0x9c4, 0x5, 0x3a, 0x1e, 0x2, 0x9c4, 0x9c6, 
       0x7, 0x5c, 0x2, 0x2, 0x9c5, 0x9c7, 0x5, 0x2c, 0x17, 0x2, 0x9c6, 0x9c5, 
       0x3, 0x2, 0x2, 0x2, 0x9c6, 0x9c7, 0x3, 0x2, 0x2, 0x2, 0x9c7, 0x9c8, 
       0x3, 0x2, 0x2, 0x2, 0x9c8, 0x9c9, 0x7, 0x68, 0x2, 0x2, 0x9c9, 0x9ec, 
       0x3, 0x2, 0x2, 0x2, 0x9ca, 0x9cb, 0x5, 0xe, 0x8, 0x2, 0x9cb, 0x9cd, 
       0x7, 0x5c, 0x2, 0x2, 0x9cc, 0x9ce, 0x5, 0x2c, 0x17, 0x2, 0x9cd, 0x9cc, 
       0x3, 0x2, 0x2, 0x2, 0x9cd, 0x9ce, 0x3, 0x2, 0x2, 0x2, 0x9ce, 0x9cf, 
       0x3, 0x2, 0x2, 0x2, 0x9cf, 0x9d0, 0x7, 0x68, 0x2, 0x2, 0x9d0, 0x9ec, 
       0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9d2, 0x7, 0x2a, 0x2, 0x2, 0x9d2, 0x9d4, 
       0x7, 0x5c, 0x2, 0x2, 0x9d3, 0x9d5, 0x5, 0x2c, 0x17, 0x2, 0x9d4, 0x9d3, 
       0x3, 0x2, 0x2, 0x2, 0x9d4, 0x9d5, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9d6, 
       0x3, 0x2, 0x2, 0x2, 0x9d6, 0x9ec, 0x7, 0x68, 0x2, 0x2, 0x9d7, 0x9d8, 
       0x5, 0x36, 0x1c, 0x2, 0x9d8, 0x9d9, 0x7, 0x43, 0x2, 0x2, 0x9d9, 0x9da, 
       0x7, 0x2a, 0x2, 0x2, 0x9da, 0x9dc, 0x7, 0x5c, 0x2, 0x2, 0x9db, 0x9dd, 
       0x5, 0x2c, 0x17, 0x2, 0x9dc, 0x9db, 0x3, 0x2, 0x2, 0x2, 0x9dc, 0x9dd, 
       0x3, 0x2, 0x2, 0x2, 0x9dd, 0x9de, 0x3, 0x2, 0x2, 0x2, 0x9de, 0x9df, 
       0x7, 0x68, 0x2, 0x2, 0x9df, 0x9ec, 0x3, 0x2, 0x2, 0x2, 0x9e0, 0x9e1, 
       0x5, 0x12, 0xa, 0x2, 0x9e1, 0x9e3, 0x7, 0x5c, 0x2, 0x2, 0x9e2, 0x9e4, 
       0x5, 0x2c, 0x17, 0x2, 0x9e3, 0x9e2, 0x3, 0x2, 0x2, 0x2, 0x9e3, 0x9e4, 
       0x3, 0x2, 0x2, 0x2, 0x9e4, 0x9e5, 0x3, 0x2, 0x2, 0x2, 0x9e5, 0x9e6, 
       0x7, 0x21, 0x2, 0x2, 0x9e6, 0x9ec, 0x3, 0x2, 0x2, 0x2, 0x9e7, 0x9e8, 
       0x5, 0x20, 0x11, 0x2, 0x9e8, 0x9e9, 0x7, 0x5c, 0x2, 0x2, 0x9e9, 0x9ea, 
       0x7, 0x21, 0x2, 0x2, 0x9ea, 0x9ec, 0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9c3, 
       0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9ca, 0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9d1, 
       0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9d7, 0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9e0, 
       0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9e7, 0x3, 0x2, 0x2, 0x2, 0x9ec, 0x197, 
       0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9ee, 0x7, 0x21, 0x2, 0x2, 0x9ee, 0x9ef, 
       0x5, 0x6, 0x4, 0x2, 0x9ef, 0x9f1, 0x5, 0x19a, 0xce, 0x2, 0x9f0, 0x9f2, 
       0x5, 0x22, 0x12, 0x2, 0x9f1, 0x9f0, 0x3, 0x2, 0x2, 0x2, 0x9f1, 0x9f2, 
       0x3, 0x2, 0x2, 0x2, 0x9f2, 0xa04, 0x3, 0x2, 0x2, 0x2, 0x9f3, 0x9f4, 
       0x7, 0x21, 0x2, 0x2, 0x9f4, 0x9f5, 0x5, 0x10, 0x9, 0x2, 0x9f5, 0x9f7, 
       0x5, 0x19a, 0xce, 0x2, 0x9f6, 0x9f8, 0x5, 0x22, 0x12, 0x2, 0x9f7, 
       0x9f6, 0x3, 0x2, 0x2, 0x2, 0x9f7, 0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9f8, 
       0xa04, 0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9fa, 0x7, 0x21, 0x2, 0x2, 0x9fa, 
       0x9fb, 0x5, 0x6, 0x4, 0x2, 0x9fb, 0x9fc, 0x5, 0x22, 0x12, 0x2, 0x9fc, 
       0x9fd, 0x5, 0xfa, 0x7e, 0x2, 0x9fd, 0xa04, 0x3, 0x2, 0x2, 0x2, 0x9fe, 
       0x9ff, 0x7, 0x21, 0x2, 0x2, 0x9ff, 0xa00, 0x5, 0x10, 0x9, 0x2, 0xa00, 
       0xa01, 0x5, 0x22, 0x12, 0x2, 0xa01, 0xa02, 0x5, 0xfa, 0x7e, 0x2, 
       0xa02, 0xa04, 0x3, 0x2, 0x2, 0x2, 0xa03, 0x9ed, 0x3, 0x2, 0x2, 0x2, 
       0xa03, 0x9f3, 0x3, 0x2, 0x2, 0x2, 0xa03, 0x9f9, 0x3, 0x2, 0x2, 0x2, 
       0xa03, 0x9fe, 0x3, 0x2, 0x2, 0x2, 0xa04, 0x199, 0x3, 0x2, 0x2, 0x2, 
       0xa05, 0xa09, 0x5, 0x19c, 0xcf, 0x2, 0xa06, 0xa08, 0x5, 0x19c, 0xcf, 
       0x2, 0xa07, 0xa06, 0x3, 0x2, 0x2, 0x2, 0xa08, 0xa0b, 0x3, 0x2, 0x2, 
       0x2, 0xa09, 0xa07, 0x3, 0x2, 0x2, 0x2, 0xa09, 0xa0a, 0x3, 0x2, 0x2, 
       0x2, 0xa0a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0xa0b, 0xa09, 0x3, 0x2, 0x2, 
       0x2, 0xa0c, 0xa0e, 0x5, 0xe8, 0x75, 0x2, 0xa0d, 0xa0c, 0x3, 0x2, 
       0x2, 0x2, 0xa0e, 0xa11, 0x3, 0x2, 0x2, 0x2, 0xa0f, 0xa0d, 0x3, 0x2, 
       0x2, 0x2, 0xa0f, 0xa10, 0x3, 0x2, 0x2, 0x2, 0xa10, 0xa12, 0x3, 0x2, 
       0x2, 0x2, 0xa11, 0xa0f, 0x3, 0x2, 0x2, 0x2, 0xa12, 0xa13, 0x7, 0x3f, 
       0x2, 0x2, 0xa13, 0xa14, 0x5, 0x19e, 0xd0, 0x2, 0xa14, 0xa15, 0x7, 
       0x40, 0x2, 0x2, 0xa15, 0x19d, 0x3, 0x2, 0x2, 0x2, 0xa16, 0xa19, 0x5, 
       0x1a0, 0xd1, 0x2, 0xa17, 0xa19, 0x5, 0x1a8, 0xd5, 0x2, 0xa18, 0xa16, 
       0x3, 0x2, 0x2, 0x2, 0xa18, 0xa17, 0x3, 0x2, 0x2, 0x2, 0xa19, 0x19f, 
       0x3, 0x2, 0x2, 0x2, 0xa1a, 0xa1b, 0x5, 0x1a2, 0xd2, 0x2, 0xa1b, 0xa1c, 
       0x7, 0x5b, 0x2, 0x2, 0xa1c, 0xa1d, 0x5, 0x1a6, 0xd4, 0x2, 0xa1d, 
       0x1a1, 0x3, 0x2, 0x2, 0x2, 0xa1e, 0xa29, 0x7, 0x68, 0x2, 0x2, 0xa1f, 
       0xa21, 0x7, 0x3b, 0x2, 0x2, 0xa20, 0xa22, 0x5, 0x98, 0x4d, 0x2, 0xa21, 
       0xa20, 0x3, 0x2, 0x2, 0x2, 0xa21, 0xa22, 0x3, 0x2, 0x2, 0x2, 0xa22, 
       0xa23, 0x3, 0x2, 0x2, 0x2, 0xa23, 0xa29, 0x7, 0x3c, 0x2, 0x2, 0xa24, 
       0xa25, 0x7, 0x3b, 0x2, 0x2, 0xa25, 0xa26, 0x5, 0x1a4, 0xd3, 0x2, 
       0xa26, 0xa27, 0x7, 0x3c, 0x2, 0x2, 0xa27, 0xa29, 0x3, 0x2, 0x2, 0x2, 
       0xa28, 0xa1e, 0x3, 0x2, 0x2, 0x2, 0xa28, 0xa1f, 0x3, 0x2, 0x2, 0x2, 
       0xa28, 0xa24, 0x3, 0x2, 0x2, 0x2, 0xa29, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
       0xa2a, 0xa2f, 0x7, 0x68, 0x2, 0x2, 0xa2b, 0xa2c, 0x7, 0x42, 0x2, 
       0x2, 0xa2c, 0xa2e, 0x7, 0x68, 0x2, 0x2, 0xa2d, 0xa2b, 0x3, 0x2, 0x2, 
       0x2, 0xa2e, 0xa31, 0x3, 0x2, 0x2, 0x2, 0xa2f, 0xa2d, 0x3, 0x2, 0x2, 
       0x2, 0xa2f, 0xa30, 0x3, 0x2, 0x2, 0x2, 0xa30, 0x1a5, 0x3, 0x2, 0x2, 
       0x2, 0xa31, 0xa2f, 0x3, 0x2, 0x2, 0x2, 0xa32, 0xa35, 0x5, 0x19e, 
       0xd0, 0x2, 0xa33, 0xa35, 0x5, 0xfe, 0x80, 0x2, 0xa34, 0xa32, 0x3, 
       0x2, 0x2, 0x2, 0xa34, 0xa33, 0x3, 0x2, 0x2, 0x2, 0xa35, 0x1a7, 0x3, 
       0x2, 0x2, 0x2, 0xa36, 0xa39, 0x5, 0x1ae, 0xd8, 0x2, 0xa37, 0xa39, 
       0x5, 0x1aa, 0xd6, 0x2, 0xa38, 0xa36, 0x3, 0x2, 0x2, 0x2, 0xa38, 0xa37, 
       0x3, 0x2, 0x2, 0x2, 0xa39, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0xa3a, 0xa3b, 
       0x5, 0x1ac, 0xd7, 0x2, 0xa3b, 0xa3c, 0x7, 0x44, 0x2, 0x2, 0xa3c, 
       0xa3d, 0x5, 0x19e, 0xd0, 0x2, 0xa3d, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa3e, 
       0xa3f, 0x5, 0x1ac, 0xd7, 0x2, 0xa3f, 0xa40, 0x7, 0x5f, 0x2, 0x2, 
       0xa40, 0xa41, 0x5, 0x19e, 0xd0, 0x2, 0xa41, 0xa6b, 0x3, 0x2, 0x2, 
       0x2, 0xa42, 0xa43, 0x5, 0x1ac, 0xd7, 0x2, 0xa43, 0xa44, 0x7, 0x60, 
       0x2, 0x2, 0xa44, 0xa45, 0x5, 0x19e, 0xd0, 0x2, 0xa45, 0xa6b, 0x3, 
       0x2, 0x2, 0x2, 0xa46, 0xa47, 0x5, 0x1ac, 0xd7, 0x2, 0xa47, 0xa48, 
       0x7, 0x64, 0x2, 0x2, 0xa48, 0xa49, 0x5, 0x19e, 0xd0, 0x2, 0xa49, 
       0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa4a, 0xa4b, 0x5, 0x1ac, 0xd7, 0x2, 0xa4b, 
       0xa4c, 0x7, 0x5d, 0x2, 0x2, 0xa4c, 0xa4d, 0x5, 0x19e, 0xd0, 0x2, 
       0xa4d, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa4e, 0xa4f, 0x5, 0x1ac, 0xd7, 
       0x2, 0xa4f, 0xa50, 0x7, 0x5e, 0x2, 0x2, 0xa50, 0xa51, 0x5, 0x19e, 
       0xd0, 0x2, 0xa51, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa52, 0xa53, 0x5, 0x1ac, 
       0xd7, 0x2, 0xa53, 0xa54, 0x7, 0x65, 0x2, 0x2, 0xa54, 0xa55, 0x5, 
       0x19e, 0xd0, 0x2, 0xa55, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa56, 0xa57, 
       0x5, 0x1ac, 0xd7, 0x2, 0xa57, 0xa58, 0x7, 0x66, 0x2, 0x2, 0xa58, 
       0xa59, 0x5, 0x19e, 0xd0, 0x2, 0xa59, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa5a, 
       0xa5b, 0x5, 0x1ac, 0xd7, 0x2, 0xa5b, 0xa5c, 0x7, 0x67, 0x2, 0x2, 
       0xa5c, 0xa5d, 0x5, 0x19e, 0xd0, 0x2, 0xa5d, 0xa6b, 0x3, 0x2, 0x2, 
       0x2, 0xa5e, 0xa5f, 0x5, 0x1ac, 0xd7, 0x2, 0xa5f, 0xa60, 0x7, 0x61, 
       0x2, 0x2, 0xa60, 0xa61, 0x5, 0x19e, 0xd0, 0x2, 0xa61, 0xa6b, 0x3, 
       0x2, 0x2, 0x2, 0xa62, 0xa63, 0x5, 0x1ac, 0xd7, 0x2, 0xa63, 0xa64, 
       0x7, 0x63, 0x2, 0x2, 0xa64, 0xa65, 0x5, 0x19e, 0xd0, 0x2, 0xa65, 
       0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa66, 0xa67, 0x5, 0x1ac, 0xd7, 0x2, 0xa67, 
       0xa68, 0x7, 0x62, 0x2, 0x2, 0xa68, 0xa69, 0x5, 0x19e, 0xd0, 0x2, 
       0xa69, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa6a, 0xa3a, 0x3, 0x2, 0x2, 0x2, 
       0xa6a, 0xa3e, 0x3, 0x2, 0x2, 0x2, 0xa6a, 0xa42, 0x3, 0x2, 0x2, 0x2, 
       0xa6a, 0xa46, 0x3, 0x2, 0x2, 0x2, 0xa6a, 0xa4a, 0x3, 0x2, 0x2, 0x2, 
       0xa6a, 0xa4e, 0x3, 0x2, 0x2, 0x2, 0xa6a, 0xa52, 0x3, 0x2, 0x2, 0x2, 
       0xa6a, 0xa56, 0x3, 0x2, 0x2, 0x2, 0xa6a, 0xa5a, 0x3, 0x2, 0x2, 0x2, 
       0xa6a, 0xa5e, 0x3, 0x2, 0x2, 0x2, 0xa6a, 0xa62, 0x3, 0x2, 0x2, 0x2, 
       0xa6a, 0xa66, 0x3, 0x2, 0x2, 0x2, 0xa6b, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
       0xa6c, 0xa70, 0x5, 0x3a, 0x1e, 0x2, 0xa6d, 0xa70, 0x5, 0x17e, 0xc0, 
       0x2, 0xa6e, 0xa70, 0x5, 0x184, 0xc3, 0x2, 0xa6f, 0xa6c, 0x3, 0x2, 
       0x2, 0x2, 0xa6f, 0xa6d, 0x3, 0x2, 0x2, 0x2, 0xa6f, 0xa6e, 0x3, 0x2, 
       0x2, 0x2, 0xa70, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0xa71, 0xa7f, 0x5, 0x1b0, 
       0xd9, 0x2, 0xa72, 0xa73, 0x5, 0x1b0, 0xd9, 0x2, 0xa73, 0xa74, 0x7, 
       0x49, 0x2, 0x2, 0xa74, 0xa75, 0x5, 0x19e, 0xd0, 0x2, 0xa75, 0xa76, 
       0x7, 0x4a, 0x2, 0x2, 0xa76, 0xa77, 0x5, 0x1ae, 0xd8, 0x2, 0xa77, 
       0xa7f, 0x3, 0x2, 0x2, 0x2, 0xa78, 0xa79, 0x5, 0x1b0, 0xd9, 0x2, 0xa79, 
       0xa7a, 0x7, 0x49, 0x2, 0x2, 0xa7a, 0xa7b, 0x5, 0x19e, 0xd0, 0x2, 
       0xa7b, 0xa7c, 0x7, 0x4a, 0x2, 0x2, 0xa7c, 0xa7d, 0x5, 0x1a0, 0xd1, 
       0x2, 0xa7d, 0xa7f, 0x3, 0x2, 0x2, 0x2, 0xa7e, 0xa71, 0x3, 0x2, 0x2, 
       0x2, 0xa7e, 0xa72, 0x3, 0x2, 0x2, 0x2, 0xa7e, 0xa78, 0x3, 0x2, 0x2, 
       0x2, 0xa7f, 0x1af, 0x3, 0x2, 0x2, 0x2, 0xa80, 0xa81, 0x8, 0xd9, 0x1, 
       0x2, 0xa81, 0xa82, 0x5, 0x1b2, 0xda, 0x2, 0xa82, 0xa88, 0x3, 0x2, 
       0x2, 0x2, 0xa83, 0xa84, 0xc, 0x3, 0x2, 0x2, 0xa84, 0xa85, 0x7, 0x50, 
       0x2, 0x2, 0xa85, 0xa87, 0x5, 0x1b2, 0xda, 0x2, 0xa86, 0xa83, 0x3, 
       0x2, 0x2, 0x2, 0xa87, 0xa8a, 0x3, 0x2, 0x2, 0x2, 0xa88, 0xa86, 0x3, 
       0x2, 0x2, 0x2, 0xa88, 0xa89, 0x3, 0x2, 0x2, 0x2, 0xa89, 0x1b1, 0x3, 
       0x2, 0x2, 0x2, 0xa8a, 0xa88, 0x3, 0x2, 0x2, 0x2, 0xa8b, 0xa8c, 0x8, 
       0xda, 0x1, 0x2, 0xa8c, 0xa8d, 0x5, 0x1b4, 0xdb, 0x2, 0xa8d, 0xa93, 
       0x3, 0x2, 0x2, 0x2, 0xa8e, 0xa8f, 0xc, 0x3, 0x2, 0x2, 0xa8f, 0xa90, 
       0x7, 0x4f, 0x2, 0x2, 0xa90, 0xa92, 0x5, 0x1b4, 0xdb, 0x2, 0xa91, 
       0xa8e, 0x3, 0x2, 0x2, 0x2, 0xa92, 0xa95, 0x3, 0x2, 0x2, 0x2, 0xa93, 
       0xa91, 0x3, 0x2, 0x2, 0x2, 0xa93, 0xa94, 0x3, 0x2, 0x2, 0x2, 0xa94, 
       0x1b3, 0x3, 0x2, 0x2, 0x2, 0xa95, 0xa93, 0x3, 0x2, 0x2, 0x2, 0xa96, 
       0xa97, 0x8, 0xdb, 0x1, 0x2, 0xa97, 0xa98, 0x5, 0x1b6, 0xdc, 0x2, 
       0xa98, 0xa9e, 0x3, 0x2, 0x2, 0x2, 0xa99, 0xa9a, 0xc, 0x3, 0x2, 0x2, 
       0xa9a, 0xa9b, 0x7, 0x58, 0x2, 0x2, 0xa9b, 0xa9d, 0x5, 0x1b6, 0xdc, 
       0x2, 0xa9c, 0xa99, 0x3, 0x2, 0x2, 0x2, 0xa9d, 0xaa0, 0x3, 0x2, 0x2, 
       0x2, 0xa9e, 0xa9c, 0x3, 0x2, 0x2, 0x2, 0xa9e, 0xa9f, 0x3, 0x2, 0x2, 
       0x2, 0xa9f, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0xaa0, 0xa9e, 0x3, 0x2, 0x2, 
       0x2, 0xaa1, 0xaa2, 0x8, 0xdc, 0x1, 0x2, 0xaa2, 0xaa3, 0x5, 0x1b8, 
       0xdd, 0x2, 0xaa3, 0xaa9, 0x3, 0x2, 0x2, 0x2, 0xaa4, 0xaa5, 0xc, 0x3, 
       0x2, 0x2, 0xaa5, 0xaa6, 0x7, 0x59, 0x2, 0x2, 0xaa6, 0xaa8, 0x5, 0x1b8, 
       0xdd, 0x2, 0xaa7, 0xaa4, 0x3, 0x2, 0x2, 0x2, 0xaa8, 0xaab, 0x3, 0x2, 
       0x2, 0x2, 0xaa9, 0xaa7, 0x3, 0x2, 0x2, 0x2, 0xaa9, 0xaaa, 0x3, 0x2, 
       0x2, 0x2, 0xaaa, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0xaab, 0xaa9, 0x3, 0x2, 
       0x2, 0x2, 0xaac, 0xaad, 0x8, 0xdd, 0x1, 0x2, 0xaad, 0xaae, 0x5, 0x1ba, 
       0xde, 0x2, 0xaae, 0xab4, 0x3, 0x2, 0x2, 0x2, 0xaaf, 0xab0, 0xc, 0x3, 
       0x2, 0x2, 0xab0, 0xab1, 0x7, 0x57, 0x2, 0x2, 0xab1, 0xab3, 0x5, 0x1ba, 
       0xde, 0x2, 0xab2, 0xaaf, 0x3, 0x2, 0x2, 0x2, 0xab3, 0xab6, 0x3, 0x2, 
       0x2, 0x2, 0xab4, 0xab2, 0x3, 0x2, 0x2, 0x2, 0xab4, 0xab5, 0x3, 0x2, 
       0x2, 0x2, 0xab5, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0xab6, 0xab4, 0x3, 0x2, 
       0x2, 0x2, 0xab7, 0xab8, 0x8, 0xde, 0x1, 0x2, 0xab8, 0xab9, 0x5, 0x1bc, 
       0xdf, 0x2, 0xab9, 0xac2, 0x3, 0x2, 0x2, 0x2, 0xaba, 0xabb, 0xc, 0x4, 
       0x2, 0x2, 0xabb, 0xabc, 0x7, 0x4b, 0x2, 0x2, 0xabc, 0xac1, 0x5, 0x1bc, 
       0xdf, 0x2, 0xabd, 0xabe, 0xc, 0x3, 0x2, 0x2, 0xabe, 0xabf, 0x7, 0x4e, 
       0x2, 0x2, 0xabf, 0xac1, 0x5, 0x1bc, 0xdf, 0x2, 0xac0, 0xaba, 0x3, 
       0x2, 0x2, 0x2, 0xac0, 0xabd, 0x3, 0x2, 0x2, 0x2, 0xac1, 0xac4, 0x3, 
       0x2, 0x2, 0x2, 0xac2, 0xac0, 0x3, 0x2, 0x2, 0x2, 0xac2, 0xac3, 0x3, 
       0x2, 0x2, 0x2, 0xac3, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0xac4, 0xac2, 0x3, 
       0x2, 0x2, 0x2, 0xac5, 0xac6, 0x8, 0xdf, 0x1, 0x2, 0xac6, 0xac7, 0x5, 
       0x1be, 0xe0, 0x2, 0xac7, 0xad9, 0x3, 0x2, 0x2, 0x2, 0xac8, 0xac9, 
       0xc, 0x7, 0x2, 0x2, 0xac9, 0xaca, 0x7, 0x46, 0x2, 0x2, 0xaca, 0xad8, 
       0x5, 0x1be, 0xe0, 0x2, 0xacb, 0xacc, 0xc, 0x6, 0x2, 0x2, 0xacc, 0xacd, 
       0x7, 0x45, 0x2, 0x2, 0xacd, 0xad8, 0x5, 0x1be, 0xe0, 0x2, 0xace, 
       0xacf, 0xc, 0x5, 0x2, 0x2, 0xacf, 0xad0, 0x7, 0x4c, 0x2, 0x2, 0xad0, 
       0xad8, 0x5, 0x1be, 0xe0, 0x2, 0xad1, 0xad2, 0xc, 0x4, 0x2, 0x2, 0xad2, 
       0xad3, 0x7, 0x4d, 0x2, 0x2, 0xad3, 0xad8, 0x5, 0x1be, 0xe0, 0x2, 
       0xad4, 0xad5, 0xc, 0x3, 0x2, 0x2, 0xad5, 0xad6, 0x7, 0x1c, 0x2, 0x2, 
       0xad6, 0xad8, 0x5, 0xe, 0x8, 0x2, 0xad7, 0xac8, 0x3, 0x2, 0x2, 0x2, 
       0xad7, 0xacb, 0x3, 0x2, 0x2, 0x2, 0xad7, 0xace, 0x3, 0x2, 0x2, 0x2, 
       0xad7, 0xad1, 0x3, 0x2, 0x2, 0x2, 0xad7, 0xad4, 0x3, 0x2, 0x2, 0x2, 
       0xad8, 0xadb, 0x3, 0x2, 0x2, 0x2, 0xad9, 0xad7, 0x3, 0x2, 0x2, 0x2, 
       0xad9, 0xada, 0x3, 0x2, 0x2, 0x2, 0xada, 0x1bd, 0x3, 0x2, 0x2, 0x2, 
       0xadb, 0xad9, 0x3, 0x2, 0x2, 0x2, 0xadc, 0xadd, 0x8, 0xe0, 0x1, 0x2, 
       0xadd, 0xade, 0x5, 0x1c0, 0xe1, 0x2, 0xade, 0xaee, 0x3, 0x2, 0x2, 
       0x2, 0xadf, 0xae0, 0xc, 0x5, 0x2, 0x2, 0xae0, 0xae1, 0x7, 0x46, 0x2, 
       0x2, 0xae1, 0xae2, 0x7, 0x46, 0x2, 0x2, 0xae2, 0xaed, 0x5, 0x1c0, 
       0xe1, 0x2, 0xae3, 0xae4, 0xc, 0x4, 0x2, 0x2, 0xae4, 0xae5, 0x7, 0x45, 
       0x2, 0x2, 0xae5, 0xae6, 0x7, 0x45, 0x2, 0x2, 0xae6, 0xaed, 0x5, 0x1c0, 
       0xe1, 0x2, 0xae7, 0xae8, 0xc, 0x3, 0x2, 0x2, 0xae8, 0xae9, 0x7, 0x45, 
       0x2, 0x2, 0xae9, 0xaea, 0x7, 0x45, 0x2, 0x2, 0xaea, 0xaeb, 0x7, 0x45, 
       0x2, 0x2, 0xaeb, 0xaed, 0x5, 0x1c0, 0xe1, 0x2, 0xaec, 0xadf, 0x3, 
       0x2, 0x2, 0x2, 0xaec, 0xae3, 0x3, 0x2, 0x2, 0x2, 0xaec, 0xae7, 0x3, 
       0x2, 0x2, 0x2, 0xaed, 0xaf0, 0x3, 0x2, 0x2, 0x2, 0xaee, 0xaec, 0x3, 
       0x2, 0x2, 0x2, 0xaee, 0xaef, 0x3, 0x2, 0x2, 0x2, 0xaef, 0x1bf, 0x3, 
       0x2, 0x2, 0x2, 0xaf0, 0xaee, 0x3, 0x2, 0x2, 0x2, 0xaf1, 0xaf2, 0x8, 
       0xe1, 0x1, 0x2, 0xaf2, 0xaf3, 0x5, 0x1c2, 0xe2, 0x2, 0xaf3, 0xafc, 
       0x3, 0x2, 0x2, 0x2, 0xaf4, 0xaf5, 0xc, 0x4, 0x2, 0x2, 0xaf5, 0xaf6, 
       0x7, 0x53, 0x2, 0x2, 0xaf6, 0xafb, 0x5, 0x1c2, 0xe2, 0x2, 0xaf7, 
       0xaf8, 0xc, 0x3, 0x2, 0x2, 0xaf8, 0xaf9, 0x7, 0x54, 0x2, 0x2, 0xaf9, 
       0xafb, 0x5, 0x1c2, 0xe2, 0x2, 0xafa, 0xaf4, 0x3, 0x2, 0x2, 0x2, 0xafa, 
       0xaf7, 0x3, 0x2, 0x2, 0x2, 0xafb, 0xafe, 0x3, 0x2, 0x2, 0x2, 0xafc, 
       0xafa, 0x3, 0x2, 0x2, 0x2, 0xafc, 0xafd, 0x3, 0x2, 0x2, 0x2, 0xafd, 
       0x1c1, 0x3, 0x2, 0x2, 0x2, 0xafe, 0xafc, 0x3, 0x2, 0x2, 0x2, 0xaff, 
       0xb00, 0x8, 0xe2, 0x1, 0x2, 0xb00, 0xb01, 0x5, 0x1c4, 0xe3, 0x2, 
       0xb01, 0xb0d, 0x3, 0x2, 0x2, 0x2, 0xb02, 0xb03, 0xc, 0x5, 0x2, 0x2, 
       0xb03, 0xb04, 0x7, 0x55, 0x2, 0x2, 0xb04, 0xb0c, 0x5, 0x1c4, 0xe3, 
       0x2, 0xb05, 0xb06, 0xc, 0x4, 0x2, 0x2, 0xb06, 0xb07, 0x7, 0x56, 0x2, 
       0x2, 0xb07, 0xb0c, 0x5, 0x1c4, 0xe3, 0x2, 0xb08, 0xb09, 0xc, 0x3, 
       0x2, 0x2, 0xb09, 0xb0a, 0x7, 0x5a, 0x2, 0x2, 0xb0a, 0xb0c, 0x5, 0x1c4, 
       0xe3, 0x2, 0xb0b, 0xb02, 0x3, 0x2, 0x2, 0x2, 0xb0b, 0xb05, 0x3, 0x2, 
       0x2, 0x2, 0xb0b, 0xb08, 0x3, 0x2, 0x2, 0x2, 0xb0c, 0xb0f, 0x3, 0x2, 
       0x2, 0x2, 0xb0d, 0xb0b, 0x3, 0x2, 0x2, 0x2, 0xb0d, 0xb0e, 0x3, 0x2, 
       0x2, 0x2, 0xb0e, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0xb0f, 0xb0d, 0x3, 0x2, 
       0x2, 0x2, 0xb10, 0xb18, 0x5, 0x1c6, 0xe4, 0x2, 0xb11, 0xb18, 0x5, 
       0x1c8, 0xe5, 0x2, 0xb12, 0xb13, 0x7, 0x53, 0x2, 0x2, 0xb13, 0xb18, 
       0x5, 0x1c4, 0xe3, 0x2, 0xb14, 0xb15, 0x7, 0x54, 0x2, 0x2, 0xb15, 
       0xb18, 0x5, 0x1c4, 0xe3, 0x2, 0xb16, 0xb18, 0x5, 0x1ca, 0xe6, 0x2, 
       0xb17, 0xb10, 0x3, 0x2, 0x2, 0x2, 0xb17, 0xb11, 0x3, 0x2, 0x2, 0x2, 
       0xb17, 0xb12, 0x3, 0x2, 0x2, 0x2, 0xb17, 0xb14, 0x3, 0x2, 0x2, 0x2, 
       0xb17, 0xb16, 0x3, 0x2, 0x2, 0x2, 0xb18, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
       0xb19, 0xb1a, 0x7, 0x51, 0x2, 0x2, 0xb1a, 0xb1b, 0x5, 0x1c4, 0xe3, 
       0x2, 0xb1b, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0xb1c, 0xb1d, 0x7, 0x52, 0x2, 
       0x2, 0xb1d, 0xb1e, 0x5, 0x1c4, 0xe3, 0x2, 0xb1e, 0x1c9, 0x3, 0x2, 
       0x2, 0x2, 0xb1f, 0xb26, 0x5, 0x1cc, 0xe7, 0x2, 0xb20, 0xb21, 0x7, 
       0x48, 0x2, 0x2, 0xb21, 0xb26, 0x5, 0x1c4, 0xe3, 0x2, 0xb22, 0xb23, 
       0x7, 0x47, 0x2, 0x2, 0xb23, 0xb26, 0x5, 0x1c4, 0xe3, 0x2, 0xb24, 
       0xb26, 0x5, 0x1d6, 0xec, 0x2, 0xb25, 0xb1f, 0x3, 0x2, 0x2, 0x2, 0xb25, 
       0xb20, 0x3, 0x2, 0x2, 0x2, 0xb25, 0xb22, 0x3, 0x2, 0x2, 0x2, 0xb25, 
       0xb24, 0x3, 0x2, 0x2, 0x2, 0xb26, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0xb27, 
       0xb2a, 0x5, 0x162, 0xb2, 0x2, 0xb28, 0xb2a, 0x5, 0x3a, 0x1e, 0x2, 
       0xb29, 0xb27, 0x3, 0x2, 0x2, 0x2, 0xb29, 0xb28, 0x3, 0x2, 0x2, 0x2, 
       0xb2a, 0xb2f, 0x3, 0x2, 0x2, 0x2, 0xb2b, 0xb2e, 0x5, 0x1d0, 0xe9, 
       0x2, 0xb2c, 0xb2e, 0x5, 0x1d4, 0xeb, 0x2, 0xb2d, 0xb2b, 0x3, 0x2, 
       0x2, 0x2, 0xb2d, 0xb2c, 0x3, 0x2, 0x2, 0x2, 0xb2e, 0xb31, 0x3, 0x2, 
       0x2, 0x2, 0xb2f, 0xb2d, 0x3, 0x2, 0x2, 0x2, 0xb2f, 0xb30, 0x3, 0x2, 
       0x2, 0x2, 0xb30, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0xb31, 0xb2f, 0x3, 0x2, 
       0x2, 0x2, 0xb32, 0xb33, 0x5, 0x1cc, 0xe7, 0x2, 0xb33, 0xb34, 0x7, 
       0x51, 0x2, 0x2, 0xb34, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0xb35, 0xb36, 0x7, 
       0x51, 0x2, 0x2, 0xb36, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0xb37, 0xb38, 0x5, 
       0x1cc, 0xe7, 0x2, 0xb38, 0xb39, 0x7, 0x52, 0x2, 0x2, 0xb39, 0x1d3, 
       0x3, 0x2, 0x2, 0x2, 0xb3a, 0xb3b, 0x7, 0x52, 0x2, 0x2, 0xb3b, 0x1d5, 
       0x3, 0x2, 0x2, 0x2, 0xb3c, 0xb3d, 0x7, 0x3b, 0x2, 0x2, 0xb3d, 0xb3e, 
       0x5, 0x6, 0x4, 0x2, 0xb3e, 0xb3f, 0x7, 0x3c, 0x2, 0x2, 0xb3f, 0xb40, 
       0x5, 0x1c4, 0xe3, 0x2, 0xb40, 0xb58, 0x3, 0x2, 0x2, 0x2, 0xb41, 0xb42, 
       0x7, 0x3b, 0x2, 0x2, 0xb42, 0xb46, 0x5, 0xe, 0x8, 0x2, 0xb43, 0xb45, 
       0x5, 0x2a, 0x16, 0x2, 0xb44, 0xb43, 0x3, 0x2, 0x2, 0x2, 0xb45, 0xb48, 
       0x3, 0x2, 0x2, 0x2, 0xb46, 0xb44, 0x3, 0x2, 0x2, 0x2, 0xb46, 0xb47, 
       0x3, 0x2, 0x2, 0x2, 0xb47, 0xb49, 0x3, 0x2, 0x2, 0x2, 0xb48, 0xb46, 
       0x3, 0x2, 0x2, 0x2, 0xb49, 0xb4a, 0x7, 0x3c, 0x2, 0x2, 0xb4a, 0xb4b, 
       0x5, 0x1ca, 0xe6, 0x2, 0xb4b, 0xb58, 0x3, 0x2, 0x2, 0x2, 0xb4c, 0xb4d, 
       0x7, 0x3b, 0x2, 0x2, 0xb4d, 0xb51, 0x5, 0xe, 0x8, 0x2, 0xb4e, 0xb50, 
       0x5, 0x2a, 0x16, 0x2, 0xb4f, 0xb4e, 0x3, 0x2, 0x2, 0x2, 0xb50, 0xb53, 
       0x3, 0x2, 0x2, 0x2, 0xb51, 0xb4f, 0x3, 0x2, 0x2, 0x2, 0xb51, 0xb52, 
       0x3, 0x2, 0x2, 0x2, 0xb52, 0xb54, 0x3, 0x2, 0x2, 0x2, 0xb53, 0xb51, 
       0x3, 0x2, 0x2, 0x2, 0xb54, 0xb55, 0x7, 0x3c, 0x2, 0x2, 0xb55, 0xb56, 
       0x5, 0x1a0, 0xd1, 0x2, 0xb56, 0xb58, 0x3, 0x2, 0x2, 0x2, 0xb57, 0xb3c, 
       0x3, 0x2, 0x2, 0x2, 0xb57, 0xb41, 0x3, 0x2, 0x2, 0x2, 0xb57, 0xb4c, 
       0x3, 0x2, 0x2, 0x2, 0xb58, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0xb59, 0xb5a, 
       0x5, 0x19e, 0xd0, 0x2, 0xb5a, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x146, 0x1de, 
       0x1e3, 0x1ea, 0x1ee, 0x1f2, 0x1fb, 0x1ff, 0x203, 0x205, 0x20b, 0x210, 
       0x217, 0x21c, 0x21e, 0x224, 0x229, 0x22e, 0x233, 0x23e, 0x24c, 0x251, 
       0x259, 0x260, 0x266, 0x26b, 0x276, 0x279, 0x287, 0x28c, 0x291, 0x296, 
       0x29c, 0x2a3, 0x2ad, 0x2b5, 0x2c1, 0x2cc, 0x2d0, 0x2d5, 0x2db, 0x2e3, 
       0x2ec, 0x2f7, 0x314, 0x318, 0x31d, 0x323, 0x326, 0x329, 0x335, 0x340, 
       0x34e, 0x355, 0x35e, 0x365, 0x36a, 0x379, 0x380, 0x386, 0x38a, 0x38e, 
       0x392, 0x396, 0x39b, 0x39f, 0x3a3, 0x3a5, 0x3aa, 0x3b1, 0x3b6, 0x3b8, 
       0x3be, 0x3c3, 0x3c7, 0x3da, 0x3df, 0x3ef, 0x3f4, 0x3fa, 0x400, 0x402, 
       0x406, 0x40b, 0x40f, 0x417, 0x41e, 0x426, 0x429, 0x42e, 0x436, 0x43b, 
       0x442, 0x449, 0x44e, 0x45f, 0x464, 0x468, 0x472, 0x477, 0x47f, 0x482, 
       0x487, 0x48f, 0x492, 0x497, 0x49c, 0x4a1, 0x4a6, 0x4ad, 0x4b2, 0x4ba, 
       0x4bf, 0x4c4, 0x4c9, 0x4cf, 0x4d5, 0x4d9, 0x4e2, 0x4e8, 0x4ee, 0x4f1, 
       0x4f4, 0x4fc, 0x501, 0x506, 0x50c, 0x50f, 0x51a, 0x523, 0x52d, 0x532, 
       0x53d, 0x542, 0x54e, 0x553, 0x55f, 0x569, 0x56e, 0x576, 0x579, 0x580, 
       0x588, 0x58e, 0x597, 0x5a1, 0x5a5, 0x5a8, 0x5b1, 0x5bf, 0x5c2, 0x5cb, 
       0x5d0, 0x5d8, 0x5de, 0x5e6, 0x5f2, 0x5f9, 0x607, 0x61d, 0x63f, 0x64b, 
       0x651, 0x65d, 0x66a, 0x684, 0x688, 0x68d, 0x691, 0x695, 0x69d, 0x6a1, 
       0x6a5, 0x6ac, 0x6b5, 0x6bd, 0x6cc, 0x6d8, 0x6de, 0x6e4, 0x6ea, 0x6fb, 
       0x700, 0x706, 0x712, 0x71d, 0x727, 0x72a, 0x72f, 0x738, 0x73e, 0x748, 
       0x74d, 0x756, 0x76d, 0x777, 0x78d, 0x794, 0x79c, 0x7a4, 0x7af, 0x7c6, 
       0x7d0, 0x7db, 0x7f1, 0x7f5, 0x7fa, 0x802, 0x808, 0x80c, 0x810, 0x814, 
       0x81a, 0x81f, 0x824, 0x828, 0x82c, 0x832, 0x837, 0x83c, 0x840, 0x844, 
       0x846, 0x84b, 0x850, 0x855, 0x859, 0x85d, 0x861, 0x866, 0x86e, 0x874, 
       0x878, 0x87c, 0x880, 0x886, 0x88b, 0x890, 0x894, 0x898, 0x89a, 0x89f, 
       0x8ae, 0x8bc, 0x8c8, 0x8d1, 0x8e0, 0x8ed, 0x8f6, 0x8fc, 0x903, 0x908, 
       0x90f, 0x914, 0x91b, 0x920, 0x927, 0x92c, 0x934, 0x939, 0x93d, 0x941, 
       0x946, 0x94d, 0x954, 0x959, 0x960, 0x965, 0x96c, 0x971, 0x979, 0x97e, 
       0x982, 0x989, 0x98f, 0x996, 0x99d, 0x9a4, 0x9ac, 0x9b3, 0x9bb, 0x9bf, 
       0x9c6, 0x9cd, 0x9d4, 0x9dc, 0x9e3, 0x9eb, 0x9f1, 0x9f7, 0xa03, 0xa09, 
       0xa0f, 0xa18, 0xa21, 0xa28, 0xa2f, 0xa34, 0xa38, 0xa6a, 0xa6f, 0xa7e, 
       0xa88, 0xa93, 0xa9e, 0xaa9, 0xab4, 0xac0, 0xac2, 0xad7, 0xad9, 0xaec, 
       0xaee, 0xafa, 0xafc, 0xb0b, 0xb0d, 0xb17, 0xb25, 0xb29, 0xb2d, 0xb2f, 
       0xb46, 0xb51, 0xb57, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Java8Parser::Initializer Java8Parser::_init;
