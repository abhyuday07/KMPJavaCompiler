
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
    setState(474);
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
    setState(478);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(476);
      primitivetype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(477);
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
    setState(494);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(483);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(480);
        annotation();
        setState(485);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(486);
      numerictype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(490);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(487);
        annotation();
        setState(492);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(493);
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
    setState(498);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT: {
        enterOuterAlt(_localctx, 1);
        setState(496);
        integraltype();
        break;
      }

      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(497);
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
    setState(500);
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
    setState(502);
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
    setState(507);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(504);
      classOrInterfaceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(505);
      typeVariable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(506);
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
    setState(511);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(509);
      classType__2__classOrInterfaceType();
      break;
    }

    case 2: {
      setState(510);
      interfaceType__2__classOrInterfaceType();
      break;
    }

    }
    setState(517);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(515);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(513);
          classType__1__classOrInterfaceType();
          break;
        }

        case 2: {
          setState(514);
          interfaceType__1__classOrInterfaceType();
          break;
        }

        } 
      }
      setState(519);
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
    setState(542);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(523);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(520);
        annotation();
        setState(525);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(526);
      match(Java8Parser::Identifier);
      setState(528);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(527);
        typeArguments();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(530);
      classOrInterfaceType();
      setState(531);
      match(Java8Parser::DOT);
      setState(535);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(532);
        annotation();
        setState(537);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(538);
      match(Java8Parser::Identifier);
      setState(540);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(539);
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
    setState(544);
    match(Java8Parser::DOT);
    setState(548);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(545);
      annotation();
      setState(550);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(551);
    match(Java8Parser::Identifier);
    setState(553);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(552);
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
    setState(558);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(555);
      annotation();
      setState(560);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(561);
    match(Java8Parser::Identifier);
    setState(563);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(562);
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
    setState(565);
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
    setState(567);
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
    setState(569);
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
    setState(574);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(571);
      annotation();
      setState(576);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(577);
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
    setState(588);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(579);
      primitivetype();
      setState(580);
      dims();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(582);
      classOrInterfaceType();
      setState(583);
      dims();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(585);
      typeVariable();
      setState(586);
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
    setState(593);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(590);
      annotation();
      setState(595);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(596);
    match(Java8Parser::LBRACK);
    setState(597);
    match(Java8Parser::RBRACK);
    setState(608);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(601);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(598);
          annotation();
          setState(603);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(604);
        match(Java8Parser::LBRACK);
        setState(605);
        match(Java8Parser::RBRACK); 
      }
      setState(610);
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
    setState(614);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(611);
      typeParameterModifier();
      setState(616);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(617);
    match(Java8Parser::Identifier);
    setState(619);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(618);
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
    setState(621);
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
    setState(633);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(623);
      match(Java8Parser::EXTENDS);
      setState(624);
      typeVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(625);
      match(Java8Parser::EXTENDS);
      setState(626);
      classOrInterfaceType();
      setState(630);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(627);
        additionalBound();
        setState(632);
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
    setState(635);
    match(Java8Parser::BITAND);
    setState(636);
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
    setState(638);
    match(Java8Parser::LT);
    setState(639);
    typeArgumentList();
    setState(640);
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
    setState(642);
    typeArgument();
    setState(647);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(643);
      match(Java8Parser::COMMA);
      setState(644);
      typeArgument();
      setState(649);
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
    setState(652);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(650);
      referencetype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(651);
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
    setState(657);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(654);
      annotation();
      setState(659);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(660);
    match(Java8Parser::QUESTION);
    setState(662);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS

    || _la == Java8Parser::SUPER) {
      setState(661);
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
    setState(668);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::EXTENDS: {
        enterOuterAlt(_localctx, 1);
        setState(664);
        match(Java8Parser::EXTENDS);
        setState(665);
        referencetype();
        break;
      }

      case Java8Parser::SUPER: {
        enterOuterAlt(_localctx, 2);
        setState(666);
        match(Java8Parser::SUPER);
        setState(667);
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
    setState(675);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(670);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(671);
      packageOrtypeName(0);
      setState(672);
      match(Java8Parser::DOT);
      setState(673);
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
    setState(678);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(685);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PackageOrtypeNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePackageOrtypeName);
        setState(680);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(681);
        match(Java8Parser::DOT);
        setState(682);
        match(Java8Parser::Identifier); 
      }
      setState(687);
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
    setState(693);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(688);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(689);
      ambiguousName(0);
      setState(690);
      matchWildcard();
      setState(691);
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
    setState(695);
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
    setState(698);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(705);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PackageNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePackageName);
        setState(700);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(701);
        match(Java8Parser::DOT);
        setState(702);
        match(Java8Parser::Identifier); 
      }
      setState(707);
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
    setState(709);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(716);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AmbiguousNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAmbiguousName);
        setState(711);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(712);
        match(Java8Parser::DOT);
        setState(713);
        match(Java8Parser::Identifier); 
      }
      setState(718);
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
    setState(720);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(719);
      packageDeclaration();
      break;
    }

    }
    setState(725);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::IMPORT) {
      setState(722);
      importDeclaration();
      setState(727);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(731);
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
      setState(728);
      typeDeclaration();
      setState(733);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(734);
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
    setState(739);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(736);
      packageModifier();
      setState(741);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(742);
    match(Java8Parser::PACKAGE);
    setState(743);
    match(Java8Parser::Identifier);
    setState(748);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::DOT) {
      setState(744);
      match(Java8Parser::DOT);
      setState(745);
      match(Java8Parser::Identifier);
      setState(750);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(751);
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
    setState(753);
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
    setState(759);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(755);
      singletypeImportDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(756);
      typeImportOnDemandDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(757);
      singleStaticImportDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(758);
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
    setState(761);
    match(Java8Parser::IMPORT);
    setState(762);
    typeName();
    setState(763);
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
    setState(765);
    match(Java8Parser::IMPORT);
    setState(766);
    packageOrtypeName(0);
    setState(767);
    match(Java8Parser::DOT);
    setState(768);
    match(Java8Parser::MUL);
    setState(769);
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
    setState(771);
    match(Java8Parser::IMPORT);
    setState(772);
    match(Java8Parser::STATIC);
    setState(773);
    typeName();
    setState(774);
    match(Java8Parser::DOT);
    setState(775);
    match(Java8Parser::Identifier);
    setState(776);
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
    setState(778);
    match(Java8Parser::IMPORT);
    setState(779);
    match(Java8Parser::STATIC);
    setState(780);
    typeName();
    setState(781);
    match(Java8Parser::DOT);
    setState(782);
    match(Java8Parser::MUL);
    setState(783);
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
    setState(788);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(785);
      classDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(786);
      interfaceDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(787);
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
    setState(792);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(790);
      normalclassDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(791);
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
    setState(797);
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
      setState(794);
      classModifier();
      setState(799);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(800);
    match(Java8Parser::CLASS);
    setState(801);
    match(Java8Parser::Identifier);
    setState(803);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(802);
      typeParameters();
    }
    setState(806);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(805);
      superclass();
    }
    setState(809);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::IMPLEMENTS) {
      setState(808);
      superinterfaces();
    }
    setState(811);
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
    setState(821);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(813);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(814);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(815);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(816);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(817);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(818);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(819);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 8);
        setState(820);
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
    setState(823);
    match(Java8Parser::LT);
    setState(824);
    typeParameterList();
    setState(825);
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
    setState(827);
    typeParameter();
    setState(832);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(828);
      match(Java8Parser::COMMA);
      setState(829);
      typeParameter();
      setState(834);
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
    setState(835);
    match(Java8Parser::EXTENDS);
    setState(836);
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
    setState(838);
    match(Java8Parser::IMPLEMENTS);
    setState(839);
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
    setState(841);
    interfacetype();
    setState(846);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(842);
      match(Java8Parser::COMMA);
      setState(843);
      interfacetype();
      setState(848);
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
    setState(849);
    match(Java8Parser::LBRACE);
    setState(853);
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
      setState(850);
      classBodyDeclaration();
      setState(855);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(856);
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
    setState(862);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(858);
      classMemberDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(859);
      instanceInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(860);
      staticInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(861);
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
    setState(869);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(864);
      fieldDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(865);
      methodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(866);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(867);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(868);
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
    setState(874);
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
      setState(871);
      fieldModifier();
      setState(876);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(877);
    unanntype();
    setState(878);
    variableDeclaratorList();
    setState(879);
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
    setState(889);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(881);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(882);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(883);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(884);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(885);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 6);
        setState(886);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::TRANSIENT: {
        enterOuterAlt(_localctx, 7);
        setState(887);
        match(Java8Parser::TRANSIENT);
        break;
      }

      case Java8Parser::VOLATILE: {
        enterOuterAlt(_localctx, 8);
        setState(888);
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
    setState(891);
    variableDeclarator();
    setState(896);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(892);
      match(Java8Parser::COMMA);
      setState(893);
      variableDeclarator();
      setState(898);
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
    setState(899);
    variableDeclaratorId();
    setState(902);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::ASSIGN) {
      setState(900);
      match(Java8Parser::ASSIGN);
      setState(901);
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
    setState(904);
    match(Java8Parser::Identifier);
    setState(906);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(905);
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
    setState(910);
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
        setState(908);
        expression();
        break;
      }

      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(909);
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
    setState(914);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(912);
      unannPrimitiveType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(913);
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
    setState(918);
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
        setState(916);
        numerictype();
        break;
      }

      case Java8Parser::BOOLEAN: {
        enterOuterAlt(_localctx, 2);
        setState(917);
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
    setState(923);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(920);
      unannClassOrInterfaceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(921);
      unanntypeVariable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(922);
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
    setState(927);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(925);
      unannClassType__2__unannClassOrInterfaceType();
      break;
    }

    case 2: {
      setState(926);
      unannInterfaceType__2__unannClassOrInterfaceType();
      break;
    }

    }
    setState(933);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(931);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
        case 1: {
          setState(929);
          unannClassType__1__unannClassOrInterfaceType();
          break;
        }

        case 2: {
          setState(930);
          unannInterfaceType__1__unannClassOrInterfaceType();
          break;
        }

        } 
      }
      setState(935);
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
    setState(952);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(936);
      match(Java8Parser::Identifier);
      setState(938);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(937);
        typeArguments();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(940);
      unannClassOrInterfaceType();
      setState(941);
      match(Java8Parser::DOT);
      setState(945);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(942);
        annotation();
        setState(947);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(948);
      match(Java8Parser::Identifier);
      setState(950);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(949);
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
    setState(954);
    match(Java8Parser::DOT);
    setState(958);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(955);
      annotation();
      setState(960);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(961);
    match(Java8Parser::Identifier);
    setState(963);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(962);
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
    setState(965);
    match(Java8Parser::Identifier);
    setState(967);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(966);
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
    setState(969);
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
    setState(971);
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
    setState(973);
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
    setState(975);
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
    setState(986);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(977);
      unannPrimitiveType();
      setState(978);
      dims();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(980);
      unannClassOrInterfaceType();
      setState(981);
      dims();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(983);
      unanntypeVariable();
      setState(984);
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
    setState(991);
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
      setState(988);
      methodModifier();
      setState(993);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(994);
    methodHeader();
    setState(995);
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
    setState(1007);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(997);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(998);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(999);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1000);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(1001);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(1002);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(1003);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 8);
        setState(1004);
        match(Java8Parser::SYNCHRONIZED);
        break;
      }

      case Java8Parser::NATIVE: {
        enterOuterAlt(_localctx, 9);
        setState(1005);
        match(Java8Parser::NATIVE);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 10);
        setState(1006);
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
    setState(1026);
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
        setState(1009);
        result();
        setState(1010);
        methodDeclarator();
        setState(1012);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::THROWS) {
          setState(1011);
          throws_();
        }
        break;
      }

      case Java8Parser::LT: {
        enterOuterAlt(_localctx, 2);
        setState(1014);
        typeParameters();
        setState(1018);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(1015);
          annotation();
          setState(1020);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1021);
        result();
        setState(1022);
        methodDeclarator();
        setState(1024);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::THROWS) {
          setState(1023);
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
    setState(1030);
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
        setState(1028);
        unanntype();
        break;
      }

      case Java8Parser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(1029);
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
    setState(1032);
    match(Java8Parser::Identifier);
    setState(1033);
    match(Java8Parser::LPAREN);
    setState(1035);
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
      setState(1034);
      formalParameterList();
    }
    setState(1037);
    match(Java8Parser::RPAREN);
    setState(1039);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(1038);
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
    setState(1047);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1041);
      receiverParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1042);
      formalParameters();
      setState(1043);
      match(Java8Parser::COMMA);
      setState(1044);
      lastFormalParameter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1046);
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
    setState(1065);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1049);
      formalParameter();
      setState(1054);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1050);
          match(Java8Parser::COMMA);
          setState(1051);
          formalParameter(); 
        }
        setState(1056);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1057);
      receiverParameter();
      setState(1062);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1058);
          match(Java8Parser::COMMA);
          setState(1059);
          formalParameter(); 
        }
        setState(1064);
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
    setState(1070);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1067);
      variableModifier();
      setState(1072);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1073);
    unanntype();
    setState(1074);
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
    setState(1078);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1076);
        annotation();
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 2);
        setState(1077);
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
    setState(1097);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1083);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
        setState(1080);
        variableModifier();
        setState(1085);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1086);
      unanntype();
      setState(1090);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(1087);
        annotation();
        setState(1092);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1093);
      match(Java8Parser::ELLIPSIS);
      setState(1094);
      variableDeclaratorId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1096);
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
    setState(1102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(1099);
      annotation();
      setState(1104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1105);
    unanntype();

    setState(1106);
    match(Java8Parser::Identifier);
    setState(1107);
    match(Java8Parser::DOT);
    setState(1109);
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
    setState(1111);
    match(Java8Parser::THROWS);
    setState(1112);
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
    setState(1114);
    exceptiontype();
    setState(1119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1115);
      match(Java8Parser::COMMA);
      setState(1116);
      exceptiontype();
      setState(1121);
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
    setState(1124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1122);
      classtype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1123);
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
    setState(1128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1126);
        block();
        break;
      }

      case Java8Parser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(1127);
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
    setState(1130);
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
    setState(1132);
    match(Java8Parser::STATIC);
    setState(1133);
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
    setState(1138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC))) != 0) || _la == Java8Parser::AT) {
      setState(1135);
      constructionModifier();
      setState(1140);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1141);
    constructorDeclarator();
    setState(1143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::THROWS) {
      setState(1142);
      throws_();
    }
    setState(1145);
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
    setState(1151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1147);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1148);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(1149);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1150);
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
    setState(1154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(1153);
      typeParameters();
    }
    setState(1156);
    simpletypeName();
    setState(1157);
    match(Java8Parser::LPAREN);
    setState(1159);
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
      setState(1158);
      formalParameterList();
    }
    setState(1161);
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
    setState(1163);
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
    setState(1165);
    match(Java8Parser::LBRACE);
    setState(1167);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      setState(1166);
      explicitconstructorInvocation();
      break;
    }

    }
    setState(1170);
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
      setState(1169);
      blockStatements();
    }
    setState(1172);
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
    setState(1220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1175);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1174);
        typeArguments();
      }
      setState(1177);
      match(Java8Parser::THIS);
      setState(1178);
      match(Java8Parser::LPAREN);
      setState(1180);
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
        setState(1179);
        argumentList();
      }
      setState(1182);
      match(Java8Parser::RPAREN);
      setState(1183);
      match(Java8Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1185);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1184);
        typeArguments();
      }
      setState(1187);
      match(Java8Parser::SUPER);
      setState(1188);
      match(Java8Parser::LPAREN);
      setState(1190);
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
        setState(1189);
        argumentList();
      }
      setState(1192);
      match(Java8Parser::RPAREN);
      setState(1193);
      match(Java8Parser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1194);
      expressionName();
      setState(1195);
      match(Java8Parser::DOT);
      setState(1197);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1196);
        typeArguments();
      }
      setState(1199);
      match(Java8Parser::SUPER);
      setState(1200);
      match(Java8Parser::LPAREN);
      setState(1202);
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
        setState(1201);
        argumentList();
      }
      setState(1204);
      match(Java8Parser::RPAREN);
      setState(1205);
      match(Java8Parser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1207);
      primary();
      setState(1208);
      match(Java8Parser::DOT);
      setState(1210);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1209);
        typeArguments();
      }
      setState(1212);
      match(Java8Parser::SUPER);
      setState(1213);
      match(Java8Parser::LPAREN);
      setState(1215);
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
        setState(1214);
        argumentList();
      }
      setState(1217);
      match(Java8Parser::RPAREN);
      setState(1218);
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
    setState(1225);
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
      setState(1222);
      classModifier();
      setState(1227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1228);
    match(Java8Parser::ENUM);
    setState(1229);
    match(Java8Parser::Identifier);
    setState(1231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::IMPLEMENTS) {
      setState(1230);
      superinterfaces();
    }
    setState(1233);
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
    setState(1235);
    match(Java8Parser::LBRACE);
    setState(1237);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1236);
      enumconstantList();
    }
    setState(1239);
    match(Java8Parser::COMMA);
    setState(1241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::SEMI) {
      setState(1240);
      enumBodyDeclarations();
    }
    setState(1243);
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
    setState(1245);
    enumconstant();
    setState(1250);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1246);
        match(Java8Parser::COMMA);
        setState(1247);
        enumconstant(); 
      }
      setState(1252);
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
    setState(1256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(1253);
      enumconstantModifier();
      setState(1258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1259);
    match(Java8Parser::Identifier);
    setState(1265);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LPAREN) {
      setState(1260);
      match(Java8Parser::LPAREN);
      setState(1262);
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
        setState(1261);
        argumentList();
      }
      setState(1264);
      match(Java8Parser::RPAREN);
    }
    setState(1268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACE) {
      setState(1267);
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
    setState(1270);
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
    setState(1272);
    match(Java8Parser::SEMI);
    setState(1276);
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
      setState(1273);
      classBodyDeclaration();
      setState(1278);
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
    setState(1281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1279);
      normalInterfaceDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1280);
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
    setState(1286);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1283);
      interfaceModifier();
      setState(1288);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1289);
    match(Java8Parser::INTERFACE);
    setState(1290);
    match(Java8Parser::Identifier);
    setState(1292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(1291);
      typeParameters();
    }
    setState(1295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(1294);
      extendsInterfaces();
    }
    setState(1297);
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
    setState(1306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1299);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1300);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(1301);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1302);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(1303);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(1304);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 7);
        setState(1305);
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
    setState(1308);
    match(Java8Parser::EXTENDS);
    setState(1309);
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
    setState(1311);
    match(Java8Parser::LBRACE);
    setState(1315);
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
      setState(1312);
      interfaceMemberDeclaration();
      setState(1317);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1318);
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
    setState(1325);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1320);
      constantDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1321);
      interfaceMethodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1322);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1323);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1324);
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
    setState(1330);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC))) != 0) || _la == Java8Parser::AT) {
      setState(1327);
      constantModifier();
      setState(1332);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1333);
    unanntype();
    setState(1334);
    variableDeclaratorList();
    setState(1335);
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
    setState(1341);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1337);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1338);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 3);
        setState(1339);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 4);
        setState(1340);
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
    setState(1346);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::DEFAULT)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1343);
      interfaceMethodModifier();
      setState(1348);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1349);
    methodHeader();
    setState(1350);
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
    setState(1358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1352);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1353);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(1354);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::DEFAULT: {
        enterOuterAlt(_localctx, 4);
        setState(1355);
        match(Java8Parser::DEFAULT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(1356);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 6);
        setState(1357);
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
    setState(1363);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1360);
        interfaceModifier(); 
      }
      setState(1365);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
    }
    setState(1366);
    match(Java8Parser::AT);
    setState(1367);
    match(Java8Parser::INTERFACE);
    setState(1368);
    match(Java8Parser::Identifier);
    setState(1369);
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
    setState(1371);
    match(Java8Parser::LBRACE);
    setState(1375);
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
      setState(1372);
      annotationtypeMemberDeclaration();
      setState(1377);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1378);
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
    setState(1385);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1380);
      annotationtypeElementDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1381);
      constantDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1382);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1383);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1384);
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
    setState(1390);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::ABSTRACT

    || _la == Java8Parser::PUBLIC || _la == Java8Parser::AT) {
      setState(1387);
      annotationtypeElementModifier();
      setState(1392);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1393);
    unanntype();
    setState(1394);
    match(Java8Parser::Identifier);
    setState(1395);
    match(Java8Parser::LPAREN);
    setState(1396);
    match(Java8Parser::RPAREN);
    setState(1398);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(1397);
      dims();
    }
    setState(1401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::DEFAULT) {
      setState(1400);
      defaultValue();
    }
    setState(1403);
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
    setState(1408);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1405);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1406);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(1407);
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
    setState(1410);
    match(Java8Parser::DEFAULT);
    setState(1411);
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
    setState(1416);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1413);
      normalAnnotation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1414);
      markerAnnotation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1415);
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
    setState(1418);
    match(Java8Parser::AT);
    setState(1419);
    typeName();
    setState(1420);
    match(Java8Parser::LPAREN);
    setState(1422);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1421);
      elementValuePairList();
    }
    setState(1424);
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
    setState(1426);
    elementValuePair();
    setState(1431);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1427);
      match(Java8Parser::COMMA);
      setState(1428);
      elementValuePair();
      setState(1433);
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
    setState(1434);
    match(Java8Parser::Identifier);
    setState(1435);
    match(Java8Parser::ASSIGN);
    setState(1436);
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
    setState(1441);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1438);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1439);
      elementValueArrayInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1440);
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
    setState(1443);
    match(Java8Parser::LBRACE);
    setState(1445);
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
      setState(1444);
      elementValueList();
    }
    setState(1448);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::DOT) {
      setState(1447);
      match(Java8Parser::DOT);
    }
    setState(1450);
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
    setState(1452);
    elementValue();
    setState(1457);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1453);
      match(Java8Parser::COMMA);
      setState(1454);
      elementValue();
      setState(1459);
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
    setState(1460);
    match(Java8Parser::AT);
    setState(1461);
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
    setState(1463);
    match(Java8Parser::AT);
    setState(1464);
    typeName();
    setState(1465);
    match(Java8Parser::LPAREN);
    setState(1466);
    elementValue();
    setState(1467);
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
    setState(1469);
    match(Java8Parser::LBRACE);
    setState(1471);
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
      setState(1470);
      variableInitializerList();
    }
    setState(1474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COMMA) {
      setState(1473);
      match(Java8Parser::COMMA);
    }
    setState(1476);
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
    setState(1478);
    variableInitializer();
    setState(1483);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1479);
        match(Java8Parser::COMMA);
        setState(1480);
        variableInitializer(); 
      }
      setState(1485);
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
    setState(1486);
    match(Java8Parser::LBRACE);
    setState(1488);
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
      setState(1487);
      blockStatements();
    }
    setState(1490);
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
    setState(1492);
    blockStatement();
    setState(1496);
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
      setState(1493);
      blockStatement();
      setState(1498);
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
    setState(1502);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1499);
      localVariableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1500);
      classDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1501);
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
    setState(1504);
    localVariableDeclaration();
    setState(1505);
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
    setState(1510);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1507);
      variableModifier();
      setState(1512);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1513);
    unanntype();
    setState(1514);
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
    setState(1522);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1516);
      statementWithoutTrailingSubstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1517);
      labeledStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1518);
      ifThenStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1519);
      ifThenElseStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1520);
      whileStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1521);
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
    setState(1529);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1524);
      statementWithoutTrailingSubstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1525);
      labeledStatementNoShortIf();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1526);
      ifThenElseStatementNoShortIf();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1527);
      whileStatementNoShortIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1528);
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
    setState(1543);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1531);
        block();
        break;
      }

      case Java8Parser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(1532);
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
        setState(1533);
        expressionStatement();
        break;
      }

      case Java8Parser::ASSERT: {
        enterOuterAlt(_localctx, 4);
        setState(1534);
        assertStatement();
        break;
      }

      case Java8Parser::SWITCH: {
        enterOuterAlt(_localctx, 5);
        setState(1535);
        switchStatement();
        break;
      }

      case Java8Parser::DO: {
        enterOuterAlt(_localctx, 6);
        setState(1536);
        doStatement();
        break;
      }

      case Java8Parser::BREAK: {
        enterOuterAlt(_localctx, 7);
        setState(1537);
        breakStatement();
        break;
      }

      case Java8Parser::CONTINUE: {
        enterOuterAlt(_localctx, 8);
        setState(1538);
        continueStatement();
        break;
      }

      case Java8Parser::RETURN: {
        enterOuterAlt(_localctx, 9);
        setState(1539);
        returnStatement();
        break;
      }

      case Java8Parser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 10);
        setState(1540);
        synchronizedStatement();
        break;
      }

      case Java8Parser::THROW: {
        enterOuterAlt(_localctx, 11);
        setState(1541);
        throwStatement();
        break;
      }

      case Java8Parser::TRY: {
        enterOuterAlt(_localctx, 12);
        setState(1542);
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
    setState(1545);
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
    setState(1547);
    match(Java8Parser::Identifier);
    setState(1548);
    match(Java8Parser::COLON);
    setState(1549);
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
    setState(1551);
    match(Java8Parser::Identifier);
    setState(1552);
    match(Java8Parser::COLON);
    setState(1553);
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
    setState(1555);
    statementExpression();
    setState(1556);
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
    setState(1565);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1558);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1559);
      preIncrementExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1560);
      preDecrementExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1561);
      postIncrementExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1562);
      postDecrementExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1563);
      methodInvocation();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1564);
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
    setState(1567);
    match(Java8Parser::IF);
    setState(1568);
    match(Java8Parser::LPAREN);
    setState(1569);
    expression();
    setState(1570);
    match(Java8Parser::RPAREN);
    setState(1571);
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
    setState(1573);
    match(Java8Parser::IF);
    setState(1574);
    match(Java8Parser::LPAREN);
    setState(1575);
    expression();
    setState(1576);
    match(Java8Parser::RPAREN);
    setState(1577);
    statementNoShortIf();
    setState(1578);
    match(Java8Parser::ELSE);
    setState(1579);
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
    setState(1581);
    match(Java8Parser::IF);
    setState(1582);
    match(Java8Parser::LPAREN);
    setState(1583);
    expression();
    setState(1584);
    match(Java8Parser::RPAREN);
    setState(1585);
    statementNoShortIf();
    setState(1586);
    match(Java8Parser::ELSE);
    setState(1587);
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
    setState(1599);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1589);
      match(Java8Parser::ASSERT);
      setState(1590);
      expression();
      setState(1591);
      match(Java8Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1593);
      match(Java8Parser::ASSERT);
      setState(1594);
      expression();
      setState(1595);
      match(Java8Parser::COLON);
      setState(1596);
      expression();
      setState(1597);
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
    setState(1601);
    match(Java8Parser::SWITCH);
    setState(1602);
    match(Java8Parser::LPAREN);
    setState(1603);
    expression();
    setState(1604);
    match(Java8Parser::RPAREN);
    setState(1605);
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
    setState(1607);
    match(Java8Parser::LBRACE);
    setState(1611);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1608);
        switchBlockStatementGroup(); 
      }
      setState(1613);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    }
    setState(1617);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CASE

    || _la == Java8Parser::DEFAULT) {
      setState(1614);
      switchLabel();
      setState(1619);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1620);
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
    setState(1622);
    switchLabels();
    setState(1623);
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
    setState(1625);
    switchLabel();
    setState(1629);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CASE

    || _la == Java8Parser::DEFAULT) {
      setState(1626);
      switchLabel();
      setState(1631);
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
    setState(1642);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1632);
      match(Java8Parser::CASE);
      setState(1633);
      constantExpression();
      setState(1634);
      match(Java8Parser::COLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1636);
      match(Java8Parser::CASE);
      setState(1637);
      enumconstantName();
      setState(1638);
      match(Java8Parser::COLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1640);
      match(Java8Parser::DEFAULT);
      setState(1641);
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
    setState(1644);
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
    setState(1646);
    match(Java8Parser::WHILE);
    setState(1647);
    match(Java8Parser::LPAREN);
    setState(1648);
    expression();
    setState(1649);
    match(Java8Parser::RPAREN);
    setState(1650);
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
    setState(1652);
    match(Java8Parser::WHILE);
    setState(1653);
    match(Java8Parser::LPAREN);
    setState(1654);
    expression();
    setState(1655);
    match(Java8Parser::RPAREN);
    setState(1656);
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
    setState(1658);
    match(Java8Parser::DO);
    setState(1659);
    statement();
    setState(1660);
    match(Java8Parser::WHILE);
    setState(1661);
    match(Java8Parser::LPAREN);
    setState(1662);
    expression();
    setState(1663);
    match(Java8Parser::RPAREN);
    setState(1664);
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
    setState(1668);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1666);
      basicForStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1667);
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
    setState(1672);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1670);
      basicForStatementNoShortIf();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1671);
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
    setState(1674);
    match(Java8Parser::FOR);
    setState(1675);
    match(Java8Parser::LPAREN);
    setState(1677);
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
      setState(1676);
      forInit();
    }
    setState(1679);
    match(Java8Parser::SEMI);
    setState(1681);
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
      setState(1680);
      expression();
    }
    setState(1683);
    match(Java8Parser::SEMI);
    setState(1685);
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
      setState(1684);
      forUpdate();
    }
    setState(1687);
    match(Java8Parser::RPAREN);
    setState(1688);
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
    setState(1690);
    match(Java8Parser::FOR);
    setState(1691);
    match(Java8Parser::LPAREN);
    setState(1693);
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
      setState(1692);
      forInit();
    }
    setState(1695);
    match(Java8Parser::SEMI);
    setState(1697);
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
      setState(1696);
      expression();
    }
    setState(1699);
    match(Java8Parser::SEMI);
    setState(1701);
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
      setState(1700);
      forUpdate();
    }
    setState(1703);
    match(Java8Parser::RPAREN);
    setState(1704);
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
    setState(1708);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1706);
      statementExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1707);
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
    setState(1710);
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
    setState(1712);
    statementExpression();
    setState(1717);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1713);
      match(Java8Parser::COMMA);
      setState(1714);
      statementExpression();
      setState(1719);
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
    setState(1720);
    match(Java8Parser::FOR);
    setState(1721);
    match(Java8Parser::LPAREN);
    setState(1725);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1722);
      variableModifier();
      setState(1727);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1728);
    unanntype();
    setState(1729);
    variableDeclaratorId();
    setState(1730);
    match(Java8Parser::COLON);
    setState(1731);
    expression();
    setState(1732);
    match(Java8Parser::RPAREN);
    setState(1733);
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
    setState(1735);
    match(Java8Parser::FOR);
    setState(1736);
    match(Java8Parser::LPAREN);
    setState(1740);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1737);
      variableModifier();
      setState(1742);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1743);
    unanntype();
    setState(1744);
    variableDeclaratorId();
    setState(1745);
    match(Java8Parser::COLON);
    setState(1746);
    expression();
    setState(1747);
    match(Java8Parser::RPAREN);
    setState(1748);
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
    setState(1750);
    match(Java8Parser::BREAK);
    setState(1752);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1751);
      match(Java8Parser::Identifier);
    }
    setState(1754);
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
    setState(1756);
    match(Java8Parser::CONTINUE);
    setState(1758);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1757);
      match(Java8Parser::Identifier);
    }
    setState(1760);
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
    setState(1762);
    match(Java8Parser::RETURN);
    setState(1764);
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
      setState(1763);
      expression();
    }
    setState(1766);
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
    setState(1768);
    match(Java8Parser::THROW);
    setState(1770);
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
      setState(1769);
      expression();
    }
    setState(1772);
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
    setState(1774);
    match(Java8Parser::SYNCHRONIZED);
    setState(1775);
    match(Java8Parser::LPAREN);
    setState(1776);
    expression();
    setState(1777);
    match(Java8Parser::RPAREN);
    setState(1778);
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
    setState(1792);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1780);
      match(Java8Parser::TRY);
      setState(1781);
      block();
      setState(1782);
      catches();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1784);
      match(Java8Parser::TRY);
      setState(1785);
      block();
      setState(1787);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::CATCH) {
        setState(1786);
        catches();
      }
      setState(1789);
      finally_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1791);
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
    setState(1794);
    catchclause();
    setState(1798);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CATCH) {
      setState(1795);
      catchclause();
      setState(1800);
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
    setState(1801);
    match(Java8Parser::CATCH);
    setState(1802);
    match(Java8Parser::LPAREN);
    setState(1803);
    catchFormalParameter();
    setState(1804);
    match(Java8Parser::RPAREN);
    setState(1805);
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
    setState(1810);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1807);
      variableModifier();
      setState(1812);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1813);
    catchtype();
    setState(1814);
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
    setState(1816);
    unannClassType();
    setState(1821);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::BITOR) {
      setState(1817);
      match(Java8Parser::BITOR);
      setState(1818);
      classtype();
      setState(1823);
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
    setState(1824);
    match(Java8Parser::FINALLY);
    setState(1825);
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
    setState(1827);
    match(Java8Parser::TRY);
    setState(1828);
    resourceSpecification();
    setState(1829);
    block();
    setState(1831);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::CATCH) {
      setState(1830);
      catches();
    }
    setState(1834);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::FINALLY) {
      setState(1833);
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
    setState(1836);
    match(Java8Parser::LPAREN);
    setState(1837);
    resourceList();
    setState(1839);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COLON) {
      setState(1838);
      match(Java8Parser::COLON);
    }
    setState(1841);
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
    setState(1843);
    resource();
    setState(1848);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::SEMI) {
      setState(1844);
      match(Java8Parser::SEMI);
      setState(1845);
      resource();
      setState(1850);
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
    setState(1854);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1851);
      variableModifier();
      setState(1856);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1857);
    unanntype();
    setState(1858);
    variableDeclaratorId();
    setState(1859);
    match(Java8Parser::ASSIGN);
    setState(1860);
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
    setState(1864);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
    case 1: {
      setState(1862);
      primaryNoNewArray__2__primary();
      break;
    }

    case 2: {
      setState(1863);
      arrayCreationExpression();
      break;
    }

    }
    setState(1869);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1866);
        primaryNoNewArray__1__primary(); 
      }
      setState(1871);
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
    setState(1901);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1872);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1873);
      typeName();
      setState(1878);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1874);
        match(Java8Parser::LBRACK);
        setState(1875);
        match(Java8Parser::RBRACK);
        setState(1880);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1881);
      match(Java8Parser::DOT);
      setState(1882);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1884);
      match(Java8Parser::VOID);
      setState(1885);
      match(Java8Parser::DOT);
      setState(1886);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1887);
      match(Java8Parser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1888);
      typeName();
      setState(1889);
      match(Java8Parser::DOT);
      setState(1890);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1892);
      match(Java8Parser::LPAREN);
      setState(1893);
      expression();
      setState(1894);
      match(Java8Parser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1896);
      classInstanceCreationExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1897);
      fieldAccess();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1898);
      arrayAccess();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1899);
      methodInvocation();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1900);
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
    setState(1933);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1905);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1906);
      typeName();
      setState(1911);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1907);
        match(Java8Parser::LBRACK);
        setState(1908);
        match(Java8Parser::RBRACK);
        setState(1913);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1914);
      match(Java8Parser::DOT);
      setState(1915);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1917);
      match(Java8Parser::VOID);
      setState(1918);
      match(Java8Parser::DOT);
      setState(1919);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1920);
      match(Java8Parser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1921);
      typeName();
      setState(1922);
      match(Java8Parser::DOT);
      setState(1923);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1925);
      match(Java8Parser::LPAREN);
      setState(1926);
      expression();
      setState(1927);
      match(Java8Parser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1929);
      classInstanceCreationExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1930);
      fieldAccess();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1931);
      methodInvocation();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1932);
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
    setState(1940);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1935);
      classInstanceCreationExpression__1__primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1936);
      fieldAccess__1__primary();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1937);
      arrayAccess__1__primary();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1938);
      methodInvocation__1__primary();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1939);
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
    setState(1948);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1944);
      classInstanceCreationExpression__1__primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1945);
      fieldAccess__1__primary();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1946);
      methodInvocation__1__primary();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1947);
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
    setState(1990);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1950);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1951);
      typeName();
      setState(1956);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1952);
        match(Java8Parser::LBRACK);
        setState(1953);
        match(Java8Parser::RBRACK);
        setState(1958);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1959);
      match(Java8Parser::DOT);
      setState(1960);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1962);
      unannPrimitiveType();
      setState(1967);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1963);
        match(Java8Parser::LBRACK);
        setState(1964);
        match(Java8Parser::RBRACK);
        setState(1969);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1970);
      match(Java8Parser::DOT);
      setState(1971);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1973);
      match(Java8Parser::VOID);
      setState(1974);
      match(Java8Parser::DOT);
      setState(1975);
      match(Java8Parser::CLASS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1976);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1977);
      typeName();
      setState(1978);
      match(Java8Parser::DOT);
      setState(1979);
      match(Java8Parser::THIS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1981);
      match(Java8Parser::LPAREN);
      setState(1982);
      expression();
      setState(1983);
      match(Java8Parser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1985);
      classInstanceCreationExpression__2__primary();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1986);
      fieldAccess__2__primary();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1987);
      arrayAccess__2__primary();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1988);
      methodInvocation__2__primary();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1989);
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
    setState(2033);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1994);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1995);
      typeName();
      setState(2000);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1996);
        match(Java8Parser::LBRACK);
        setState(1997);
        match(Java8Parser::RBRACK);
        setState(2002);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2003);
      match(Java8Parser::DOT);
      setState(2004);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2006);
      unannPrimitiveType();
      setState(2011);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(2007);
        match(Java8Parser::LBRACK);
        setState(2008);
        match(Java8Parser::RBRACK);
        setState(2013);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2014);
      match(Java8Parser::DOT);
      setState(2015);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2017);
      match(Java8Parser::VOID);
      setState(2018);
      match(Java8Parser::DOT);
      setState(2019);
      match(Java8Parser::CLASS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2020);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2021);
      typeName();
      setState(2022);
      match(Java8Parser::DOT);
      setState(2023);
      match(Java8Parser::THIS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2025);
      match(Java8Parser::LPAREN);
      setState(2026);
      expression();
      setState(2027);
      match(Java8Parser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2029);
      classInstanceCreationExpression__2__primary();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2030);
      fieldAccess__2__primary();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2031);
      methodInvocation__2__primary();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2032);
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
    setState(2118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2035);
      match(Java8Parser::NEW);
      setState(2037);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2036);
        typeArguments();
      }
      setState(2042);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2039);
        annotation();
        setState(2044);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2045);
      match(Java8Parser::Identifier);
      setState(2056);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::DOT) {
        setState(2046);
        match(Java8Parser::DOT);
        setState(2050);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2047);
          annotation();
          setState(2052);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2053);
        match(Java8Parser::Identifier);
        setState(2058);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2060);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2059);
        typeArgumentsOrDiamond();
      }
      setState(2062);
      match(Java8Parser::LPAREN);
      setState(2064);
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
        setState(2063);
        argumentList();
      }
      setState(2066);
      match(Java8Parser::RPAREN);
      setState(2068);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2067);
        classBody();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2070);
      expressionName();
      setState(2071);
      match(Java8Parser::DOT);
      setState(2072);
      match(Java8Parser::NEW);
      setState(2074);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2073);
        typeArguments();
      }
      setState(2079);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2076);
        annotation();
        setState(2081);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2082);
      match(Java8Parser::Identifier);
      setState(2084);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2083);
        typeArgumentsOrDiamond();
      }
      setState(2086);
      match(Java8Parser::LPAREN);
      setState(2088);
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
        setState(2087);
        argumentList();
      }
      setState(2090);
      match(Java8Parser::RPAREN);
      setState(2092);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2091);
        classBody();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2094);
      primary();
      setState(2095);
      match(Java8Parser::DOT);
      setState(2096);
      match(Java8Parser::NEW);
      setState(2098);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2097);
        typeArguments();
      }
      setState(2103);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2100);
        annotation();
        setState(2105);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2106);
      match(Java8Parser::Identifier);
      setState(2108);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2107);
        typeArgumentsOrDiamond();
      }
      setState(2110);
      match(Java8Parser::LPAREN);
      setState(2112);
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
        setState(2111);
        argumentList();
      }
      setState(2114);
      match(Java8Parser::RPAREN);
      setState(2116);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2115);
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
    setState(2120);
    match(Java8Parser::DOT);
    setState(2121);
    match(Java8Parser::NEW);
    setState(2123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2122);
      typeArguments();
    }
    setState(2128);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(2125);
      annotation();
      setState(2130);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2131);
    match(Java8Parser::Identifier);
    setState(2133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2132);
      typeArgumentsOrDiamond();
    }
    setState(2135);
    match(Java8Parser::LPAREN);
    setState(2137);
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
      setState(2136);
      argumentList();
    }
    setState(2139);
    match(Java8Parser::RPAREN);
    setState(2141);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 226, _ctx)) {
    case 1: {
      setState(2140);
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
    setState(2202);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::NEW: {
        enterOuterAlt(_localctx, 1);
        setState(2143);
        match(Java8Parser::NEW);
        setState(2145);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2144);
          typeArguments();
        }
        setState(2150);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2147);
          annotation();
          setState(2152);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2153);
        match(Java8Parser::Identifier);
        setState(2164);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::DOT) {
          setState(2154);
          match(Java8Parser::DOT);
          setState(2158);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == Java8Parser::AT) {
            setState(2155);
            annotation();
            setState(2160);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2161);
          match(Java8Parser::Identifier);
          setState(2166);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2168);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2167);
          typeArgumentsOrDiamond();
        }
        setState(2170);
        match(Java8Parser::LPAREN);
        setState(2172);
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
          setState(2171);
          argumentList();
        }
        setState(2174);
        match(Java8Parser::RPAREN);
        setState(2176);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
        case 1: {
          setState(2175);
          classBody();
          break;
        }

        }
        break;
      }

      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2178);
        expressionName();
        setState(2179);
        match(Java8Parser::DOT);
        setState(2180);
        match(Java8Parser::NEW);
        setState(2182);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2181);
          typeArguments();
        }
        setState(2187);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2184);
          annotation();
          setState(2189);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2190);
        match(Java8Parser::Identifier);
        setState(2192);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2191);
          typeArgumentsOrDiamond();
        }
        setState(2194);
        match(Java8Parser::LPAREN);
        setState(2196);
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
          setState(2195);
          argumentList();
        }
        setState(2198);
        match(Java8Parser::RPAREN);
        setState(2200);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 238, _ctx)) {
        case 1: {
          setState(2199);
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
    setState(2207);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 240, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2204);
      typeArguments();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2205);
      match(Java8Parser::LT);
      setState(2206);
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
    setState(2222);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2209);
      primary();
      setState(2210);
      match(Java8Parser::DOT);
      setState(2211);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2213);
      match(Java8Parser::SUPER);
      setState(2214);
      match(Java8Parser::DOT);
      setState(2215);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2216);
      typeName();
      setState(2217);
      match(Java8Parser::DOT);
      setState(2218);
      match(Java8Parser::SUPER);
      setState(2219);
      match(Java8Parser::DOT);
      setState(2220);
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
    setState(2224);
    match(Java8Parser::DOT);
    setState(2225);
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
    setState(2236);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::SUPER: {
        enterOuterAlt(_localctx, 1);
        setState(2227);
        match(Java8Parser::SUPER);
        setState(2228);
        match(Java8Parser::DOT);
        setState(2229);
        match(Java8Parser::Identifier);
        break;
      }

      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2230);
        typeName();
        setState(2231);
        match(Java8Parser::DOT);
        setState(2232);
        match(Java8Parser::SUPER);
        setState(2233);
        match(Java8Parser::DOT);
        setState(2234);
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
    setState(2248);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 243, _ctx)) {
    case 1: {
      setState(2238);
      expressionName();
      setState(2239);
      match(Java8Parser::LBRACK);
      setState(2240);
      expression();
      setState(2241);
      match(Java8Parser::RBRACK);
      break;
    }

    case 2: {
      setState(2243);
      primaryNoNewArray__2__arrayAccess();
      setState(2244);
      match(Java8Parser::LBRACK);
      setState(2245);
      expression();
      setState(2246);
      match(Java8Parser::RBRACK);
      break;
    }

    }
    setState(2257);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::LBRACK) {
      setState(2250);
      primaryNoNewArray__1__arrayAccess();
      setState(2251);
      match(Java8Parser::LBRACK);
      setState(2252);
      expression();
      setState(2253);
      match(Java8Parser::RBRACK);
      setState(2259);
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
    setState(2260);
    primaryNoNewArray__1__primary__2__arrayAccess__1__primary();
    setState(2261);
    match(Java8Parser::LBRACK);
    setState(2262);
    expression();
    setState(2263);
    match(Java8Parser::RBRACK);
    setState(2272);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2265);
        primaryNoNewArray__1__primary__1__arrayAccess__1__primary();
        setState(2266);
        match(Java8Parser::LBRACK);
        setState(2267);
        expression();
        setState(2268);
        match(Java8Parser::RBRACK); 
      }
      setState(2274);
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
    setState(2285);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
    case 1: {
      setState(2275);
      expressionName();
      setState(2276);
      match(Java8Parser::LBRACK);
      setState(2277);
      expression();
      setState(2278);
      match(Java8Parser::RBRACK);
      break;
    }

    case 2: {
      setState(2280);
      primaryNoNewArray__2__primary__2__arrayAccess__2__primary();
      setState(2281);
      match(Java8Parser::LBRACK);
      setState(2282);
      expression();
      setState(2283);
      match(Java8Parser::RBRACK);
      break;
    }

    }
    setState(2294);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2287);
        primaryNoNewArray__2__primary__1__arrayAccess__2__primary();
        setState(2288);
        match(Java8Parser::LBRACK);
        setState(2289);
        expression();
        setState(2290);
        match(Java8Parser::RBRACK); 
      }
      setState(2296);
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
    setState(2365);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2297);
      methodName();
      setState(2298);
      match(Java8Parser::LPAREN);
      setState(2300);
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
        setState(2299);
        argumentList();
      }
      setState(2302);
      match(Java8Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2304);
      typeName();
      setState(2305);
      match(Java8Parser::DOT);
      setState(2307);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2306);
        typeArguments();
      }
      setState(2309);
      match(Java8Parser::Identifier);
      setState(2310);
      match(Java8Parser::LPAREN);
      setState(2312);
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
        setState(2311);
        argumentList();
      }
      setState(2314);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2316);
      expressionName();
      setState(2317);
      match(Java8Parser::DOT);
      setState(2319);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2318);
        typeArguments();
      }
      setState(2321);
      match(Java8Parser::Identifier);
      setState(2322);
      match(Java8Parser::LPAREN);
      setState(2324);
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
        setState(2323);
        argumentList();
      }
      setState(2326);
      match(Java8Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2328);
      primary();
      setState(2329);
      match(Java8Parser::DOT);
      setState(2331);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2330);
        typeArguments();
      }
      setState(2333);
      match(Java8Parser::Identifier);
      setState(2334);
      match(Java8Parser::LPAREN);
      setState(2336);
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
        setState(2335);
        argumentList();
      }
      setState(2338);
      match(Java8Parser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2340);
      match(Java8Parser::SUPER);
      setState(2341);
      match(Java8Parser::DOT);
      setState(2343);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2342);
        typeArguments();
      }
      setState(2345);
      match(Java8Parser::Identifier);
      setState(2346);
      match(Java8Parser::LPAREN);
      setState(2348);
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
        setState(2347);
        argumentList();
      }
      setState(2350);
      match(Java8Parser::RPAREN);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2351);
      typeName();
      setState(2352);
      match(Java8Parser::DOT);
      setState(2353);
      match(Java8Parser::SUPER);
      setState(2354);
      match(Java8Parser::DOT);
      setState(2356);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2355);
        typeArguments();
      }
      setState(2358);
      match(Java8Parser::Identifier);
      setState(2359);
      match(Java8Parser::LPAREN);
      setState(2361);
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
        setState(2360);
        argumentList();
      }
      setState(2363);
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
    setState(2367);
    match(Java8Parser::DOT);
    setState(2369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2368);
      typeArguments();
    }
    setState(2371);
    match(Java8Parser::Identifier);
    setState(2372);
    match(Java8Parser::LPAREN);
    setState(2374);
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
      setState(2373);
      argumentList();
    }
    setState(2376);
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
    setState(2434);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2378);
      methodName();
      setState(2379);
      match(Java8Parser::LPAREN);
      setState(2381);
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
        setState(2380);
        argumentList();
      }
      setState(2383);
      match(Java8Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2385);
      typeName();
      setState(2386);
      match(Java8Parser::DOT);
      setState(2388);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2387);
        typeArguments();
      }
      setState(2390);
      match(Java8Parser::Identifier);
      setState(2391);
      match(Java8Parser::LPAREN);
      setState(2393);
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
        setState(2392);
        argumentList();
      }
      setState(2395);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2397);
      expressionName();
      setState(2398);
      match(Java8Parser::DOT);
      setState(2400);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2399);
        typeArguments();
      }
      setState(2402);
      match(Java8Parser::Identifier);
      setState(2403);
      match(Java8Parser::LPAREN);
      setState(2405);
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
        setState(2404);
        argumentList();
      }
      setState(2407);
      match(Java8Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2409);
      match(Java8Parser::SUPER);
      setState(2410);
      match(Java8Parser::DOT);
      setState(2412);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2411);
        typeArguments();
      }
      setState(2414);
      match(Java8Parser::Identifier);
      setState(2415);
      match(Java8Parser::LPAREN);
      setState(2417);
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
        setState(2416);
        argumentList();
      }
      setState(2419);
      match(Java8Parser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2420);
      typeName();
      setState(2421);
      match(Java8Parser::DOT);
      setState(2422);
      match(Java8Parser::SUPER);
      setState(2423);
      match(Java8Parser::DOT);
      setState(2425);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2424);
        typeArguments();
      }
      setState(2427);
      match(Java8Parser::Identifier);
      setState(2428);
      match(Java8Parser::LPAREN);
      setState(2430);
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
        setState(2429);
        argumentList();
      }
      setState(2432);
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
    setState(2436);
    expression();
    setState(2441);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(2437);
      match(Java8Parser::COMMA);
      setState(2438);
      expression();
      setState(2443);
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
    setState(2491);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2444);
      expressionName();
      setState(2445);
      match(Java8Parser::COLONCOLON);
      setState(2447);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2446);
        typeArguments();
      }
      setState(2449);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2451);
      referencetype();
      setState(2452);
      match(Java8Parser::COLONCOLON);
      setState(2454);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2453);
        typeArguments();
      }
      setState(2456);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2458);
      primary();
      setState(2459);
      match(Java8Parser::COLONCOLON);
      setState(2461);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2460);
        typeArguments();
      }
      setState(2463);
      match(Java8Parser::Identifier);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2465);
      match(Java8Parser::SUPER);
      setState(2466);
      match(Java8Parser::COLONCOLON);
      setState(2468);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2467);
        typeArguments();
      }
      setState(2470);
      match(Java8Parser::Identifier);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2471);
      typeName();
      setState(2472);
      match(Java8Parser::DOT);
      setState(2473);
      match(Java8Parser::SUPER);
      setState(2474);
      match(Java8Parser::COLONCOLON);
      setState(2476);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2475);
        typeArguments();
      }
      setState(2478);
      match(Java8Parser::Identifier);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2480);
      classtype();
      setState(2481);
      match(Java8Parser::COLONCOLON);
      setState(2483);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2482);
        typeArguments();
      }
      setState(2485);
      match(Java8Parser::NEW);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2487);
      arraytype();
      setState(2488);
      match(Java8Parser::COLONCOLON);
      setState(2489);
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
    setState(2493);
    match(Java8Parser::COLONCOLON);
    setState(2495);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2494);
      typeArguments();
    }
    setState(2497);
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
    setState(2539);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2499);
      expressionName();
      setState(2500);
      match(Java8Parser::COLONCOLON);
      setState(2502);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2501);
        typeArguments();
      }
      setState(2504);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2506);
      referencetype();
      setState(2507);
      match(Java8Parser::COLONCOLON);
      setState(2509);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2508);
        typeArguments();
      }
      setState(2511);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2513);
      match(Java8Parser::SUPER);
      setState(2514);
      match(Java8Parser::COLONCOLON);
      setState(2516);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2515);
        typeArguments();
      }
      setState(2518);
      match(Java8Parser::Identifier);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2519);
      typeName();
      setState(2520);
      match(Java8Parser::DOT);
      setState(2521);
      match(Java8Parser::SUPER);
      setState(2522);
      match(Java8Parser::COLONCOLON);
      setState(2524);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2523);
        typeArguments();
      }
      setState(2526);
      match(Java8Parser::Identifier);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2528);
      classtype();
      setState(2529);
      match(Java8Parser::COLONCOLON);
      setState(2531);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2530);
        typeArguments();
      }
      setState(2533);
      match(Java8Parser::NEW);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2535);
      arraytype();
      setState(2536);
      match(Java8Parser::COLONCOLON);
      setState(2537);
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
    setState(2563);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2541);
      match(Java8Parser::NEW);
      setState(2542);
      primitivetype();
      setState(2543);
      dimExprs();
      setState(2545);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx)) {
      case 1: {
        setState(2544);
        dims();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2547);
      match(Java8Parser::NEW);
      setState(2548);
      classOrInterfaceType();
      setState(2549);
      dimExprs();
      setState(2551);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx)) {
      case 1: {
        setState(2550);
        dims();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2553);
      match(Java8Parser::NEW);
      setState(2554);
      primitivetype();
      setState(2555);
      dims();
      setState(2556);
      arrayInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2558);
      match(Java8Parser::NEW);
      setState(2559);
      classOrInterfaceType();
      setState(2560);
      dims();
      setState(2561);
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
    setState(2565);
    dimExpr();
    setState(2569);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2566);
        dimExpr(); 
      }
      setState(2571);
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
    setState(2575);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(2572);
      annotation();
      setState(2577);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2578);
    match(Java8Parser::LBRACK);
    setState(2579);
    expression();
    setState(2580);
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
    setState(2584);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2582);
      lambdaExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2583);
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
    setState(2586);
    lambdaParameters();
    setState(2587);
    match(Java8Parser::ARROW);
    setState(2588);
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
    setState(2600);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2590);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2591);
      match(Java8Parser::LPAREN);
      setState(2593);
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
        setState(2592);
        formalParameterList();
      }
      setState(2595);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2596);
      match(Java8Parser::LPAREN);
      setState(2597);
      inferredFormalParameterList();
      setState(2598);
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
    setState(2602);
    match(Java8Parser::Identifier);
    setState(2607);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(2603);
      match(Java8Parser::COMMA);
      setState(2604);
      match(Java8Parser::Identifier);
      setState(2609);
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
    setState(2612);
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
        setState(2610);
        expression();
        break;
      }

      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(2611);
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
    setState(2616);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2614);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2615);
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

Java8Parser::AssignmentOperatorContext* Java8Parser::AssignmentContext::assignmentOperator() {
  return getRuleContext<Java8Parser::AssignmentOperatorContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::AssignmentContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(2618);
    leftHandSide();
    setState(2619);
    assignmentOperator();
    setState(2620);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

Java8Parser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::MUL_ASSIGN() {
  return getToken(Java8Parser::MUL_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::DIV_ASSIGN() {
  return getToken(Java8Parser::DIV_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::MOD_ASSIGN() {
  return getToken(Java8Parser::MOD_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::ADD_ASSIGN() {
  return getToken(Java8Parser::ADD_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::SUB_ASSIGN() {
  return getToken(Java8Parser::SUB_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::LSHIFT_ASSIGN() {
  return getToken(Java8Parser::LSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::RSHIFT_ASSIGN() {
  return getToken(Java8Parser::RSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::URSHIFT_ASSIGN() {
  return getToken(Java8Parser::URSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::AND_ASSIGN() {
  return getToken(Java8Parser::AND_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::XOR_ASSIGN() {
  return getToken(Java8Parser::XOR_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::OR_ASSIGN() {
  return getToken(Java8Parser::OR_ASSIGN, 0);
}


size_t Java8Parser::AssignmentOperatorContext::getRuleIndex() const {
  return Java8Parser::RuleAssignmentOperator;
}


antlrcpp::Any Java8Parser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8Visitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AssignmentOperatorContext* Java8Parser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 426, Java8Parser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2622);
    _la = _input->LA(1);
    if (!(((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Java8Parser::ASSIGN - 66))
      | (1ULL << (Java8Parser::ADD_ASSIGN - 66))
      | (1ULL << (Java8Parser::SUB_ASSIGN - 66))
      | (1ULL << (Java8Parser::MUL_ASSIGN - 66))
      | (1ULL << (Java8Parser::DIV_ASSIGN - 66))
      | (1ULL << (Java8Parser::AND_ASSIGN - 66))
      | (1ULL << (Java8Parser::OR_ASSIGN - 66))
      | (1ULL << (Java8Parser::XOR_ASSIGN - 66))
      | (1ULL << (Java8Parser::MOD_ASSIGN - 66))
      | (1ULL << (Java8Parser::LSHIFT_ASSIGN - 66))
      | (1ULL << (Java8Parser::RSHIFT_ASSIGN - 66))
      | (1ULL << (Java8Parser::URSHIFT_ASSIGN - 66)))) != 0))) {
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
  enterRule(_localctx, 428, Java8Parser::RuleLeftHandSide);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2627);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2624);
      expressionName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2625);
      fieldAccess();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2626);
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
  enterRule(_localctx, 430, Java8Parser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2642);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2629);
      conditionalOrExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2630);
      conditionalOrExpression(0);
      setState(2631);
      match(Java8Parser::QUESTION);
      setState(2632);
      expression();
      setState(2633);
      match(Java8Parser::COLON);
      setState(2634);
      conditionalExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2636);
      conditionalOrExpression(0);
      setState(2637);
      match(Java8Parser::QUESTION);
      setState(2638);
      expression();
      setState(2639);
      match(Java8Parser::COLON);
      setState(2640);
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
  size_t startState = 432;
  enterRecursionRule(_localctx, 432, Java8Parser::RuleConditionalOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2645);
    conditionalAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2652);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 300, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConditionalOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConditionalOrExpression);
        setState(2647);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2648);
        match(Java8Parser::OR);
        setState(2649);
        conditionalAndExpression(0); 
      }
      setState(2654);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 300, _ctx);
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
  size_t startState = 434;
  enterRecursionRule(_localctx, 434, Java8Parser::RuleConditionalAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2656);
    inclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2663);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConditionalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConditionalAndExpression);
        setState(2658);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2659);
        match(Java8Parser::AND);
        setState(2660);
        inclusiveOrExpression(0); 
      }
      setState(2665);
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
  size_t startState = 436;
  enterRecursionRule(_localctx, 436, Java8Parser::RuleInclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2667);
    exclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2674);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveOrExpression);
        setState(2669);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2670);
        match(Java8Parser::BITOR);
        setState(2671);
        exclusiveOrExpression(0); 
      }
      setState(2676);
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
  size_t startState = 438;
  enterRecursionRule(_localctx, 438, Java8Parser::RuleExclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2678);
    andExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2685);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveOrExpression);
        setState(2680);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2681);
        match(Java8Parser::CARET);
        setState(2682);
        andExpression(0); 
      }
      setState(2687);
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
  size_t startState = 440;
  enterRecursionRule(_localctx, 440, Java8Parser::RuleAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2689);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2696);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 304, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndExpression);
        setState(2691);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2692);
        match(Java8Parser::BITAND);
        setState(2693);
        equalityExpression(0); 
      }
      setState(2698);
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
  size_t startState = 442;
  enterRecursionRule(_localctx, 442, Java8Parser::RuleEqualityExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2700);
    relationalExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2710);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2708);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(2702);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2703);
          match(Java8Parser::EQUAL);
          setState(2704);
          relationalExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(2705);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2706);
          match(Java8Parser::NOTEQUAL);
          setState(2707);
          relationalExpression(0);
          break;
        }

        } 
      }
      setState(2712);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx);
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
  size_t startState = 444;
  enterRecursionRule(_localctx, 444, Java8Parser::RuleRelationalExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2714);
    shiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2733);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2731);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2716);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(2717);
          match(Java8Parser::LT);
          setState(2718);
          shiftExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2719);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(2720);
          match(Java8Parser::GT);
          setState(2721);
          shiftExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2722);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2723);
          match(Java8Parser::LE);
          setState(2724);
          shiftExpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2725);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2726);
          match(Java8Parser::GE);
          setState(2727);
          shiftExpression(0);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2728);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2729);
          match(Java8Parser::INSTANCEOF);
          setState(2730);
          referencetype();
          break;
        }

        } 
      }
      setState(2735);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx);
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
  size_t startState = 446;
  enterRecursionRule(_localctx, 446, Java8Parser::RuleShiftExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2737);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2754);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2752);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2739);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2740);
          match(Java8Parser::LT);
          setState(2741);
          match(Java8Parser::LT);
          setState(2742);
          additiveExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2743);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2744);
          match(Java8Parser::GT);
          setState(2745);
          match(Java8Parser::GT);
          setState(2746);
          additiveExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2747);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2748);
          match(Java8Parser::GT);
          setState(2749);
          match(Java8Parser::GT);
          setState(2750);
          match(Java8Parser::GT);
          setState(2751);
          additiveExpression(0);
          break;
        }

        } 
      }
      setState(2756);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx);
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
  size_t startState = 448;
  enterRecursionRule(_localctx, 448, Java8Parser::RuleAdditiveExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2758);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2768);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2766);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(2760);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2761);
          match(Java8Parser::ADD);
          setState(2762);
          multiplicativeExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(2763);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2764);
          match(Java8Parser::SUB);
          setState(2765);
          multiplicativeExpression(0);
          break;
        }

        } 
      }
      setState(2770);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
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
  size_t startState = 450;
  enterRecursionRule(_localctx, 450, Java8Parser::RuleMultiplicativeExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2772);
    unaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(2785);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2783);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2774);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2775);
          match(Java8Parser::MUL);
          setState(2776);
          unaryExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2777);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2778);
          match(Java8Parser::DIV);
          setState(2779);
          unaryExpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2780);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2781);
          match(Java8Parser::MOD);
          setState(2782);
          unaryExpression();
          break;
        }

        } 
      }
      setState(2787);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx);
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
  enterRule(_localctx, 452, Java8Parser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2795);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::INC: {
        enterOuterAlt(_localctx, 1);
        setState(2788);
        preIncrementExpression();
        break;
      }

      case Java8Parser::DEC: {
        enterOuterAlt(_localctx, 2);
        setState(2789);
        preDecrementExpression();
        break;
      }

      case Java8Parser::ADD: {
        enterOuterAlt(_localctx, 3);
        setState(2790);
        match(Java8Parser::ADD);
        setState(2791);
        unaryExpression();
        break;
      }

      case Java8Parser::SUB: {
        enterOuterAlt(_localctx, 4);
        setState(2792);
        match(Java8Parser::SUB);
        setState(2793);
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
        setState(2794);
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
  enterRule(_localctx, 454, Java8Parser::RulePreIncrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2797);
    match(Java8Parser::INC);
    setState(2798);
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
  enterRule(_localctx, 456, Java8Parser::RulePreDecrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2800);
    match(Java8Parser::DEC);
    setState(2801);
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
  enterRule(_localctx, 458, Java8Parser::RuleUnaryExpressionNotPlusMinus);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2809);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 316, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2803);
      postfixExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2804);
      match(Java8Parser::TILDE);
      setState(2805);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2806);
      match(Java8Parser::BANG);
      setState(2807);
      unaryExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2808);
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
  enterRule(_localctx, 460, Java8Parser::RulePostfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2813);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 317, _ctx)) {
    case 1: {
      setState(2811);
      primary();
      break;
    }

    case 2: {
      setState(2812);
      expressionName();
      break;
    }

    }
    setState(2819);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 319, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2817);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Java8Parser::INC: {
            setState(2815);
            postIncrementExpression__1__postfixExpression();
            break;
          }

          case Java8Parser::DEC: {
            setState(2816);
            postDecrementExpression__1__postfixExpression();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(2821);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 319, _ctx);
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
  enterRule(_localctx, 462, Java8Parser::RulePostIncrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2822);
    postfixExpression();
    setState(2823);
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
  enterRule(_localctx, 464, Java8Parser::RulePostIncrementExpression__1__postfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2825);
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
  enterRule(_localctx, 466, Java8Parser::RulePostDecrementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2827);
    postfixExpression();
    setState(2828);
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
  enterRule(_localctx, 468, Java8Parser::RulePostDecrementExpression__1__postfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2830);
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
  enterRule(_localctx, 470, Java8Parser::RuleCastExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2859);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 322, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2832);
      match(Java8Parser::LPAREN);
      setState(2833);
      primitivetype();
      setState(2834);
      match(Java8Parser::RPAREN);
      setState(2835);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2837);
      match(Java8Parser::LPAREN);
      setState(2838);
      referencetype();
      setState(2842);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(2839);
        additionalBound();
        setState(2844);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2845);
      match(Java8Parser::RPAREN);
      setState(2846);
      unaryExpressionNotPlusMinus();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2848);
      match(Java8Parser::LPAREN);
      setState(2849);
      referencetype();
      setState(2853);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(2850);
        additionalBound();
        setState(2855);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2856);
      match(Java8Parser::RPAREN);
      setState(2857);
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
  enterRule(_localctx, 472, Java8Parser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2861);
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
    case 216: return conditionalOrExpressionSempred(dynamic_cast<ConditionalOrExpressionContext *>(context), predicateIndex);
    case 217: return conditionalAndExpressionSempred(dynamic_cast<ConditionalAndExpressionContext *>(context), predicateIndex);
    case 218: return inclusiveOrExpressionSempred(dynamic_cast<InclusiveOrExpressionContext *>(context), predicateIndex);
    case 219: return exclusiveOrExpressionSempred(dynamic_cast<ExclusiveOrExpressionContext *>(context), predicateIndex);
    case 220: return andExpressionSempred(dynamic_cast<AndExpressionContext *>(context), predicateIndex);
    case 221: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 222: return relationalExpressionSempred(dynamic_cast<RelationalExpressionContext *>(context), predicateIndex);
    case 223: return shiftExpressionSempred(dynamic_cast<ShiftExpressionContext *>(context), predicateIndex);
    case 224: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 225: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);

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
  "assignment", "assignmentOperator", "leftHandSide", "conditionalExpression", 
  "conditionalOrExpression", "conditionalAndExpression", "inclusiveOrExpression", 
  "exclusiveOrExpression", "andExpression", "equalityExpression", "relationalExpression", 
  "shiftExpression", "additiveExpression", "multiplicativeExpression", "unaryExpression", 
  "preIncrementExpression", "preDecrementExpression", "unaryExpressionNotPlusMinus", 
  "postfixExpression", "postIncrementExpression", "postIncrementExpression__1__postfixExpression", 
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
       0x3, 0x6d, 0xb32, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0xec, 0x4, 0xed, 0x9, 0xed, 0x4, 0xee, 0x9, 0xee, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1e1, 0xa, 0x3, 0x3, 0x4, 
       0x7, 0x4, 0x1e4, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x1e7, 0xb, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x7, 0x4, 0x1eb, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x1ee, 
       0xb, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1f1, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x5, 0x5, 0x1f5, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1fe, 0xa, 0x8, 0x3, 0x9, 
       0x3, 0x9, 0x5, 0x9, 0x202, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
       0x206, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x209, 0xb, 0x9, 0x3, 0xa, 0x7, 
       0xa, 0x20c, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x20f, 0xb, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x5, 0xa, 0x213, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x7, 0xa, 0x218, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x21b, 0xb, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x5, 0xa, 0x21f, 0xa, 0xa, 0x5, 0xa, 0x221, 0xa, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x225, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
       0x228, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x22c, 0xa, 0xb, 0x3, 
       0xc, 0x7, 0xc, 0x22f, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x232, 0xb, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x236, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x7, 0x10, 0x23f, 
       0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x242, 0xb, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x24f, 0xa, 0x11, 
       0x3, 0x12, 0x7, 0x12, 0x252, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x255, 
       0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x25a, 0xa, 
       0x12, 0xc, 0x12, 0xe, 0x12, 0x25d, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x7, 0x12, 0x261, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x264, 0xb, 0x12, 
       0x3, 0x13, 0x7, 0x13, 0x267, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x26a, 
       0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x26e, 0xa, 0x13, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x7, 0x15, 0x277, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x27a, 0xb, 
       0x15, 0x5, 0x15, 0x27c, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x18, 0x7, 0x18, 0x288, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x28b, 
       0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x28f, 0xa, 0x19, 0x3, 
       0x1a, 0x7, 0x1a, 0x292, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x295, 0xb, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x299, 0xa, 0x1a, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x29f, 0xa, 0x1b, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2a6, 
       0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x7, 0x1d, 0x2ae, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x2b1, 
       0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x5, 0x1e, 0x2b8, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x2c2, 
       0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x2c5, 0xb, 0x20, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x2cd, 
       0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x2d0, 0xb, 0x21, 0x3, 0x22, 0x5, 
       0x22, 0x2d3, 0xa, 0x22, 0x3, 0x22, 0x7, 0x22, 0x2d6, 0xa, 0x22, 0xc, 
       0x22, 0xe, 0x22, 0x2d9, 0xb, 0x22, 0x3, 0x22, 0x7, 0x22, 0x2dc, 0xa, 
       0x22, 0xc, 0x22, 0xe, 0x22, 0x2df, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x23, 0x7, 0x23, 0x2e4, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2e7, 
       0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 
       0x2ed, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2f0, 0xb, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x5, 0x25, 0x2fa, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
       0x2a, 0x5, 0x2a, 0x317, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 
       0x31b, 0xa, 0x2b, 0x3, 0x2c, 0x7, 0x2c, 0x31e, 0xa, 0x2c, 0xc, 0x2c, 
       0xe, 0x2c, 0x321, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 
       0x2c, 0x326, 0xa, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x329, 0xa, 0x2c, 0x3, 
       0x2c, 0x5, 0x2c, 0x32c, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x5, 0x2d, 0x338, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x341, 
       0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x344, 0xb, 0x2f, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x32, 0x7, 0x32, 0x34f, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 
       0x352, 0xb, 0x32, 0x3, 0x33, 0x3, 0x33, 0x7, 0x33, 0x356, 0xa, 0x33, 
       0xc, 0x33, 0xe, 0x33, 0x359, 0xb, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x361, 0xa, 0x34, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 
       0x368, 0xa, 0x35, 0x3, 0x36, 0x7, 0x36, 0x36b, 0xa, 0x36, 0xc, 0x36, 
       0xe, 0x36, 0x36e, 0xb, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x37c, 0xa, 0x37, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x381, 0xa, 0x38, 0xc, 0x38, 0xe, 
       0x38, 0x384, 0xb, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 
       0x389, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x38d, 0xa, 0x3a, 
       0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x391, 0xa, 0x3b, 0x3, 0x3c, 0x3, 
       0x3c, 0x5, 0x3c, 0x395, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 
       0x399, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x39e, 
       0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x3a2, 0xa, 0x3f, 0x3, 
       0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x3a6, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 
       0x3a9, 0xb, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x3ad, 0xa, 0x40, 
       0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x3b2, 0xa, 0x40, 0xc, 
       0x40, 0xe, 0x40, 0x3b5, 0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
       0x3b9, 0xa, 0x40, 0x5, 0x40, 0x3bb, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 
       0x7, 0x41, 0x3bf, 0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x3c2, 0xb, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x3c6, 0xa, 0x41, 0x3, 0x42, 0x3, 
       0x42, 0x5, 0x42, 0x3ca, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 
       0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x3dd, 0xa, 0x47, 0x3, 0x48, 0x7, 
       0x48, 0x3e0, 0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 0x3e3, 0xb, 0x48, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x5, 0x49, 0x3f2, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
       0x5, 0x4a, 0x3f7, 0xa, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x3fb, 
       0xa, 0x4a, 0xc, 0x4a, 0xe, 0x4a, 0x3fe, 0xb, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x403, 0xa, 0x4a, 0x5, 0x4a, 0x405, 0xa, 
       0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x409, 0xa, 0x4b, 0x3, 0x4c, 
       0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x40e, 0xa, 0x4c, 0x3, 0x4c, 0x3, 
       0x4c, 0x5, 0x4c, 0x412, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x41a, 0xa, 0x4d, 0x3, 
       0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x7, 0x4e, 0x41f, 0xa, 0x4e, 0xc, 0x4e, 
       0xe, 0x4e, 0x422, 0xb, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x7, 
       0x4e, 0x427, 0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x42a, 0xb, 0x4e, 0x5, 
       0x4e, 0x42c, 0xa, 0x4e, 0x3, 0x4f, 0x7, 0x4f, 0x42f, 0xa, 0x4f, 0xc, 
       0x4f, 0xe, 0x4f, 0x432, 0xb, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x439, 0xa, 0x50, 0x3, 0x51, 0x7, 
       0x51, 0x43c, 0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 0x43f, 0xb, 0x51, 0x3, 
       0x51, 0x3, 0x51, 0x7, 0x51, 0x443, 0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 
       0x446, 0xb, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 
       0x51, 0x44c, 0xa, 0x51, 0x3, 0x52, 0x7, 0x52, 0x44f, 0xa, 0x52, 0xc, 
       0x52, 0xe, 0x52, 0x452, 0xb, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x7, 0x54, 0x460, 0xa, 0x54, 0xc, 
       0x54, 0xe, 0x54, 0x463, 0xb, 0x54, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 
       0x467, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x46b, 0xa, 0x56, 
       0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 
       0x7, 0x59, 0x473, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x476, 0xb, 0x59, 
       0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x47a, 0xa, 0x59, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x482, 
       0xa, 0x5a, 0x3, 0x5b, 0x5, 0x5b, 0x485, 0xa, 0x5b, 0x3, 0x5b, 0x3, 
       0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x48a, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
       0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x492, 0xa, 
       0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x495, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
       0x3, 0x5e, 0x5, 0x5e, 0x49a, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5e, 0x5, 0x5e, 0x49f, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x5, 0x5e, 0x4a4, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 
       0x5e, 0x4a9, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x5, 0x5e, 0x4b0, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5e, 0x5, 0x5e, 0x4b5, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4bd, 0xa, 0x5e, 0x3, 
       0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4c2, 0xa, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4c7, 0xa, 0x5e, 0x3, 0x5f, 0x7, 
       0x5f, 0x4ca, 0xa, 0x5f, 0xc, 0x5f, 0xe, 0x5f, 0x4cd, 0xb, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x4d2, 0xa, 0x5f, 0x3, 0x5f, 
       0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x4d8, 0xa, 0x60, 0x3, 
       0x60, 0x3, 0x60, 0x5, 0x60, 0x4dc, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 0x4e3, 0xa, 0x61, 0xc, 
       0x61, 0xe, 0x61, 0x4e6, 0xb, 0x61, 0x3, 0x62, 0x7, 0x62, 0x4e9, 0xa, 
       0x62, 0xc, 0x62, 0xe, 0x62, 0x4ec, 0xb, 0x62, 0x3, 0x62, 0x3, 0x62, 
       0x3, 0x62, 0x5, 0x62, 0x4f1, 0xa, 0x62, 0x3, 0x62, 0x5, 0x62, 0x4f4, 
       0xa, 0x62, 0x3, 0x62, 0x5, 0x62, 0x4f7, 0xa, 0x62, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x64, 0x3, 0x64, 0x7, 0x64, 0x4fd, 0xa, 0x64, 0xc, 0x64, 
       0xe, 0x64, 0x500, 0xb, 0x64, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x504, 
       0xa, 0x65, 0x3, 0x66, 0x7, 0x66, 0x507, 0xa, 0x66, 0xc, 0x66, 0xe, 
       0x66, 0x50a, 0xb, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 
       0x50f, 0xa, 0x66, 0x3, 0x66, 0x5, 0x66, 0x512, 0xa, 0x66, 0x3, 0x66, 
       0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
       0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x51d, 0xa, 0x67, 0x3, 0x68, 0x3, 
       0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x7, 0x69, 0x524, 0xa, 0x69, 
       0xc, 0x69, 0xe, 0x69, 0x527, 0xb, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x530, 
       0xa, 0x6a, 0x3, 0x6b, 0x7, 0x6b, 0x533, 0xa, 0x6b, 0xc, 0x6b, 0xe, 
       0x6b, 0x536, 0xb, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x540, 0xa, 
       0x6c, 0x3, 0x6d, 0x7, 0x6d, 0x543, 0xa, 0x6d, 0xc, 0x6d, 0xe, 0x6d, 
       0x546, 0xb, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 
       0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x551, 
       0xa, 0x6e, 0x3, 0x6f, 0x7, 0x6f, 0x554, 0xa, 0x6f, 0xc, 0x6f, 0xe, 
       0x6f, 0x557, 0xb, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
       0x3, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x7, 0x70, 0x560, 0xa, 0x70, 0xc, 
       0x70, 0xe, 0x70, 0x563, 0xb, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 
       0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x5, 0x71, 0x56c, 0xa, 
       0x71, 0x3, 0x72, 0x7, 0x72, 0x56f, 0xa, 0x72, 0xc, 0x72, 0xe, 0x72, 
       0x572, 0xb, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
       0x72, 0x5, 0x72, 0x579, 0xa, 0x72, 0x3, 0x72, 0x5, 0x72, 0x57c, 0xa, 
       0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 
       0x73, 0x583, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x75, 
       0x3, 0x75, 0x3, 0x75, 0x5, 0x75, 0x58b, 0xa, 0x75, 0x3, 0x76, 0x3, 
       0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x591, 0xa, 0x76, 0x3, 0x76, 
       0x3, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x7, 0x77, 0x598, 0xa, 
       0x77, 0xc, 0x77, 0xe, 0x77, 0x59b, 0xb, 0x77, 0x3, 0x78, 0x3, 0x78, 
       0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 
       0x5a4, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x5a8, 0xa, 0x7a, 
       0x3, 0x7a, 0x5, 0x7a, 0x5ab, 0xa, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 
       0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x7, 0x7b, 0x5b2, 0xa, 0x7b, 0xc, 0x7b, 
       0xe, 0x7b, 0x5b5, 0xb, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
       0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
       0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5c2, 0xa, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 
       0x5c5, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 
       0x7f, 0x7, 0x7f, 0x5cc, 0xa, 0x7f, 0xc, 0x7f, 0xe, 0x7f, 0x5cf, 0xb, 
       0x7f, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x5d3, 0xa, 0x80, 0x3, 0x80, 
       0x3, 0x80, 0x3, 0x81, 0x3, 0x81, 0x7, 0x81, 0x5d9, 0xa, 0x81, 0xc, 
       0x81, 0xe, 0x81, 0x5dc, 0xb, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 
       0x5, 0x82, 0x5e1, 0xa, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
       0x84, 0x7, 0x84, 0x5e7, 0xa, 0x84, 0xc, 0x84, 0xe, 0x84, 0x5ea, 0xb, 
       0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 
       0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x5f5, 0xa, 0x85, 
       0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 
       0x5fc, 0xa, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
       0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
       0x87, 0x3, 0x87, 0x5, 0x87, 0x60a, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 
       0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 
       0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8c, 
       0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 
       0x5, 0x8c, 0x620, 0xa, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
       0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
       0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x642, 
       0xa, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x7, 0x92, 0x64c, 0xa, 0x92, 0xc, 
       0x92, 0xe, 0x92, 0x64f, 0xb, 0x92, 0x3, 0x92, 0x7, 0x92, 0x652, 0xa, 
       0x92, 0xc, 0x92, 0xe, 0x92, 0x655, 0xb, 0x92, 0x3, 0x92, 0x3, 0x92, 
       0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x7, 0x94, 
       0x65e, 0xa, 0x94, 0xc, 0x94, 0xe, 0x94, 0x661, 0xb, 0x94, 0x3, 0x95, 
       0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x66d, 0xa, 0x95, 0x3, 
       0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
       0x97, 0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
       0x98, 0x3, 0x98, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 
       0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x5, 
       0x9a, 0x687, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x68b, 0xa, 
       0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x690, 0xa, 0x9c, 
       0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x694, 0xa, 0x9c, 0x3, 0x9c, 0x3, 
       0x9c, 0x5, 0x9c, 0x698, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 
       0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x6a0, 0xa, 0x9d, 0x3, 
       0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x6a4, 0xa, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 
       0x5, 0x9d, 0x6a8, 0xa, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 
       0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x6af, 0xa, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 
       0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x7, 0xa0, 0x6b6, 0xa, 0xa0, 0xc, 
       0xa0, 0xe, 0xa0, 0x6b9, 0xb, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x7, 0xa1, 0x6be, 0xa, 0xa1, 0xc, 0xa1, 0xe, 0xa1, 0x6c1, 0xb, 0xa1, 
       0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x3, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x7, 0xa2, 0x6cd, 0xa, 
       0xa2, 0xc, 0xa2, 0xe, 0xa2, 0x6d0, 0xb, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 
       0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa3, 
       0x3, 0xa3, 0x5, 0xa3, 0x6db, 0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 
       0xa4, 0x3, 0xa4, 0x5, 0xa4, 0x6e1, 0xa, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
       0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x6e7, 0xa, 0xa5, 0x3, 0xa5, 0x3, 
       0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x6ed, 0xa, 0xa6, 0x3, 0xa6, 
       0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 
       0x3, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 
       0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x6fe, 0xa, 0xa8, 0x3, 0xa8, 0x3, 
       0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x703, 0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 
       0x7, 0xa9, 0x707, 0xa, 0xa9, 0xc, 0xa9, 0xe, 0xa9, 0x70a, 0xb, 0xa9, 
       0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 
       0x3, 0xab, 0x7, 0xab, 0x713, 0xa, 0xab, 0xc, 0xab, 0xe, 0xab, 0x716, 
       0xb, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xac, 0x3, 0xac, 
       0x3, 0xac, 0x7, 0xac, 0x71e, 0xa, 0xac, 0xc, 0xac, 0xe, 0xac, 0x721, 
       0xb, 0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 
       0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x72a, 0xa, 0xae, 0x3, 0xae, 0x5, 
       0xae, 0x72d, 0xa, 0xae, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 
       0x732, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x3, 
       0xb0, 0x7, 0xb0, 0x739, 0xa, 0xb0, 0xc, 0xb0, 0xe, 0xb0, 0x73c, 0xb, 
       0xb0, 0x3, 0xb1, 0x7, 0xb1, 0x73f, 0xa, 0xb1, 0xc, 0xb1, 0xe, 0xb1, 
       0x742, 0xb, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 
       0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x74b, 0xa, 0xb2, 0x3, 0xb2, 
       0x7, 0xb2, 0x74e, 0xa, 0xb2, 0xc, 0xb2, 0xe, 0xb2, 0x751, 0xb, 0xb2, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x7, 0xb3, 0x757, 0xa, 
       0xb3, 0xc, 0xb3, 0xe, 0xb3, 0x75a, 0xb, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x5, 0xb3, 0x770, 0xa, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x7, 0xb5, 0x778, 0xa, 0xb5, 0xc, 0xb5, 
       0xe, 0xb5, 0x77b, 0xb, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x5, 0xb5, 0x790, 0xa, 0xb5, 
       0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 
       0x797, 0xa, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x79f, 0xa, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x7, 0xb9, 0x7a5, 0xa, 0xb9, 0xc, 0xb9, 0xe, 
       0xb9, 0x7a8, 0xb, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x7, 0xb9, 0x7b0, 0xa, 0xb9, 0xc, 0xb9, 0xe, 
       0xb9, 0x7b3, 0xb, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 0x7c9, 0xa, 
       0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x7, 0xbb, 0x7d1, 0xa, 0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x7d4, 0xb, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x7, 0xbb, 0x7dc, 0xa, 0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x7df, 0xb, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x7f4, 0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 
       0x5, 0xbc, 0x7f8, 0xa, 0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x7fb, 0xa, 0xbc, 
       0xc, 0xbc, 0xe, 0xbc, 0x7fe, 0xb, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 
       0xbc, 0x7, 0xbc, 0x803, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x806, 0xb, 
       0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x809, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 
       0x80c, 0xb, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x80f, 0xa, 0xbc, 0x3, 0xbc, 
       0x3, 0xbc, 0x5, 0xbc, 0x813, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 
       0xbc, 0x817, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
       0x5, 0xbc, 0x81d, 0xa, 0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x820, 0xa, 0xbc, 
       0xc, 0xbc, 0xe, 0xbc, 0x823, 0xb, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 
       0xbc, 0x827, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x82b, 0xa, 
       0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x82f, 0xa, 0xbc, 0x3, 0xbc, 
       0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x835, 0xa, 0xbc, 0x3, 
       0xbc, 0x7, 0xbc, 0x838, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 0x83b, 0xb, 
       0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x83f, 0xa, 0xbc, 0x3, 0xbc, 
       0x3, 0xbc, 0x5, 0xbc, 0x843, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 
       0xbc, 0x847, 0xa, 0xbc, 0x5, 0xbc, 0x849, 0xa, 0xbc, 0x3, 0xbd, 0x3, 
       0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x84e, 0xa, 0xbd, 0x3, 0xbd, 0x7, 0xbd, 
       0x851, 0xa, 0xbd, 0xc, 0xbd, 0xe, 0xbd, 0x854, 0xb, 0xbd, 0x3, 0xbd, 
       0x3, 0xbd, 0x5, 0xbd, 0x858, 0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 
       0xbd, 0x85c, 0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x860, 0xa, 
       0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x864, 0xa, 0xbe, 0x3, 0xbe, 
       0x7, 0xbe, 0x867, 0xa, 0xbe, 0xc, 0xbe, 0xe, 0xbe, 0x86a, 0xb, 0xbe, 
       0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x86f, 0xa, 0xbe, 0xc, 
       0xbe, 0xe, 0xbe, 0x872, 0xb, 0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x875, 0xa, 
       0xbe, 0xc, 0xbe, 0xe, 0xbe, 0x878, 0xb, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 
       0x87b, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x87f, 0xa, 0xbe, 
       0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x883, 0xa, 0xbe, 0x3, 0xbe, 0x3, 
       0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x889, 0xa, 0xbe, 0x3, 0xbe, 
       0x7, 0xbe, 0x88c, 0xa, 0xbe, 0xc, 0xbe, 0xe, 0xbe, 0x88f, 0xb, 0xbe, 
       0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x893, 0xa, 0xbe, 0x3, 0xbe, 0x3, 
       0xbe, 0x5, 0xbe, 0x897, 0xa, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 
       0x89b, 0xa, 0xbe, 0x5, 0xbe, 0x89d, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x5, 0xbf, 0x8a2, 0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 
       0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 
       0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x8b1, 
       0xa, 0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 
       0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 
       0x3, 0xc2, 0x5, 0xc2, 0x8bf, 0xa, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x8cb, 0xa, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x7, 0xc3, 0x8d2, 0xa, 0xc3, 0xc, 
       0xc3, 0xe, 0xc3, 0x8d5, 0xb, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x7, 0xc4, 0x8e1, 0xa, 0xc4, 0xc, 0xc4, 0xe, 0xc4, 0x8e4, 
       0xb, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
       0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 
       0x8f0, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x7, 0xc5, 0x8f7, 0xa, 0xc5, 0xc, 0xc5, 0xe, 0xc5, 0x8fa, 0xb, 
       0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x8ff, 0xa, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 
       0x906, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x90b, 
       0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x5, 0xc6, 0x912, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 
       0xc6, 0x917, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x5, 0xc6, 0x91e, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x5, 0xc6, 0x923, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x92a, 0xa, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x92f, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x937, 0xa, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x93c, 0xa, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x940, 0xa, 0xc6, 0x3, 0xc7, 0x3, 
       0xc7, 0x5, 0xc7, 0x944, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 
       0x5, 0xc7, 0x949, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x950, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x957, 0xa, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x95c, 0xa, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x963, 0xa, 
       0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x968, 0xa, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 
       0x96f, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x974, 
       0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x5, 0xc8, 0x97c, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x5, 0xc8, 0x981, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 
       0x985, 0xa, 0xc8, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x7, 0xc9, 0x98a, 
       0xa, 0xc9, 0xc, 0xc9, 0xe, 0xc9, 0x98d, 0xb, 0xc9, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xca, 0x5, 0xca, 0x992, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x999, 0xa, 0xca, 0x3, 
       0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x9a0, 
       0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x5, 0xca, 0x9a7, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x9af, 0xa, 0xca, 0x3, 0xca, 
       0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x9b6, 0xa, 
       0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x5, 0xca, 0x9be, 0xa, 0xca, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 
       0x9c2, 0xa, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x5, 0xcc, 0x9c9, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9d0, 0xa, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9d7, 0xa, 0xcc, 
       0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x5, 0xcc, 0x9df, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9e6, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9ee, 0xa, 
       0xcc, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0x9f4, 
       0xa, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 
       0x9fa, 0xa, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 
       0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 
       0xcd, 0xa06, 0xa, 0xcd, 0x3, 0xce, 0x3, 0xce, 0x7, 0xce, 0xa0a, 0xa, 
       0xce, 0xc, 0xce, 0xe, 0xce, 0xa0d, 0xb, 0xce, 0x3, 0xcf, 0x7, 0xcf, 
       0xa10, 0xa, 0xcf, 0xc, 0xcf, 0xe, 0xcf, 0xa13, 0xb, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x5, 0xd0, 
       0xa1b, 0xa, 0xd0, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 
       0xd2, 0x3, 0xd2, 0x3, 0xd2, 0x5, 0xd2, 0xa24, 0xa, 0xd2, 0x3, 0xd2, 
       0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd2, 0x5, 0xd2, 0xa2b, 0xa, 
       0xd2, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x7, 0xd3, 0xa30, 0xa, 0xd3, 
       0xc, 0xd3, 0xe, 0xd3, 0xa33, 0xb, 0xd3, 0x3, 0xd4, 0x3, 0xd4, 0x5, 
       0xd4, 0xa37, 0xa, 0xd4, 0x3, 0xd5, 0x3, 0xd5, 0x5, 0xd5, 0xa3b, 0xa, 
       0xd5, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd7, 0x3, 
       0xd7, 0x3, 0xd8, 0x3, 0xd8, 0x3, 0xd8, 0x5, 0xd8, 0xa46, 0xa, 0xd8, 
       0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 
       0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 
       0x3, 0xd9, 0x5, 0xd9, 0xa55, 0xa, 0xd9, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x7, 0xda, 0xa5d, 0xa, 0xda, 
       0xc, 0xda, 0xe, 0xda, 0xa60, 0xb, 0xda, 0x3, 0xdb, 0x3, 0xdb, 0x3, 
       0xdb, 0x3, 0xdb, 0x3, 0xdb, 0x3, 0xdb, 0x7, 0xdb, 0xa68, 0xa, 0xdb, 
       0xc, 0xdb, 0xe, 0xdb, 0xa6b, 0xb, 0xdb, 0x3, 0xdc, 0x3, 0xdc, 0x3, 
       0xdc, 0x3, 0xdc, 0x3, 0xdc, 0x3, 0xdc, 0x7, 0xdc, 0xa73, 0xa, 0xdc, 
       0xc, 0xdc, 0xe, 0xdc, 0xa76, 0xb, 0xdc, 0x3, 0xdd, 0x3, 0xdd, 0x3, 
       0xdd, 0x3, 0xdd, 0x3, 0xdd, 0x3, 0xdd, 0x7, 0xdd, 0xa7e, 0xa, 0xdd, 
       0xc, 0xdd, 0xe, 0xdd, 0xa81, 0xb, 0xdd, 0x3, 0xde, 0x3, 0xde, 0x3, 
       0xde, 0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 0x7, 0xde, 0xa89, 0xa, 0xde, 
       0xc, 0xde, 0xe, 0xde, 0xa8c, 0xb, 0xde, 0x3, 0xdf, 0x3, 0xdf, 0x3, 
       0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 
       0xdf, 0x7, 0xdf, 0xa97, 0xa, 0xdf, 0xc, 0xdf, 0xe, 0xdf, 0xa9a, 0xb, 
       0xdf, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 
       0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 
       0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 
       0xe0, 0x7, 0xe0, 0xaae, 0xa, 0xe0, 0xc, 0xe0, 0xe, 0xe0, 0xab1, 0xb, 
       0xe0, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 
       0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 
       0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x7, 0xe1, 0xac3, 
       0xa, 0xe1, 0xc, 0xe1, 0xe, 0xe1, 0xac6, 0xb, 0xe1, 0x3, 0xe2, 0x3, 
       0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 
       0xe2, 0x3, 0xe2, 0x7, 0xe2, 0xad1, 0xa, 0xe2, 0xc, 0xe2, 0xe, 0xe2, 
       0xad4, 0xb, 0xe2, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 
       0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 
       0xe3, 0x3, 0xe3, 0x7, 0xe3, 0xae2, 0xa, 0xe3, 0xc, 0xe3, 0xe, 0xe3, 
       0xae5, 0xb, 0xe3, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 
       0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x5, 0xe4, 0xaee, 0xa, 0xe4, 0x3, 0xe5, 
       0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe7, 
       0x3, 0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x5, 0xe7, 
       0xafc, 0xa, 0xe7, 0x3, 0xe8, 0x3, 0xe8, 0x5, 0xe8, 0xb00, 0xa, 0xe8, 
       0x3, 0xe8, 0x3, 0xe8, 0x7, 0xe8, 0xb04, 0xa, 0xe8, 0xc, 0xe8, 0xe, 
       0xe8, 0xb07, 0xb, 0xe8, 0x3, 0xe9, 0x3, 0xe9, 0x3, 0xe9, 0x3, 0xea, 
       0x3, 0xea, 0x3, 0xeb, 0x3, 0xeb, 0x3, 0xeb, 0x3, 0xec, 0x3, 0xec, 
       0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 
       0x3, 0xed, 0x3, 0xed, 0x7, 0xed, 0xb1b, 0xa, 0xed, 0xc, 0xed, 0xe, 
       0xed, 0xb1e, 0xb, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 
       0x3, 0xed, 0x3, 0xed, 0x7, 0xed, 0xb26, 0xa, 0xed, 0xc, 0xed, 0xe, 
       0xed, 0xb29, 0xb, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x5, 0xed, 
       0xb2e, 0xa, 0xed, 0x3, 0xee, 0x3, 0xee, 0x3, 0xee, 0x2, 0xf, 0x38, 
       0x3e, 0x40, 0x1b2, 0x1b4, 0x1b6, 0x1b8, 0x1ba, 0x1bc, 0x1be, 0x1c0, 
       0x1c2, 0x1c4, 0xef, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
       0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
       0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
       0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
       0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
       0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 
       0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
       0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 
       0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 
       0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
       0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 
       0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 
       0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 
       0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 
       0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 
       0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 
       0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 
       0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 
       0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x190, 
       0x192, 0x194, 0x196, 0x198, 0x19a, 0x19c, 0x19e, 0x1a0, 0x1a2, 0x1a4, 
       0x1a6, 0x1a8, 0x1aa, 0x1ac, 0x1ae, 0x1b0, 0x1b2, 0x1b4, 0x1b6, 0x1b8, 
       0x1ba, 0x1bc, 0x1be, 0x1c0, 0x1c2, 0x1c4, 0x1c6, 0x1c8, 0x1ca, 0x1cc, 
       0x1ce, 0x1d0, 0x1d2, 0x1d4, 0x1d6, 0x1d8, 0x1da, 0x2, 0x6, 0x3, 0x2, 
       0x35, 0x3a, 0x7, 0x2, 0x7, 0x7, 0xa, 0xa, 0x1d, 0x1d, 0x1f, 0x1f, 
       0x27, 0x27, 0x4, 0x2, 0x10, 0x10, 0x16, 0x16, 0x4, 0x2, 0x44, 0x44, 
       0x5d, 0x67, 0x2, 0xc24, 0x2, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1e0, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1f4, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1f8, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x10, 0x201, 0x3, 0x2, 
       0x2, 0x2, 0x12, 0x220, 0x3, 0x2, 0x2, 0x2, 0x14, 0x222, 0x3, 0x2, 
       0x2, 0x2, 0x16, 0x230, 0x3, 0x2, 0x2, 0x2, 0x18, 0x237, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0x239, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x23b, 0x3, 0x2, 
       0x2, 0x2, 0x1e, 0x240, 0x3, 0x2, 0x2, 0x2, 0x20, 0x24e, 0x3, 0x2, 
       0x2, 0x2, 0x22, 0x253, 0x3, 0x2, 0x2, 0x2, 0x24, 0x268, 0x3, 0x2, 
       0x2, 0x2, 0x26, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x27b, 0x3, 0x2, 
       0x2, 0x2, 0x2a, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x280, 0x3, 0x2, 
       0x2, 0x2, 0x2e, 0x284, 0x3, 0x2, 0x2, 0x2, 0x30, 0x28e, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0x293, 0x3, 0x2, 0x2, 0x2, 0x34, 0x29e, 0x3, 0x2, 
       0x2, 0x2, 0x36, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x38, 0x2a7, 0x3, 0x2, 
       0x2, 0x2, 0x3a, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x2b9, 0x3, 0x2, 
       0x2, 0x2, 0x3e, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2c6, 0x3, 0x2, 
       0x2, 0x2, 0x42, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x44, 0x2e5, 0x3, 0x2, 
       0x2, 0x2, 0x46, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x48, 0x2f9, 0x3, 0x2, 
       0x2, 0x2, 0x4a, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x2ff, 0x3, 0x2, 
       0x2, 0x2, 0x4e, 0x305, 0x3, 0x2, 0x2, 0x2, 0x50, 0x30c, 0x3, 0x2, 
       0x2, 0x2, 0x52, 0x316, 0x3, 0x2, 0x2, 0x2, 0x54, 0x31a, 0x3, 0x2, 
       0x2, 0x2, 0x56, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x58, 0x337, 0x3, 0x2, 
       0x2, 0x2, 0x5a, 0x339, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x33d, 0x3, 0x2, 
       0x2, 0x2, 0x5e, 0x345, 0x3, 0x2, 0x2, 0x2, 0x60, 0x348, 0x3, 0x2, 
       0x2, 0x2, 0x62, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x64, 0x353, 0x3, 0x2, 
       0x2, 0x2, 0x66, 0x360, 0x3, 0x2, 0x2, 0x2, 0x68, 0x367, 0x3, 0x2, 
       0x2, 0x2, 0x6a, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x37b, 0x3, 0x2, 
       0x2, 0x2, 0x6e, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x385, 0x3, 0x2, 
       0x2, 0x2, 0x72, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x74, 0x390, 0x3, 0x2, 
       0x2, 0x2, 0x76, 0x394, 0x3, 0x2, 0x2, 0x2, 0x78, 0x398, 0x3, 0x2, 
       0x2, 0x2, 0x7a, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x3a1, 0x3, 0x2, 
       0x2, 0x2, 0x7e, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x80, 0x3bc, 0x3, 0x2, 
       0x2, 0x2, 0x82, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x84, 0x3cb, 0x3, 0x2, 
       0x2, 0x2, 0x86, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x88, 0x3cf, 0x3, 0x2, 
       0x2, 0x2, 0x8a, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x3dc, 0x3, 0x2, 
       0x2, 0x2, 0x8e, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x90, 0x3f1, 0x3, 0x2, 
       0x2, 0x2, 0x92, 0x404, 0x3, 0x2, 0x2, 0x2, 0x94, 0x408, 0x3, 0x2, 
       0x2, 0x2, 0x96, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x98, 0x419, 0x3, 0x2, 
       0x2, 0x2, 0x9a, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x430, 0x3, 0x2, 
       0x2, 0x2, 0x9e, 0x438, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x44b, 0x3, 0x2, 
       0x2, 0x2, 0xa2, 0x450, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x459, 0x3, 0x2, 
       0x2, 0x2, 0xa6, 0x45c, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x466, 0x3, 0x2, 
       0x2, 0x2, 0xaa, 0x46a, 0x3, 0x2, 0x2, 0x2, 0xac, 0x46c, 0x3, 0x2, 
       0x2, 0x2, 0xae, 0x46e, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x474, 0x3, 0x2, 
       0x2, 0x2, 0xb2, 0x481, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x484, 0x3, 0x2, 
       0x2, 0x2, 0xb6, 0x48d, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x48f, 0x3, 0x2, 
       0x2, 0x2, 0xba, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x4cb, 0x3, 0x2, 
       0x2, 0x2, 0xbe, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x4df, 0x3, 0x2, 
       0x2, 0x2, 0xc2, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x4f8, 0x3, 0x2, 
       0x2, 0x2, 0xc6, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x503, 0x3, 0x2, 
       0x2, 0x2, 0xca, 0x508, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x51c, 0x3, 0x2, 
       0x2, 0x2, 0xce, 0x51e, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x521, 0x3, 0x2, 
       0x2, 0x2, 0xd2, 0x52f, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x534, 0x3, 0x2, 
       0x2, 0x2, 0xd6, 0x53f, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x544, 0x3, 0x2, 
       0x2, 0x2, 0xda, 0x550, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x555, 0x3, 0x2, 
       0x2, 0x2, 0xde, 0x55d, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x56b, 0x3, 0x2, 
       0x2, 0x2, 0xe2, 0x570, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x582, 0x3, 0x2, 
       0x2, 0x2, 0xe6, 0x584, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x58a, 0x3, 0x2, 
       0x2, 0x2, 0xea, 0x58c, 0x3, 0x2, 0x2, 0x2, 0xec, 0x594, 0x3, 0x2, 
       0x2, 0x2, 0xee, 0x59c, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x5a3, 0x3, 0x2, 
       0x2, 0x2, 0xf2, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x5ae, 0x3, 0x2, 
       0x2, 0x2, 0xf6, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x5b9, 0x3, 0x2, 
       0x2, 0x2, 0xfa, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x5c8, 0x3, 0x2, 
       0x2, 0x2, 0xfe, 0x5d0, 0x3, 0x2, 0x2, 0x2, 0x100, 0x5d6, 0x3, 0x2, 
       0x2, 0x2, 0x102, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0x104, 0x5e2, 0x3, 0x2, 
       0x2, 0x2, 0x106, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x108, 0x5f4, 0x3, 0x2, 
       0x2, 0x2, 0x10a, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x609, 0x3, 0x2, 
       0x2, 0x2, 0x10e, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x110, 0x60d, 0x3, 0x2, 
       0x2, 0x2, 0x112, 0x611, 0x3, 0x2, 0x2, 0x2, 0x114, 0x615, 0x3, 0x2, 
       0x2, 0x2, 0x116, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x118, 0x621, 0x3, 0x2, 
       0x2, 0x2, 0x11a, 0x627, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x62f, 0x3, 0x2, 
       0x2, 0x2, 0x11e, 0x641, 0x3, 0x2, 0x2, 0x2, 0x120, 0x643, 0x3, 0x2, 
       0x2, 0x2, 0x122, 0x649, 0x3, 0x2, 0x2, 0x2, 0x124, 0x658, 0x3, 0x2, 
       0x2, 0x2, 0x126, 0x65b, 0x3, 0x2, 0x2, 0x2, 0x128, 0x66c, 0x3, 0x2, 
       0x2, 0x2, 0x12a, 0x66e, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x670, 0x3, 0x2, 
       0x2, 0x2, 0x12e, 0x676, 0x3, 0x2, 0x2, 0x2, 0x130, 0x67c, 0x3, 0x2, 
       0x2, 0x2, 0x132, 0x686, 0x3, 0x2, 0x2, 0x2, 0x134, 0x68a, 0x3, 0x2, 
       0x2, 0x2, 0x136, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x138, 0x69c, 0x3, 0x2, 
       0x2, 0x2, 0x13a, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x6b0, 0x3, 0x2, 
       0x2, 0x2, 0x13e, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x140, 0x6ba, 0x3, 0x2, 
       0x2, 0x2, 0x142, 0x6c9, 0x3, 0x2, 0x2, 0x2, 0x144, 0x6d8, 0x3, 0x2, 
       0x2, 0x2, 0x146, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x148, 0x6e4, 0x3, 0x2, 
       0x2, 0x2, 0x14a, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x6f0, 0x3, 0x2, 
       0x2, 0x2, 0x14e, 0x702, 0x3, 0x2, 0x2, 0x2, 0x150, 0x704, 0x3, 0x2, 
       0x2, 0x2, 0x152, 0x70b, 0x3, 0x2, 0x2, 0x2, 0x154, 0x714, 0x3, 0x2, 
       0x2, 0x2, 0x156, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x158, 0x722, 0x3, 0x2, 
       0x2, 0x2, 0x15a, 0x725, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x72e, 0x3, 0x2, 
       0x2, 0x2, 0x15e, 0x735, 0x3, 0x2, 0x2, 0x2, 0x160, 0x740, 0x3, 0x2, 
       0x2, 0x2, 0x162, 0x74a, 0x3, 0x2, 0x2, 0x2, 0x164, 0x76f, 0x3, 0x2, 
       0x2, 0x2, 0x166, 0x771, 0x3, 0x2, 0x2, 0x2, 0x168, 0x78f, 0x3, 0x2, 
       0x2, 0x2, 0x16a, 0x796, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x798, 0x3, 0x2, 
       0x2, 0x2, 0x16e, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x170, 0x7c8, 0x3, 0x2, 
       0x2, 0x2, 0x172, 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x174, 0x7f3, 0x3, 0x2, 
       0x2, 0x2, 0x176, 0x848, 0x3, 0x2, 0x2, 0x2, 0x178, 0x84a, 0x3, 0x2, 
       0x2, 0x2, 0x17a, 0x89c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x8a1, 0x3, 0x2, 
       0x2, 0x2, 0x17e, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x180, 0x8b2, 0x3, 0x2, 
       0x2, 0x2, 0x182, 0x8be, 0x3, 0x2, 0x2, 0x2, 0x184, 0x8ca, 0x3, 0x2, 
       0x2, 0x2, 0x186, 0x8d6, 0x3, 0x2, 0x2, 0x2, 0x188, 0x8ef, 0x3, 0x2, 
       0x2, 0x2, 0x18a, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x941, 0x3, 0x2, 
       0x2, 0x2, 0x18e, 0x984, 0x3, 0x2, 0x2, 0x2, 0x190, 0x986, 0x3, 0x2, 
       0x2, 0x2, 0x192, 0x9bd, 0x3, 0x2, 0x2, 0x2, 0x194, 0x9bf, 0x3, 0x2, 
       0x2, 0x2, 0x196, 0x9ed, 0x3, 0x2, 0x2, 0x2, 0x198, 0xa05, 0x3, 0x2, 
       0x2, 0x2, 0x19a, 0xa07, 0x3, 0x2, 0x2, 0x2, 0x19c, 0xa11, 0x3, 0x2, 
       0x2, 0x2, 0x19e, 0xa1a, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0xa1c, 0x3, 0x2, 
       0x2, 0x2, 0x1a2, 0xa2a, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0xa2c, 0x3, 0x2, 
       0x2, 0x2, 0x1a6, 0xa36, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0xa3a, 0x3, 0x2, 
       0x2, 0x2, 0x1aa, 0xa3c, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0xa40, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0xa45, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0xa54, 0x3, 0x2, 
       0x2, 0x2, 0x1b2, 0xa56, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0xa61, 0x3, 0x2, 
       0x2, 0x2, 0x1b6, 0xa6c, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0xa77, 0x3, 0x2, 
       0x2, 0x2, 0x1ba, 0xa82, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0xa8d, 0x3, 0x2, 
       0x2, 0x2, 0x1be, 0xa9b, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0xab2, 0x3, 0x2, 
       0x2, 0x2, 0x1c2, 0xac7, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0xad5, 0x3, 0x2, 
       0x2, 0x2, 0x1c6, 0xaed, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0xaef, 0x3, 0x2, 
       0x2, 0x2, 0x1ca, 0xaf2, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0xafb, 0x3, 0x2, 
       0x2, 0x2, 0x1ce, 0xaff, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0xb08, 0x3, 0x2, 
       0x2, 0x2, 0x1d2, 0xb0b, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0xb0d, 0x3, 0x2, 
       0x2, 0x2, 0x1d6, 0xb10, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0xb2d, 0x3, 0x2, 
       0x2, 0x2, 0x1da, 0xb2f, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x9, 0x2, 
       0x2, 0x2, 0x1dd, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e1, 0x5, 0x6, 
       0x4, 0x2, 0x1df, 0x1e1, 0x5, 0xe, 0x8, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 
       0x2, 0x2, 0x1e0, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x1e2, 0x1e4, 0x5, 0xe8, 0x75, 0x2, 0x1e3, 0x1e2, 0x3, 
       0x2, 0x2, 0x2, 0x1e4, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e3, 0x3, 
       0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e8, 0x3, 
       0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1f1, 0x5, 
       0x8, 0x5, 0x2, 0x1e9, 0x1eb, 0x5, 0xe8, 0x75, 0x2, 0x1ea, 0x1e9, 
       0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ea, 
       0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ef, 
       0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f1, 
       0x7, 0x5, 0x2, 0x2, 0x1f0, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ec, 
       0x3, 0x2, 0x2, 0x2, 0x1f1, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f5, 
       0x5, 0xa, 0x6, 0x2, 0x1f3, 0x1f5, 0x5, 0xc, 0x7, 0x2, 0x1f4, 0x1f2, 
       0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x9, 
       0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x9, 0x3, 0x2, 0x2, 0x1f7, 0xb, 
       0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x9, 0x4, 0x2, 0x2, 0x1f9, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fe, 0x5, 0x10, 0x9, 0x2, 0x1fb, 0x1fe, 
       0x5, 0x1e, 0x10, 0x2, 0x1fc, 0x1fe, 0x5, 0x20, 0x11, 0x2, 0x1fd, 
       0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 
       0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
       0x202, 0x5, 0x16, 0xc, 0x2, 0x200, 0x202, 0x5, 0x1c, 0xf, 0x2, 0x201, 
       0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x203, 0x206, 0x5, 0x14, 0xb, 0x2, 0x204, 
       0x206, 0x5, 0x1a, 0xe, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 
       0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 0x209, 0x3, 0x2, 0x2, 0x2, 0x207, 
       0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x3, 0x2, 0x2, 0x2, 0x208, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0x209, 0x207, 0x3, 0x2, 0x2, 0x2, 0x20a, 
       0x20c, 0x5, 0xe8, 0x75, 0x2, 0x20b, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20c, 
       0x20f, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20d, 
       0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20f, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x210, 0x212, 0x7, 0x68, 0x2, 0x2, 0x211, 
       0x213, 0x5, 0x2c, 0x17, 0x2, 0x212, 0x211, 0x3, 0x2, 0x2, 0x2, 0x212, 
       0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x221, 0x3, 0x2, 0x2, 0x2, 0x214, 
       0x215, 0x5, 0x10, 0x9, 0x2, 0x215, 0x219, 0x7, 0x43, 0x2, 0x2, 0x216, 
       0x218, 0x5, 0xe8, 0x75, 0x2, 0x217, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 
       0x21b, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 
       0x21a, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21b, 
       0x219, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21e, 0x7, 0x68, 0x2, 0x2, 0x21d, 
       0x21f, 0x5, 0x2c, 0x17, 0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21e, 
       0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x221, 0x3, 0x2, 0x2, 0x2, 0x220, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x220, 0x214, 0x3, 0x2, 0x2, 0x2, 0x221, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0x222, 0x226, 0x7, 0x43, 0x2, 0x2, 0x223, 
       0x225, 0x5, 0xe8, 0x75, 0x2, 0x224, 0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 
       0x228, 0x3, 0x2, 0x2, 0x2, 0x226, 0x224, 0x3, 0x2, 0x2, 0x2, 0x226, 
       0x227, 0x3, 0x2, 0x2, 0x2, 0x227, 0x229, 0x3, 0x2, 0x2, 0x2, 0x228, 
       0x226, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22b, 0x7, 0x68, 0x2, 0x2, 0x22a, 
       0x22c, 0x5, 0x2c, 0x17, 0x2, 0x22b, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22b, 
       0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x15, 0x3, 0x2, 0x2, 0x2, 0x22d, 
       0x22f, 0x5, 0xe8, 0x75, 0x2, 0x22e, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22f, 
       0x232, 0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x230, 
       0x231, 0x3, 0x2, 0x2, 0x2, 0x231, 0x233, 0x3, 0x2, 0x2, 0x2, 0x232, 
       0x230, 0x3, 0x2, 0x2, 0x2, 0x233, 0x235, 0x7, 0x68, 0x2, 0x2, 0x234, 
       0x236, 0x5, 0x2c, 0x17, 0x2, 0x235, 0x234, 0x3, 0x2, 0x2, 0x2, 0x235, 
       0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x17, 0x3, 0x2, 0x2, 0x2, 0x237, 
       0x238, 0x5, 0x12, 0xa, 0x2, 0x238, 0x19, 0x3, 0x2, 0x2, 0x2, 0x239, 
       0x23a, 0x5, 0x14, 0xb, 0x2, 0x23a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x23b, 
       0x23c, 0x5, 0x16, 0xc, 0x2, 0x23c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x23d, 
       0x23f, 0x5, 0xe8, 0x75, 0x2, 0x23e, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23f, 
       0x242, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 
       0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x243, 0x3, 0x2, 0x2, 0x2, 0x242, 
       0x240, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x7, 0x68, 0x2, 0x2, 0x244, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x5, 0x6, 0x4, 0x2, 0x246, 
       0x247, 0x5, 0x22, 0x12, 0x2, 0x247, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x248, 
       0x249, 0x5, 0x10, 0x9, 0x2, 0x249, 0x24a, 0x5, 0x22, 0x12, 0x2, 0x24a, 
       0x24f, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x5, 0x1e, 0x10, 0x2, 0x24c, 
       0x24d, 0x5, 0x22, 0x12, 0x2, 0x24d, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24e, 
       0x245, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24e, 
       0x24b, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x250, 
       0x252, 0x5, 0xe8, 0x75, 0x2, 0x251, 0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 
       0x255, 0x3, 0x2, 0x2, 0x2, 0x253, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 
       0x254, 0x3, 0x2, 0x2, 0x2, 0x254, 0x256, 0x3, 0x2, 0x2, 0x2, 0x255, 
       0x253, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x7, 0x3f, 0x2, 0x2, 0x257, 
       0x262, 0x7, 0x40, 0x2, 0x2, 0x258, 0x25a, 0x5, 0xe8, 0x75, 0x2, 0x259, 
       0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25b, 
       0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 
       0x25e, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25e, 
       0x25f, 0x7, 0x3f, 0x2, 0x2, 0x25f, 0x261, 0x7, 0x40, 0x2, 0x2, 0x260, 
       0x25b, 0x3, 0x2, 0x2, 0x2, 0x261, 0x264, 0x3, 0x2, 0x2, 0x2, 0x262, 
       0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 
       0x23, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x267, 0x5, 0x26, 0x14, 0x2, 0x266, 0x265, 0x3, 0x2, 0x2, 0x2, 0x267, 
       0x26a, 0x3, 0x2, 0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 
       0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26a, 
       0x268, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26d, 0x7, 0x68, 0x2, 0x2, 0x26c, 
       0x26e, 0x5, 0x28, 0x15, 0x2, 0x26d, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26d, 
       0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x25, 0x3, 0x2, 0x2, 0x2, 0x26f, 
       0x270, 0x5, 0xe8, 0x75, 0x2, 0x270, 0x27, 0x3, 0x2, 0x2, 0x2, 0x271, 
       0x272, 0x7, 0x13, 0x2, 0x2, 0x272, 0x27c, 0x5, 0x1e, 0x10, 0x2, 0x273, 
       0x274, 0x7, 0x13, 0x2, 0x2, 0x274, 0x278, 0x5, 0x10, 0x9, 0x2, 0x275, 
       0x277, 0x5, 0x2a, 0x16, 0x2, 0x276, 0x275, 0x3, 0x2, 0x2, 0x2, 0x277, 
       0x27a, 0x3, 0x2, 0x2, 0x2, 0x278, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 
       0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x278, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x271, 0x3, 0x2, 0x2, 0x2, 0x27b, 
       0x273, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x29, 0x3, 0x2, 0x2, 0x2, 0x27d, 
       0x27e, 0x7, 0x57, 0x2, 0x2, 0x27e, 0x27f, 0x5, 0x18, 0xd, 0x2, 0x27f, 
       0x2b, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x7, 0x46, 0x2, 0x2, 0x281, 
       0x282, 0x5, 0x2e, 0x18, 0x2, 0x282, 0x283, 0x7, 0x45, 0x2, 0x2, 0x283, 
       0x2d, 0x3, 0x2, 0x2, 0x2, 0x284, 0x289, 0x5, 0x30, 0x19, 0x2, 0x285, 
       0x286, 0x7, 0x42, 0x2, 0x2, 0x286, 0x288, 0x5, 0x30, 0x19, 0x2, 0x287, 
       0x285, 0x3, 0x2, 0x2, 0x2, 0x288, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x289, 
       0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28c, 
       0x28f, 0x5, 0xe, 0x8, 0x2, 0x28d, 0x28f, 0x5, 0x32, 0x1a, 0x2, 0x28e, 
       0x28c, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28f, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x290, 0x292, 0x5, 0xe8, 0x75, 0x2, 0x291, 
       0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 0x295, 0x3, 0x2, 0x2, 0x2, 0x293, 
       0x291, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 0x2, 0x294, 
       0x296, 0x3, 0x2, 0x2, 0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 0x296, 
       0x298, 0x7, 0x49, 0x2, 0x2, 0x297, 0x299, 0x5, 0x34, 0x1b, 0x2, 0x298, 
       0x297, 0x3, 0x2, 0x2, 0x2, 0x298, 0x299, 0x3, 0x2, 0x2, 0x2, 0x299, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29b, 0x7, 0x13, 0x2, 0x2, 0x29b, 
       0x29f, 0x5, 0xe, 0x8, 0x2, 0x29c, 0x29d, 0x7, 0x2a, 0x2, 0x2, 0x29d, 
       0x29f, 0x5, 0xe, 0x8, 0x2, 0x29e, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29e, 
       0x29c, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2a0, 
       0x2a6, 0x7, 0x68, 0x2, 0x2, 0x2a1, 0x2a2, 0x5, 0x38, 0x1d, 0x2, 0x2a2, 
       0x2a3, 0x7, 0x43, 0x2, 0x2, 0x2a3, 0x2a4, 0x7, 0x68, 0x2, 0x2, 0x2a4, 
       0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a5, 
       0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2a7, 
       0x2a8, 0x8, 0x1d, 0x1, 0x2, 0x2a8, 0x2a9, 0x7, 0x68, 0x2, 0x2, 0x2a9, 
       0x2af, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0xc, 0x3, 0x2, 0x2, 0x2ab, 
       0x2ac, 0x7, 0x43, 0x2, 0x2, 0x2ac, 0x2ae, 0x7, 0x68, 0x2, 0x2, 0x2ad, 
       0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2af, 
       0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b0, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
       0x2b8, 0x7, 0x68, 0x2, 0x2, 0x2b3, 0x2b4, 0x5, 0x40, 0x21, 0x2, 0x2b4, 
       0x2b5, 0xb, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x68, 0x2, 0x2, 0x2b6, 
       0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b7, 
       0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
       0x2ba, 0x7, 0x68, 0x2, 0x2, 0x2ba, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
       0x2bc, 0x8, 0x20, 0x1, 0x2, 0x2bc, 0x2bd, 0x7, 0x68, 0x2, 0x2, 0x2bd, 
       0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0xc, 0x3, 0x2, 0x2, 0x2bf, 
       0x2c0, 0x7, 0x43, 0x2, 0x2, 0x2c0, 0x2c2, 0x7, 0x68, 0x2, 0x2, 0x2c1, 
       0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c3, 
       0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c6, 
       0x2c7, 0x8, 0x21, 0x1, 0x2, 0x2c7, 0x2c8, 0x7, 0x68, 0x2, 0x2, 0x2c8, 
       0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0xc, 0x3, 0x2, 0x2, 0x2ca, 
       0x2cb, 0x7, 0x43, 0x2, 0x2, 0x2cb, 0x2cd, 0x7, 0x68, 0x2, 0x2, 0x2cc, 
       0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
       0x41, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d1, 
       0x2d3, 0x5, 0x44, 0x23, 0x2, 0x2d2, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d2, 
       0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d4, 
       0x2d6, 0x5, 0x48, 0x25, 0x2, 0x2d5, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 
       0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d7, 
       0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2d9, 
       0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dc, 0x5, 0x52, 0x2a, 0x2, 0x2db, 
       0x2da, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
       0x2db, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2de, 
       0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2e0, 
       0x2e1, 0x7, 0x2, 0x2, 0x3, 0x2e1, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2e2, 
       0x2e4, 0x5, 0x46, 0x24, 0x2, 0x2e3, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e4, 
       0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 
       0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e7, 
       0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x22, 0x2, 0x2, 0x2e9, 
       0x2ee, 0x7, 0x68, 0x2, 0x2, 0x2ea, 0x2eb, 0x7, 0x43, 0x2, 0x2, 0x2eb, 
       0x2ed, 0x7, 0x68, 0x2, 0x2, 0x2ec, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ed, 
       0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ee, 
       0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f0, 
       0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x7, 0x41, 0x2, 0x2, 0x2f2, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0x5, 0xe8, 0x75, 0x2, 0x2f4, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2fa, 0x5, 0x4a, 0x26, 0x2, 0x2f6, 
       0x2fa, 0x5, 0x4c, 0x27, 0x2, 0x2f7, 0x2fa, 0x5, 0x4e, 0x28, 0x2, 
       0x2f8, 0x2fa, 0x5, 0x50, 0x29, 0x2, 0x2f9, 0x2f5, 0x3, 0x2, 0x2, 
       0x2, 0x2f9, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f7, 0x3, 0x2, 0x2, 
       0x2, 0x2f9, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x49, 0x3, 0x2, 0x2, 
       0x2, 0x2fb, 0x2fc, 0x7, 0x1b, 0x2, 0x2, 0x2fc, 0x2fd, 0x5, 0x36, 
       0x1c, 0x2, 0x2fd, 0x2fe, 0x7, 0x41, 0x2, 0x2, 0x2fe, 0x4b, 0x3, 0x2, 
       0x2, 0x2, 0x2ff, 0x300, 0x7, 0x1b, 0x2, 0x2, 0x300, 0x301, 0x5, 0x38, 
       0x1d, 0x2, 0x301, 0x302, 0x7, 0x43, 0x2, 0x2, 0x302, 0x303, 0x7, 
       0x55, 0x2, 0x2, 0x303, 0x304, 0x7, 0x41, 0x2, 0x2, 0x304, 0x4d, 0x3, 
       0x2, 0x2, 0x2, 0x305, 0x306, 0x7, 0x1b, 0x2, 0x2, 0x306, 0x307, 0x7, 
       0x28, 0x2, 0x2, 0x307, 0x308, 0x5, 0x36, 0x1c, 0x2, 0x308, 0x309, 
       0x7, 0x43, 0x2, 0x2, 0x309, 0x30a, 0x7, 0x68, 0x2, 0x2, 0x30a, 0x30b, 
       0x7, 0x41, 0x2, 0x2, 0x30b, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 
       0x7, 0x1b, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x28, 0x2, 0x2, 0x30e, 0x30f, 
       0x5, 0x36, 0x1c, 0x2, 0x30f, 0x310, 0x7, 0x43, 0x2, 0x2, 0x310, 0x311, 
       0x7, 0x55, 0x2, 0x2, 0x311, 0x312, 0x7, 0x41, 0x2, 0x2, 0x312, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x313, 0x317, 0x5, 0x54, 0x2b, 0x2, 0x314, 0x317, 
       0x5, 0xc8, 0x65, 0x2, 0x315, 0x317, 0x7, 0x41, 0x2, 0x2, 0x316, 0x313, 
       0x3, 0x2, 0x2, 0x2, 0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 0x316, 0x315, 
       0x3, 0x2, 0x2, 0x2, 0x317, 0x53, 0x3, 0x2, 0x2, 0x2, 0x318, 0x31b, 
       0x5, 0x56, 0x2c, 0x2, 0x319, 0x31b, 0x5, 0xbc, 0x5f, 0x2, 0x31a, 
       0x318, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31b, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31e, 0x5, 0x58, 0x2d, 0x2, 0x31d, 
       0x31c, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x321, 0x3, 0x2, 0x2, 0x2, 0x31f, 
       0x31d, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 0x3, 0x2, 0x2, 0x2, 0x320, 
       0x322, 0x3, 0x2, 0x2, 0x2, 0x321, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x322, 
       0x323, 0x7, 0xb, 0x2, 0x2, 0x323, 0x325, 0x7, 0x68, 0x2, 0x2, 0x324, 
       0x326, 0x5, 0x5a, 0x2e, 0x2, 0x325, 0x324, 0x3, 0x2, 0x2, 0x2, 0x325, 
       0x326, 0x3, 0x2, 0x2, 0x2, 0x326, 0x328, 0x3, 0x2, 0x2, 0x2, 0x327, 
       0x329, 0x5, 0x5e, 0x30, 0x2, 0x328, 0x327, 0x3, 0x2, 0x2, 0x2, 0x328, 
       0x329, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32a, 
       0x32c, 0x5, 0x60, 0x31, 0x2, 0x32b, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32b, 
       0x32c, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32d, 
       0x32e, 0x5, 0x64, 0x33, 0x2, 0x32e, 0x57, 0x3, 0x2, 0x2, 0x2, 0x32f, 
       0x338, 0x5, 0xe8, 0x75, 0x2, 0x330, 0x338, 0x7, 0x25, 0x2, 0x2, 0x331, 
       0x338, 0x7, 0x24, 0x2, 0x2, 0x332, 0x338, 0x7, 0x23, 0x2, 0x2, 0x333, 
       0x338, 0x7, 0x3, 0x2, 0x2, 0x334, 0x338, 0x7, 0x28, 0x2, 0x2, 0x335, 
       0x338, 0x7, 0x14, 0x2, 0x2, 0x336, 0x338, 0x7, 0x29, 0x2, 0x2, 0x337, 
       0x32f, 0x3, 0x2, 0x2, 0x2, 0x337, 0x330, 0x3, 0x2, 0x2, 0x2, 0x337, 
       0x331, 0x3, 0x2, 0x2, 0x2, 0x337, 0x332, 0x3, 0x2, 0x2, 0x2, 0x337, 
       0x333, 0x3, 0x2, 0x2, 0x2, 0x337, 0x334, 0x3, 0x2, 0x2, 0x2, 0x337, 
       0x335, 0x3, 0x2, 0x2, 0x2, 0x337, 0x336, 0x3, 0x2, 0x2, 0x2, 0x338, 
       0x59, 0x3, 0x2, 0x2, 0x2, 0x339, 0x33a, 0x7, 0x46, 0x2, 0x2, 0x33a, 
       0x33b, 0x5, 0x5c, 0x2f, 0x2, 0x33b, 0x33c, 0x7, 0x45, 0x2, 0x2, 0x33c, 
       0x5b, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x342, 0x5, 0x24, 0x13, 0x2, 0x33e, 
       0x33f, 0x7, 0x42, 0x2, 0x2, 0x33f, 0x341, 0x5, 0x24, 0x13, 0x2, 0x340, 
       0x33e, 0x3, 0x2, 0x2, 0x2, 0x341, 0x344, 0x3, 0x2, 0x2, 0x2, 0x342, 
       0x340, 0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x3, 0x2, 0x2, 0x2, 0x343, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x344, 0x342, 0x3, 0x2, 0x2, 0x2, 0x345, 
       0x346, 0x7, 0x13, 0x2, 0x2, 0x346, 0x347, 0x5, 0x12, 0xa, 0x2, 0x347, 
       0x5f, 0x3, 0x2, 0x2, 0x2, 0x348, 0x349, 0x7, 0x1a, 0x2, 0x2, 0x349, 
       0x34a, 0x5, 0x62, 0x32, 0x2, 0x34a, 0x61, 0x3, 0x2, 0x2, 0x2, 0x34b, 
       0x350, 0x5, 0x18, 0xd, 0x2, 0x34c, 0x34d, 0x7, 0x42, 0x2, 0x2, 0x34d, 
       0x34f, 0x5, 0x18, 0xd, 0x2, 0x34e, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34f, 
       0x352, 0x3, 0x2, 0x2, 0x2, 0x350, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x350, 
       0x351, 0x3, 0x2, 0x2, 0x2, 0x351, 0x63, 0x3, 0x2, 0x2, 0x2, 0x352, 
       0x350, 0x3, 0x2, 0x2, 0x2, 0x353, 0x357, 0x7, 0x3d, 0x2, 0x2, 0x354, 
       0x356, 0x5, 0x66, 0x34, 0x2, 0x355, 0x354, 0x3, 0x2, 0x2, 0x2, 0x356, 
       0x359, 0x3, 0x2, 0x2, 0x2, 0x357, 0x355, 0x3, 0x2, 0x2, 0x2, 0x357, 
       0x358, 0x3, 0x2, 0x2, 0x2, 0x358, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x359, 
       0x357, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0x3e, 0x2, 0x2, 0x35b, 
       0x65, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x361, 0x5, 0x68, 0x35, 0x2, 0x35d, 
       0x361, 0x5, 0xac, 0x57, 0x2, 0x35e, 0x361, 0x5, 0xae, 0x58, 0x2, 
       0x35f, 0x361, 0x5, 0xb0, 0x59, 0x2, 0x360, 0x35c, 0x3, 0x2, 0x2, 
       0x2, 0x360, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x360, 0x35e, 0x3, 0x2, 0x2, 
       0x2, 0x360, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x361, 0x67, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x368, 0x5, 0x6a, 0x36, 0x2, 0x363, 0x368, 0x5, 0x8e, 
       0x48, 0x2, 0x364, 0x368, 0x5, 0x54, 0x2b, 0x2, 0x365, 0x368, 0x5, 
       0xc8, 0x65, 0x2, 0x366, 0x368, 0x7, 0x41, 0x2, 0x2, 0x367, 0x362, 
       0x3, 0x2, 0x2, 0x2, 0x367, 0x363, 0x3, 0x2, 0x2, 0x2, 0x367, 0x364, 
       0x3, 0x2, 0x2, 0x2, 0x367, 0x365, 0x3, 0x2, 0x2, 0x2, 0x367, 0x366, 
       0x3, 0x2, 0x2, 0x2, 0x368, 0x69, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36b, 
       0x5, 0x6c, 0x37, 0x2, 0x36a, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36e, 
       0x3, 0x2, 0x2, 0x2, 0x36c, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 
       0x3, 0x2, 0x2, 0x2, 0x36d, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36c, 
       0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 0x5, 0x76, 0x3c, 0x2, 0x370, 0x371, 
       0x5, 0x6e, 0x38, 0x2, 0x371, 0x372, 0x7, 0x41, 0x2, 0x2, 0x372, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x373, 0x37c, 0x5, 0xe8, 0x75, 0x2, 0x374, 0x37c, 
       0x7, 0x25, 0x2, 0x2, 0x375, 0x37c, 0x7, 0x24, 0x2, 0x2, 0x376, 0x37c, 
       0x7, 0x23, 0x2, 0x2, 0x377, 0x37c, 0x7, 0x28, 0x2, 0x2, 0x378, 0x37c, 
       0x7, 0x14, 0x2, 0x2, 0x379, 0x37c, 0x7, 0x30, 0x2, 0x2, 0x37a, 0x37c, 
       0x7, 0x33, 0x2, 0x2, 0x37b, 0x373, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x374, 
       0x3, 0x2, 0x2, 0x2, 0x37b, 0x375, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x376, 
       0x3, 0x2, 0x2, 0x2, 0x37b, 0x377, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x378, 
       0x3, 0x2, 0x2, 0x2, 0x37b, 0x379, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37a, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x382, 
       0x5, 0x70, 0x39, 0x2, 0x37e, 0x37f, 0x7, 0x42, 0x2, 0x2, 0x37f, 0x381, 
       0x5, 0x70, 0x39, 0x2, 0x380, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x381, 0x384, 
       0x3, 0x2, 0x2, 0x2, 0x382, 0x380, 0x3, 0x2, 0x2, 0x2, 0x382, 0x383, 
       0x3, 0x2, 0x2, 0x2, 0x383, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x384, 0x382, 
       0x3, 0x2, 0x2, 0x2, 0x385, 0x388, 0x5, 0x72, 0x3a, 0x2, 0x386, 0x387, 
       0x7, 0x44, 0x2, 0x2, 0x387, 0x389, 0x5, 0x74, 0x3b, 0x2, 0x388, 0x386, 
       0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 0x3, 0x2, 0x2, 0x2, 0x389, 0x71, 
       0x3, 0x2, 0x2, 0x2, 0x38a, 0x38c, 0x7, 0x68, 0x2, 0x2, 0x38b, 0x38d, 
       0x5, 0x22, 0x12, 0x2, 0x38c, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 
       0x3, 0x2, 0x2, 0x2, 0x38d, 0x73, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x391, 
       0x5, 0x19e, 0xd0, 0x2, 0x38f, 0x391, 0x5, 0xfa, 0x7e, 0x2, 0x390, 
       0x38e, 0x3, 0x2, 0x2, 0x2, 0x390, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x391, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x392, 0x395, 0x5, 0x78, 0x3d, 0x2, 0x393, 
       0x395, 0x5, 0x7a, 0x3e, 0x2, 0x394, 0x392, 0x3, 0x2, 0x2, 0x2, 0x394, 
       0x393, 0x3, 0x2, 0x2, 0x2, 0x395, 0x77, 0x3, 0x2, 0x2, 0x2, 0x396, 
       0x399, 0x5, 0x8, 0x5, 0x2, 0x397, 0x399, 0x7, 0x5, 0x2, 0x2, 0x398, 
       0x396, 0x3, 0x2, 0x2, 0x2, 0x398, 0x397, 0x3, 0x2, 0x2, 0x2, 0x399, 
       0x79, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39e, 0x5, 0x7c, 0x3f, 0x2, 0x39b, 
       0x39e, 0x5, 0x8a, 0x46, 0x2, 0x39c, 0x39e, 0x5, 0x8c, 0x47, 0x2, 
       0x39d, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39b, 0x3, 0x2, 0x2, 0x2, 
       0x39d, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x7b, 0x3, 0x2, 0x2, 0x2, 
       0x39f, 0x3a2, 0x5, 0x82, 0x42, 0x2, 0x3a0, 0x3a2, 0x5, 0x88, 0x45, 
       0x2, 0x3a1, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a0, 0x3, 0x2, 0x2, 
       0x2, 0x3a2, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a6, 0x5, 0x80, 0x41, 
       0x2, 0x3a4, 0x3a6, 0x5, 0x86, 0x44, 0x2, 0x3a5, 0x3a3, 0x3, 0x2, 
       0x2, 0x2, 0x3a5, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a9, 0x3, 0x2, 
       0x2, 0x2, 0x3a7, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a8, 0x3, 0x2, 
       0x2, 0x2, 0x3a8, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3a7, 0x3, 0x2, 
       0x2, 0x2, 0x3aa, 0x3ac, 0x7, 0x68, 0x2, 0x2, 0x3ab, 0x3ad, 0x5, 0x2c, 
       0x17, 0x2, 0x3ac, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x3, 0x2, 
       0x2, 0x2, 0x3ad, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 0x5, 0x7c, 
       0x3f, 0x2, 0x3af, 0x3b3, 0x7, 0x43, 0x2, 0x2, 0x3b0, 0x3b2, 0x5, 
       0xe8, 0x75, 0x2, 0x3b1, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b5, 
       0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 
       0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b3, 
       0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b8, 0x7, 0x68, 0x2, 0x2, 0x3b7, 0x3b9, 
       0x5, 0x2c, 0x17, 0x2, 0x3b8, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 
       0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3aa, 
       0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3c0, 0x7, 0x43, 0x2, 0x2, 0x3bd, 0x3bf, 
       0x5, 0xe8, 0x75, 0x2, 0x3be, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c2, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c0, 
       0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c5, 0x7, 0x68, 0x2, 0x2, 0x3c4, 0x3c6, 
       0x5, 0x2c, 0x17, 0x2, 0x3c5, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 
       0x3, 0x2, 0x2, 0x2, 0x3c6, 0x81, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c9, 
       0x7, 0x68, 0x2, 0x2, 0x3c8, 0x3ca, 0x5, 0x2c, 0x17, 0x2, 0x3c9, 0x3c8, 
       0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3cc, 0x5, 0x7e, 0x40, 0x2, 0x3cc, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 0x5, 0x80, 0x41, 0x2, 0x3ce, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x5, 0x82, 0x42, 0x2, 0x3d0, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x7, 0x68, 0x2, 0x2, 0x3d2, 0x8b, 
       0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x5, 0x78, 0x3d, 0x2, 0x3d4, 0x3d5, 
       0x5, 0x22, 0x12, 0x2, 0x3d5, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 
       0x5, 0x7c, 0x3f, 0x2, 0x3d7, 0x3d8, 0x5, 0x22, 0x12, 0x2, 0x3d8, 
       0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3da, 0x5, 0x8a, 0x46, 0x2, 0x3da, 
       0x3db, 0x5, 0x22, 0x12, 0x2, 0x3db, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3dc, 
       0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3dc, 
       0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3de, 
       0x3e0, 0x5, 0x90, 0x49, 0x2, 0x3df, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
       0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e1, 
       0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
       0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e5, 0x5, 0x92, 0x4a, 0x2, 0x3e5, 
       0x3e6, 0x5, 0xaa, 0x56, 0x2, 0x3e6, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3e7, 
       0x3f2, 0x5, 0xe8, 0x75, 0x2, 0x3e8, 0x3f2, 0x7, 0x25, 0x2, 0x2, 0x3e9, 
       0x3f2, 0x7, 0x24, 0x2, 0x2, 0x3ea, 0x3f2, 0x7, 0x23, 0x2, 0x2, 0x3eb, 
       0x3f2, 0x7, 0x3, 0x2, 0x2, 0x3ec, 0x3f2, 0x7, 0x28, 0x2, 0x2, 0x3ed, 
       0x3f2, 0x7, 0x14, 0x2, 0x2, 0x3ee, 0x3f2, 0x7, 0x2c, 0x2, 0x2, 0x3ef, 
       0x3f2, 0x7, 0x20, 0x2, 0x2, 0x3f0, 0x3f2, 0x7, 0x29, 0x2, 0x2, 0x3f1, 
       0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3f1, 
       0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3f1, 
       0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3f1, 
       0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f1, 
       0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
       0x91, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x5, 0x94, 0x4b, 0x2, 0x3f4, 
       0x3f6, 0x5, 0x96, 0x4c, 0x2, 0x3f5, 0x3f7, 0x5, 0xa4, 0x53, 0x2, 
       0x3f6, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f7, 0x3, 0x2, 0x2, 0x2, 
       0x3f7, 0x405, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fc, 0x5, 0x5a, 0x2e, 
       0x2, 0x3f9, 0x3fb, 0x5, 0xe8, 0x75, 0x2, 0x3fa, 0x3f9, 0x3, 0x2, 
       0x2, 0x2, 0x3fb, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fa, 0x3, 0x2, 
       0x2, 0x2, 0x3fc, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3ff, 0x3, 0x2, 
       0x2, 0x2, 0x3fe, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x5, 0x94, 
       0x4b, 0x2, 0x400, 0x402, 0x5, 0x96, 0x4c, 0x2, 0x401, 0x403, 0x5, 
       0xa4, 0x53, 0x2, 0x402, 0x401, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x405, 0x3, 0x2, 0x2, 0x2, 0x404, 0x3f3, 
       0x3, 0x2, 0x2, 0x2, 0x404, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x405, 0x93, 
       0x3, 0x2, 0x2, 0x2, 0x406, 0x409, 0x5, 0x76, 0x3c, 0x2, 0x407, 0x409, 
       0x7, 0x32, 0x2, 0x2, 0x408, 0x406, 0x3, 0x2, 0x2, 0x2, 0x408, 0x407, 
       0x3, 0x2, 0x2, 0x2, 0x409, 0x95, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 
       0x7, 0x68, 0x2, 0x2, 0x40b, 0x40d, 0x7, 0x3b, 0x2, 0x2, 0x40c, 0x40e, 
       0x5, 0x98, 0x4d, 0x2, 0x40d, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 
       0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x411, 
       0x7, 0x3c, 0x2, 0x2, 0x410, 0x412, 0x5, 0x22, 0x12, 0x2, 0x411, 0x410, 
       0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 0x3, 0x2, 0x2, 0x2, 0x412, 0x97, 
       0x3, 0x2, 0x2, 0x2, 0x413, 0x41a, 0x5, 0xa2, 0x52, 0x2, 0x414, 0x415, 
       0x5, 0x9a, 0x4e, 0x2, 0x415, 0x416, 0x7, 0x42, 0x2, 0x2, 0x416, 0x417, 
       0x5, 0xa0, 0x51, 0x2, 0x417, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x418, 0x41a, 
       0x5, 0xa0, 0x51, 0x2, 0x419, 0x413, 0x3, 0x2, 0x2, 0x2, 0x419, 0x414, 
       0x3, 0x2, 0x2, 0x2, 0x419, 0x418, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x99, 
       0x3, 0x2, 0x2, 0x2, 0x41b, 0x420, 0x5, 0x9c, 0x4f, 0x2, 0x41c, 0x41d, 
       0x7, 0x42, 0x2, 0x2, 0x41d, 0x41f, 0x5, 0x9c, 0x4f, 0x2, 0x41e, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x422, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 
       0x3, 0x2, 0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0x42c, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x423, 0x428, 
       0x5, 0xa2, 0x52, 0x2, 0x424, 0x425, 0x7, 0x42, 0x2, 0x2, 0x425, 0x427, 
       0x5, 0x9c, 0x4f, 0x2, 0x426, 0x424, 0x3, 0x2, 0x2, 0x2, 0x427, 0x42a, 
       0x3, 0x2, 0x2, 0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 0x2, 0x428, 0x429, 
       0x3, 0x2, 0x2, 0x2, 0x429, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x428, 
       0x3, 0x2, 0x2, 0x2, 0x42b, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x42c, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x42f, 
       0x5, 0x9e, 0x50, 0x2, 0x42e, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x432, 
       0x3, 0x2, 0x2, 0x2, 0x430, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x430, 0x431, 
       0x3, 0x2, 0x2, 0x2, 0x431, 0x433, 0x3, 0x2, 0x2, 0x2, 0x432, 0x430, 
       0x3, 0x2, 0x2, 0x2, 0x433, 0x434, 0x5, 0x76, 0x3c, 0x2, 0x434, 0x435, 
       0x5, 0x72, 0x3a, 0x2, 0x435, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x436, 0x439, 
       0x5, 0xe8, 0x75, 0x2, 0x437, 0x439, 0x7, 0x14, 0x2, 0x2, 0x438, 0x436, 
       0x3, 0x2, 0x2, 0x2, 0x438, 0x437, 0x3, 0x2, 0x2, 0x2, 0x439, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x43a, 0x43c, 0x5, 0x9e, 0x50, 0x2, 0x43b, 0x43a, 
       0x3, 0x2, 0x2, 0x2, 0x43c, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43b, 
       0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x440, 
       0x3, 0x2, 0x2, 0x2, 0x43f, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x440, 0x444, 
       0x5, 0x76, 0x3c, 0x2, 0x441, 0x443, 0x5, 0xe8, 0x75, 0x2, 0x442, 
       0x441, 0x3, 0x2, 0x2, 0x2, 0x443, 0x446, 0x3, 0x2, 0x2, 0x2, 0x444, 
       0x442, 0x3, 0x2, 0x2, 0x2, 0x444, 0x445, 0x3, 0x2, 0x2, 0x2, 0x445, 
       0x447, 0x3, 0x2, 0x2, 0x2, 0x446, 0x444, 0x3, 0x2, 0x2, 0x2, 0x447, 
       0x448, 0x7, 0x6a, 0x2, 0x2, 0x448, 0x449, 0x5, 0x72, 0x3a, 0x2, 0x449, 
       0x44c, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x44c, 0x5, 0x9c, 0x4f, 0x2, 0x44b, 
       0x43d, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x44c, 
       0xa1, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x44f, 0x5, 0xe8, 0x75, 0x2, 0x44e, 
       0x44d, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x452, 0x3, 0x2, 0x2, 0x2, 0x450, 
       0x44e, 0x3, 0x2, 0x2, 0x2, 0x450, 0x451, 0x3, 0x2, 0x2, 0x2, 0x451, 
       0x453, 0x3, 0x2, 0x2, 0x2, 0x452, 0x450, 0x3, 0x2, 0x2, 0x2, 0x453, 
       0x454, 0x5, 0x76, 0x3c, 0x2, 0x454, 0x455, 0x7, 0x68, 0x2, 0x2, 0x455, 
       0x456, 0x7, 0x43, 0x2, 0x2, 0x456, 0x457, 0x3, 0x2, 0x2, 0x2, 0x457, 
       0x458, 0x7, 0x2d, 0x2, 0x2, 0x458, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x459, 
       0x45a, 0x7, 0x2f, 0x2, 0x2, 0x45a, 0x45b, 0x5, 0xa6, 0x54, 0x2, 0x45b, 
       0xa5, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x461, 0x5, 0xa8, 0x55, 0x2, 0x45d, 
       0x45e, 0x7, 0x42, 0x2, 0x2, 0x45e, 0x460, 0x5, 0xa8, 0x55, 0x2, 0x45f, 
       0x45d, 0x3, 0x2, 0x2, 0x2, 0x460, 0x463, 0x3, 0x2, 0x2, 0x2, 0x461, 
       0x45f, 0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 0x462, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0x463, 0x461, 0x3, 0x2, 0x2, 0x2, 0x464, 
       0x467, 0x5, 0x12, 0xa, 0x2, 0x465, 0x467, 0x5, 0x1e, 0x10, 0x2, 0x466, 
       0x464, 0x3, 0x2, 0x2, 0x2, 0x466, 0x465, 0x3, 0x2, 0x2, 0x2, 0x467, 
       0xa9, 0x3, 0x2, 0x2, 0x2, 0x468, 0x46b, 0x5, 0xfe, 0x80, 0x2, 0x469, 
       0x46b, 0x7, 0x41, 0x2, 0x2, 0x46a, 0x468, 0x3, 0x2, 0x2, 0x2, 0x46a, 
       0x469, 0x3, 0x2, 0x2, 0x2, 0x46b, 0xab, 0x3, 0x2, 0x2, 0x2, 0x46c, 
       0x46d, 0x5, 0xfe, 0x80, 0x2, 0x46d, 0xad, 0x3, 0x2, 0x2, 0x2, 0x46e, 
       0x46f, 0x7, 0x28, 0x2, 0x2, 0x46f, 0x470, 0x5, 0xfe, 0x80, 0x2, 0x470, 
       0xaf, 0x3, 0x2, 0x2, 0x2, 0x471, 0x473, 0x5, 0xb2, 0x5a, 0x2, 0x472, 
       0x471, 0x3, 0x2, 0x2, 0x2, 0x473, 0x476, 0x3, 0x2, 0x2, 0x2, 0x474, 
       0x472, 0x3, 0x2, 0x2, 0x2, 0x474, 0x475, 0x3, 0x2, 0x2, 0x2, 0x475, 
       0x477, 0x3, 0x2, 0x2, 0x2, 0x476, 0x474, 0x3, 0x2, 0x2, 0x2, 0x477, 
       0x479, 0x5, 0xb4, 0x5b, 0x2, 0x478, 0x47a, 0x5, 0xa4, 0x53, 0x2, 
       0x479, 0x478, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47a, 0x3, 0x2, 0x2, 0x2, 
       0x47a, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x47c, 0x5, 0xb8, 0x5d, 
       0x2, 0x47c, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x482, 0x5, 0xe8, 0x75, 
       0x2, 0x47e, 0x482, 0x7, 0x25, 0x2, 0x2, 0x47f, 0x482, 0x7, 0x24, 
       0x2, 0x2, 0x480, 0x482, 0x7, 0x23, 0x2, 0x2, 0x481, 0x47d, 0x3, 0x2, 
       0x2, 0x2, 0x481, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x481, 0x47f, 0x3, 0x2, 
       0x2, 0x2, 0x481, 0x480, 0x3, 0x2, 0x2, 0x2, 0x482, 0xb3, 0x3, 0x2, 
       0x2, 0x2, 0x483, 0x485, 0x5, 0x5a, 0x2e, 0x2, 0x484, 0x483, 0x3, 
       0x2, 0x2, 0x2, 0x484, 0x485, 0x3, 0x2, 0x2, 0x2, 0x485, 0x486, 0x3, 
       0x2, 0x2, 0x2, 0x486, 0x487, 0x5, 0xb6, 0x5c, 0x2, 0x487, 0x489, 
       0x7, 0x3b, 0x2, 0x2, 0x488, 0x48a, 0x5, 0x98, 0x4d, 0x2, 0x489, 0x488, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48b, 
       0x3, 0x2, 0x2, 0x2, 0x48b, 0x48c, 0x7, 0x3c, 0x2, 0x2, 0x48c, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x48d, 0x48e, 0x7, 0x68, 0x2, 0x2, 0x48e, 0xb7, 
       0x3, 0x2, 0x2, 0x2, 0x48f, 0x491, 0x7, 0x3d, 0x2, 0x2, 0x490, 0x492, 
       0x5, 0xba, 0x5e, 0x2, 0x491, 0x490, 0x3, 0x2, 0x2, 0x2, 0x491, 0x492, 
       0x3, 0x2, 0x2, 0x2, 0x492, 0x494, 0x3, 0x2, 0x2, 0x2, 0x493, 0x495, 
       0x5, 0x100, 0x81, 0x2, 0x494, 0x493, 0x3, 0x2, 0x2, 0x2, 0x494, 0x495, 
       0x3, 0x2, 0x2, 0x2, 0x495, 0x496, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 
       0x7, 0x3e, 0x2, 0x2, 0x497, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x498, 0x49a, 
       0x5, 0x2c, 0x17, 0x2, 0x499, 0x498, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 
       0x3, 0x2, 0x2, 0x2, 0x49a, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49c, 
       0x7, 0x2d, 0x2, 0x2, 0x49c, 0x49e, 0x7, 0x3b, 0x2, 0x2, 0x49d, 0x49f, 
       0x5, 0x190, 0xc9, 0x2, 0x49e, 0x49d, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 
       0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x4a1, 
       0x7, 0x3c, 0x2, 0x2, 0x4a1, 0x4c7, 0x7, 0x41, 0x2, 0x2, 0x4a2, 0x4a4, 
       0x5, 0x2c, 0x17, 0x2, 0x4a3, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a4, 
       0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a6, 
       0x7, 0x2a, 0x2, 0x2, 0x4a6, 0x4a8, 0x7, 0x3b, 0x2, 0x2, 0x4a7, 0x4a9, 
       0x5, 0x190, 0xc9, 0x2, 0x4a8, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 
       0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4ab, 
       0x7, 0x3c, 0x2, 0x2, 0x4ab, 0x4c7, 0x7, 0x41, 0x2, 0x2, 0x4ac, 0x4ad, 
       0x5, 0x3a, 0x1e, 0x2, 0x4ad, 0x4af, 0x7, 0x43, 0x2, 0x2, 0x4ae, 0x4b0, 
       0x5, 0x2c, 0x17, 0x2, 0x4af, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b0, 
       0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b2, 
       0x7, 0x2a, 0x2, 0x2, 0x4b2, 0x4b4, 0x7, 0x3b, 0x2, 0x2, 0x4b3, 0x4b5, 
       0x5, 0x190, 0xc9, 0x2, 0x4b4, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b5, 
       0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b7, 
       0x7, 0x3c, 0x2, 0x2, 0x4b7, 0x4b8, 0x7, 0x41, 0x2, 0x2, 0x4b8, 0x4c7, 
       0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4ba, 0x5, 0x162, 0xb2, 0x2, 0x4ba, 0x4bc, 
       0x7, 0x43, 0x2, 0x2, 0x4bb, 0x4bd, 0x5, 0x2c, 0x17, 0x2, 0x4bc, 0x4bb, 
       0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4be, 
       0x3, 0x2, 0x2, 0x2, 0x4be, 0x4bf, 0x7, 0x2a, 0x2, 0x2, 0x4bf, 0x4c1, 
       0x7, 0x3b, 0x2, 0x2, 0x4c0, 0x4c2, 0x5, 0x190, 0xc9, 0x2, 0x4c1, 
       0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c2, 
       0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x7, 0x3c, 0x2, 0x2, 0x4c4, 
       0x4c5, 0x7, 0x41, 0x2, 0x2, 0x4c5, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c6, 
       0x499, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4c6, 
       0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4c7, 
       0xbb, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4ca, 0x5, 0x58, 0x2d, 0x2, 0x4c9, 
       0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cb, 
       0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4cc, 
       0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4ce, 
       0x4cf, 0x7, 0x12, 0x2, 0x2, 0x4cf, 0x4d1, 0x7, 0x68, 0x2, 0x2, 0x4d0, 
       0x4d2, 0x5, 0x60, 0x31, 0x2, 0x4d1, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d1, 
       0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d3, 
       0x4d4, 0x5, 0xbe, 0x60, 0x2, 0x4d4, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x4d5, 
       0x4d7, 0x7, 0x3d, 0x2, 0x2, 0x4d6, 0x4d8, 0x5, 0xc0, 0x61, 0x2, 0x4d7, 
       0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4d8, 
       0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4d9, 0x4db, 0x7, 0x42, 0x2, 0x2, 0x4da, 
       0x4dc, 0x5, 0xc6, 0x64, 0x2, 0x4db, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4db, 
       0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4de, 0x7, 0x3e, 0x2, 0x2, 0x4de, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x4df, 
       0x4e4, 0x5, 0xc2, 0x62, 0x2, 0x4e0, 0x4e1, 0x7, 0x42, 0x2, 0x2, 0x4e1, 
       0x4e3, 0x5, 0xc2, 0x62, 0x2, 0x4e2, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e3, 
       0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e4, 
       0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x4e6, 
       0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e9, 0x5, 0xc4, 0x63, 0x2, 0x4e8, 
       0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4ea, 
       0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4eb, 
       0x4ed, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4ed, 
       0x4f3, 0x7, 0x68, 0x2, 0x2, 0x4ee, 0x4f0, 0x7, 0x3b, 0x2, 0x2, 0x4ef, 
       0x4f1, 0x5, 0x190, 0xc9, 0x2, 0x4f0, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4f0, 
       0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f2, 
       0x4f4, 0x7, 0x3c, 0x2, 0x2, 0x4f3, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4f3, 
       0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f5, 
       0x4f7, 0x5, 0x64, 0x33, 0x2, 0x4f6, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f6, 
       0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x4f8, 
       0x4f9, 0x5, 0xe8, 0x75, 0x2, 0x4f9, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x4fa, 
       0x4fe, 0x7, 0x41, 0x2, 0x2, 0x4fb, 0x4fd, 0x5, 0x66, 0x34, 0x2, 0x4fc, 
       0x4fb, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x500, 0x3, 0x2, 0x2, 0x2, 0x4fe, 
       0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x4ff, 
       0xc7, 0x3, 0x2, 0x2, 0x2, 0x500, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x501, 
       0x504, 0x5, 0xca, 0x66, 0x2, 0x502, 0x504, 0x5, 0xdc, 0x6f, 0x2, 
       0x503, 0x501, 0x3, 0x2, 0x2, 0x2, 0x503, 0x502, 0x3, 0x2, 0x2, 0x2, 
       0x504, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x505, 0x507, 0x5, 0xcc, 0x67, 0x2, 
       0x506, 0x505, 0x3, 0x2, 0x2, 0x2, 0x507, 0x50a, 0x3, 0x2, 0x2, 0x2, 
       0x508, 0x506, 0x3, 0x2, 0x2, 0x2, 0x508, 0x509, 0x3, 0x2, 0x2, 0x2, 
       0x509, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x508, 0x3, 0x2, 0x2, 0x2, 
       0x50b, 0x50c, 0x7, 0x1e, 0x2, 0x2, 0x50c, 0x50e, 0x7, 0x68, 0x2, 
       0x2, 0x50d, 0x50f, 0x5, 0x5a, 0x2e, 0x2, 0x50e, 0x50d, 0x3, 0x2, 
       0x2, 0x2, 0x50e, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x511, 0x3, 0x2, 
       0x2, 0x2, 0x510, 0x512, 0x5, 0xce, 0x68, 0x2, 0x511, 0x510, 0x3, 
       0x2, 0x2, 0x2, 0x511, 0x512, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 0x3, 
       0x2, 0x2, 0x2, 0x513, 0x514, 0x5, 0xd0, 0x69, 0x2, 0x514, 0xcb, 0x3, 
       0x2, 0x2, 0x2, 0x515, 0x51d, 0x5, 0xe8, 0x75, 0x2, 0x516, 0x51d, 
       0x7, 0x25, 0x2, 0x2, 0x517, 0x51d, 0x7, 0x24, 0x2, 0x2, 0x518, 0x51d, 
       0x7, 0x23, 0x2, 0x2, 0x519, 0x51d, 0x7, 0x3, 0x2, 0x2, 0x51a, 0x51d, 
       0x7, 0x28, 0x2, 0x2, 0x51b, 0x51d, 0x7, 0x29, 0x2, 0x2, 0x51c, 0x515, 
       0x3, 0x2, 0x2, 0x2, 0x51c, 0x516, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x517, 
       0x3, 0x2, 0x2, 0x2, 0x51c, 0x518, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x519, 
       0x3, 0x2, 0x2, 0x2, 0x51c, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51b, 
       0x3, 0x2, 0x2, 0x2, 0x51d, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51f, 
       0x7, 0x13, 0x2, 0x2, 0x51f, 0x520, 0x5, 0x62, 0x32, 0x2, 0x520, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x521, 0x525, 0x7, 0x3d, 0x2, 0x2, 0x522, 0x524, 
       0x5, 0xd2, 0x6a, 0x2, 0x523, 0x522, 0x3, 0x2, 0x2, 0x2, 0x524, 0x527, 
       0x3, 0x2, 0x2, 0x2, 0x525, 0x523, 0x3, 0x2, 0x2, 0x2, 0x525, 0x526, 
       0x3, 0x2, 0x2, 0x2, 0x526, 0x528, 0x3, 0x2, 0x2, 0x2, 0x527, 0x525, 
       0x3, 0x2, 0x2, 0x2, 0x528, 0x529, 0x7, 0x3e, 0x2, 0x2, 0x529, 0xd1, 
       0x3, 0x2, 0x2, 0x2, 0x52a, 0x530, 0x5, 0xd4, 0x6b, 0x2, 0x52b, 0x530, 
       0x5, 0xd8, 0x6d, 0x2, 0x52c, 0x530, 0x5, 0x54, 0x2b, 0x2, 0x52d, 
       0x530, 0x5, 0xc8, 0x65, 0x2, 0x52e, 0x530, 0x7, 0x41, 0x2, 0x2, 0x52f, 
       0x52a, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x52b, 0x3, 0x2, 0x2, 0x2, 0x52f, 
       0x52c, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x52d, 0x3, 0x2, 0x2, 0x2, 0x52f, 
       0x52e, 0x3, 0x2, 0x2, 0x2, 0x530, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x531, 
       0x533, 0x5, 0xd6, 0x6c, 0x2, 0x532, 0x531, 0x3, 0x2, 0x2, 0x2, 0x533, 
       0x536, 0x3, 0x2, 0x2, 0x2, 0x534, 0x532, 0x3, 0x2, 0x2, 0x2, 0x534, 
       0x535, 0x3, 0x2, 0x2, 0x2, 0x535, 0x537, 0x3, 0x2, 0x2, 0x2, 0x536, 
       0x534, 0x3, 0x2, 0x2, 0x2, 0x537, 0x538, 0x5, 0x76, 0x3c, 0x2, 0x538, 
       0x539, 0x5, 0x6e, 0x38, 0x2, 0x539, 0x53a, 0x7, 0x41, 0x2, 0x2, 0x53a, 
       0xd5, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x540, 0x5, 0xe8, 0x75, 0x2, 0x53c, 
       0x540, 0x7, 0x25, 0x2, 0x2, 0x53d, 0x540, 0x7, 0x28, 0x2, 0x2, 0x53e, 
       0x540, 0x7, 0x14, 0x2, 0x2, 0x53f, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x53f, 
       0x53c, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x53d, 0x3, 0x2, 0x2, 0x2, 0x53f, 
       0x53e, 0x3, 0x2, 0x2, 0x2, 0x540, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x541, 
       0x543, 0x5, 0xda, 0x6e, 0x2, 0x542, 0x541, 0x3, 0x2, 0x2, 0x2, 0x543, 
       0x546, 0x3, 0x2, 0x2, 0x2, 0x544, 0x542, 0x3, 0x2, 0x2, 0x2, 0x544, 
       0x545, 0x3, 0x2, 0x2, 0x2, 0x545, 0x547, 0x3, 0x2, 0x2, 0x2, 0x546, 
       0x544, 0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x5, 0x92, 0x4a, 0x2, 0x548, 
       0x549, 0x5, 0xaa, 0x56, 0x2, 0x549, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x54a, 
       0x551, 0x5, 0xe8, 0x75, 0x2, 0x54b, 0x551, 0x7, 0x25, 0x2, 0x2, 0x54c, 
       0x551, 0x7, 0x3, 0x2, 0x2, 0x54d, 0x551, 0x7, 0xe, 0x2, 0x2, 0x54e, 
       0x551, 0x7, 0x28, 0x2, 0x2, 0x54f, 0x551, 0x7, 0x29, 0x2, 0x2, 0x550, 
       0x54a, 0x3, 0x2, 0x2, 0x2, 0x550, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x550, 
       0x54c, 0x3, 0x2, 0x2, 0x2, 0x550, 0x54d, 0x3, 0x2, 0x2, 0x2, 0x550, 
       0x54e, 0x3, 0x2, 0x2, 0x2, 0x550, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x551, 
       0xdb, 0x3, 0x2, 0x2, 0x2, 0x552, 0x554, 0x5, 0xcc, 0x67, 0x2, 0x553, 
       0x552, 0x3, 0x2, 0x2, 0x2, 0x554, 0x557, 0x3, 0x2, 0x2, 0x2, 0x555, 
       0x553, 0x3, 0x2, 0x2, 0x2, 0x555, 0x556, 0x3, 0x2, 0x2, 0x2, 0x556, 
       0x558, 0x3, 0x2, 0x2, 0x2, 0x557, 0x555, 0x3, 0x2, 0x2, 0x2, 0x558, 
       0x559, 0x7, 0x69, 0x2, 0x2, 0x559, 0x55a, 0x7, 0x1e, 0x2, 0x2, 0x55a, 
       0x55b, 0x7, 0x68, 0x2, 0x2, 0x55b, 0x55c, 0x5, 0xde, 0x70, 0x2, 0x55c, 
       0xdd, 0x3, 0x2, 0x2, 0x2, 0x55d, 0x561, 0x7, 0x3d, 0x2, 0x2, 0x55e, 
       0x560, 0x5, 0xe0, 0x71, 0x2, 0x55f, 0x55e, 0x3, 0x2, 0x2, 0x2, 0x560, 
       0x563, 0x3, 0x2, 0x2, 0x2, 0x561, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x561, 
       0x562, 0x3, 0x2, 0x2, 0x2, 0x562, 0x564, 0x3, 0x2, 0x2, 0x2, 0x563, 
       0x561, 0x3, 0x2, 0x2, 0x2, 0x564, 0x565, 0x7, 0x3e, 0x2, 0x2, 0x565, 
       0xdf, 0x3, 0x2, 0x2, 0x2, 0x566, 0x56c, 0x5, 0xe2, 0x72, 0x2, 0x567, 
       0x56c, 0x5, 0xd4, 0x6b, 0x2, 0x568, 0x56c, 0x5, 0x54, 0x2b, 0x2, 
       0x569, 0x56c, 0x5, 0xc8, 0x65, 0x2, 0x56a, 0x56c, 0x7, 0x41, 0x2, 
       0x2, 0x56b, 0x566, 0x3, 0x2, 0x2, 0x2, 0x56b, 0x567, 0x3, 0x2, 0x2, 
       0x2, 0x56b, 0x568, 0x3, 0x2, 0x2, 0x2, 0x56b, 0x569, 0x3, 0x2, 0x2, 
       0x2, 0x56b, 0x56a, 0x3, 0x2, 0x2, 0x2, 0x56c, 0xe1, 0x3, 0x2, 0x2, 
       0x2, 0x56d, 0x56f, 0x5, 0xe4, 0x73, 0x2, 0x56e, 0x56d, 0x3, 0x2, 
       0x2, 0x2, 0x56f, 0x572, 0x3, 0x2, 0x2, 0x2, 0x570, 0x56e, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x571, 0x3, 0x2, 0x2, 0x2, 0x571, 0x573, 0x3, 0x2, 
       0x2, 0x2, 0x572, 0x570, 0x3, 0x2, 0x2, 0x2, 0x573, 0x574, 0x5, 0x76, 
       0x3c, 0x2, 0x574, 0x575, 0x7, 0x68, 0x2, 0x2, 0x575, 0x576, 0x7, 
       0x3b, 0x2, 0x2, 0x576, 0x578, 0x7, 0x3c, 0x2, 0x2, 0x577, 0x579, 
       0x5, 0x22, 0x12, 0x2, 0x578, 0x577, 0x3, 0x2, 0x2, 0x2, 0x578, 0x579, 
       0x3, 0x2, 0x2, 0x2, 0x579, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x57a, 0x57c, 
       0x5, 0xe6, 0x74, 0x2, 0x57b, 0x57a, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57c, 
       0x3, 0x2, 0x2, 0x2, 0x57c, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x57e, 
       0x7, 0x41, 0x2, 0x2, 0x57e, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x583, 
       0x5, 0xe8, 0x75, 0x2, 0x580, 0x583, 0x7, 0x25, 0x2, 0x2, 0x581, 0x583, 
       0x7, 0x3, 0x2, 0x2, 0x582, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x582, 0x580, 
       0x3, 0x2, 0x2, 0x2, 0x582, 0x581, 0x3, 0x2, 0x2, 0x2, 0x583, 0xe5, 
       0x3, 0x2, 0x2, 0x2, 0x584, 0x585, 0x7, 0xe, 0x2, 0x2, 0x585, 0x586, 
       0x5, 0xf0, 0x79, 0x2, 0x586, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x587, 0x58b, 
       0x5, 0xea, 0x76, 0x2, 0x588, 0x58b, 0x5, 0xf6, 0x7c, 0x2, 0x589, 
       0x58b, 0x5, 0xf8, 0x7d, 0x2, 0x58a, 0x587, 0x3, 0x2, 0x2, 0x2, 0x58a, 
       0x588, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x589, 0x3, 0x2, 0x2, 0x2, 0x58b, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x7, 0x69, 0x2, 0x2, 0x58d, 
       0x58e, 0x5, 0x36, 0x1c, 0x2, 0x58e, 0x590, 0x7, 0x3b, 0x2, 0x2, 0x58f, 
       0x591, 0x5, 0xec, 0x77, 0x2, 0x590, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x590, 
       0x591, 0x3, 0x2, 0x2, 0x2, 0x591, 0x592, 0x3, 0x2, 0x2, 0x2, 0x592, 
       0x593, 0x7, 0x3c, 0x2, 0x2, 0x593, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x594, 
       0x599, 0x5, 0xee, 0x78, 0x2, 0x595, 0x596, 0x7, 0x42, 0x2, 0x2, 0x596, 
       0x598, 0x5, 0xee, 0x78, 0x2, 0x597, 0x595, 0x3, 0x2, 0x2, 0x2, 0x598, 
       0x59b, 0x3, 0x2, 0x2, 0x2, 0x599, 0x597, 0x3, 0x2, 0x2, 0x2, 0x599, 
       0x59a, 0x3, 0x2, 0x2, 0x2, 0x59a, 0xed, 0x3, 0x2, 0x2, 0x2, 0x59b, 
       0x599, 0x3, 0x2, 0x2, 0x2, 0x59c, 0x59d, 0x7, 0x68, 0x2, 0x2, 0x59d, 
       0x59e, 0x7, 0x44, 0x2, 0x2, 0x59e, 0x59f, 0x5, 0xf0, 0x79, 0x2, 0x59f, 
       0xef, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0x5a4, 0x5, 0x1b0, 0xd9, 0x2, 0x5a1, 
       0x5a4, 0x5, 0xf2, 0x7a, 0x2, 0x5a2, 0x5a4, 0x5, 0xe8, 0x75, 0x2, 
       0x5a3, 0x5a0, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a1, 0x3, 0x2, 0x2, 0x2, 
       0x5a3, 0x5a2, 0x3, 0x2, 0x2, 0x2, 0x5a4, 0xf1, 0x3, 0x2, 0x2, 0x2, 
       0x5a5, 0x5a7, 0x7, 0x3d, 0x2, 0x2, 0x5a6, 0x5a8, 0x5, 0xf4, 0x7b, 
       0x2, 0x5a7, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a8, 0x3, 0x2, 0x2, 
       0x2, 0x5a8, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5ab, 0x7, 0x43, 0x2, 
       0x2, 0x5aa, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ab, 0x3, 0x2, 0x2, 
       0x2, 0x5ab, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 0x7, 0x3e, 0x2, 
       0x2, 0x5ad, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5b3, 0x5, 0xf0, 0x79, 
       0x2, 0x5af, 0x5b0, 0x7, 0x42, 0x2, 0x2, 0x5b0, 0x5b2, 0x5, 0xf0, 
       0x79, 0x2, 0x5b1, 0x5af, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b5, 0x3, 0x2, 
       0x2, 0x2, 0x5b3, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5b4, 0x3, 0x2, 
       0x2, 0x2, 0x5b4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b3, 0x3, 0x2, 
       0x2, 0x2, 0x5b6, 0x5b7, 0x7, 0x69, 0x2, 0x2, 0x5b7, 0x5b8, 0x5, 0x36, 
       0x1c, 0x2, 0x5b8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x5b9, 0x5ba, 0x7, 0x69, 
       0x2, 0x2, 0x5ba, 0x5bb, 0x5, 0x36, 0x1c, 0x2, 0x5bb, 0x5bc, 0x7, 
       0x3b, 0x2, 0x2, 0x5bc, 0x5bd, 0x5, 0xf0, 0x79, 0x2, 0x5bd, 0x5be, 
       0x7, 0x3c, 0x2, 0x2, 0x5be, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c1, 
       0x7, 0x3d, 0x2, 0x2, 0x5c0, 0x5c2, 0x5, 0xfc, 0x7f, 0x2, 0x5c1, 0x5c0, 
       0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5c4, 
       0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c5, 0x7, 0x42, 0x2, 0x2, 0x5c4, 0x5c3, 
       0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c6, 
       0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c7, 0x7, 0x3e, 0x2, 0x2, 0x5c7, 0xfb, 
       0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5cd, 0x5, 0x74, 0x3b, 0x2, 0x5c9, 0x5ca, 
       0x7, 0x42, 0x2, 0x2, 0x5ca, 0x5cc, 0x5, 0x74, 0x3b, 0x2, 0x5cb, 0x5c9, 
       0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5cb, 
       0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5ce, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0xfd, 
       0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d2, 
       0x7, 0x3d, 0x2, 0x2, 0x5d1, 0x5d3, 0x5, 0x100, 0x81, 0x2, 0x5d2, 
       0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d3, 
       0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d5, 0x7, 0x3e, 0x2, 0x2, 0x5d5, 
       0xff, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x5da, 0x5, 0x102, 0x82, 0x2, 0x5d7, 
       0x5d9, 0x5, 0x102, 0x82, 0x2, 0x5d8, 0x5d7, 0x3, 0x2, 0x2, 0x2, 0x5d9, 
       0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5da, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5da, 
       0x5db, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x101, 0x3, 0x2, 0x2, 0x2, 0x5dc, 
       0x5da, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5e1, 0x5, 0x104, 0x83, 0x2, 0x5de, 
       0x5e1, 0x5, 0x54, 0x2b, 0x2, 0x5df, 0x5e1, 0x5, 0x108, 0x85, 0x2, 
       0x5e0, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5de, 0x3, 0x2, 0x2, 0x2, 
       0x5e0, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x103, 0x3, 0x2, 0x2, 0x2, 
       0x5e2, 0x5e3, 0x5, 0x106, 0x84, 0x2, 0x5e3, 0x5e4, 0x7, 0x41, 0x2, 
       0x2, 0x5e4, 0x105, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e7, 0x5, 0x9e, 0x50, 
       0x2, 0x5e6, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5ea, 0x3, 0x2, 0x2, 
       0x2, 0x5e8, 0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5e9, 0x3, 0x2, 0x2, 
       0x2, 0x5e9, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5e8, 0x3, 0x2, 0x2, 
       0x2, 0x5eb, 0x5ec, 0x5, 0x76, 0x3c, 0x2, 0x5ec, 0x5ed, 0x5, 0x6e, 
       0x38, 0x2, 0x5ed, 0x107, 0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5f5, 0x5, 0x10c, 
       0x87, 0x2, 0x5ef, 0x5f5, 0x5, 0x110, 0x89, 0x2, 0x5f0, 0x5f5, 0x5, 
       0x118, 0x8d, 0x2, 0x5f1, 0x5f5, 0x5, 0x11a, 0x8e, 0x2, 0x5f2, 0x5f5, 
       0x5, 0x12c, 0x97, 0x2, 0x5f3, 0x5f5, 0x5, 0x132, 0x9a, 0x2, 0x5f4, 
       0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0x5f4, 
       0x5f0, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f4, 
       0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f3, 0x3, 0x2, 0x2, 0x2, 0x5f5, 
       0x109, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5fc, 0x5, 0x10c, 0x87, 0x2, 0x5f7, 
       0x5fc, 0x5, 0x112, 0x8a, 0x2, 0x5f8, 0x5fc, 0x5, 0x11c, 0x8f, 0x2, 
       0x5f9, 0x5fc, 0x5, 0x12e, 0x98, 0x2, 0x5fa, 0x5fc, 0x5, 0x134, 0x9b, 
       0x2, 0x5fb, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5f7, 0x3, 0x2, 0x2, 
       0x2, 0x5fb, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5f9, 0x3, 0x2, 0x2, 
       0x2, 0x5fb, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x10b, 0x3, 0x2, 0x2, 
       0x2, 0x5fd, 0x60a, 0x5, 0xfe, 0x80, 0x2, 0x5fe, 0x60a, 0x5, 0x10e, 
       0x88, 0x2, 0x5ff, 0x60a, 0x5, 0x114, 0x8b, 0x2, 0x600, 0x60a, 0x5, 
       0x11e, 0x90, 0x2, 0x601, 0x60a, 0x5, 0x120, 0x91, 0x2, 0x602, 0x60a, 
       0x5, 0x130, 0x99, 0x2, 0x603, 0x60a, 0x5, 0x144, 0xa3, 0x2, 0x604, 
       0x60a, 0x5, 0x146, 0xa4, 0x2, 0x605, 0x60a, 0x5, 0x148, 0xa5, 0x2, 
       0x606, 0x60a, 0x5, 0x14c, 0xa7, 0x2, 0x607, 0x60a, 0x5, 0x14a, 0xa6, 
       0x2, 0x608, 0x60a, 0x5, 0x14e, 0xa8, 0x2, 0x609, 0x5fd, 0x3, 0x2, 
       0x2, 0x2, 0x609, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0x609, 0x5ff, 0x3, 0x2, 
       0x2, 0x2, 0x609, 0x600, 0x3, 0x2, 0x2, 0x2, 0x609, 0x601, 0x3, 0x2, 
       0x2, 0x2, 0x609, 0x602, 0x3, 0x2, 0x2, 0x2, 0x609, 0x603, 0x3, 0x2, 
       0x2, 0x2, 0x609, 0x604, 0x3, 0x2, 0x2, 0x2, 0x609, 0x605, 0x3, 0x2, 
       0x2, 0x2, 0x609, 0x606, 0x3, 0x2, 0x2, 0x2, 0x609, 0x607, 0x3, 0x2, 
       0x2, 0x2, 0x609, 0x608, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x10d, 0x3, 0x2, 
       0x2, 0x2, 0x60b, 0x60c, 0x7, 0x41, 0x2, 0x2, 0x60c, 0x10f, 0x3, 0x2, 
       0x2, 0x2, 0x60d, 0x60e, 0x7, 0x68, 0x2, 0x2, 0x60e, 0x60f, 0x7, 0x4a, 
       0x2, 0x2, 0x60f, 0x610, 0x5, 0x108, 0x85, 0x2, 0x610, 0x111, 0x3, 
       0x2, 0x2, 0x2, 0x611, 0x612, 0x7, 0x68, 0x2, 0x2, 0x612, 0x613, 0x7, 
       0x4a, 0x2, 0x2, 0x613, 0x614, 0x5, 0x10a, 0x86, 0x2, 0x614, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x615, 0x616, 0x5, 0x116, 0x8c, 0x2, 0x616, 0x617, 
       0x7, 0x41, 0x2, 0x2, 0x617, 0x115, 0x3, 0x2, 0x2, 0x2, 0x618, 0x620, 
       0x5, 0x1aa, 0xd6, 0x2, 0x619, 0x620, 0x5, 0x1c8, 0xe5, 0x2, 0x61a, 
       0x620, 0x5, 0x1ca, 0xe6, 0x2, 0x61b, 0x620, 0x5, 0x1d0, 0xe9, 0x2, 
       0x61c, 0x620, 0x5, 0x1d4, 0xeb, 0x2, 0x61d, 0x620, 0x5, 0x18a, 0xc6, 
       0x2, 0x61e, 0x620, 0x5, 0x176, 0xbc, 0x2, 0x61f, 0x618, 0x3, 0x2, 
       0x2, 0x2, 0x61f, 0x619, 0x3, 0x2, 0x2, 0x2, 0x61f, 0x61a, 0x3, 0x2, 
       0x2, 0x2, 0x61f, 0x61b, 0x3, 0x2, 0x2, 0x2, 0x61f, 0x61c, 0x3, 0x2, 
       0x2, 0x2, 0x61f, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x61f, 0x61e, 0x3, 0x2, 
       0x2, 0x2, 0x620, 0x117, 0x3, 0x2, 0x2, 0x2, 0x621, 0x622, 0x7, 0x18, 
       0x2, 0x2, 0x622, 0x623, 0x7, 0x3b, 0x2, 0x2, 0x623, 0x624, 0x5, 0x19e, 
       0xd0, 0x2, 0x624, 0x625, 0x7, 0x3c, 0x2, 0x2, 0x625, 0x626, 0x5, 
       0x108, 0x85, 0x2, 0x626, 0x119, 0x3, 0x2, 0x2, 0x2, 0x627, 0x628, 
       0x7, 0x18, 0x2, 0x2, 0x628, 0x629, 0x7, 0x3b, 0x2, 0x2, 0x629, 0x62a, 
       0x5, 0x19e, 0xd0, 0x2, 0x62a, 0x62b, 0x7, 0x3c, 0x2, 0x2, 0x62b, 
       0x62c, 0x5, 0x10a, 0x86, 0x2, 0x62c, 0x62d, 0x7, 0x11, 0x2, 0x2, 
       0x62d, 0x62e, 0x5, 0x108, 0x85, 0x2, 0x62e, 0x11b, 0x3, 0x2, 0x2, 
       0x2, 0x62f, 0x630, 0x7, 0x18, 0x2, 0x2, 0x630, 0x631, 0x7, 0x3b, 
       0x2, 0x2, 0x631, 0x632, 0x5, 0x19e, 0xd0, 0x2, 0x632, 0x633, 0x7, 
       0x3c, 0x2, 0x2, 0x633, 0x634, 0x5, 0x10a, 0x86, 0x2, 0x634, 0x635, 
       0x7, 0x11, 0x2, 0x2, 0x635, 0x636, 0x5, 0x10a, 0x86, 0x2, 0x636, 
       0x11d, 0x3, 0x2, 0x2, 0x2, 0x637, 0x638, 0x7, 0x4, 0x2, 0x2, 0x638, 
       0x639, 0x5, 0x19e, 0xd0, 0x2, 0x639, 0x63a, 0x7, 0x41, 0x2, 0x2, 
       0x63a, 0x642, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x63c, 0x7, 0x4, 0x2, 0x2, 
       0x63c, 0x63d, 0x5, 0x19e, 0xd0, 0x2, 0x63d, 0x63e, 0x7, 0x4a, 0x2, 
       0x2, 0x63e, 0x63f, 0x5, 0x19e, 0xd0, 0x2, 0x63f, 0x640, 0x7, 0x41, 
       0x2, 0x2, 0x640, 0x642, 0x3, 0x2, 0x2, 0x2, 0x641, 0x637, 0x3, 0x2, 
       0x2, 0x2, 0x641, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x642, 0x11f, 0x3, 0x2, 
       0x2, 0x2, 0x643, 0x644, 0x7, 0x2b, 0x2, 0x2, 0x644, 0x645, 0x7, 0x3b, 
       0x2, 0x2, 0x645, 0x646, 0x5, 0x19e, 0xd0, 0x2, 0x646, 0x647, 0x7, 
       0x3c, 0x2, 0x2, 0x647, 0x648, 0x5, 0x122, 0x92, 0x2, 0x648, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x649, 0x64d, 0x7, 0x3d, 0x2, 0x2, 0x64a, 0x64c, 
       0x5, 0x124, 0x93, 0x2, 0x64b, 0x64a, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64f, 
       0x3, 0x2, 0x2, 0x2, 0x64d, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x64e, 
       0x3, 0x2, 0x2, 0x2, 0x64e, 0x653, 0x3, 0x2, 0x2, 0x2, 0x64f, 0x64d, 
       0x3, 0x2, 0x2, 0x2, 0x650, 0x652, 0x5, 0x128, 0x95, 0x2, 0x651, 0x650, 
       0x3, 0x2, 0x2, 0x2, 0x652, 0x655, 0x3, 0x2, 0x2, 0x2, 0x653, 0x651, 
       0x3, 0x2, 0x2, 0x2, 0x653, 0x654, 0x3, 0x2, 0x2, 0x2, 0x654, 0x656, 
       0x3, 0x2, 0x2, 0x2, 0x655, 0x653, 0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 
       0x7, 0x3e, 0x2, 0x2, 0x657, 0x123, 0x3, 0x2, 0x2, 0x2, 0x658, 0x659, 
       0x5, 0x126, 0x94, 0x2, 0x659, 0x65a, 0x5, 0x100, 0x81, 0x2, 0x65a, 
       0x125, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65f, 0x5, 0x128, 0x95, 0x2, 0x65c, 
       0x65e, 0x5, 0x128, 0x95, 0x2, 0x65d, 0x65c, 0x3, 0x2, 0x2, 0x2, 0x65e, 
       0x661, 0x3, 0x2, 0x2, 0x2, 0x65f, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x65f, 
       0x660, 0x3, 0x2, 0x2, 0x2, 0x660, 0x127, 0x3, 0x2, 0x2, 0x2, 0x661, 
       0x65f, 0x3, 0x2, 0x2, 0x2, 0x662, 0x663, 0x7, 0x8, 0x2, 0x2, 0x663, 
       0x664, 0x5, 0x1da, 0xee, 0x2, 0x664, 0x665, 0x7, 0x4a, 0x2, 0x2, 
       0x665, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x666, 0x667, 0x7, 0x8, 0x2, 0x2, 
       0x667, 0x668, 0x5, 0x12a, 0x96, 0x2, 0x668, 0x669, 0x7, 0x4a, 0x2, 
       0x2, 0x669, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 0x7, 0xe, 0x2, 
       0x2, 0x66b, 0x66d, 0x7, 0x4a, 0x2, 0x2, 0x66c, 0x662, 0x3, 0x2, 0x2, 
       0x2, 0x66c, 0x666, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x66a, 0x3, 0x2, 0x2, 
       0x2, 0x66d, 0x129, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x66f, 0x7, 0x68, 0x2, 
       0x2, 0x66f, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x670, 0x671, 0x7, 0x34, 0x2, 
       0x2, 0x671, 0x672, 0x7, 0x3b, 0x2, 0x2, 0x672, 0x673, 0x5, 0x19e, 
       0xd0, 0x2, 0x673, 0x674, 0x7, 0x3c, 0x2, 0x2, 0x674, 0x675, 0x5, 
       0x108, 0x85, 0x2, 0x675, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x676, 0x677, 
       0x7, 0x34, 0x2, 0x2, 0x677, 0x678, 0x7, 0x3b, 0x2, 0x2, 0x678, 0x679, 
       0x5, 0x19e, 0xd0, 0x2, 0x679, 0x67a, 0x7, 0x3c, 0x2, 0x2, 0x67a, 
       0x67b, 0x5, 0x10a, 0x86, 0x2, 0x67b, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x67c, 
       0x67d, 0x7, 0xf, 0x2, 0x2, 0x67d, 0x67e, 0x5, 0x108, 0x85, 0x2, 0x67e, 
       0x67f, 0x7, 0x34, 0x2, 0x2, 0x67f, 0x680, 0x7, 0x3b, 0x2, 0x2, 0x680, 
       0x681, 0x5, 0x19e, 0xd0, 0x2, 0x681, 0x682, 0x7, 0x3c, 0x2, 0x2, 
       0x682, 0x683, 0x7, 0x41, 0x2, 0x2, 0x683, 0x131, 0x3, 0x2, 0x2, 0x2, 
       0x684, 0x687, 0x5, 0x136, 0x9c, 0x2, 0x685, 0x687, 0x5, 0x140, 0xa1, 
       0x2, 0x686, 0x684, 0x3, 0x2, 0x2, 0x2, 0x686, 0x685, 0x3, 0x2, 0x2, 
       0x2, 0x687, 0x133, 0x3, 0x2, 0x2, 0x2, 0x688, 0x68b, 0x5, 0x138, 
       0x9d, 0x2, 0x689, 0x68b, 0x5, 0x142, 0xa2, 0x2, 0x68a, 0x688, 0x3, 
       0x2, 0x2, 0x2, 0x68a, 0x689, 0x3, 0x2, 0x2, 0x2, 0x68b, 0x135, 0x3, 
       0x2, 0x2, 0x2, 0x68c, 0x68d, 0x7, 0x17, 0x2, 0x2, 0x68d, 0x68f, 0x7, 
       0x3b, 0x2, 0x2, 0x68e, 0x690, 0x5, 0x13a, 0x9e, 0x2, 0x68f, 0x68e, 
       0x3, 0x2, 0x2, 0x2, 0x68f, 0x690, 0x3, 0x2, 0x2, 0x2, 0x690, 0x691, 
       0x3, 0x2, 0x2, 0x2, 0x691, 0x693, 0x7, 0x41, 0x2, 0x2, 0x692, 0x694, 
       0x5, 0x19e, 0xd0, 0x2, 0x693, 0x692, 0x3, 0x2, 0x2, 0x2, 0x693, 0x694, 
       0x3, 0x2, 0x2, 0x2, 0x694, 0x695, 0x3, 0x2, 0x2, 0x2, 0x695, 0x697, 
       0x7, 0x41, 0x2, 0x2, 0x696, 0x698, 0x5, 0x13c, 0x9f, 0x2, 0x697, 
       0x696, 0x3, 0x2, 0x2, 0x2, 0x697, 0x698, 0x3, 0x2, 0x2, 0x2, 0x698, 
       0x699, 0x3, 0x2, 0x2, 0x2, 0x699, 0x69a, 0x7, 0x3c, 0x2, 0x2, 0x69a, 
       0x69b, 0x5, 0x108, 0x85, 0x2, 0x69b, 0x137, 0x3, 0x2, 0x2, 0x2, 0x69c, 
       0x69d, 0x7, 0x17, 0x2, 0x2, 0x69d, 0x69f, 0x7, 0x3b, 0x2, 0x2, 0x69e, 
       0x6a0, 0x5, 0x13a, 0x9e, 0x2, 0x69f, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x69f, 
       0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6a1, 
       0x6a3, 0x7, 0x41, 0x2, 0x2, 0x6a2, 0x6a4, 0x5, 0x19e, 0xd0, 0x2, 
       0x6a3, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a3, 0x6a4, 0x3, 0x2, 0x2, 0x2, 
       0x6a4, 0x6a5, 0x3, 0x2, 0x2, 0x2, 0x6a5, 0x6a7, 0x7, 0x41, 0x2, 0x2, 
       0x6a6, 0x6a8, 0x5, 0x13c, 0x9f, 0x2, 0x6a7, 0x6a6, 0x3, 0x2, 0x2, 
       0x2, 0x6a7, 0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6a8, 0x6a9, 0x3, 0x2, 0x2, 
       0x2, 0x6a9, 0x6aa, 0x7, 0x3c, 0x2, 0x2, 0x6aa, 0x6ab, 0x5, 0x10a, 
       0x86, 0x2, 0x6ab, 0x139, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6af, 0x5, 0x13e, 
       0xa0, 0x2, 0x6ad, 0x6af, 0x5, 0x106, 0x84, 0x2, 0x6ae, 0x6ac, 0x3, 
       0x2, 0x2, 0x2, 0x6ae, 0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x13b, 0x3, 
       0x2, 0x2, 0x2, 0x6b0, 0x6b1, 0x5, 0x13e, 0xa0, 0x2, 0x6b1, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x6b2, 0x6b7, 0x5, 0x116, 0x8c, 0x2, 0x6b3, 0x6b4, 
       0x7, 0x42, 0x2, 0x2, 0x6b4, 0x6b6, 0x5, 0x116, 0x8c, 0x2, 0x6b5, 
       0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b6, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6b7, 
       0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6b7, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6b8, 
       0x13f, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x6ba, 
       0x6bb, 0x7, 0x17, 0x2, 0x2, 0x6bb, 0x6bf, 0x7, 0x3b, 0x2, 0x2, 0x6bc, 
       0x6be, 0x5, 0x9e, 0x50, 0x2, 0x6bd, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6be, 
       0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6bf, 0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6bf, 
       0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c2, 0x3, 0x2, 0x2, 0x2, 0x6c1, 
       0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6c3, 0x5, 0x76, 0x3c, 0x2, 0x6c3, 
       0x6c4, 0x5, 0x72, 0x3a, 0x2, 0x6c4, 0x6c5, 0x7, 0x4a, 0x2, 0x2, 0x6c5, 
       0x6c6, 0x5, 0x19e, 0xd0, 0x2, 0x6c6, 0x6c7, 0x7, 0x3c, 0x2, 0x2, 
       0x6c7, 0x6c8, 0x5, 0x108, 0x85, 0x2, 0x6c8, 0x141, 0x3, 0x2, 0x2, 
       0x2, 0x6c9, 0x6ca, 0x7, 0x17, 0x2, 0x2, 0x6ca, 0x6ce, 0x7, 0x3b, 
       0x2, 0x2, 0x6cb, 0x6cd, 0x5, 0x9e, 0x50, 0x2, 0x6cc, 0x6cb, 0x3, 
       0x2, 0x2, 0x2, 0x6cd, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6ce, 0x6cc, 0x3, 
       0x2, 0x2, 0x2, 0x6ce, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6d1, 0x3, 
       0x2, 0x2, 0x2, 0x6d0, 0x6ce, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0x6d2, 0x5, 
       0x76, 0x3c, 0x2, 0x6d2, 0x6d3, 0x5, 0x72, 0x3a, 0x2, 0x6d3, 0x6d4, 
       0x7, 0x4a, 0x2, 0x2, 0x6d4, 0x6d5, 0x5, 0x19e, 0xd0, 0x2, 0x6d5, 
       0x6d6, 0x7, 0x3c, 0x2, 0x2, 0x6d6, 0x6d7, 0x5, 0x10a, 0x86, 0x2, 
       0x6d7, 0x143, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6da, 0x7, 0x6, 0x2, 0x2, 
       0x6d9, 0x6db, 0x7, 0x68, 0x2, 0x2, 0x6da, 0x6d9, 0x3, 0x2, 0x2, 0x2, 
       0x6da, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dc, 0x3, 0x2, 0x2, 0x2, 
       0x6dc, 0x6dd, 0x7, 0x41, 0x2, 0x2, 0x6dd, 0x145, 0x3, 0x2, 0x2, 0x2, 
       0x6de, 0x6e0, 0x7, 0xd, 0x2, 0x2, 0x6df, 0x6e1, 0x7, 0x68, 0x2, 0x2, 
       0x6e0, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6e1, 0x3, 0x2, 0x2, 0x2, 
       0x6e1, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6e3, 0x7, 0x41, 0x2, 0x2, 
       0x6e3, 0x147, 0x3, 0x2, 0x2, 0x2, 0x6e4, 0x6e6, 0x7, 0x26, 0x2, 0x2, 
       0x6e5, 0x6e7, 0x5, 0x19e, 0xd0, 0x2, 0x6e6, 0x6e5, 0x3, 0x2, 0x2, 
       0x2, 0x6e6, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e7, 0x6e8, 0x3, 0x2, 0x2, 
       0x2, 0x6e8, 0x6e9, 0x7, 0x41, 0x2, 0x2, 0x6e9, 0x149, 0x3, 0x2, 0x2, 
       0x2, 0x6ea, 0x6ec, 0x7, 0x2e, 0x2, 0x2, 0x6eb, 0x6ed, 0x5, 0x19e, 
       0xd0, 0x2, 0x6ec, 0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6ed, 0x3, 0x2, 
       0x2, 0x2, 0x6ed, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6ef, 0x7, 0x41, 
       0x2, 0x2, 0x6ef, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6f1, 0x7, 0x2c, 
       0x2, 0x2, 0x6f1, 0x6f2, 0x7, 0x3b, 0x2, 0x2, 0x6f2, 0x6f3, 0x5, 0x19e, 
       0xd0, 0x2, 0x6f3, 0x6f4, 0x7, 0x3c, 0x2, 0x2, 0x6f4, 0x6f5, 0x5, 
       0xfe, 0x80, 0x2, 0x6f5, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x6f6, 0x6f7, 
       0x7, 0x31, 0x2, 0x2, 0x6f7, 0x6f8, 0x5, 0xfe, 0x80, 0x2, 0x6f8, 0x6f9, 
       0x5, 0x150, 0xa9, 0x2, 0x6f9, 0x703, 0x3, 0x2, 0x2, 0x2, 0x6fa, 0x6fb, 
       0x7, 0x31, 0x2, 0x2, 0x6fb, 0x6fd, 0x5, 0xfe, 0x80, 0x2, 0x6fc, 0x6fe, 
       0x5, 0x150, 0xa9, 0x2, 0x6fd, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6fe, 
       0x3, 0x2, 0x2, 0x2, 0x6fe, 0x6ff, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x700, 
       0x5, 0x158, 0xad, 0x2, 0x700, 0x703, 0x3, 0x2, 0x2, 0x2, 0x701, 0x703, 
       0x5, 0x15a, 0xae, 0x2, 0x702, 0x6f6, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6fa, 
       0x3, 0x2, 0x2, 0x2, 0x702, 0x701, 0x3, 0x2, 0x2, 0x2, 0x703, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x704, 0x708, 0x5, 0x152, 0xaa, 0x2, 0x705, 0x707, 
       0x5, 0x152, 0xaa, 0x2, 0x706, 0x705, 0x3, 0x2, 0x2, 0x2, 0x707, 0x70a, 
       0x3, 0x2, 0x2, 0x2, 0x708, 0x706, 0x3, 0x2, 0x2, 0x2, 0x708, 0x709, 
       0x3, 0x2, 0x2, 0x2, 0x709, 0x151, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x708, 
       0x3, 0x2, 0x2, 0x2, 0x70b, 0x70c, 0x7, 0x9, 0x2, 0x2, 0x70c, 0x70d, 
       0x7, 0x3b, 0x2, 0x2, 0x70d, 0x70e, 0x5, 0x154, 0xab, 0x2, 0x70e, 
       0x70f, 0x7, 0x3c, 0x2, 0x2, 0x70f, 0x710, 0x5, 0xfe, 0x80, 0x2, 0x710, 
       0x153, 0x3, 0x2, 0x2, 0x2, 0x711, 0x713, 0x5, 0x9e, 0x50, 0x2, 0x712, 
       0x711, 0x3, 0x2, 0x2, 0x2, 0x713, 0x716, 0x3, 0x2, 0x2, 0x2, 0x714, 
       0x712, 0x3, 0x2, 0x2, 0x2, 0x714, 0x715, 0x3, 0x2, 0x2, 0x2, 0x715, 
       0x717, 0x3, 0x2, 0x2, 0x2, 0x716, 0x714, 0x3, 0x2, 0x2, 0x2, 0x717, 
       0x718, 0x5, 0x156, 0xac, 0x2, 0x718, 0x719, 0x5, 0x72, 0x3a, 0x2, 
       0x719, 0x155, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x71f, 0x5, 0x7e, 0x40, 
       0x2, 0x71b, 0x71c, 0x7, 0x58, 0x2, 0x2, 0x71c, 0x71e, 0x5, 0x12, 
       0xa, 0x2, 0x71d, 0x71b, 0x3, 0x2, 0x2, 0x2, 0x71e, 0x721, 0x3, 0x2, 
       0x2, 0x2, 0x71f, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x720, 0x3, 0x2, 
       0x2, 0x2, 0x720, 0x157, 0x3, 0x2, 0x2, 0x2, 0x721, 0x71f, 0x3, 0x2, 
       0x2, 0x2, 0x722, 0x723, 0x7, 0x15, 0x2, 0x2, 0x723, 0x724, 0x5, 0xfe, 
       0x80, 0x2, 0x724, 0x159, 0x3, 0x2, 0x2, 0x2, 0x725, 0x726, 0x7, 0x31, 
       0x2, 0x2, 0x726, 0x727, 0x5, 0x15c, 0xaf, 0x2, 0x727, 0x729, 0x5, 
       0xfe, 0x80, 0x2, 0x728, 0x72a, 0x5, 0x150, 0xa9, 0x2, 0x729, 0x728, 
       0x3, 0x2, 0x2, 0x2, 0x729, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x72c, 
       0x3, 0x2, 0x2, 0x2, 0x72b, 0x72d, 0x5, 0x158, 0xad, 0x2, 0x72c, 0x72b, 
       0x3, 0x2, 0x2, 0x2, 0x72c, 0x72d, 0x3, 0x2, 0x2, 0x2, 0x72d, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x72e, 0x72f, 0x7, 0x3b, 0x2, 0x2, 0x72f, 0x731, 
       0x5, 0x15e, 0xb0, 0x2, 0x730, 0x732, 0x7, 0x4a, 0x2, 0x2, 0x731, 
       0x730, 0x3, 0x2, 0x2, 0x2, 0x731, 0x732, 0x3, 0x2, 0x2, 0x2, 0x732, 
       0x733, 0x3, 0x2, 0x2, 0x2, 0x733, 0x734, 0x7, 0x3c, 0x2, 0x2, 0x734, 
       0x15d, 0x3, 0x2, 0x2, 0x2, 0x735, 0x73a, 0x5, 0x160, 0xb1, 0x2, 0x736, 
       0x737, 0x7, 0x41, 0x2, 0x2, 0x737, 0x739, 0x5, 0x160, 0xb1, 0x2, 
       0x738, 0x736, 0x3, 0x2, 0x2, 0x2, 0x739, 0x73c, 0x3, 0x2, 0x2, 0x2, 
       0x73a, 0x738, 0x3, 0x2, 0x2, 0x2, 0x73a, 0x73b, 0x3, 0x2, 0x2, 0x2, 
       0x73b, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x73c, 0x73a, 0x3, 0x2, 0x2, 0x2, 
       0x73d, 0x73f, 0x5, 0x9e, 0x50, 0x2, 0x73e, 0x73d, 0x3, 0x2, 0x2, 
       0x2, 0x73f, 0x742, 0x3, 0x2, 0x2, 0x2, 0x740, 0x73e, 0x3, 0x2, 0x2, 
       0x2, 0x740, 0x741, 0x3, 0x2, 0x2, 0x2, 0x741, 0x743, 0x3, 0x2, 0x2, 
       0x2, 0x742, 0x740, 0x3, 0x2, 0x2, 0x2, 0x743, 0x744, 0x5, 0x76, 0x3c, 
       0x2, 0x744, 0x745, 0x5, 0x72, 0x3a, 0x2, 0x745, 0x746, 0x7, 0x44, 
       0x2, 0x2, 0x746, 0x747, 0x5, 0x19e, 0xd0, 0x2, 0x747, 0x161, 0x3, 
       0x2, 0x2, 0x2, 0x748, 0x74b, 0x5, 0x170, 0xb9, 0x2, 0x749, 0x74b, 
       0x5, 0x198, 0xcd, 0x2, 0x74a, 0x748, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x749, 
       0x3, 0x2, 0x2, 0x2, 0x74b, 0x74f, 0x3, 0x2, 0x2, 0x2, 0x74c, 0x74e, 
       0x5, 0x16a, 0xb6, 0x2, 0x74d, 0x74c, 0x3, 0x2, 0x2, 0x2, 0x74e, 0x751, 
       0x3, 0x2, 0x2, 0x2, 0x74f, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x750, 
       0x3, 0x2, 0x2, 0x2, 0x750, 0x163, 0x3, 0x2, 0x2, 0x2, 0x751, 0x74f, 
       0x3, 0x2, 0x2, 0x2, 0x752, 0x770, 0x5, 0x2, 0x2, 0x2, 0x753, 0x758, 
       0x5, 0x36, 0x1c, 0x2, 0x754, 0x755, 0x7, 0x3f, 0x2, 0x2, 0x755, 0x757, 
       0x7, 0x40, 0x2, 0x2, 0x756, 0x754, 0x3, 0x2, 0x2, 0x2, 0x757, 0x75a, 
       0x3, 0x2, 0x2, 0x2, 0x758, 0x756, 0x3, 0x2, 0x2, 0x2, 0x758, 0x759, 
       0x3, 0x2, 0x2, 0x2, 0x759, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x758, 
       0x3, 0x2, 0x2, 0x2, 0x75b, 0x75c, 0x7, 0x43, 0x2, 0x2, 0x75c, 0x75d, 
       0x7, 0xb, 0x2, 0x2, 0x75d, 0x770, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x75f, 
       0x7, 0x32, 0x2, 0x2, 0x75f, 0x760, 0x7, 0x43, 0x2, 0x2, 0x760, 0x770, 
       0x7, 0xb, 0x2, 0x2, 0x761, 0x770, 0x7, 0x2d, 0x2, 0x2, 0x762, 0x763, 
       0x5, 0x36, 0x1c, 0x2, 0x763, 0x764, 0x7, 0x43, 0x2, 0x2, 0x764, 0x765, 
       0x7, 0x2d, 0x2, 0x2, 0x765, 0x770, 0x3, 0x2, 0x2, 0x2, 0x766, 0x767, 
       0x7, 0x3b, 0x2, 0x2, 0x767, 0x768, 0x5, 0x19e, 0xd0, 0x2, 0x768, 
       0x769, 0x7, 0x3c, 0x2, 0x2, 0x769, 0x770, 0x3, 0x2, 0x2, 0x2, 0x76a, 
       0x770, 0x5, 0x176, 0xbc, 0x2, 0x76b, 0x770, 0x5, 0x17e, 0xc0, 0x2, 
       0x76c, 0x770, 0x5, 0x184, 0xc3, 0x2, 0x76d, 0x770, 0x5, 0x18a, 0xc6, 
       0x2, 0x76e, 0x770, 0x5, 0x192, 0xca, 0x2, 0x76f, 0x752, 0x3, 0x2, 
       0x2, 0x2, 0x76f, 0x753, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x75e, 0x3, 0x2, 
       0x2, 0x2, 0x76f, 0x761, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x762, 0x3, 0x2, 
       0x2, 0x2, 0x76f, 0x766, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x76a, 0x3, 0x2, 
       0x2, 0x2, 0x76f, 0x76b, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x76c, 0x3, 0x2, 
       0x2, 0x2, 0x76f, 0x76d, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x76e, 0x3, 0x2, 
       0x2, 0x2, 0x770, 0x165, 0x3, 0x2, 0x2, 0x2, 0x771, 0x772, 0x3, 0x2, 
       0x2, 0x2, 0x772, 0x167, 0x3, 0x2, 0x2, 0x2, 0x773, 0x790, 0x5, 0x2, 
       0x2, 0x2, 0x774, 0x779, 0x5, 0x36, 0x1c, 0x2, 0x775, 0x776, 0x7, 
       0x3f, 0x2, 0x2, 0x776, 0x778, 0x7, 0x40, 0x2, 0x2, 0x777, 0x775, 
       0x3, 0x2, 0x2, 0x2, 0x778, 0x77b, 0x3, 0x2, 0x2, 0x2, 0x779, 0x777, 
       0x3, 0x2, 0x2, 0x2, 0x779, 0x77a, 0x3, 0x2, 0x2, 0x2, 0x77a, 0x77c, 
       0x3, 0x2, 0x2, 0x2, 0x77b, 0x779, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x77d, 
       0x7, 0x43, 0x2, 0x2, 0x77d, 0x77e, 0x7, 0xb, 0x2, 0x2, 0x77e, 0x790, 
       0x3, 0x2, 0x2, 0x2, 0x77f, 0x780, 0x7, 0x32, 0x2, 0x2, 0x780, 0x781, 
       0x7, 0x43, 0x2, 0x2, 0x781, 0x790, 0x7, 0xb, 0x2, 0x2, 0x782, 0x790, 
       0x7, 0x2d, 0x2, 0x2, 0x783, 0x784, 0x5, 0x36, 0x1c, 0x2, 0x784, 0x785, 
       0x7, 0x43, 0x2, 0x2, 0x785, 0x786, 0x7, 0x2d, 0x2, 0x2, 0x786, 0x790, 
       0x3, 0x2, 0x2, 0x2, 0x787, 0x788, 0x7, 0x3b, 0x2, 0x2, 0x788, 0x789, 
       0x5, 0x19e, 0xd0, 0x2, 0x789, 0x78a, 0x7, 0x3c, 0x2, 0x2, 0x78a, 
       0x790, 0x3, 0x2, 0x2, 0x2, 0x78b, 0x790, 0x5, 0x176, 0xbc, 0x2, 0x78c, 
       0x790, 0x5, 0x17e, 0xc0, 0x2, 0x78d, 0x790, 0x5, 0x18a, 0xc6, 0x2, 
       0x78e, 0x790, 0x5, 0x192, 0xca, 0x2, 0x78f, 0x773, 0x3, 0x2, 0x2, 
       0x2, 0x78f, 0x774, 0x3, 0x2, 0x2, 0x2, 0x78f, 0x77f, 0x3, 0x2, 0x2, 
       0x2, 0x78f, 0x782, 0x3, 0x2, 0x2, 0x2, 0x78f, 0x783, 0x3, 0x2, 0x2, 
       0x2, 0x78f, 0x787, 0x3, 0x2, 0x2, 0x2, 0x78f, 0x78b, 0x3, 0x2, 0x2, 
       0x2, 0x78f, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x78f, 0x78d, 0x3, 0x2, 0x2, 
       0x2, 0x78f, 0x78e, 0x3, 0x2, 0x2, 0x2, 0x790, 0x169, 0x3, 0x2, 0x2, 
       0x2, 0x791, 0x797, 0x5, 0x178, 0xbd, 0x2, 0x792, 0x797, 0x5, 0x180, 
       0xc1, 0x2, 0x793, 0x797, 0x5, 0x186, 0xc4, 0x2, 0x794, 0x797, 0x5, 
       0x18c, 0xc7, 0x2, 0x795, 0x797, 0x5, 0x194, 0xcb, 0x2, 0x796, 0x791, 
       0x3, 0x2, 0x2, 0x2, 0x796, 0x792, 0x3, 0x2, 0x2, 0x2, 0x796, 0x793, 
       0x3, 0x2, 0x2, 0x2, 0x796, 0x794, 0x3, 0x2, 0x2, 0x2, 0x796, 0x795, 
       0x3, 0x2, 0x2, 0x2, 0x797, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x798, 0x799, 
       0x3, 0x2, 0x2, 0x2, 0x799, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x79a, 0x79f, 
       0x5, 0x178, 0xbd, 0x2, 0x79b, 0x79f, 0x5, 0x180, 0xc1, 0x2, 0x79c, 
       0x79f, 0x5, 0x18c, 0xc7, 0x2, 0x79d, 0x79f, 0x5, 0x194, 0xcb, 0x2, 
       0x79e, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x79b, 0x3, 0x2, 0x2, 0x2, 
       0x79e, 0x79c, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x79d, 0x3, 0x2, 0x2, 0x2, 
       0x79f, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x7a0, 0x7c9, 0x5, 0x2, 0x2, 0x2, 
       0x7a1, 0x7a6, 0x5, 0x36, 0x1c, 0x2, 0x7a2, 0x7a3, 0x7, 0x3f, 0x2, 
       0x2, 0x7a3, 0x7a5, 0x7, 0x40, 0x2, 0x2, 0x7a4, 0x7a2, 0x3, 0x2, 0x2, 
       0x2, 0x7a5, 0x7a8, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a4, 0x3, 0x2, 0x2, 
       0x2, 0x7a6, 0x7a7, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7a9, 0x3, 0x2, 0x2, 
       0x2, 0x7a8, 0x7a6, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7aa, 0x7, 0x43, 0x2, 
       0x2, 0x7aa, 0x7ab, 0x7, 0xb, 0x2, 0x2, 0x7ab, 0x7c9, 0x3, 0x2, 0x2, 
       0x2, 0x7ac, 0x7b1, 0x5, 0x78, 0x3d, 0x2, 0x7ad, 0x7ae, 0x7, 0x3f, 
       0x2, 0x2, 0x7ae, 0x7b0, 0x7, 0x40, 0x2, 0x2, 0x7af, 0x7ad, 0x3, 0x2, 
       0x2, 0x2, 0x7b0, 0x7b3, 0x3, 0x2, 0x2, 0x2, 0x7b1, 0x7af, 0x3, 0x2, 
       0x2, 0x2, 0x7b1, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b4, 0x3, 0x2, 
       0x2, 0x2, 0x7b3, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7b4, 0x7b5, 0x7, 0x43, 
       0x2, 0x2, 0x7b5, 0x7b6, 0x7, 0xb, 0x2, 0x2, 0x7b6, 0x7c9, 0x3, 0x2, 
       0x2, 0x2, 0x7b7, 0x7b8, 0x7, 0x32, 0x2, 0x2, 0x7b8, 0x7b9, 0x7, 0x43, 
       0x2, 0x2, 0x7b9, 0x7c9, 0x7, 0xb, 0x2, 0x2, 0x7ba, 0x7c9, 0x7, 0x2d, 
       0x2, 0x2, 0x7bb, 0x7bc, 0x5, 0x36, 0x1c, 0x2, 0x7bc, 0x7bd, 0x7, 
       0x43, 0x2, 0x2, 0x7bd, 0x7be, 0x7, 0x2d, 0x2, 0x2, 0x7be, 0x7c9, 
       0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7c0, 0x7, 0x3b, 0x2, 0x2, 0x7c0, 0x7c1, 
       0x5, 0x19e, 0xd0, 0x2, 0x7c1, 0x7c2, 0x7, 0x3c, 0x2, 0x2, 0x7c2, 
       0x7c9, 0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c9, 0x5, 0x17a, 0xbe, 0x2, 0x7c4, 
       0x7c9, 0x5, 0x182, 0xc2, 0x2, 0x7c5, 0x7c9, 0x5, 0x188, 0xc5, 0x2, 
       0x7c6, 0x7c9, 0x5, 0x18e, 0xc8, 0x2, 0x7c7, 0x7c9, 0x5, 0x196, 0xcc, 
       0x2, 0x7c8, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7a1, 0x3, 0x2, 0x2, 
       0x2, 0x7c8, 0x7ac, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7b7, 0x3, 0x2, 0x2, 
       0x2, 0x7c8, 0x7ba, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7bb, 0x3, 0x2, 0x2, 
       0x2, 0x7c8, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7c3, 0x3, 0x2, 0x2, 
       0x2, 0x7c8, 0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7c5, 0x3, 0x2, 0x2, 
       0x2, 0x7c8, 0x7c6, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7c7, 0x3, 0x2, 0x2, 
       0x2, 0x7c9, 0x171, 0x3, 0x2, 0x2, 0x2, 0x7ca, 0x7cb, 0x3, 0x2, 0x2, 
       0x2, 0x7cb, 0x173, 0x3, 0x2, 0x2, 0x2, 0x7cc, 0x7f4, 0x5, 0x2, 0x2, 
       0x2, 0x7cd, 0x7d2, 0x5, 0x36, 0x1c, 0x2, 0x7ce, 0x7cf, 0x7, 0x3f, 
       0x2, 0x2, 0x7cf, 0x7d1, 0x7, 0x40, 0x2, 0x2, 0x7d0, 0x7ce, 0x3, 0x2, 
       0x2, 0x2, 0x7d1, 0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d2, 0x7d0, 0x3, 0x2, 
       0x2, 0x2, 0x7d2, 0x7d3, 0x3, 0x2, 0x2, 0x2, 0x7d3, 0x7d5, 0x3, 0x2, 
       0x2, 0x2, 0x7d4, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d6, 0x7, 0x43, 
       0x2, 0x2, 0x7d6, 0x7d7, 0x7, 0xb, 0x2, 0x2, 0x7d7, 0x7f4, 0x3, 0x2, 
       0x2, 0x2, 0x7d8, 0x7dd, 0x5, 0x78, 0x3d, 0x2, 0x7d9, 0x7da, 0x7, 
       0x3f, 0x2, 0x2, 0x7da, 0x7dc, 0x7, 0x40, 0x2, 0x2, 0x7db, 0x7d9, 
       0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7df, 0x3, 0x2, 0x2, 0x2, 0x7dd, 0x7db, 
       0x3, 0x2, 0x2, 0x2, 0x7dd, 0x7de, 0x3, 0x2, 0x2, 0x2, 0x7de, 0x7e0, 
       0x3, 0x2, 0x2, 0x2, 0x7df, 0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e1, 
       0x7, 0x43, 0x2, 0x2, 0x7e1, 0x7e2, 0x7, 0xb, 0x2, 0x2, 0x7e2, 0x7f4, 
       0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e4, 0x7, 0x32, 0x2, 0x2, 0x7e4, 0x7e5, 
       0x7, 0x43, 0x2, 0x2, 0x7e5, 0x7f4, 0x7, 0xb, 0x2, 0x2, 0x7e6, 0x7f4, 
       0x7, 0x2d, 0x2, 0x2, 0x7e7, 0x7e8, 0x5, 0x36, 0x1c, 0x2, 0x7e8, 0x7e9, 
       0x7, 0x43, 0x2, 0x2, 0x7e9, 0x7ea, 0x7, 0x2d, 0x2, 0x2, 0x7ea, 0x7f4, 
       0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7ec, 0x7, 0x3b, 0x2, 0x2, 0x7ec, 0x7ed, 
       0x5, 0x19e, 0xd0, 0x2, 0x7ed, 0x7ee, 0x7, 0x3c, 0x2, 0x2, 0x7ee, 
       0x7f4, 0x3, 0x2, 0x2, 0x2, 0x7ef, 0x7f4, 0x5, 0x17a, 0xbe, 0x2, 0x7f0, 
       0x7f4, 0x5, 0x182, 0xc2, 0x2, 0x7f1, 0x7f4, 0x5, 0x18e, 0xc8, 0x2, 
       0x7f2, 0x7f4, 0x5, 0x196, 0xcc, 0x2, 0x7f3, 0x7cc, 0x3, 0x2, 0x2, 
       0x2, 0x7f3, 0x7cd, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7d8, 0x3, 0x2, 0x2, 
       0x2, 0x7f3, 0x7e3, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7e6, 0x3, 0x2, 0x2, 
       0x2, 0x7f3, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7eb, 0x3, 0x2, 0x2, 
       0x2, 0x7f3, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f0, 0x3, 0x2, 0x2, 
       0x2, 0x7f3, 0x7f1, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f2, 0x3, 0x2, 0x2, 
       0x2, 0x7f4, 0x175, 0x3, 0x2, 0x2, 0x2, 0x7f5, 0x7f7, 0x7, 0x21, 0x2, 
       0x2, 0x7f6, 0x7f8, 0x5, 0x2c, 0x17, 0x2, 0x7f7, 0x7f6, 0x3, 0x2, 
       0x2, 0x2, 0x7f7, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7fc, 0x3, 0x2, 
       0x2, 0x2, 0x7f9, 0x7fb, 0x5, 0xe8, 0x75, 0x2, 0x7fa, 0x7f9, 0x3, 
       0x2, 0x2, 0x2, 0x7fb, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fa, 0x3, 
       0x2, 0x2, 0x2, 0x7fc, 0x7fd, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7ff, 0x3, 
       0x2, 0x2, 0x2, 0x7fe, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7ff, 0x80a, 0x7, 
       0x68, 0x2, 0x2, 0x800, 0x804, 0x7, 0x43, 0x2, 0x2, 0x801, 0x803, 
       0x5, 0xe8, 0x75, 0x2, 0x802, 0x801, 0x3, 0x2, 0x2, 0x2, 0x803, 0x806, 
       0x3, 0x2, 0x2, 0x2, 0x804, 0x802, 0x3, 0x2, 0x2, 0x2, 0x804, 0x805, 
       0x3, 0x2, 0x2, 0x2, 0x805, 0x807, 0x3, 0x2, 0x2, 0x2, 0x806, 0x804, 
       0x3, 0x2, 0x2, 0x2, 0x807, 0x809, 0x7, 0x68, 0x2, 0x2, 0x808, 0x800, 
       0x3, 0x2, 0x2, 0x2, 0x809, 0x80c, 0x3, 0x2, 0x2, 0x2, 0x80a, 0x808, 
       0x3, 0x2, 0x2, 0x2, 0x80a, 0x80b, 0x3, 0x2, 0x2, 0x2, 0x80b, 0x80e, 
       0x3, 0x2, 0x2, 0x2, 0x80c, 0x80a, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x80f, 
       0x5, 0x17c, 0xbf, 0x2, 0x80e, 0x80d, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x80f, 
       0x3, 0x2, 0x2, 0x2, 0x80f, 0x810, 0x3, 0x2, 0x2, 0x2, 0x810, 0x812, 
       0x7, 0x3b, 0x2, 0x2, 0x811, 0x813, 0x5, 0x190, 0xc9, 0x2, 0x812, 
       0x811, 0x3, 0x2, 0x2, 0x2, 0x812, 0x813, 0x3, 0x2, 0x2, 0x2, 0x813, 
       0x814, 0x3, 0x2, 0x2, 0x2, 0x814, 0x816, 0x7, 0x3c, 0x2, 0x2, 0x815, 
       0x817, 0x5, 0x64, 0x33, 0x2, 0x816, 0x815, 0x3, 0x2, 0x2, 0x2, 0x816, 
       0x817, 0x3, 0x2, 0x2, 0x2, 0x817, 0x849, 0x3, 0x2, 0x2, 0x2, 0x818, 
       0x819, 0x5, 0x3a, 0x1e, 0x2, 0x819, 0x81a, 0x7, 0x43, 0x2, 0x2, 0x81a, 
       0x81c, 0x7, 0x21, 0x2, 0x2, 0x81b, 0x81d, 0x5, 0x2c, 0x17, 0x2, 0x81c, 
       0x81b, 0x3, 0x2, 0x2, 0x2, 0x81c, 0x81d, 0x3, 0x2, 0x2, 0x2, 0x81d, 
       0x821, 0x3, 0x2, 0x2, 0x2, 0x81e, 0x820, 0x5, 0xe8, 0x75, 0x2, 0x81f, 
       0x81e, 0x3, 0x2, 0x2, 0x2, 0x820, 0x823, 0x3, 0x2, 0x2, 0x2, 0x821, 
       0x81f, 0x3, 0x2, 0x2, 0x2, 0x821, 0x822, 0x3, 0x2, 0x2, 0x2, 0x822, 
       0x824, 0x3, 0x2, 0x2, 0x2, 0x823, 0x821, 0x3, 0x2, 0x2, 0x2, 0x824, 
       0x826, 0x7, 0x68, 0x2, 0x2, 0x825, 0x827, 0x5, 0x17c, 0xbf, 0x2, 
       0x826, 0x825, 0x3, 0x2, 0x2, 0x2, 0x826, 0x827, 0x3, 0x2, 0x2, 0x2, 
       0x827, 0x828, 0x3, 0x2, 0x2, 0x2, 0x828, 0x82a, 0x7, 0x3b, 0x2, 0x2, 
       0x829, 0x82b, 0x5, 0x190, 0xc9, 0x2, 0x82a, 0x829, 0x3, 0x2, 0x2, 
       0x2, 0x82a, 0x82b, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x82c, 0x3, 0x2, 0x2, 
       0x2, 0x82c, 0x82e, 0x7, 0x3c, 0x2, 0x2, 0x82d, 0x82f, 0x5, 0x64, 
       0x33, 0x2, 0x82e, 0x82d, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x82f, 0x3, 0x2, 
       0x2, 0x2, 0x82f, 0x849, 0x3, 0x2, 0x2, 0x2, 0x830, 0x831, 0x5, 0x162, 
       0xb2, 0x2, 0x831, 0x832, 0x7, 0x43, 0x2, 0x2, 0x832, 0x834, 0x7, 
       0x21, 0x2, 0x2, 0x833, 0x835, 0x5, 0x2c, 0x17, 0x2, 0x834, 0x833, 
       0x3, 0x2, 0x2, 0x2, 0x834, 0x835, 0x3, 0x2, 0x2, 0x2, 0x835, 0x839, 
       0x3, 0x2, 0x2, 0x2, 0x836, 0x838, 0x5, 0xe8, 0x75, 0x2, 0x837, 0x836, 
       0x3, 0x2, 0x2, 0x2, 0x838, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x839, 0x837, 
       0x3, 0x2, 0x2, 0x2, 0x839, 0x83a, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x83c, 
       0x3, 0x2, 0x2, 0x2, 0x83b, 0x839, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x83e, 
       0x7, 0x68, 0x2, 0x2, 0x83d, 0x83f, 0x5, 0x17c, 0xbf, 0x2, 0x83e, 
       0x83d, 0x3, 0x2, 0x2, 0x2, 0x83e, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 
       0x840, 0x3, 0x2, 0x2, 0x2, 0x840, 0x842, 0x7, 0x3b, 0x2, 0x2, 0x841, 
       0x843, 0x5, 0x190, 0xc9, 0x2, 0x842, 0x841, 0x3, 0x2, 0x2, 0x2, 0x842, 
       0x843, 0x3, 0x2, 0x2, 0x2, 0x843, 0x844, 0x3, 0x2, 0x2, 0x2, 0x844, 
       0x846, 0x7, 0x3c, 0x2, 0x2, 0x845, 0x847, 0x5, 0x64, 0x33, 0x2, 0x846, 
       0x845, 0x3, 0x2, 0x2, 0x2, 0x846, 0x847, 0x3, 0x2, 0x2, 0x2, 0x847, 
       0x849, 0x3, 0x2, 0x2, 0x2, 0x848, 0x7f5, 0x3, 0x2, 0x2, 0x2, 0x848, 
       0x818, 0x3, 0x2, 0x2, 0x2, 0x848, 0x830, 0x3, 0x2, 0x2, 0x2, 0x849, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x84a, 0x84b, 0x7, 0x43, 0x2, 0x2, 0x84b, 
       0x84d, 0x7, 0x21, 0x2, 0x2, 0x84c, 0x84e, 0x5, 0x2c, 0x17, 0x2, 0x84d, 
       0x84c, 0x3, 0x2, 0x2, 0x2, 0x84d, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x84e, 
       0x852, 0x3, 0x2, 0x2, 0x2, 0x84f, 0x851, 0x5, 0xe8, 0x75, 0x2, 0x850, 
       0x84f, 0x3, 0x2, 0x2, 0x2, 0x851, 0x854, 0x3, 0x2, 0x2, 0x2, 0x852, 
       0x850, 0x3, 0x2, 0x2, 0x2, 0x852, 0x853, 0x3, 0x2, 0x2, 0x2, 0x853, 
       0x855, 0x3, 0x2, 0x2, 0x2, 0x854, 0x852, 0x3, 0x2, 0x2, 0x2, 0x855, 
       0x857, 0x7, 0x68, 0x2, 0x2, 0x856, 0x858, 0x5, 0x17c, 0xbf, 0x2, 
       0x857, 0x856, 0x3, 0x2, 0x2, 0x2, 0x857, 0x858, 0x3, 0x2, 0x2, 0x2, 
       0x858, 0x859, 0x3, 0x2, 0x2, 0x2, 0x859, 0x85b, 0x7, 0x3b, 0x2, 0x2, 
       0x85a, 0x85c, 0x5, 0x190, 0xc9, 0x2, 0x85b, 0x85a, 0x3, 0x2, 0x2, 
       0x2, 0x85b, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x85c, 0x85d, 0x3, 0x2, 0x2, 
       0x2, 0x85d, 0x85f, 0x7, 0x3c, 0x2, 0x2, 0x85e, 0x860, 0x5, 0x64, 
       0x33, 0x2, 0x85f, 0x85e, 0x3, 0x2, 0x2, 0x2, 0x85f, 0x860, 0x3, 0x2, 
       0x2, 0x2, 0x860, 0x179, 0x3, 0x2, 0x2, 0x2, 0x861, 0x863, 0x7, 0x21, 
       0x2, 0x2, 0x862, 0x864, 0x5, 0x2c, 0x17, 0x2, 0x863, 0x862, 0x3, 
       0x2, 0x2, 0x2, 0x863, 0x864, 0x3, 0x2, 0x2, 0x2, 0x864, 0x868, 0x3, 
       0x2, 0x2, 0x2, 0x865, 0x867, 0x5, 0xe8, 0x75, 0x2, 0x866, 0x865, 
       0x3, 0x2, 0x2, 0x2, 0x867, 0x86a, 0x3, 0x2, 0x2, 0x2, 0x868, 0x866, 
       0x3, 0x2, 0x2, 0x2, 0x868, 0x869, 0x3, 0x2, 0x2, 0x2, 0x869, 0x86b, 
       0x3, 0x2, 0x2, 0x2, 0x86a, 0x868, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x876, 
       0x7, 0x68, 0x2, 0x2, 0x86c, 0x870, 0x7, 0x43, 0x2, 0x2, 0x86d, 0x86f, 
       0x5, 0xe8, 0x75, 0x2, 0x86e, 0x86d, 0x3, 0x2, 0x2, 0x2, 0x86f, 0x872, 
       0x3, 0x2, 0x2, 0x2, 0x870, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x870, 0x871, 
       0x3, 0x2, 0x2, 0x2, 0x871, 0x873, 0x3, 0x2, 0x2, 0x2, 0x872, 0x870, 
       0x3, 0x2, 0x2, 0x2, 0x873, 0x875, 0x7, 0x68, 0x2, 0x2, 0x874, 0x86c, 
       0x3, 0x2, 0x2, 0x2, 0x875, 0x878, 0x3, 0x2, 0x2, 0x2, 0x876, 0x874, 
       0x3, 0x2, 0x2, 0x2, 0x876, 0x877, 0x3, 0x2, 0x2, 0x2, 0x877, 0x87a, 
       0x3, 0x2, 0x2, 0x2, 0x878, 0x876, 0x3, 0x2, 0x2, 0x2, 0x879, 0x87b, 
       0x5, 0x17c, 0xbf, 0x2, 0x87a, 0x879, 0x3, 0x2, 0x2, 0x2, 0x87a, 0x87b, 
       0x3, 0x2, 0x2, 0x2, 0x87b, 0x87c, 0x3, 0x2, 0x2, 0x2, 0x87c, 0x87e, 
       0x7, 0x3b, 0x2, 0x2, 0x87d, 0x87f, 0x5, 0x190, 0xc9, 0x2, 0x87e, 
       0x87d, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x87f, 
       0x880, 0x3, 0x2, 0x2, 0x2, 0x880, 0x882, 0x7, 0x3c, 0x2, 0x2, 0x881, 
       0x883, 0x5, 0x64, 0x33, 0x2, 0x882, 0x881, 0x3, 0x2, 0x2, 0x2, 0x882, 
       0x883, 0x3, 0x2, 0x2, 0x2, 0x883, 0x89d, 0x3, 0x2, 0x2, 0x2, 0x884, 
       0x885, 0x5, 0x3a, 0x1e, 0x2, 0x885, 0x886, 0x7, 0x43, 0x2, 0x2, 0x886, 
       0x888, 0x7, 0x21, 0x2, 0x2, 0x887, 0x889, 0x5, 0x2c, 0x17, 0x2, 0x888, 
       0x887, 0x3, 0x2, 0x2, 0x2, 0x888, 0x889, 0x3, 0x2, 0x2, 0x2, 0x889, 
       0x88d, 0x3, 0x2, 0x2, 0x2, 0x88a, 0x88c, 0x5, 0xe8, 0x75, 0x2, 0x88b, 
       0x88a, 0x3, 0x2, 0x2, 0x2, 0x88c, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x88d, 
       0x88b, 0x3, 0x2, 0x2, 0x2, 0x88d, 0x88e, 0x3, 0x2, 0x2, 0x2, 0x88e, 
       0x890, 0x3, 0x2, 0x2, 0x2, 0x88f, 0x88d, 0x3, 0x2, 0x2, 0x2, 0x890, 
       0x892, 0x7, 0x68, 0x2, 0x2, 0x891, 0x893, 0x5, 0x17c, 0xbf, 0x2, 
       0x892, 0x891, 0x3, 0x2, 0x2, 0x2, 0x892, 0x893, 0x3, 0x2, 0x2, 0x2, 
       0x893, 0x894, 0x3, 0x2, 0x2, 0x2, 0x894, 0x896, 0x7, 0x3b, 0x2, 0x2, 
       0x895, 0x897, 0x5, 0x190, 0xc9, 0x2, 0x896, 0x895, 0x3, 0x2, 0x2, 
       0x2, 0x896, 0x897, 0x3, 0x2, 0x2, 0x2, 0x897, 0x898, 0x3, 0x2, 0x2, 
       0x2, 0x898, 0x89a, 0x7, 0x3c, 0x2, 0x2, 0x899, 0x89b, 0x5, 0x64, 
       0x33, 0x2, 0x89a, 0x899, 0x3, 0x2, 0x2, 0x2, 0x89a, 0x89b, 0x3, 0x2, 
       0x2, 0x2, 0x89b, 0x89d, 0x3, 0x2, 0x2, 0x2, 0x89c, 0x861, 0x3, 0x2, 
       0x2, 0x2, 0x89c, 0x884, 0x3, 0x2, 0x2, 0x2, 0x89d, 0x17b, 0x3, 0x2, 
       0x2, 0x2, 0x89e, 0x8a2, 0x5, 0x2c, 0x17, 0x2, 0x89f, 0x8a0, 0x7, 
       0x46, 0x2, 0x2, 0x8a0, 0x8a2, 0x7, 0x45, 0x2, 0x2, 0x8a1, 0x89e, 
       0x3, 0x2, 0x2, 0x2, 0x8a1, 0x89f, 0x3, 0x2, 0x2, 0x2, 0x8a2, 0x17d, 
       0x3, 0x2, 0x2, 0x2, 0x8a3, 0x8a4, 0x5, 0x162, 0xb2, 0x2, 0x8a4, 0x8a5, 
       0x7, 0x43, 0x2, 0x2, 0x8a5, 0x8a6, 0x7, 0x68, 0x2, 0x2, 0x8a6, 0x8b1, 
       0x3, 0x2, 0x2, 0x2, 0x8a7, 0x8a8, 0x7, 0x2a, 0x2, 0x2, 0x8a8, 0x8a9, 
       0x7, 0x43, 0x2, 0x2, 0x8a9, 0x8b1, 0x7, 0x68, 0x2, 0x2, 0x8aa, 0x8ab, 
       0x5, 0x36, 0x1c, 0x2, 0x8ab, 0x8ac, 0x7, 0x43, 0x2, 0x2, 0x8ac, 0x8ad, 
       0x7, 0x2a, 0x2, 0x2, 0x8ad, 0x8ae, 0x7, 0x43, 0x2, 0x2, 0x8ae, 0x8af, 
       0x7, 0x68, 0x2, 0x2, 0x8af, 0x8b1, 0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8a3, 
       0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8a7, 0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8aa, 
       0x3, 0x2, 0x2, 0x2, 0x8b1, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x8b2, 0x8b3, 
       0x7, 0x43, 0x2, 0x2, 0x8b3, 0x8b4, 0x7, 0x68, 0x2, 0x2, 0x8b4, 0x181, 
       0x3, 0x2, 0x2, 0x2, 0x8b5, 0x8b6, 0x7, 0x2a, 0x2, 0x2, 0x8b6, 0x8b7, 
       0x7, 0x43, 0x2, 0x2, 0x8b7, 0x8bf, 0x7, 0x68, 0x2, 0x2, 0x8b8, 0x8b9, 
       0x5, 0x36, 0x1c, 0x2, 0x8b9, 0x8ba, 0x7, 0x43, 0x2, 0x2, 0x8ba, 0x8bb, 
       0x7, 0x2a, 0x2, 0x2, 0x8bb, 0x8bc, 0x7, 0x43, 0x2, 0x2, 0x8bc, 0x8bd, 
       0x7, 0x68, 0x2, 0x2, 0x8bd, 0x8bf, 0x3, 0x2, 0x2, 0x2, 0x8be, 0x8b5, 
       0x3, 0x2, 0x2, 0x2, 0x8be, 0x8b8, 0x3, 0x2, 0x2, 0x2, 0x8bf, 0x183, 
       0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8c1, 0x5, 0x3a, 0x1e, 0x2, 0x8c1, 0x8c2, 
       0x7, 0x3f, 0x2, 0x2, 0x8c2, 0x8c3, 0x5, 0x19e, 0xd0, 0x2, 0x8c3, 
       0x8c4, 0x7, 0x40, 0x2, 0x2, 0x8c4, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8c5, 
       0x8c6, 0x5, 0x168, 0xb5, 0x2, 0x8c6, 0x8c7, 0x7, 0x3f, 0x2, 0x2, 
       0x8c7, 0x8c8, 0x5, 0x19e, 0xd0, 0x2, 0x8c8, 0x8c9, 0x7, 0x40, 0x2, 
       0x2, 0x8c9, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8c0, 0x3, 0x2, 0x2, 
       0x2, 0x8ca, 0x8c5, 0x3, 0x2, 0x2, 0x2, 0x8cb, 0x8d3, 0x3, 0x2, 0x2, 
       0x2, 0x8cc, 0x8cd, 0x5, 0x166, 0xb4, 0x2, 0x8cd, 0x8ce, 0x7, 0x3f, 
       0x2, 0x2, 0x8ce, 0x8cf, 0x5, 0x19e, 0xd0, 0x2, 0x8cf, 0x8d0, 0x7, 
       0x40, 0x2, 0x2, 0x8d0, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8cc, 0x3, 
       0x2, 0x2, 0x2, 0x8d2, 0x8d5, 0x3, 0x2, 0x2, 0x2, 0x8d3, 0x8d1, 0x3, 
       0x2, 0x2, 0x2, 0x8d3, 0x8d4, 0x3, 0x2, 0x2, 0x2, 0x8d4, 0x185, 0x3, 
       0x2, 0x2, 0x2, 0x8d5, 0x8d3, 0x3, 0x2, 0x2, 0x2, 0x8d6, 0x8d7, 0x5, 
       0x16e, 0xb8, 0x2, 0x8d7, 0x8d8, 0x7, 0x3f, 0x2, 0x2, 0x8d8, 0x8d9, 
       0x5, 0x19e, 0xd0, 0x2, 0x8d9, 0x8da, 0x7, 0x40, 0x2, 0x2, 0x8da, 
       0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8db, 0x8dc, 0x5, 0x16c, 0xb7, 0x2, 0x8dc, 
       0x8dd, 0x7, 0x3f, 0x2, 0x2, 0x8dd, 0x8de, 0x5, 0x19e, 0xd0, 0x2, 
       0x8de, 0x8df, 0x7, 0x40, 0x2, 0x2, 0x8df, 0x8e1, 0x3, 0x2, 0x2, 0x2, 
       0x8e0, 0x8db, 0x3, 0x2, 0x2, 0x2, 0x8e1, 0x8e4, 0x3, 0x2, 0x2, 0x2, 
       0x8e2, 0x8e0, 0x3, 0x2, 0x2, 0x2, 0x8e2, 0x8e3, 0x3, 0x2, 0x2, 0x2, 
       0x8e3, 0x187, 0x3, 0x2, 0x2, 0x2, 0x8e4, 0x8e2, 0x3, 0x2, 0x2, 0x2, 
       0x8e5, 0x8e6, 0x5, 0x3a, 0x1e, 0x2, 0x8e6, 0x8e7, 0x7, 0x3f, 0x2, 
       0x2, 0x8e7, 0x8e8, 0x5, 0x19e, 0xd0, 0x2, 0x8e8, 0x8e9, 0x7, 0x40, 
       0x2, 0x2, 0x8e9, 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8eb, 0x5, 0x174, 
       0xbb, 0x2, 0x8eb, 0x8ec, 0x7, 0x3f, 0x2, 0x2, 0x8ec, 0x8ed, 0x5, 
       0x19e, 0xd0, 0x2, 0x8ed, 0x8ee, 0x7, 0x40, 0x2, 0x2, 0x8ee, 0x8f0, 
       0x3, 0x2, 0x2, 0x2, 0x8ef, 0x8e5, 0x3, 0x2, 0x2, 0x2, 0x8ef, 0x8ea, 
       0x3, 0x2, 0x2, 0x2, 0x8f0, 0x8f8, 0x3, 0x2, 0x2, 0x2, 0x8f1, 0x8f2, 
       0x5, 0x172, 0xba, 0x2, 0x8f2, 0x8f3, 0x7, 0x3f, 0x2, 0x2, 0x8f3, 
       0x8f4, 0x5, 0x19e, 0xd0, 0x2, 0x8f4, 0x8f5, 0x7, 0x40, 0x2, 0x2, 
       0x8f5, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f6, 0x8f1, 0x3, 0x2, 0x2, 0x2, 
       0x8f7, 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f6, 0x3, 0x2, 0x2, 0x2, 
       0x8f8, 0x8f9, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x189, 0x3, 0x2, 0x2, 0x2, 
       0x8fa, 0x8f8, 0x3, 0x2, 0x2, 0x2, 0x8fb, 0x8fc, 0x5, 0x3c, 0x1f, 
       0x2, 0x8fc, 0x8fe, 0x7, 0x3b, 0x2, 0x2, 0x8fd, 0x8ff, 0x5, 0x190, 
       0xc9, 0x2, 0x8fe, 0x8fd, 0x3, 0x2, 0x2, 0x2, 0x8fe, 0x8ff, 0x3, 0x2, 
       0x2, 0x2, 0x8ff, 0x900, 0x3, 0x2, 0x2, 0x2, 0x900, 0x901, 0x7, 0x3c, 
       0x2, 0x2, 0x901, 0x940, 0x3, 0x2, 0x2, 0x2, 0x902, 0x903, 0x5, 0x36, 
       0x1c, 0x2, 0x903, 0x905, 0x7, 0x43, 0x2, 0x2, 0x904, 0x906, 0x5, 
       0x2c, 0x17, 0x2, 0x905, 0x904, 0x3, 0x2, 0x2, 0x2, 0x905, 0x906, 
       0x3, 0x2, 0x2, 0x2, 0x906, 0x907, 0x3, 0x2, 0x2, 0x2, 0x907, 0x908, 
       0x7, 0x68, 0x2, 0x2, 0x908, 0x90a, 0x7, 0x3b, 0x2, 0x2, 0x909, 0x90b, 
       0x5, 0x190, 0xc9, 0x2, 0x90a, 0x909, 0x3, 0x2, 0x2, 0x2, 0x90a, 0x90b, 
       0x3, 0x2, 0x2, 0x2, 0x90b, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x90c, 0x90d, 
       0x7, 0x3c, 0x2, 0x2, 0x90d, 0x940, 0x3, 0x2, 0x2, 0x2, 0x90e, 0x90f, 
       0x5, 0x3a, 0x1e, 0x2, 0x90f, 0x911, 0x7, 0x43, 0x2, 0x2, 0x910, 0x912, 
       0x5, 0x2c, 0x17, 0x2, 0x911, 0x910, 0x3, 0x2, 0x2, 0x2, 0x911, 0x912, 
       0x3, 0x2, 0x2, 0x2, 0x912, 0x913, 0x3, 0x2, 0x2, 0x2, 0x913, 0x914, 
       0x7, 0x68, 0x2, 0x2, 0x914, 0x916, 0x7, 0x3b, 0x2, 0x2, 0x915, 0x917, 
       0x5, 0x190, 0xc9, 0x2, 0x916, 0x915, 0x3, 0x2, 0x2, 0x2, 0x916, 0x917, 
       0x3, 0x2, 0x2, 0x2, 0x917, 0x918, 0x3, 0x2, 0x2, 0x2, 0x918, 0x919, 
       0x7, 0x3c, 0x2, 0x2, 0x919, 0x940, 0x3, 0x2, 0x2, 0x2, 0x91a, 0x91b, 
       0x5, 0x162, 0xb2, 0x2, 0x91b, 0x91d, 0x7, 0x43, 0x2, 0x2, 0x91c, 
       0x91e, 0x5, 0x2c, 0x17, 0x2, 0x91d, 0x91c, 0x3, 0x2, 0x2, 0x2, 0x91d, 
       0x91e, 0x3, 0x2, 0x2, 0x2, 0x91e, 0x91f, 0x3, 0x2, 0x2, 0x2, 0x91f, 
       0x920, 0x7, 0x68, 0x2, 0x2, 0x920, 0x922, 0x7, 0x3b, 0x2, 0x2, 0x921, 
       0x923, 0x5, 0x190, 0xc9, 0x2, 0x922, 0x921, 0x3, 0x2, 0x2, 0x2, 0x922, 
       0x923, 0x3, 0x2, 0x2, 0x2, 0x923, 0x924, 0x3, 0x2, 0x2, 0x2, 0x924, 
       0x925, 0x7, 0x3c, 0x2, 0x2, 0x925, 0x940, 0x3, 0x2, 0x2, 0x2, 0x926, 
       0x927, 0x7, 0x2a, 0x2, 0x2, 0x927, 0x929, 0x7, 0x43, 0x2, 0x2, 0x928, 
       0x92a, 0x5, 0x2c, 0x17, 0x2, 0x929, 0x928, 0x3, 0x2, 0x2, 0x2, 0x929, 
       0x92a, 0x3, 0x2, 0x2, 0x2, 0x92a, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x92b, 
       0x92c, 0x7, 0x68, 0x2, 0x2, 0x92c, 0x92e, 0x7, 0x3b, 0x2, 0x2, 0x92d, 
       0x92f, 0x5, 0x190, 0xc9, 0x2, 0x92e, 0x92d, 0x3, 0x2, 0x2, 0x2, 0x92e, 
       0x92f, 0x3, 0x2, 0x2, 0x2, 0x92f, 0x930, 0x3, 0x2, 0x2, 0x2, 0x930, 
       0x940, 0x7, 0x3c, 0x2, 0x2, 0x931, 0x932, 0x5, 0x36, 0x1c, 0x2, 0x932, 
       0x933, 0x7, 0x43, 0x2, 0x2, 0x933, 0x934, 0x7, 0x2a, 0x2, 0x2, 0x934, 
       0x936, 0x7, 0x43, 0x2, 0x2, 0x935, 0x937, 0x5, 0x2c, 0x17, 0x2, 0x936, 
       0x935, 0x3, 0x2, 0x2, 0x2, 0x936, 0x937, 0x3, 0x2, 0x2, 0x2, 0x937, 
       0x938, 0x3, 0x2, 0x2, 0x2, 0x938, 0x939, 0x7, 0x68, 0x2, 0x2, 0x939, 
       0x93b, 0x7, 0x3b, 0x2, 0x2, 0x93a, 0x93c, 0x5, 0x190, 0xc9, 0x2, 
       0x93b, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x93b, 0x93c, 0x3, 0x2, 0x2, 0x2, 
       0x93c, 0x93d, 0x3, 0x2, 0x2, 0x2, 0x93d, 0x93e, 0x7, 0x3c, 0x2, 0x2, 
       0x93e, 0x940, 0x3, 0x2, 0x2, 0x2, 0x93f, 0x8fb, 0x3, 0x2, 0x2, 0x2, 
       0x93f, 0x902, 0x3, 0x2, 0x2, 0x2, 0x93f, 0x90e, 0x3, 0x2, 0x2, 0x2, 
       0x93f, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x93f, 0x926, 0x3, 0x2, 0x2, 0x2, 
       0x93f, 0x931, 0x3, 0x2, 0x2, 0x2, 0x940, 0x18b, 0x3, 0x2, 0x2, 0x2, 
       0x941, 0x943, 0x7, 0x43, 0x2, 0x2, 0x942, 0x944, 0x5, 0x2c, 0x17, 
       0x2, 0x943, 0x942, 0x3, 0x2, 0x2, 0x2, 0x943, 0x944, 0x3, 0x2, 0x2, 
       0x2, 0x944, 0x945, 0x3, 0x2, 0x2, 0x2, 0x945, 0x946, 0x7, 0x68, 0x2, 
       0x2, 0x946, 0x948, 0x7, 0x3b, 0x2, 0x2, 0x947, 0x949, 0x5, 0x190, 
       0xc9, 0x2, 0x948, 0x947, 0x3, 0x2, 0x2, 0x2, 0x948, 0x949, 0x3, 0x2, 
       0x2, 0x2, 0x949, 0x94a, 0x3, 0x2, 0x2, 0x2, 0x94a, 0x94b, 0x7, 0x3c, 
       0x2, 0x2, 0x94b, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x94c, 0x94d, 0x5, 0x3c, 
       0x1f, 0x2, 0x94d, 0x94f, 0x7, 0x3b, 0x2, 0x2, 0x94e, 0x950, 0x5, 
       0x190, 0xc9, 0x2, 0x94f, 0x94e, 0x3, 0x2, 0x2, 0x2, 0x94f, 0x950, 
       0x3, 0x2, 0x2, 0x2, 0x950, 0x951, 0x3, 0x2, 0x2, 0x2, 0x951, 0x952, 
       0x7, 0x3c, 0x2, 0x2, 0x952, 0x985, 0x3, 0x2, 0x2, 0x2, 0x953, 0x954, 
       0x5, 0x36, 0x1c, 0x2, 0x954, 0x956, 0x7, 0x43, 0x2, 0x2, 0x955, 0x957, 
       0x5, 0x2c, 0x17, 0x2, 0x956, 0x955, 0x3, 0x2, 0x2, 0x2, 0x956, 0x957, 
       0x3, 0x2, 0x2, 0x2, 0x957, 0x958, 0x3, 0x2, 0x2, 0x2, 0x958, 0x959, 
       0x7, 0x68, 0x2, 0x2, 0x959, 0x95b, 0x7, 0x3b, 0x2, 0x2, 0x95a, 0x95c, 
       0x5, 0x190, 0xc9, 0x2, 0x95b, 0x95a, 0x3, 0x2, 0x2, 0x2, 0x95b, 0x95c, 
       0x3, 0x2, 0x2, 0x2, 0x95c, 0x95d, 0x3, 0x2, 0x2, 0x2, 0x95d, 0x95e, 
       0x7, 0x3c, 0x2, 0x2, 0x95e, 0x985, 0x3, 0x2, 0x2, 0x2, 0x95f, 0x960, 
       0x5, 0x3a, 0x1e, 0x2, 0x960, 0x962, 0x7, 0x43, 0x2, 0x2, 0x961, 0x963, 
       0x5, 0x2c, 0x17, 0x2, 0x962, 0x961, 0x3, 0x2, 0x2, 0x2, 0x962, 0x963, 
       0x3, 0x2, 0x2, 0x2, 0x963, 0x964, 0x3, 0x2, 0x2, 0x2, 0x964, 0x965, 
       0x7, 0x68, 0x2, 0x2, 0x965, 0x967, 0x7, 0x3b, 0x2, 0x2, 0x966, 0x968, 
       0x5, 0x190, 0xc9, 0x2, 0x967, 0x966, 0x3, 0x2, 0x2, 0x2, 0x967, 0x968, 
       0x3, 0x2, 0x2, 0x2, 0x968, 0x969, 0x3, 0x2, 0x2, 0x2, 0x969, 0x96a, 
       0x7, 0x3c, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x2, 0x2, 0x96a, 0x985, 0x3, 0x2, 0x2, 0x2, 0x96b, 0x96c, 0x7, 0x2a, 
       0x2, 0x2, 0x96c, 0x96e, 0x7, 0x43, 0x2, 0x2, 0x96d, 0x96f, 0x5, 0x2c, 
       0x17, 0x2, 0x96e, 0x96d, 0x3, 0x2, 0x2, 0x2, 0x96e, 0x96f, 0x3, 0x2, 
       0x2, 0x2, 0x96f, 0x970, 0x3, 0x2, 0x2, 0x2, 0x970, 0x971, 0x7, 0x68, 
       0x2, 0x2, 0x971, 0x973, 0x7, 0x3b, 0x2, 0x2, 0x972, 0x974, 0x5, 0x190, 
       0xc9, 0x2, 0x973, 0x972, 0x3, 0x2, 0x2, 0x2, 0x973, 0x974, 0x3, 0x2, 
       0x2, 0x2, 0x974, 0x975, 0x3, 0x2, 0x2, 0x2, 0x975, 0x985, 0x7, 0x3c, 
       0x2, 0x2, 0x976, 0x977, 0x5, 0x36, 0x1c, 0x2, 0x977, 0x978, 0x7, 
       0x43, 0x2, 0x2, 0x978, 0x979, 0x7, 0x2a, 0x2, 0x2, 0x979, 0x97b, 
       0x7, 0x43, 0x2, 0x2, 0x97a, 0x97c, 0x5, 0x2c, 0x17, 0x2, 0x97b, 0x97a, 
       0x3, 0x2, 0x2, 0x2, 0x97b, 0x97c, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x97d, 
       0x3, 0x2, 0x2, 0x2, 0x97d, 0x97e, 0x7, 0x68, 0x2, 0x2, 0x97e, 0x980, 
       0x7, 0x3b, 0x2, 0x2, 0x97f, 0x981, 0x5, 0x190, 0xc9, 0x2, 0x980, 
       0x97f, 0x3, 0x2, 0x2, 0x2, 0x980, 0x981, 0x3, 0x2, 0x2, 0x2, 0x981, 
       0x982, 0x3, 0x2, 0x2, 0x2, 0x982, 0x983, 0x7, 0x3c, 0x2, 0x2, 0x983, 
       0x985, 0x3, 0x2, 0x2, 0x2, 0x984, 0x94c, 0x3, 0x2, 0x2, 0x2, 0x984, 
       0x953, 0x3, 0x2, 0x2, 0x2, 0x984, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x984, 
       0x96b, 0x3, 0x2, 0x2, 0x2, 0x984, 0x976, 0x3, 0x2, 0x2, 0x2, 0x985, 
       0x18f, 0x3, 0x2, 0x2, 0x2, 0x986, 0x98b, 0x5, 0x19e, 0xd0, 0x2, 0x987, 
       0x988, 0x7, 0x42, 0x2, 0x2, 0x988, 0x98a, 0x5, 0x19e, 0xd0, 0x2, 
       0x989, 0x987, 0x3, 0x2, 0x2, 0x2, 0x98a, 0x98d, 0x3, 0x2, 0x2, 0x2, 
       0x98b, 0x989, 0x3, 0x2, 0x2, 0x2, 0x98b, 0x98c, 0x3, 0x2, 0x2, 0x2, 
       0x98c, 0x191, 0x3, 0x2, 0x2, 0x2, 0x98d, 0x98b, 0x3, 0x2, 0x2, 0x2, 
       0x98e, 0x98f, 0x5, 0x3a, 0x1e, 0x2, 0x98f, 0x991, 0x7, 0x5c, 0x2, 
       0x2, 0x990, 0x992, 0x5, 0x2c, 0x17, 0x2, 0x991, 0x990, 0x3, 0x2, 
       0x2, 0x2, 0x991, 0x992, 0x3, 0x2, 0x2, 0x2, 0x992, 0x993, 0x3, 0x2, 
       0x2, 0x2, 0x993, 0x994, 0x7, 0x68, 0x2, 0x2, 0x994, 0x9be, 0x3, 0x2, 
       0x2, 0x2, 0x995, 0x996, 0x5, 0xe, 0x8, 0x2, 0x996, 0x998, 0x7, 0x5c, 
       0x2, 0x2, 0x997, 0x999, 0x5, 0x2c, 0x17, 0x2, 0x998, 0x997, 0x3, 
       0x2, 0x2, 0x2, 0x998, 0x999, 0x3, 0x2, 0x2, 0x2, 0x999, 0x99a, 0x3, 
       0x2, 0x2, 0x2, 0x99a, 0x99b, 0x7, 0x68, 0x2, 0x2, 0x99b, 0x9be, 0x3, 
       0x2, 0x2, 0x2, 0x99c, 0x99d, 0x5, 0x162, 0xb2, 0x2, 0x99d, 0x99f, 
       0x7, 0x5c, 0x2, 0x2, 0x99e, 0x9a0, 0x5, 0x2c, 0x17, 0x2, 0x99f, 0x99e, 
       0x3, 0x2, 0x2, 0x2, 0x99f, 0x9a0, 0x3, 0x2, 0x2, 0x2, 0x9a0, 0x9a1, 
       0x3, 0x2, 0x2, 0x2, 0x9a1, 0x9a2, 0x7, 0x68, 0x2, 0x2, 0x9a2, 0x9be, 
       0x3, 0x2, 0x2, 0x2, 0x9a3, 0x9a4, 0x7, 0x2a, 0x2, 0x2, 0x9a4, 0x9a6, 
       0x7, 0x5c, 0x2, 0x2, 0x9a5, 0x9a7, 0x5, 0x2c, 0x17, 0x2, 0x9a6, 0x9a5, 
       0x3, 0x2, 0x2, 0x2, 0x9a6, 0x9a7, 0x3, 0x2, 0x2, 0x2, 0x9a7, 0x9a8, 
       0x3, 0x2, 0x2, 0x2, 0x9a8, 0x9be, 0x7, 0x68, 0x2, 0x2, 0x9a9, 0x9aa, 
       0x5, 0x36, 0x1c, 0x2, 0x9aa, 0x9ab, 0x7, 0x43, 0x2, 0x2, 0x9ab, 0x9ac, 
       0x7, 0x2a, 0x2, 0x2, 0x9ac, 0x9ae, 0x7, 0x5c, 0x2, 0x2, 0x9ad, 0x9af, 
       0x5, 0x2c, 0x17, 0x2, 0x9ae, 0x9ad, 0x3, 0x2, 0x2, 0x2, 0x9ae, 0x9af, 
       0x3, 0x2, 0x2, 0x2, 0x9af, 0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9b0, 0x9b1, 
       0x7, 0x68, 0x2, 0x2, 0x9b1, 0x9be, 0x3, 0x2, 0x2, 0x2, 0x9b2, 0x9b3, 
       0x5, 0x12, 0xa, 0x2, 0x9b3, 0x9b5, 0x7, 0x5c, 0x2, 0x2, 0x9b4, 0x9b6, 
       0x5, 0x2c, 0x17, 0x2, 0x9b5, 0x9b4, 0x3, 0x2, 0x2, 0x2, 0x9b5, 0x9b6, 
       0x3, 0x2, 0x2, 0x2, 0x9b6, 0x9b7, 0x3, 0x2, 0x2, 0x2, 0x9b7, 0x9b8, 
       0x7, 0x21, 0x2, 0x2, 0x9b8, 0x9be, 0x3, 0x2, 0x2, 0x2, 0x9b9, 0x9ba, 
       0x5, 0x20, 0x11, 0x2, 0x9ba, 0x9bb, 0x7, 0x5c, 0x2, 0x2, 0x9bb, 0x9bc, 
       0x7, 0x21, 0x2, 0x2, 0x9bc, 0x9be, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x98e, 
       0x3, 0x2, 0x2, 0x2, 0x9bd, 0x995, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x99c, 
       0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9a3, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9a9, 
       0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9b2, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9b9, 
       0x3, 0x2, 0x2, 0x2, 0x9be, 0x193, 0x3, 0x2, 0x2, 0x2, 0x9bf, 0x9c1, 
       0x7, 0x5c, 0x2, 0x2, 0x9c0, 0x9c2, 0x5, 0x2c, 0x17, 0x2, 0x9c1, 0x9c0, 
       0x3, 0x2, 0x2, 0x2, 0x9c1, 0x9c2, 0x3, 0x2, 0x2, 0x2, 0x9c2, 0x9c3, 
       0x3, 0x2, 0x2, 0x2, 0x9c3, 0x9c4, 0x7, 0x68, 0x2, 0x2, 0x9c4, 0x195, 
       0x3, 0x2, 0x2, 0x2, 0x9c5, 0x9c6, 0x5, 0x3a, 0x1e, 0x2, 0x9c6, 0x9c8, 
       0x7, 0x5c, 0x2, 0x2, 0x9c7, 0x9c9, 0x5, 0x2c, 0x17, 0x2, 0x9c8, 0x9c7, 
       0x3, 0x2, 0x2, 0x2, 0x9c8, 0x9c9, 0x3, 0x2, 0x2, 0x2, 0x9c9, 0x9ca, 
       0x3, 0x2, 0x2, 0x2, 0x9ca, 0x9cb, 0x7, 0x68, 0x2, 0x2, 0x9cb, 0x9ee, 
       0x3, 0x2, 0x2, 0x2, 0x9cc, 0x9cd, 0x5, 0xe, 0x8, 0x2, 0x9cd, 0x9cf, 
       0x7, 0x5c, 0x2, 0x2, 0x9ce, 0x9d0, 0x5, 0x2c, 0x17, 0x2, 0x9cf, 0x9ce, 
       0x3, 0x2, 0x2, 0x2, 0x9cf, 0x9d0, 0x3, 0x2, 0x2, 0x2, 0x9d0, 0x9d1, 
       0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9d2, 0x7, 0x68, 0x2, 0x2, 0x9d2, 0x9ee, 
       0x3, 0x2, 0x2, 0x2, 0x9d3, 0x9d4, 0x7, 0x2a, 0x2, 0x2, 0x9d4, 0x9d6, 
       0x7, 0x5c, 0x2, 0x2, 0x9d5, 0x9d7, 0x5, 0x2c, 0x17, 0x2, 0x9d6, 0x9d5, 
       0x3, 0x2, 0x2, 0x2, 0x9d6, 0x9d7, 0x3, 0x2, 0x2, 0x2, 0x9d7, 0x9d8, 
       0x3, 0x2, 0x2, 0x2, 0x9d8, 0x9ee, 0x7, 0x68, 0x2, 0x2, 0x9d9, 0x9da, 
       0x5, 0x36, 0x1c, 0x2, 0x9da, 0x9db, 0x7, 0x43, 0x2, 0x2, 0x9db, 0x9dc, 
       0x7, 0x2a, 0x2, 0x2, 0x9dc, 0x9de, 0x7, 0x5c, 0x2, 0x2, 0x9dd, 0x9df, 
       0x5, 0x2c, 0x17, 0x2, 0x9de, 0x9dd, 0x3, 0x2, 0x2, 0x2, 0x9de, 0x9df, 
       0x3, 0x2, 0x2, 0x2, 0x9df, 0x9e0, 0x3, 0x2, 0x2, 0x2, 0x9e0, 0x9e1, 
       0x7, 0x68, 0x2, 0x2, 0x9e1, 0x9ee, 0x3, 0x2, 0x2, 0x2, 0x9e2, 0x9e3, 
       0x5, 0x12, 0xa, 0x2, 0x9e3, 0x9e5, 0x7, 0x5c, 0x2, 0x2, 0x9e4, 0x9e6, 
       0x5, 0x2c, 0x17, 0x2, 0x9e5, 0x9e4, 0x3, 0x2, 0x2, 0x2, 0x9e5, 0x9e6, 
       0x3, 0x2, 0x2, 0x2, 0x9e6, 0x9e7, 0x3, 0x2, 0x2, 0x2, 0x9e7, 0x9e8, 
       0x7, 0x21, 0x2, 0x2, 0x9e8, 0x9ee, 0x3, 0x2, 0x2, 0x2, 0x9e9, 0x9ea, 
       0x5, 0x20, 0x11, 0x2, 0x9ea, 0x9eb, 0x7, 0x5c, 0x2, 0x2, 0x9eb, 0x9ec, 
       0x7, 0x21, 0x2, 0x2, 0x9ec, 0x9ee, 0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9c5, 
       0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9cc, 0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9d3, 
       0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9d9, 0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9e2, 
       0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9e9, 0x3, 0x2, 0x2, 0x2, 0x9ee, 0x197, 
       0x3, 0x2, 0x2, 0x2, 0x9ef, 0x9f0, 0x7, 0x21, 0x2, 0x2, 0x9f0, 0x9f1, 
       0x5, 0x6, 0x4, 0x2, 0x9f1, 0x9f3, 0x5, 0x19a, 0xce, 0x2, 0x9f2, 0x9f4, 
       0x5, 0x22, 0x12, 0x2, 0x9f3, 0x9f2, 0x3, 0x2, 0x2, 0x2, 0x9f3, 0x9f4, 
       0x3, 0x2, 0x2, 0x2, 0x9f4, 0xa06, 0x3, 0x2, 0x2, 0x2, 0x9f5, 0x9f6, 
       0x7, 0x21, 0x2, 0x2, 0x9f6, 0x9f7, 0x5, 0x10, 0x9, 0x2, 0x9f7, 0x9f9, 
       0x5, 0x19a, 0xce, 0x2, 0x9f8, 0x9fa, 0x5, 0x22, 0x12, 0x2, 0x9f9, 
       0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9fa, 0x3, 0x2, 0x2, 0x2, 0x9fa, 
       0xa06, 0x3, 0x2, 0x2, 0x2, 0x9fb, 0x9fc, 0x7, 0x21, 0x2, 0x2, 0x9fc, 
       0x9fd, 0x5, 0x6, 0x4, 0x2, 0x9fd, 0x9fe, 0x5, 0x22, 0x12, 0x2, 0x9fe, 
       0x9ff, 0x5, 0xfa, 0x7e, 0x2, 0x9ff, 0xa06, 0x3, 0x2, 0x2, 0x2, 0xa00, 
       0xa01, 0x7, 0x21, 0x2, 0x2, 0xa01, 0xa02, 0x5, 0x10, 0x9, 0x2, 0xa02, 
       0xa03, 0x5, 0x22, 0x12, 0x2, 0xa03, 0xa04, 0x5, 0xfa, 0x7e, 0x2, 
       0xa04, 0xa06, 0x3, 0x2, 0x2, 0x2, 0xa05, 0x9ef, 0x3, 0x2, 0x2, 0x2, 
       0xa05, 0x9f5, 0x3, 0x2, 0x2, 0x2, 0xa05, 0x9fb, 0x3, 0x2, 0x2, 0x2, 
       0xa05, 0xa00, 0x3, 0x2, 0x2, 0x2, 0xa06, 0x199, 0x3, 0x2, 0x2, 0x2, 
       0xa07, 0xa0b, 0x5, 0x19c, 0xcf, 0x2, 0xa08, 0xa0a, 0x5, 0x19c, 0xcf, 
       0x2, 0xa09, 0xa08, 0x3, 0x2, 0x2, 0x2, 0xa0a, 0xa0d, 0x3, 0x2, 0x2, 
       0x2, 0xa0b, 0xa09, 0x3, 0x2, 0x2, 0x2, 0xa0b, 0xa0c, 0x3, 0x2, 0x2, 
       0x2, 0xa0c, 0x19b, 0x3, 0x2, 0x2, 0x2, 0xa0d, 0xa0b, 0x3, 0x2, 0x2, 
       0x2, 0xa0e, 0xa10, 0x5, 0xe8, 0x75, 0x2, 0xa0f, 0xa0e, 0x3, 0x2, 
       0x2, 0x2, 0xa10, 0xa13, 0x3, 0x2, 0x2, 0x2, 0xa11, 0xa0f, 0x3, 0x2, 
       0x2, 0x2, 0xa11, 0xa12, 0x3, 0x2, 0x2, 0x2, 0xa12, 0xa14, 0x3, 0x2, 
       0x2, 0x2, 0xa13, 0xa11, 0x3, 0x2, 0x2, 0x2, 0xa14, 0xa15, 0x7, 0x3f, 
       0x2, 0x2, 0xa15, 0xa16, 0x5, 0x19e, 0xd0, 0x2, 0xa16, 0xa17, 0x7, 
       0x40, 0x2, 0x2, 0xa17, 0x19d, 0x3, 0x2, 0x2, 0x2, 0xa18, 0xa1b, 0x5, 
       0x1a0, 0xd1, 0x2, 0xa19, 0xa1b, 0x5, 0x1a8, 0xd5, 0x2, 0xa1a, 0xa18, 
       0x3, 0x2, 0x2, 0x2, 0xa1a, 0xa19, 0x3, 0x2, 0x2, 0x2, 0xa1b, 0x19f, 
       0x3, 0x2, 0x2, 0x2, 0xa1c, 0xa1d, 0x5, 0x1a2, 0xd2, 0x2, 0xa1d, 0xa1e, 
       0x7, 0x5b, 0x2, 0x2, 0xa1e, 0xa1f, 0x5, 0x1a6, 0xd4, 0x2, 0xa1f, 
       0x1a1, 0x3, 0x2, 0x2, 0x2, 0xa20, 0xa2b, 0x7, 0x68, 0x2, 0x2, 0xa21, 
       0xa23, 0x7, 0x3b, 0x2, 0x2, 0xa22, 0xa24, 0x5, 0x98, 0x4d, 0x2, 0xa23, 
       0xa22, 0x3, 0x2, 0x2, 0x2, 0xa23, 0xa24, 0x3, 0x2, 0x2, 0x2, 0xa24, 
       0xa25, 0x3, 0x2, 0x2, 0x2, 0xa25, 0xa2b, 0x7, 0x3c, 0x2, 0x2, 0xa26, 
       0xa27, 0x7, 0x3b, 0x2, 0x2, 0xa27, 0xa28, 0x5, 0x1a4, 0xd3, 0x2, 
       0xa28, 0xa29, 0x7, 0x3c, 0x2, 0x2, 0xa29, 0xa2b, 0x3, 0x2, 0x2, 0x2, 
       0xa2a, 0xa20, 0x3, 0x2, 0x2, 0x2, 0xa2a, 0xa21, 0x3, 0x2, 0x2, 0x2, 
       0xa2a, 0xa26, 0x3, 0x2, 0x2, 0x2, 0xa2b, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
       0xa2c, 0xa31, 0x7, 0x68, 0x2, 0x2, 0xa2d, 0xa2e, 0x7, 0x42, 0x2, 
       0x2, 0xa2e, 0xa30, 0x7, 0x68, 0x2, 0x2, 0xa2f, 0xa2d, 0x3, 0x2, 0x2, 
       0x2, 0xa30, 0xa33, 0x3, 0x2, 0x2, 0x2, 0xa31, 0xa2f, 0x3, 0x2, 0x2, 
       0x2, 0xa31, 0xa32, 0x3, 0x2, 0x2, 0x2, 0xa32, 0x1a5, 0x3, 0x2, 0x2, 
       0x2, 0xa33, 0xa31, 0x3, 0x2, 0x2, 0x2, 0xa34, 0xa37, 0x5, 0x19e, 
       0xd0, 0x2, 0xa35, 0xa37, 0x5, 0xfe, 0x80, 0x2, 0xa36, 0xa34, 0x3, 
       0x2, 0x2, 0x2, 0xa36, 0xa35, 0x3, 0x2, 0x2, 0x2, 0xa37, 0x1a7, 0x3, 
       0x2, 0x2, 0x2, 0xa38, 0xa3b, 0x5, 0x1b0, 0xd9, 0x2, 0xa39, 0xa3b, 
       0x5, 0x1aa, 0xd6, 0x2, 0xa3a, 0xa38, 0x3, 0x2, 0x2, 0x2, 0xa3a, 0xa39, 
       0x3, 0x2, 0x2, 0x2, 0xa3b, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0xa3c, 0xa3d, 
       0x5, 0x1ae, 0xd8, 0x2, 0xa3d, 0xa3e, 0x5, 0x1ac, 0xd7, 0x2, 0xa3e, 
       0xa3f, 0x5, 0x19e, 0xd0, 0x2, 0xa3f, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0xa40, 
       0xa41, 0x9, 0x5, 0x2, 0x2, 0xa41, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0xa42, 
       0xa46, 0x5, 0x3a, 0x1e, 0x2, 0xa43, 0xa46, 0x5, 0x17e, 0xc0, 0x2, 
       0xa44, 0xa46, 0x5, 0x184, 0xc3, 0x2, 0xa45, 0xa42, 0x3, 0x2, 0x2, 
       0x2, 0xa45, 0xa43, 0x3, 0x2, 0x2, 0x2, 0xa45, 0xa44, 0x3, 0x2, 0x2, 
       0x2, 0xa46, 0x1af, 0x3, 0x2, 0x2, 0x2, 0xa47, 0xa55, 0x5, 0x1b2, 
       0xda, 0x2, 0xa48, 0xa49, 0x5, 0x1b2, 0xda, 0x2, 0xa49, 0xa4a, 0x7, 
       0x49, 0x2, 0x2, 0xa4a, 0xa4b, 0x5, 0x19e, 0xd0, 0x2, 0xa4b, 0xa4c, 
       0x7, 0x4a, 0x2, 0x2, 0xa4c, 0xa4d, 0x5, 0x1b0, 0xd9, 0x2, 0xa4d, 
       0xa55, 0x3, 0x2, 0x2, 0x2, 0xa4e, 0xa4f, 0x5, 0x1b2, 0xda, 0x2, 0xa4f, 
       0xa50, 0x7, 0x49, 0x2, 0x2, 0xa50, 0xa51, 0x5, 0x19e, 0xd0, 0x2, 
       0xa51, 0xa52, 0x7, 0x4a, 0x2, 0x2, 0xa52, 0xa53, 0x5, 0x1a0, 0xd1, 
       0x2, 0xa53, 0xa55, 0x3, 0x2, 0x2, 0x2, 0xa54, 0xa47, 0x3, 0x2, 0x2, 
       0x2, 0xa54, 0xa48, 0x3, 0x2, 0x2, 0x2, 0xa54, 0xa4e, 0x3, 0x2, 0x2, 
       0x2, 0xa55, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0xa56, 0xa57, 0x8, 0xda, 0x1, 
       0x2, 0xa57, 0xa58, 0x5, 0x1b4, 0xdb, 0x2, 0xa58, 0xa5e, 0x3, 0x2, 
       0x2, 0x2, 0xa59, 0xa5a, 0xc, 0x3, 0x2, 0x2, 0xa5a, 0xa5b, 0x7, 0x50, 
       0x2, 0x2, 0xa5b, 0xa5d, 0x5, 0x1b4, 0xdb, 0x2, 0xa5c, 0xa59, 0x3, 
       0x2, 0x2, 0x2, 0xa5d, 0xa60, 0x3, 0x2, 0x2, 0x2, 0xa5e, 0xa5c, 0x3, 
       0x2, 0x2, 0x2, 0xa5e, 0xa5f, 0x3, 0x2, 0x2, 0x2, 0xa5f, 0x1b3, 0x3, 
       0x2, 0x2, 0x2, 0xa60, 0xa5e, 0x3, 0x2, 0x2, 0x2, 0xa61, 0xa62, 0x8, 
       0xdb, 0x1, 0x2, 0xa62, 0xa63, 0x5, 0x1b6, 0xdc, 0x2, 0xa63, 0xa69, 
       0x3, 0x2, 0x2, 0x2, 0xa64, 0xa65, 0xc, 0x3, 0x2, 0x2, 0xa65, 0xa66, 
       0x7, 0x4f, 0x2, 0x2, 0xa66, 0xa68, 0x5, 0x1b6, 0xdc, 0x2, 0xa67, 
       0xa64, 0x3, 0x2, 0x2, 0x2, 0xa68, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa69, 
       0xa67, 0x3, 0x2, 0x2, 0x2, 0xa69, 0xa6a, 0x3, 0x2, 0x2, 0x2, 0xa6a, 
       0x1b5, 0x3, 0x2, 0x2, 0x2, 0xa6b, 0xa69, 0x3, 0x2, 0x2, 0x2, 0xa6c, 
       0xa6d, 0x8, 0xdc, 0x1, 0x2, 0xa6d, 0xa6e, 0x5, 0x1b8, 0xdd, 0x2, 
       0xa6e, 0xa74, 0x3, 0x2, 0x2, 0x2, 0xa6f, 0xa70, 0xc, 0x3, 0x2, 0x2, 
       0xa70, 0xa71, 0x7, 0x58, 0x2, 0x2, 0xa71, 0xa73, 0x5, 0x1b8, 0xdd, 
       0x2, 0xa72, 0xa6f, 0x3, 0x2, 0x2, 0x2, 0xa73, 0xa76, 0x3, 0x2, 0x2, 
       0x2, 0xa74, 0xa72, 0x3, 0x2, 0x2, 0x2, 0xa74, 0xa75, 0x3, 0x2, 0x2, 
       0x2, 0xa75, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0xa76, 0xa74, 0x3, 0x2, 0x2, 
       0x2, 0xa77, 0xa78, 0x8, 0xdd, 0x1, 0x2, 0xa78, 0xa79, 0x5, 0x1ba, 
       0xde, 0x2, 0xa79, 0xa7f, 0x3, 0x2, 0x2, 0x2, 0xa7a, 0xa7b, 0xc, 0x3, 
       0x2, 0x2, 0xa7b, 0xa7c, 0x7, 0x59, 0x2, 0x2, 0xa7c, 0xa7e, 0x5, 0x1ba, 
       0xde, 0x2, 0xa7d, 0xa7a, 0x3, 0x2, 0x2, 0x2, 0xa7e, 0xa81, 0x3, 0x2, 
       0x2, 0x2, 0xa7f, 0xa7d, 0x3, 0x2, 0x2, 0x2, 0xa7f, 0xa80, 0x3, 0x2, 
       0x2, 0x2, 0xa80, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0xa81, 0xa7f, 0x3, 0x2, 
       0x2, 0x2, 0xa82, 0xa83, 0x8, 0xde, 0x1, 0x2, 0xa83, 0xa84, 0x5, 0x1bc, 
       0xdf, 0x2, 0xa84, 0xa8a, 0x3, 0x2, 0x2, 0x2, 0xa85, 0xa86, 0xc, 0x3, 
       0x2, 0x2, 0xa86, 0xa87, 0x7, 0x57, 0x2, 0x2, 0xa87, 0xa89, 0x5, 0x1bc, 
       0xdf, 0x2, 0xa88, 0xa85, 0x3, 0x2, 0x2, 0x2, 0xa89, 0xa8c, 0x3, 0x2, 
       0x2, 0x2, 0xa8a, 0xa88, 0x3, 0x2, 0x2, 0x2, 0xa8a, 0xa8b, 0x3, 0x2, 
       0x2, 0x2, 0xa8b, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0xa8c, 0xa8a, 0x3, 0x2, 
       0x2, 0x2, 0xa8d, 0xa8e, 0x8, 0xdf, 0x1, 0x2, 0xa8e, 0xa8f, 0x5, 0x1be, 
       0xe0, 0x2, 0xa8f, 0xa98, 0x3, 0x2, 0x2, 0x2, 0xa90, 0xa91, 0xc, 0x4, 
       0x2, 0x2, 0xa91, 0xa92, 0x7, 0x4b, 0x2, 0x2, 0xa92, 0xa97, 0x5, 0x1be, 
       0xe0, 0x2, 0xa93, 0xa94, 0xc, 0x3, 0x2, 0x2, 0xa94, 0xa95, 0x7, 0x4e, 
       0x2, 0x2, 0xa95, 0xa97, 0x5, 0x1be, 0xe0, 0x2, 0xa96, 0xa90, 0x3, 
       0x2, 0x2, 0x2, 0xa96, 0xa93, 0x3, 0x2, 0x2, 0x2, 0xa97, 0xa9a, 0x3, 
       0x2, 0x2, 0x2, 0xa98, 0xa96, 0x3, 0x2, 0x2, 0x2, 0xa98, 0xa99, 0x3, 
       0x2, 0x2, 0x2, 0xa99, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0xa9a, 0xa98, 0x3, 
       0x2, 0x2, 0x2, 0xa9b, 0xa9c, 0x8, 0xe0, 0x1, 0x2, 0xa9c, 0xa9d, 0x5, 
       0x1c0, 0xe1, 0x2, 0xa9d, 0xaaf, 0x3, 0x2, 0x2, 0x2, 0xa9e, 0xa9f, 
       0xc, 0x7, 0x2, 0x2, 0xa9f, 0xaa0, 0x7, 0x46, 0x2, 0x2, 0xaa0, 0xaae, 
       0x5, 0x1c0, 0xe1, 0x2, 0xaa1, 0xaa2, 0xc, 0x6, 0x2, 0x2, 0xaa2, 0xaa3, 
       0x7, 0x45, 0x2, 0x2, 0xaa3, 0xaae, 0x5, 0x1c0, 0xe1, 0x2, 0xaa4, 
       0xaa5, 0xc, 0x5, 0x2, 0x2, 0xaa5, 0xaa6, 0x7, 0x4c, 0x2, 0x2, 0xaa6, 
       0xaae, 0x5, 0x1c0, 0xe1, 0x2, 0xaa7, 0xaa8, 0xc, 0x4, 0x2, 0x2, 0xaa8, 
       0xaa9, 0x7, 0x4d, 0x2, 0x2, 0xaa9, 0xaae, 0x5, 0x1c0, 0xe1, 0x2, 
       0xaaa, 0xaab, 0xc, 0x3, 0x2, 0x2, 0xaab, 0xaac, 0x7, 0x1c, 0x2, 0x2, 
       0xaac, 0xaae, 0x5, 0xe, 0x8, 0x2, 0xaad, 0xa9e, 0x3, 0x2, 0x2, 0x2, 
       0xaad, 0xaa1, 0x3, 0x2, 0x2, 0x2, 0xaad, 0xaa4, 0x3, 0x2, 0x2, 0x2, 
       0xaad, 0xaa7, 0x3, 0x2, 0x2, 0x2, 0xaad, 0xaaa, 0x3, 0x2, 0x2, 0x2, 
       0xaae, 0xab1, 0x3, 0x2, 0x2, 0x2, 0xaaf, 0xaad, 0x3, 0x2, 0x2, 0x2, 
       0xaaf, 0xab0, 0x3, 0x2, 0x2, 0x2, 0xab0, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
       0xab1, 0xaaf, 0x3, 0x2, 0x2, 0x2, 0xab2, 0xab3, 0x8, 0xe1, 0x1, 0x2, 
       0xab3, 0xab4, 0x5, 0x1c2, 0xe2, 0x2, 0xab4, 0xac4, 0x3, 0x2, 0x2, 
       0x2, 0xab5, 0xab6, 0xc, 0x5, 0x2, 0x2, 0xab6, 0xab7, 0x7, 0x46, 0x2, 
       0x2, 0xab7, 0xab8, 0x7, 0x46, 0x2, 0x2, 0xab8, 0xac3, 0x5, 0x1c2, 
       0xe2, 0x2, 0xab9, 0xaba, 0xc, 0x4, 0x2, 0x2, 0xaba, 0xabb, 0x7, 0x45, 
       0x2, 0x2, 0xabb, 0xabc, 0x7, 0x45, 0x2, 0x2, 0xabc, 0xac3, 0x5, 0x1c2, 
       0xe2, 0x2, 0xabd, 0xabe, 0xc, 0x3, 0x2, 0x2, 0xabe, 0xabf, 0x7, 0x45, 
       0x2, 0x2, 0xabf, 0xac0, 0x7, 0x45, 0x2, 0x2, 0xac0, 0xac1, 0x7, 0x45, 
       0x2, 0x2, 0xac1, 0xac3, 0x5, 0x1c2, 0xe2, 0x2, 0xac2, 0xab5, 0x3, 
       0x2, 0x2, 0x2, 0xac2, 0xab9, 0x3, 0x2, 0x2, 0x2, 0xac2, 0xabd, 0x3, 
       0x2, 0x2, 0x2, 0xac3, 0xac6, 0x3, 0x2, 0x2, 0x2, 0xac4, 0xac2, 0x3, 
       0x2, 0x2, 0x2, 0xac4, 0xac5, 0x3, 0x2, 0x2, 0x2, 0xac5, 0x1c1, 0x3, 
       0x2, 0x2, 0x2, 0xac6, 0xac4, 0x3, 0x2, 0x2, 0x2, 0xac7, 0xac8, 0x8, 
       0xe2, 0x1, 0x2, 0xac8, 0xac9, 0x5, 0x1c4, 0xe3, 0x2, 0xac9, 0xad2, 
       0x3, 0x2, 0x2, 0x2, 0xaca, 0xacb, 0xc, 0x4, 0x2, 0x2, 0xacb, 0xacc, 
       0x7, 0x53, 0x2, 0x2, 0xacc, 0xad1, 0x5, 0x1c4, 0xe3, 0x2, 0xacd, 
       0xace, 0xc, 0x3, 0x2, 0x2, 0xace, 0xacf, 0x7, 0x54, 0x2, 0x2, 0xacf, 
       0xad1, 0x5, 0x1c4, 0xe3, 0x2, 0xad0, 0xaca, 0x3, 0x2, 0x2, 0x2, 0xad0, 
       0xacd, 0x3, 0x2, 0x2, 0x2, 0xad1, 0xad4, 0x3, 0x2, 0x2, 0x2, 0xad2, 
       0xad0, 0x3, 0x2, 0x2, 0x2, 0xad2, 0xad3, 0x3, 0x2, 0x2, 0x2, 0xad3, 
       0x1c3, 0x3, 0x2, 0x2, 0x2, 0xad4, 0xad2, 0x3, 0x2, 0x2, 0x2, 0xad5, 
       0xad6, 0x8, 0xe3, 0x1, 0x2, 0xad6, 0xad7, 0x5, 0x1c6, 0xe4, 0x2, 
       0xad7, 0xae3, 0x3, 0x2, 0x2, 0x2, 0xad8, 0xad9, 0xc, 0x5, 0x2, 0x2, 
       0xad9, 0xada, 0x7, 0x55, 0x2, 0x2, 0xada, 0xae2, 0x5, 0x1c6, 0xe4, 
       0x2, 0xadb, 0xadc, 0xc, 0x4, 0x2, 0x2, 0xadc, 0xadd, 0x7, 0x56, 0x2, 
       0x2, 0xadd, 0xae2, 0x5, 0x1c6, 0xe4, 0x2, 0xade, 0xadf, 0xc, 0x3, 
       0x2, 0x2, 0xadf, 0xae0, 0x7, 0x5a, 0x2, 0x2, 0xae0, 0xae2, 0x5, 0x1c6, 
       0xe4, 0x2, 0xae1, 0xad8, 0x3, 0x2, 0x2, 0x2, 0xae1, 0xadb, 0x3, 0x2, 
       0x2, 0x2, 0xae1, 0xade, 0x3, 0x2, 0x2, 0x2, 0xae2, 0xae5, 0x3, 0x2, 
       0x2, 0x2, 0xae3, 0xae1, 0x3, 0x2, 0x2, 0x2, 0xae3, 0xae4, 0x3, 0x2, 
       0x2, 0x2, 0xae4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0xae5, 0xae3, 0x3, 0x2, 
       0x2, 0x2, 0xae6, 0xaee, 0x5, 0x1c8, 0xe5, 0x2, 0xae7, 0xaee, 0x5, 
       0x1ca, 0xe6, 0x2, 0xae8, 0xae9, 0x7, 0x53, 0x2, 0x2, 0xae9, 0xaee, 
       0x5, 0x1c6, 0xe4, 0x2, 0xaea, 0xaeb, 0x7, 0x54, 0x2, 0x2, 0xaeb, 
       0xaee, 0x5, 0x1c6, 0xe4, 0x2, 0xaec, 0xaee, 0x5, 0x1cc, 0xe7, 0x2, 
       0xaed, 0xae6, 0x3, 0x2, 0x2, 0x2, 0xaed, 0xae7, 0x3, 0x2, 0x2, 0x2, 
       0xaed, 0xae8, 0x3, 0x2, 0x2, 0x2, 0xaed, 0xaea, 0x3, 0x2, 0x2, 0x2, 
       0xaed, 0xaec, 0x3, 0x2, 0x2, 0x2, 0xaee, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
       0xaef, 0xaf0, 0x7, 0x51, 0x2, 0x2, 0xaf0, 0xaf1, 0x5, 0x1c6, 0xe4, 
       0x2, 0xaf1, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0xaf2, 0xaf3, 0x7, 0x52, 0x2, 
       0x2, 0xaf3, 0xaf4, 0x5, 0x1c6, 0xe4, 0x2, 0xaf4, 0x1cb, 0x3, 0x2, 
       0x2, 0x2, 0xaf5, 0xafc, 0x5, 0x1ce, 0xe8, 0x2, 0xaf6, 0xaf7, 0x7, 
       0x48, 0x2, 0x2, 0xaf7, 0xafc, 0x5, 0x1c6, 0xe4, 0x2, 0xaf8, 0xaf9, 
       0x7, 0x47, 0x2, 0x2, 0xaf9, 0xafc, 0x5, 0x1c6, 0xe4, 0x2, 0xafa, 
       0xafc, 0x5, 0x1d8, 0xed, 0x2, 0xafb, 0xaf5, 0x3, 0x2, 0x2, 0x2, 0xafb, 
       0xaf6, 0x3, 0x2, 0x2, 0x2, 0xafb, 0xaf8, 0x3, 0x2, 0x2, 0x2, 0xafb, 
       0xafa, 0x3, 0x2, 0x2, 0x2, 0xafc, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0xafd, 
       0xb00, 0x5, 0x162, 0xb2, 0x2, 0xafe, 0xb00, 0x5, 0x3a, 0x1e, 0x2, 
       0xaff, 0xafd, 0x3, 0x2, 0x2, 0x2, 0xaff, 0xafe, 0x3, 0x2, 0x2, 0x2, 
       0xb00, 0xb05, 0x3, 0x2, 0x2, 0x2, 0xb01, 0xb04, 0x5, 0x1d2, 0xea, 
       0x2, 0xb02, 0xb04, 0x5, 0x1d6, 0xec, 0x2, 0xb03, 0xb01, 0x3, 0x2, 
       0x2, 0x2, 0xb03, 0xb02, 0x3, 0x2, 0x2, 0x2, 0xb04, 0xb07, 0x3, 0x2, 
       0x2, 0x2, 0xb05, 0xb03, 0x3, 0x2, 0x2, 0x2, 0xb05, 0xb06, 0x3, 0x2, 
       0x2, 0x2, 0xb06, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0xb07, 0xb05, 0x3, 0x2, 
       0x2, 0x2, 0xb08, 0xb09, 0x5, 0x1ce, 0xe8, 0x2, 0xb09, 0xb0a, 0x7, 
       0x51, 0x2, 0x2, 0xb0a, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0xb0b, 0xb0c, 0x7, 
       0x51, 0x2, 0x2, 0xb0c, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0xb0d, 0xb0e, 0x5, 
       0x1ce, 0xe8, 0x2, 0xb0e, 0xb0f, 0x7, 0x52, 0x2, 0x2, 0xb0f, 0x1d5, 
       0x3, 0x2, 0x2, 0x2, 0xb10, 0xb11, 0x7, 0x52, 0x2, 0x2, 0xb11, 0x1d7, 
       0x3, 0x2, 0x2, 0x2, 0xb12, 0xb13, 0x7, 0x3b, 0x2, 0x2, 0xb13, 0xb14, 
       0x5, 0x6, 0x4, 0x2, 0xb14, 0xb15, 0x7, 0x3c, 0x2, 0x2, 0xb15, 0xb16, 
       0x5, 0x1c6, 0xe4, 0x2, 0xb16, 0xb2e, 0x3, 0x2, 0x2, 0x2, 0xb17, 0xb18, 
       0x7, 0x3b, 0x2, 0x2, 0xb18, 0xb1c, 0x5, 0xe, 0x8, 0x2, 0xb19, 0xb1b, 
       0x5, 0x2a, 0x16, 0x2, 0xb1a, 0xb19, 0x3, 0x2, 0x2, 0x2, 0xb1b, 0xb1e, 
       0x3, 0x2, 0x2, 0x2, 0xb1c, 0xb1a, 0x3, 0x2, 0x2, 0x2, 0xb1c, 0xb1d, 
       0x3, 0x2, 0x2, 0x2, 0xb1d, 0xb1f, 0x3, 0x2, 0x2, 0x2, 0xb1e, 0xb1c, 
       0x3, 0x2, 0x2, 0x2, 0xb1f, 0xb20, 0x7, 0x3c, 0x2, 0x2, 0xb20, 0xb21, 
       0x5, 0x1cc, 0xe7, 0x2, 0xb21, 0xb2e, 0x3, 0x2, 0x2, 0x2, 0xb22, 0xb23, 
       0x7, 0x3b, 0x2, 0x2, 0xb23, 0xb27, 0x5, 0xe, 0x8, 0x2, 0xb24, 0xb26, 
       0x5, 0x2a, 0x16, 0x2, 0xb25, 0xb24, 0x3, 0x2, 0x2, 0x2, 0xb26, 0xb29, 
       0x3, 0x2, 0x2, 0x2, 0xb27, 0xb25, 0x3, 0x2, 0x2, 0x2, 0xb27, 0xb28, 
       0x3, 0x2, 0x2, 0x2, 0xb28, 0xb2a, 0x3, 0x2, 0x2, 0x2, 0xb29, 0xb27, 
       0x3, 0x2, 0x2, 0x2, 0xb2a, 0xb2b, 0x7, 0x3c, 0x2, 0x2, 0xb2b, 0xb2c, 
       0x5, 0x1a0, 0xd1, 0x2, 0xb2c, 0xb2e, 0x3, 0x2, 0x2, 0x2, 0xb2d, 0xb12, 
       0x3, 0x2, 0x2, 0x2, 0xb2d, 0xb17, 0x3, 0x2, 0x2, 0x2, 0xb2d, 0xb22, 
       0x3, 0x2, 0x2, 0x2, 0xb2e, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0xb2f, 0xb30, 
       0x5, 0x19e, 0xd0, 0x2, 0xb30, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x145, 0x1e0, 
       0x1e5, 0x1ec, 0x1f0, 0x1f4, 0x1fd, 0x201, 0x205, 0x207, 0x20d, 0x212, 
       0x219, 0x21e, 0x220, 0x226, 0x22b, 0x230, 0x235, 0x240, 0x24e, 0x253, 
       0x25b, 0x262, 0x268, 0x26d, 0x278, 0x27b, 0x289, 0x28e, 0x293, 0x298, 
       0x29e, 0x2a5, 0x2af, 0x2b7, 0x2c3, 0x2ce, 0x2d2, 0x2d7, 0x2dd, 0x2e5, 
       0x2ee, 0x2f9, 0x316, 0x31a, 0x31f, 0x325, 0x328, 0x32b, 0x337, 0x342, 
       0x350, 0x357, 0x360, 0x367, 0x36c, 0x37b, 0x382, 0x388, 0x38c, 0x390, 
       0x394, 0x398, 0x39d, 0x3a1, 0x3a5, 0x3a7, 0x3ac, 0x3b3, 0x3b8, 0x3ba, 
       0x3c0, 0x3c5, 0x3c9, 0x3dc, 0x3e1, 0x3f1, 0x3f6, 0x3fc, 0x402, 0x404, 
       0x408, 0x40d, 0x411, 0x419, 0x420, 0x428, 0x42b, 0x430, 0x438, 0x43d, 
       0x444, 0x44b, 0x450, 0x461, 0x466, 0x46a, 0x474, 0x479, 0x481, 0x484, 
       0x489, 0x491, 0x494, 0x499, 0x49e, 0x4a3, 0x4a8, 0x4af, 0x4b4, 0x4bc, 
       0x4c1, 0x4c6, 0x4cb, 0x4d1, 0x4d7, 0x4db, 0x4e4, 0x4ea, 0x4f0, 0x4f3, 
       0x4f6, 0x4fe, 0x503, 0x508, 0x50e, 0x511, 0x51c, 0x525, 0x52f, 0x534, 
       0x53f, 0x544, 0x550, 0x555, 0x561, 0x56b, 0x570, 0x578, 0x57b, 0x582, 
       0x58a, 0x590, 0x599, 0x5a3, 0x5a7, 0x5aa, 0x5b3, 0x5c1, 0x5c4, 0x5cd, 
       0x5d2, 0x5da, 0x5e0, 0x5e8, 0x5f4, 0x5fb, 0x609, 0x61f, 0x641, 0x64d, 
       0x653, 0x65f, 0x66c, 0x686, 0x68a, 0x68f, 0x693, 0x697, 0x69f, 0x6a3, 
       0x6a7, 0x6ae, 0x6b7, 0x6bf, 0x6ce, 0x6da, 0x6e0, 0x6e6, 0x6ec, 0x6fd, 
       0x702, 0x708, 0x714, 0x71f, 0x729, 0x72c, 0x731, 0x73a, 0x740, 0x74a, 
       0x74f, 0x758, 0x76f, 0x779, 0x78f, 0x796, 0x79e, 0x7a6, 0x7b1, 0x7c8, 
       0x7d2, 0x7dd, 0x7f3, 0x7f7, 0x7fc, 0x804, 0x80a, 0x80e, 0x812, 0x816, 
       0x81c, 0x821, 0x826, 0x82a, 0x82e, 0x834, 0x839, 0x83e, 0x842, 0x846, 
       0x848, 0x84d, 0x852, 0x857, 0x85b, 0x85f, 0x863, 0x868, 0x870, 0x876, 
       0x87a, 0x87e, 0x882, 0x888, 0x88d, 0x892, 0x896, 0x89a, 0x89c, 0x8a1, 
       0x8b0, 0x8be, 0x8ca, 0x8d3, 0x8e2, 0x8ef, 0x8f8, 0x8fe, 0x905, 0x90a, 
       0x911, 0x916, 0x91d, 0x922, 0x929, 0x92e, 0x936, 0x93b, 0x93f, 0x943, 
       0x948, 0x94f, 0x956, 0x95b, 0x962, 0x967, 0x96e, 0x973, 0x97b, 0x980, 
       0x984, 0x98b, 0x991, 0x998, 0x99f, 0x9a6, 0x9ae, 0x9b5, 0x9bd, 0x9c1, 
       0x9c8, 0x9cf, 0x9d6, 0x9de, 0x9e5, 0x9ed, 0x9f3, 0x9f9, 0xa05, 0xa0b, 
       0xa11, 0xa1a, 0xa23, 0xa2a, 0xa31, 0xa36, 0xa3a, 0xa45, 0xa54, 0xa5e, 
       0xa69, 0xa74, 0xa7f, 0xa8a, 0xa96, 0xa98, 0xaad, 0xaaf, 0xac2, 0xac4, 
       0xad0, 0xad2, 0xae1, 0xae3, 0xaed, 0xafb, 0xaff, 0xb03, 0xb05, 0xb1c, 
       0xb27, 0xb2d, 
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
