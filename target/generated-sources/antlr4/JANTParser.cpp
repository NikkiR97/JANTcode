
#include "../../../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from JANT.g4 by ANTLR 4.7.2


#include "JANTVisitor.h"

#include "JANTParser.h"


using namespace antlrcpp;
using namespace antlr4;

JANTParser::JANTParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JANTParser::~JANTParser() {
  delete _interpreter;
}

std::string JANTParser::getGrammarFileName() const {
  return "JANT.g4";
}

const std::vector<std::string>& JANTParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JANTParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

JANTParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::ProgramContext::START() {
  return getToken(JANTParser::START, 0);
}

JANTParser::HeaderContext* JANTParser::ProgramContext::header() {
  return getRuleContext<JANTParser::HeaderContext>(0);
}

JANTParser::MainContext* JANTParser::ProgramContext::main() {
  return getRuleContext<JANTParser::MainContext>(0);
}

tree::TerminalNode* JANTParser::ProgramContext::TERMINATE() {
  return getToken(JANTParser::TERMINATE, 0);
}

JANTParser::Func_listContext* JANTParser::ProgramContext::func_list() {
  return getRuleContext<JANTParser::Func_listContext>(0);
}


size_t JANTParser::ProgramContext::getRuleIndex() const {
  return JANTParser::RuleProgram;
}


antlrcpp::Any JANTParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::ProgramContext* JANTParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, JANTParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(JANTParser::START);
    setState(65);
    header();
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JANTParser::MAIN: {
        break;
      }

      case JANTParser::FUNC: {
        setState(67);
        func_list();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(70);
    main();
    setState(71);
    match(JANTParser::TERMINATE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

JANTParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::HeaderContext::IDENTIFIER() {
  return getToken(JANTParser::IDENTIFIER, 0);
}


size_t JANTParser::HeaderContext::getRuleIndex() const {
  return JANTParser::RuleHeader;
}


antlrcpp::Any JANTParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::HeaderContext* JANTParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, JANTParser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(JANTParser::IDENTIFIER);
    setState(74);
    match(JANTParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_listContext ------------------------------------------------------------------

JANTParser::Func_listContext::Func_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JANTParser::FunctContext *> JANTParser::Func_listContext::funct() {
  return getRuleContexts<JANTParser::FunctContext>();
}

JANTParser::FunctContext* JANTParser::Func_listContext::funct(size_t i) {
  return getRuleContext<JANTParser::FunctContext>(i);
}


size_t JANTParser::Func_listContext::getRuleIndex() const {
  return JANTParser::RuleFunc_list;
}


antlrcpp::Any JANTParser::Func_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFunc_list(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Func_listContext* JANTParser::func_list() {
  Func_listContext *_localctx = _tracker.createInstance<Func_listContext>(_ctx, getState());
  enterRule(_localctx, 4, JANTParser::RuleFunc_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    funct();
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::FUNC) {
      setState(77);
      funct();
      setState(82);
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

//----------------- FunctContext ------------------------------------------------------------------

JANTParser::FunctContext::FunctContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::FunctContext::FUNC() {
  return getToken(JANTParser::FUNC, 0);
}

JANTParser::Funct_nameContext* JANTParser::FunctContext::funct_name() {
  return getRuleContext<JANTParser::Funct_nameContext>(0);
}

JANTParser::Param_listContext* JANTParser::FunctContext::param_list() {
  return getRuleContext<JANTParser::Param_listContext>(0);
}

tree::TerminalNode* JANTParser::FunctContext::BEGIN() {
  return getToken(JANTParser::BEGIN, 0);
}

JANTParser::DeclarationsContext* JANTParser::FunctContext::declarations() {
  return getRuleContext<JANTParser::DeclarationsContext>(0);
}

std::vector<JANTParser::StmtContext *> JANTParser::FunctContext::stmt() {
  return getRuleContexts<JANTParser::StmtContext>();
}

JANTParser::StmtContext* JANTParser::FunctContext::stmt(size_t i) {
  return getRuleContext<JANTParser::StmtContext>(i);
}

JANTParser::Funct_return_stmtContext* JANTParser::FunctContext::funct_return_stmt() {
  return getRuleContext<JANTParser::Funct_return_stmtContext>(0);
}

tree::TerminalNode* JANTParser::FunctContext::END() {
  return getToken(JANTParser::END, 0);
}


size_t JANTParser::FunctContext::getRuleIndex() const {
  return JANTParser::RuleFunct;
}


antlrcpp::Any JANTParser::FunctContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFunct(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::FunctContext* JANTParser::funct() {
  FunctContext *_localctx = _tracker.createInstance<FunctContext>(_ctx, getState());
  enterRule(_localctx, 6, JANTParser::RuleFunct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(JANTParser::FUNC);
    setState(84);
    funct_name();
    setState(85);
    match(JANTParser::T__1);
    setState(86);
    param_list();
    setState(87);
    match(JANTParser::T__2);
    setState(88);
    match(JANTParser::BEGIN);
    setState(89);
    declarations();
    setState(90);
    stmt();
    setState(91);
    match(JANTParser::T__0);
    setState(97);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(92);
        stmt();
        setState(93);
        match(JANTParser::T__0); 
      }
      setState(99);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(100);
    funct_return_stmt();
    setState(101);
    match(JANTParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Funct_nameContext ------------------------------------------------------------------

JANTParser::Funct_nameContext::Funct_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Funct_nameContext::IDENTIFIER() {
  return getToken(JANTParser::IDENTIFIER, 0);
}


size_t JANTParser::Funct_nameContext::getRuleIndex() const {
  return JANTParser::RuleFunct_name;
}


antlrcpp::Any JANTParser::Funct_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFunct_name(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Funct_nameContext* JANTParser::funct_name() {
  Funct_nameContext *_localctx = _tracker.createInstance<Funct_nameContext>(_ctx, getState());
  enterRule(_localctx, 8, JANTParser::RuleFunct_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(JANTParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

JANTParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JANTParser::ParamContext *> JANTParser::Param_listContext::param() {
  return getRuleContexts<JANTParser::ParamContext>();
}

JANTParser::ParamContext* JANTParser::Param_listContext::param(size_t i) {
  return getRuleContext<JANTParser::ParamContext>(i);
}


size_t JANTParser::Param_listContext::getRuleIndex() const {
  return JANTParser::RuleParam_list;
}


antlrcpp::Any JANTParser::Param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitParam_list(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Param_listContext* JANTParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 10, JANTParser::RuleParam_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    param();
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::T__3) {
      setState(106);
      match(JANTParser::T__3);
      setState(107);
      param();
      setState(112);
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

//----------------- ParamContext ------------------------------------------------------------------

JANTParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JANTParser::VariableContext* JANTParser::ParamContext::variable() {
  return getRuleContext<JANTParser::VariableContext>(0);
}

JANTParser::Type_idContext* JANTParser::ParamContext::type_id() {
  return getRuleContext<JANTParser::Type_idContext>(0);
}


size_t JANTParser::ParamContext::getRuleIndex() const {
  return JANTParser::RuleParam;
}


antlrcpp::Any JANTParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::ParamContext* JANTParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 12, JANTParser::RuleParam);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JANTParser::IDENTIFIER: {
        break;
      }

      case JANTParser::T__4: {
        setState(114);
        match(JANTParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(117);
    variable();
    setState(118);
    match(JANTParser::T__5);
    setState(119);
    type_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

JANTParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::MainContext::MAIN() {
  return getToken(JANTParser::MAIN, 0);
}

JANTParser::Compound_stmtContext* JANTParser::MainContext::compound_stmt() {
  return getRuleContext<JANTParser::Compound_stmtContext>(0);
}


size_t JANTParser::MainContext::getRuleIndex() const {
  return JANTParser::RuleMain;
}


antlrcpp::Any JANTParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::MainContext* JANTParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 14, JANTParser::RuleMain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(JANTParser::MAIN);
    setState(122);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

JANTParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JANTParser::Type_idContext* JANTParser::DeclarationsContext::type_id() {
  return getRuleContext<JANTParser::Type_idContext>(0);
}

JANTParser::Var_listContext* JANTParser::DeclarationsContext::var_list() {
  return getRuleContext<JANTParser::Var_listContext>(0);
}


size_t JANTParser::DeclarationsContext::getRuleIndex() const {
  return JANTParser::RuleDeclarations;
}


antlrcpp::Any JANTParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::DeclarationsContext* JANTParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 16, JANTParser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    type_id();
    setState(125);
    var_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_listContext ------------------------------------------------------------------

JANTParser::Var_listContext::Var_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JANTParser::Var_idContext *> JANTParser::Var_listContext::var_id() {
  return getRuleContexts<JANTParser::Var_idContext>();
}

JANTParser::Var_idContext* JANTParser::Var_listContext::var_id(size_t i) {
  return getRuleContext<JANTParser::Var_idContext>(i);
}


size_t JANTParser::Var_listContext::getRuleIndex() const {
  return JANTParser::RuleVar_list;
}


antlrcpp::Any JANTParser::Var_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitVar_list(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Var_listContext* JANTParser::var_list() {
  Var_listContext *_localctx = _tracker.createInstance<Var_listContext>(_ctx, getState());
  enterRule(_localctx, 18, JANTParser::RuleVar_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    var_id();
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::T__3) {
      setState(128);
      match(JANTParser::T__3);
      setState(129);
      var_id();
      setState(134);
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

//----------------- Var_idContext ------------------------------------------------------------------

JANTParser::Var_idContext::Var_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Var_idContext::IDENTIFIER() {
  return getToken(JANTParser::IDENTIFIER, 0);
}


size_t JANTParser::Var_idContext::getRuleIndex() const {
  return JANTParser::RuleVar_id;
}


antlrcpp::Any JANTParser::Var_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitVar_id(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Var_idContext* JANTParser::var_id() {
  Var_idContext *_localctx = _tracker.createInstance<Var_idContext>(_ctx, getState());
  enterRule(_localctx, 20, JANTParser::RuleVar_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(JANTParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_idContext ------------------------------------------------------------------

JANTParser::Type_idContext::Type_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Type_idContext::IDENTIFIER() {
  return getToken(JANTParser::IDENTIFIER, 0);
}


size_t JANTParser::Type_idContext::getRuleIndex() const {
  return JANTParser::RuleType_id;
}


antlrcpp::Any JANTParser::Type_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitType_id(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Type_idContext* JANTParser::type_id() {
  Type_idContext *_localctx = _tracker.createInstance<Type_idContext>(_ctx, getState());
  enterRule(_localctx, 22, JANTParser::RuleType_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(JANTParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

JANTParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JANTParser::StmtContext::getRuleIndex() const {
  return JANTParser::RuleStmt;
}

void JANTParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhenStmtContext ------------------------------------------------------------------

JANTParser::Whenall_stmtContext* JANTParser::WhenStmtContext::whenall_stmt() {
  return getRuleContext<JANTParser::Whenall_stmtContext>(0);
}

JANTParser::WhenStmtContext::WhenStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::WhenStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitWhenStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintTxtStmtContext ------------------------------------------------------------------

JANTParser::PrintTxtContext* JANTParser::PrintTxtStmtContext::printTxt() {
  return getRuleContext<JANTParser::PrintTxtContext>(0);
}

JANTParser::PrintTxtStmtContext::PrintTxtStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::PrintTxtStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitPrintTxtStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopStmtContext ------------------------------------------------------------------

JANTParser::Loop_stmtContext* JANTParser::LoopStmtContext::loop_stmt() {
  return getRuleContext<JANTParser::Loop_stmtContext>(0);
}

JANTParser::LoopStmtContext::LoopStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::LoopStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitLoopStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctReturnStmtContext ------------------------------------------------------------------

JANTParser::Funct_return_stmtContext* JANTParser::FunctReturnStmtContext::funct_return_stmt() {
  return getRuleContext<JANTParser::Funct_return_stmtContext>(0);
}

JANTParser::FunctReturnStmtContext::FunctReturnStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::FunctReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFunctReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompoundStmtContext ------------------------------------------------------------------

JANTParser::Compound_stmtContext* JANTParser::CompoundStmtContext::compound_stmt() {
  return getRuleContext<JANTParser::Compound_stmtContext>(0);
}

JANTParser::CompoundStmtContext::CompoundStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::CompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintStrStmtContext ------------------------------------------------------------------

JANTParser::PrintStrContext* JANTParser::PrintStrStmtContext::printStr() {
  return getRuleContext<JANTParser::PrintStrContext>(0);
}

JANTParser::PrintStrStmtContext::PrintStrStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::PrintStrStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitPrintStrStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallStmtContext ------------------------------------------------------------------

JANTParser::FuncCall_stmtContext* JANTParser::FuncCallStmtContext::funcCall_stmt() {
  return getRuleContext<JANTParser::FuncCall_stmtContext>(0);
}

JANTParser::FuncCallStmtContext::FuncCallStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::FuncCallStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFuncCallStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EmptyStmtContext ------------------------------------------------------------------

JANTParser::EmptyStmtContext::EmptyStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::EmptyStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitEmptyStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentStmtContext ------------------------------------------------------------------

JANTParser::Assignment_stmtContext* JANTParser::AssignmentStmtContext::assignment_stmt() {
  return getRuleContext<JANTParser::Assignment_stmtContext>(0);
}

JANTParser::AssignmentStmtContext::AssignmentStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationContext ------------------------------------------------------------------

JANTParser::DeclarationsContext* JANTParser::DeclarationContext::declarations() {
  return getRuleContext<JANTParser::DeclarationsContext>(0);
}

JANTParser::DeclarationContext::DeclarationContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}
JANTParser::StmtContext* JANTParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 24, JANTParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(181);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::CompoundStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(139);
      compound_stmt();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::AssignmentStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(140);
      assignment_stmt();
      setState(143);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(142);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::LoopStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(145);
      loop_stmt();
      setState(148);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(147);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::WhenStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(150);
      whenall_stmt();
      setState(153);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(152);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::FuncCallStmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(155);
      funcCall_stmt();
      setState(158);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(157);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::FunctReturnStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(160);
      funct_return_stmt();
      setState(163);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(162);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::DeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(165);
      declarations();
      setState(168);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(167);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::PrintStrStmtContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(170);
      printStr();
      setState(173);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(172);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::PrintTxtStmtContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(175);
      printTxt();
      setState(178);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(177);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::EmptyStmtContext>(_localctx));
      enterOuterAlt(_localctx, 10);

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

//----------------- Compound_stmtContext ------------------------------------------------------------------

JANTParser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Compound_stmtContext::BEGIN() {
  return getToken(JANTParser::BEGIN, 0);
}

std::vector<JANTParser::StmtContext *> JANTParser::Compound_stmtContext::stmt() {
  return getRuleContexts<JANTParser::StmtContext>();
}

JANTParser::StmtContext* JANTParser::Compound_stmtContext::stmt(size_t i) {
  return getRuleContext<JANTParser::StmtContext>(i);
}

tree::TerminalNode* JANTParser::Compound_stmtContext::END() {
  return getToken(JANTParser::END, 0);
}


size_t JANTParser::Compound_stmtContext::getRuleIndex() const {
  return JANTParser::RuleCompound_stmt;
}


antlrcpp::Any JANTParser::Compound_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitCompound_stmt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Compound_stmtContext* JANTParser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, JANTParser::RuleCompound_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(JANTParser::BEGIN);
    setState(184);
    stmt();
    setState(185);
    match(JANTParser::T__0);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JANTParser::T__0)
      | (1ULL << JANTParser::BEGIN)
      | (1ULL << JANTParser::LOOP)
      | (1ULL << JANTParser::WHEN)
      | (1ULL << JANTParser::PRINTSTR)
      | (1ULL << JANTParser::PRINTXT)
      | (1ULL << JANTParser::RETURN)
      | (1ULL << JANTParser::IDENTIFIER))) != 0)) {
      setState(186);
      stmt();
      setState(187);
      match(JANTParser::T__0);
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(JANTParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCall_stmtContext ------------------------------------------------------------------

JANTParser::FuncCall_stmtContext::FuncCall_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JANTParser::Funct_nameContext* JANTParser::FuncCall_stmtContext::funct_name() {
  return getRuleContext<JANTParser::Funct_nameContext>(0);
}

JANTParser::VariableContext* JANTParser::FuncCall_stmtContext::variable() {
  return getRuleContext<JANTParser::VariableContext>(0);
}


size_t JANTParser::FuncCall_stmtContext::getRuleIndex() const {
  return JANTParser::RuleFuncCall_stmt;
}


antlrcpp::Any JANTParser::FuncCall_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFuncCall_stmt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::FuncCall_stmtContext* JANTParser::funcCall_stmt() {
  FuncCall_stmtContext *_localctx = _tracker.createInstance<FuncCall_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, JANTParser::RuleFuncCall_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    funct_name();
    setState(197);
    match(JANTParser::T__1);
    setState(198);
    variable();
    setState(199);
    match(JANTParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Funct_return_stmtContext ------------------------------------------------------------------

JANTParser::Funct_return_stmtContext::Funct_return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Funct_return_stmtContext::RETURN() {
  return getToken(JANTParser::RETURN, 0);
}

JANTParser::VariableContext* JANTParser::Funct_return_stmtContext::variable() {
  return getRuleContext<JANTParser::VariableContext>(0);
}


size_t JANTParser::Funct_return_stmtContext::getRuleIndex() const {
  return JANTParser::RuleFunct_return_stmt;
}


antlrcpp::Any JANTParser::Funct_return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFunct_return_stmt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Funct_return_stmtContext* JANTParser::funct_return_stmt() {
  Funct_return_stmtContext *_localctx = _tracker.createInstance<Funct_return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, JANTParser::RuleFunct_return_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(JANTParser::RETURN);
    setState(202);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_stmtContext ------------------------------------------------------------------

JANTParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JANTParser::VariableContext* JANTParser::Assignment_stmtContext::variable() {
  return getRuleContext<JANTParser::VariableContext>(0);
}

tree::TerminalNode* JANTParser::Assignment_stmtContext::EQ_operation() {
  return getToken(JANTParser::EQ_operation, 0);
}

JANTParser::ExprContext* JANTParser::Assignment_stmtContext::expr() {
  return getRuleContext<JANTParser::ExprContext>(0);
}


size_t JANTParser::Assignment_stmtContext::getRuleIndex() const {
  return JANTParser::RuleAssignment_stmt;
}


antlrcpp::Any JANTParser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Assignment_stmtContext* JANTParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, JANTParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    variable();
    setState(205);
    match(JANTParser::EQ_operation);
    setState(206);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_stmtContext ------------------------------------------------------------------

JANTParser::Loop_stmtContext::Loop_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Loop_stmtContext::LOOP() {
  return getToken(JANTParser::LOOP, 0);
}

JANTParser::ExprContext* JANTParser::Loop_stmtContext::expr() {
  return getRuleContext<JANTParser::ExprContext>(0);
}

JANTParser::StmtContext* JANTParser::Loop_stmtContext::stmt() {
  return getRuleContext<JANTParser::StmtContext>(0);
}


size_t JANTParser::Loop_stmtContext::getRuleIndex() const {
  return JANTParser::RuleLoop_stmt;
}


antlrcpp::Any JANTParser::Loop_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitLoop_stmt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Loop_stmtContext* JANTParser::loop_stmt() {
  Loop_stmtContext *_localctx = _tracker.createInstance<Loop_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, JANTParser::RuleLoop_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(JANTParser::LOOP);
    setState(209);
    expr(0);
    setState(210);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Whenall_stmtContext ------------------------------------------------------------------

JANTParser::Whenall_stmtContext::Whenall_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JANTParser::When_stmtContext* JANTParser::Whenall_stmtContext::when_stmt() {
  return getRuleContext<JANTParser::When_stmtContext>(0);
}

JANTParser::OtherwiseContext* JANTParser::Whenall_stmtContext::otherwise() {
  return getRuleContext<JANTParser::OtherwiseContext>(0);
}

std::vector<JANTParser::Whenif_stmtContext *> JANTParser::Whenall_stmtContext::whenif_stmt() {
  return getRuleContexts<JANTParser::Whenif_stmtContext>();
}

JANTParser::Whenif_stmtContext* JANTParser::Whenall_stmtContext::whenif_stmt(size_t i) {
  return getRuleContext<JANTParser::Whenif_stmtContext>(i);
}


size_t JANTParser::Whenall_stmtContext::getRuleIndex() const {
  return JANTParser::RuleWhenall_stmt;
}


antlrcpp::Any JANTParser::Whenall_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitWhenall_stmt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Whenall_stmtContext* JANTParser::whenall_stmt() {
  Whenall_stmtContext *_localctx = _tracker.createInstance<Whenall_stmtContext>(_ctx, getState());
  enterRule(_localctx, 36, JANTParser::RuleWhenall_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    when_stmt();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::WHENIF) {
      setState(213);
      whenif_stmt();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(219);
    otherwise();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- When_stmtContext ------------------------------------------------------------------

JANTParser::When_stmtContext::When_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::When_stmtContext::WHEN() {
  return getToken(JANTParser::WHEN, 0);
}

JANTParser::ExprContext* JANTParser::When_stmtContext::expr() {
  return getRuleContext<JANTParser::ExprContext>(0);
}

JANTParser::StmtContext* JANTParser::When_stmtContext::stmt() {
  return getRuleContext<JANTParser::StmtContext>(0);
}


size_t JANTParser::When_stmtContext::getRuleIndex() const {
  return JANTParser::RuleWhen_stmt;
}


antlrcpp::Any JANTParser::When_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitWhen_stmt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::When_stmtContext* JANTParser::when_stmt() {
  When_stmtContext *_localctx = _tracker.createInstance<When_stmtContext>(_ctx, getState());
  enterRule(_localctx, 38, JANTParser::RuleWhen_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(JANTParser::WHEN);
    setState(222);
    expr(0);
    setState(223);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Whenif_stmtContext ------------------------------------------------------------------

JANTParser::Whenif_stmtContext::Whenif_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Whenif_stmtContext::WHENIF() {
  return getToken(JANTParser::WHENIF, 0);
}

JANTParser::ExprContext* JANTParser::Whenif_stmtContext::expr() {
  return getRuleContext<JANTParser::ExprContext>(0);
}

JANTParser::StmtContext* JANTParser::Whenif_stmtContext::stmt() {
  return getRuleContext<JANTParser::StmtContext>(0);
}


size_t JANTParser::Whenif_stmtContext::getRuleIndex() const {
  return JANTParser::RuleWhenif_stmt;
}


antlrcpp::Any JANTParser::Whenif_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitWhenif_stmt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Whenif_stmtContext* JANTParser::whenif_stmt() {
  Whenif_stmtContext *_localctx = _tracker.createInstance<Whenif_stmtContext>(_ctx, getState());
  enterRule(_localctx, 40, JANTParser::RuleWhenif_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(JANTParser::WHENIF);
    setState(226);
    expr(0);
    setState(227);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OtherwiseContext ------------------------------------------------------------------

JANTParser::OtherwiseContext::OtherwiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::OtherwiseContext::OTHERWISE() {
  return getToken(JANTParser::OTHERWISE, 0);
}

JANTParser::StmtContext* JANTParser::OtherwiseContext::stmt() {
  return getRuleContext<JANTParser::StmtContext>(0);
}


size_t JANTParser::OtherwiseContext::getRuleIndex() const {
  return JANTParser::RuleOtherwise;
}


antlrcpp::Any JANTParser::OtherwiseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitOtherwise(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::OtherwiseContext* JANTParser::otherwise() {
  OtherwiseContext *_localctx = _tracker.createInstance<OtherwiseContext>(_ctx, getState());
  enterRule(_localctx, 42, JANTParser::RuleOtherwise);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(JANTParser::OTHERWISE);
    setState(230);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStrContext ------------------------------------------------------------------

JANTParser::PrintStrContext::PrintStrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::PrintStrContext::PRINTSTR() {
  return getToken(JANTParser::PRINTSTR, 0);
}

JANTParser::Str_idContext* JANTParser::PrintStrContext::str_id() {
  return getRuleContext<JANTParser::Str_idContext>(0);
}

std::vector<JANTParser::ExprContext *> JANTParser::PrintStrContext::expr() {
  return getRuleContexts<JANTParser::ExprContext>();
}

JANTParser::ExprContext* JANTParser::PrintStrContext::expr(size_t i) {
  return getRuleContext<JANTParser::ExprContext>(i);
}


size_t JANTParser::PrintStrContext::getRuleIndex() const {
  return JANTParser::RulePrintStr;
}


antlrcpp::Any JANTParser::PrintStrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitPrintStr(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::PrintStrContext* JANTParser::printStr() {
  PrintStrContext *_localctx = _tracker.createInstance<PrintStrContext>(_ctx, getState());
  enterRule(_localctx, 44, JANTParser::RulePrintStr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(JANTParser::PRINTSTR);
    setState(233);
    match(JANTParser::T__1);
    setState(234);
    str_id();
    setState(239);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::T__3) {
      setState(235);
      match(JANTParser::T__3);
      setState(236);
      expr(0);
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(242);
    match(JANTParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintTxtContext ------------------------------------------------------------------

JANTParser::PrintTxtContext::PrintTxtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::PrintTxtContext::PRINTXT() {
  return getToken(JANTParser::PRINTXT, 0);
}

JANTParser::Str_idContext* JANTParser::PrintTxtContext::str_id() {
  return getRuleContext<JANTParser::Str_idContext>(0);
}


size_t JANTParser::PrintTxtContext::getRuleIndex() const {
  return JANTParser::RulePrintTxt;
}


antlrcpp::Any JANTParser::PrintTxtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitPrintTxt(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::PrintTxtContext* JANTParser::printTxt() {
  PrintTxtContext *_localctx = _tracker.createInstance<PrintTxtContext>(_ctx, getState());
  enterRule(_localctx, 46, JANTParser::RulePrintTxt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(JANTParser::PRINTXT);
    setState(245);
    match(JANTParser::T__1);
    setState(246);
    str_id();
    setState(247);
    match(JANTParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

JANTParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JANTParser::ExprContext::getRuleIndex() const {
  return JANTParser::RuleExpr;
}

void JANTParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

JANTParser::VariableContext* JANTParser::VariableExprContext::variable() {
  return getRuleContext<JANTParser::VariableContext>(0);
}

JANTParser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DatatypeExprContext ------------------------------------------------------------------

JANTParser::DatatypeContext* JANTParser::DatatypeExprContext::datatype() {
  return getRuleContext<JANTParser::DatatypeContext>(0);
}

JANTParser::DatatypeExprContext::DatatypeExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::DatatypeExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitDatatypeExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

JANTParser::ExprContext* JANTParser::ParensContext::expr() {
  return getRuleContext<JANTParser::ExprContext>(0);
}

JANTParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<JANTParser::ExprContext *> JANTParser::AddSubExprContext::expr() {
  return getRuleContexts<JANTParser::ExprContext>();
}

JANTParser::ExprContext* JANTParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<JANTParser::ExprContext>(i);
}

JANTParser::Add_sub_operationContext* JANTParser::AddSubExprContext::add_sub_operation() {
  return getRuleContext<JANTParser::Add_sub_operationContext>(0);
}

JANTParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelExprContext ------------------------------------------------------------------

std::vector<JANTParser::ExprContext *> JANTParser::RelExprContext::expr() {
  return getRuleContexts<JANTParser::ExprContext>();
}

JANTParser::ExprContext* JANTParser::RelExprContext::expr(size_t i) {
  return getRuleContext<JANTParser::ExprContext>(i);
}

JANTParser::Rel_operationContext* JANTParser::RelExprContext::rel_operation() {
  return getRuleContext<JANTParser::Rel_operationContext>(0);
}

JANTParser::RelExprContext::RelExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::RelExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitRelExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<JANTParser::ExprContext *> JANTParser::MulDivExprContext::expr() {
  return getRuleContexts<JANTParser::ExprContext>();
}

JANTParser::ExprContext* JANTParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<JANTParser::ExprContext>(i);
}

JANTParser::Mul_div_operationContext* JANTParser::MulDivExprContext::mul_div_operation() {
  return getRuleContext<JANTParser::Mul_div_operationContext>(0);
}

JANTParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::ExprContext* JANTParser::expr() {
   return expr(0);
}

JANTParser::ExprContext* JANTParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JANTParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  JANTParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, JANTParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(256);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JANTParser::INTEGER:
      case JANTParser::FLOAT:
      case JANTParser::CHAR: {
        _localctx = _tracker.createInstance<DatatypeExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(250);
        datatype();
        break;
      }

      case JANTParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(251);
        variable();
        break;
      }

      case JANTParser::T__1: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(252);
        match(JANTParser::T__1);
        setState(253);
        expr(0);
        setState(254);
        match(JANTParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(272);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(270);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(258);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(259);
          mul_div_operation();
          setState(260);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(262);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(263);
          add_sub_operation();
          setState(264);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(266);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(267);
          rel_operation();
          setState(268);
          expr(5);
          break;
        }

        } 
      }
      setState(274);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

JANTParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::VariableContext::IDENTIFIER() {
  return getToken(JANTParser::IDENTIFIER, 0);
}


size_t JANTParser::VariableContext::getRuleIndex() const {
  return JANTParser::RuleVariable;
}


antlrcpp::Any JANTParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::VariableContext* JANTParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 50, JANTParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(JANTParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Str_idContext ------------------------------------------------------------------

JANTParser::Str_idContext::Str_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Str_idContext::STRING() {
  return getToken(JANTParser::STRING, 0);
}


size_t JANTParser::Str_idContext::getRuleIndex() const {
  return JANTParser::RuleStr_id;
}


antlrcpp::Any JANTParser::Str_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitStr_id(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Str_idContext* JANTParser::str_id() {
  Str_idContext *_localctx = _tracker.createInstance<Str_idContext>(_ctx, getState());
  enterRule(_localctx, 52, JANTParser::RuleStr_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    match(JANTParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DatatypeContext ------------------------------------------------------------------

JANTParser::DatatypeContext::DatatypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JANTParser::DatatypeContext::getRuleIndex() const {
  return JANTParser::RuleDatatype;
}

void JANTParser::DatatypeContext::copyFrom(DatatypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- FloatConstContext ------------------------------------------------------------------

tree::TerminalNode* JANTParser::FloatConstContext::FLOAT() {
  return getToken(JANTParser::FLOAT, 0);
}

JANTParser::FloatConstContext::FloatConstContext(DatatypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::FloatConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFloatConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerConstContext ------------------------------------------------------------------

tree::TerminalNode* JANTParser::IntegerConstContext::INTEGER() {
  return getToken(JANTParser::INTEGER, 0);
}

JANTParser::IntegerConstContext::IntegerConstContext(DatatypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::IntegerConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitIntegerConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharConstContext ------------------------------------------------------------------

tree::TerminalNode* JANTParser::CharConstContext::CHAR() {
  return getToken(JANTParser::CHAR, 0);
}

JANTParser::CharConstContext::CharConstContext(DatatypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::CharConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitCharConst(this);
  else
    return visitor->visitChildren(this);
}
JANTParser::DatatypeContext* JANTParser::datatype() {
  DatatypeContext *_localctx = _tracker.createInstance<DatatypeContext>(_ctx, getState());
  enterRule(_localctx, 54, JANTParser::RuleDatatype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JANTParser::INTEGER: {
        _localctx = dynamic_cast<DatatypeContext *>(_tracker.createInstance<JANTParser::IntegerConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(279);
        match(JANTParser::INTEGER);
        break;
      }

      case JANTParser::FLOAT: {
        _localctx = dynamic_cast<DatatypeContext *>(_tracker.createInstance<JANTParser::FloatConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(280);
        match(JANTParser::FLOAT);
        break;
      }

      case JANTParser::CHAR: {
        _localctx = dynamic_cast<DatatypeContext *>(_tracker.createInstance<JANTParser::CharConstContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(281);
        match(JANTParser::CHAR);
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

//----------------- SignContext ------------------------------------------------------------------

JANTParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::SignContext::ADD_operation() {
  return getToken(JANTParser::ADD_operation, 0);
}

tree::TerminalNode* JANTParser::SignContext::SUB_operation() {
  return getToken(JANTParser::SUB_operation, 0);
}


size_t JANTParser::SignContext::getRuleIndex() const {
  return JANTParser::RuleSign;
}


antlrcpp::Any JANTParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::SignContext* JANTParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 56, JANTParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    _la = _input->LA(1);
    if (!(_la == JANTParser::ADD_operation

    || _la == JANTParser::SUB_operation)) {
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

//----------------- Mul_div_operationContext ------------------------------------------------------------------

JANTParser::Mul_div_operationContext::Mul_div_operationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Mul_div_operationContext::MUL_operation() {
  return getToken(JANTParser::MUL_operation, 0);
}

tree::TerminalNode* JANTParser::Mul_div_operationContext::DIV_operation() {
  return getToken(JANTParser::DIV_operation, 0);
}


size_t JANTParser::Mul_div_operationContext::getRuleIndex() const {
  return JANTParser::RuleMul_div_operation;
}


antlrcpp::Any JANTParser::Mul_div_operationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitMul_div_operation(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Mul_div_operationContext* JANTParser::mul_div_operation() {
  Mul_div_operationContext *_localctx = _tracker.createInstance<Mul_div_operationContext>(_ctx, getState());
  enterRule(_localctx, 58, JANTParser::RuleMul_div_operation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    _la = _input->LA(1);
    if (!(_la == JANTParser::MUL_operation

    || _la == JANTParser::DIV_operation)) {
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

//----------------- Add_sub_operationContext ------------------------------------------------------------------

JANTParser::Add_sub_operationContext::Add_sub_operationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Add_sub_operationContext::ADD_operation() {
  return getToken(JANTParser::ADD_operation, 0);
}

tree::TerminalNode* JANTParser::Add_sub_operationContext::SUB_operation() {
  return getToken(JANTParser::SUB_operation, 0);
}


size_t JANTParser::Add_sub_operationContext::getRuleIndex() const {
  return JANTParser::RuleAdd_sub_operation;
}


antlrcpp::Any JANTParser::Add_sub_operationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_operation(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Add_sub_operationContext* JANTParser::add_sub_operation() {
  Add_sub_operationContext *_localctx = _tracker.createInstance<Add_sub_operationContext>(_ctx, getState());
  enterRule(_localctx, 60, JANTParser::RuleAdd_sub_operation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    _la = _input->LA(1);
    if (!(_la == JANTParser::ADD_operation

    || _la == JANTParser::SUB_operation)) {
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

//----------------- Rel_operationContext ------------------------------------------------------------------

JANTParser::Rel_operationContext::Rel_operationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Rel_operationContext::EQEQ_operation() {
  return getToken(JANTParser::EQEQ_operation, 0);
}

tree::TerminalNode* JANTParser::Rel_operationContext::NE_operation() {
  return getToken(JANTParser::NE_operation, 0);
}

tree::TerminalNode* JANTParser::Rel_operationContext::LT_operation() {
  return getToken(JANTParser::LT_operation, 0);
}

tree::TerminalNode* JANTParser::Rel_operationContext::LE_operation() {
  return getToken(JANTParser::LE_operation, 0);
}

tree::TerminalNode* JANTParser::Rel_operationContext::GT_operation() {
  return getToken(JANTParser::GT_operation, 0);
}

tree::TerminalNode* JANTParser::Rel_operationContext::GE_operation() {
  return getToken(JANTParser::GE_operation, 0);
}


size_t JANTParser::Rel_operationContext::getRuleIndex() const {
  return JANTParser::RuleRel_operation;
}


antlrcpp::Any JANTParser::Rel_operationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitRel_operation(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Rel_operationContext* JANTParser::rel_operation() {
  Rel_operationContext *_localctx = _tracker.createInstance<Rel_operationContext>(_ctx, getState());
  enterRule(_localctx, 62, JANTParser::RuleRel_operation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JANTParser::EQEQ_operation)
      | (1ULL << JANTParser::NE_operation)
      | (1ULL << JANTParser::LT_operation)
      | (1ULL << JANTParser::LE_operation)
      | (1ULL << JANTParser::GT_operation)
      | (1ULL << JANTParser::GE_operation))) != 0))) {
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

bool JANTParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 24: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool JANTParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> JANTParser::_decisionToDFA;
atn::PredictionContextCache JANTParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JANTParser::_atn;
std::vector<uint16_t> JANTParser::_serializedATN;

std::vector<std::string> JANTParser::_ruleNames = {
  "program", "header", "func_list", "funct", "funct_name", "param_list", 
  "param", "main", "declarations", "var_list", "var_id", "type_id", "stmt", 
  "compound_stmt", "funcCall_stmt", "funct_return_stmt", "assignment_stmt", 
  "loop_stmt", "whenall_stmt", "when_stmt", "whenif_stmt", "otherwise", 
  "printStr", "printTxt", "expr", "variable", "str_id", "datatype", "sign", 
  "mul_div_operation", "add_sub_operation", "rel_operation"
};

std::vector<std::string> JANTParser::_literalNames = {
  "", "';'", "'('", "')'", "','", "'Ref'", "'As'", "'PROGRAM'", "'MAIN'", 
  "'FUNC'", "'START'", "'TERMINATE'", "'{'", "'}'", "'VAR'", "'LOOP'", "'WHEN'", 
  "'WHENIF'", "'OTHERWISE'", "'PrintStr'", "'PrintTxt'", "", "'return'", 
  "", "", "", "", "'*'", "'/'", "'+'", "'-'", "'='", "'=='", "'!='", "'<'", 
  "'<='", "'>'", "'>='"
};

std::vector<std::string> JANTParser::_symbolicNames = {
  "", "", "", "", "", "", "", "PROGRAM", "MAIN", "FUNC", "START", "TERMINATE", 
  "BEGIN", "END", "VAR", "LOOP", "WHEN", "WHENIF", "OTHERWISE", "PRINTSTR", 
  "PRINTXT", "STRING", "RETURN", "IDENTIFIER", "INTEGER", "FLOAT", "CHAR", 
  "MUL_operation", "DIV_operation", "ADD_operation", "SUB_operation", "EQ_operation", 
  "EQEQ_operation", "NE_operation", "LT_operation", "LE_operation", "GT_operation", 
  "GE_operation", "NEWLINE", "WS"
};

dfa::Vocabulary JANTParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JANTParser::_tokenNames;

JANTParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x29, 0x127, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x47, 0xa, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x51, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x54, 0xb, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x62, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0x65, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x6f, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x72, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x76, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 
    0x85, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x88, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x92, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x97, 0xa, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x9c, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0xa1, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0xa6, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xab, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xb0, 0xa, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xb5, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0xb8, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x7, 0xf, 0xc0, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xc3, 0xb, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x7, 0x14, 0xd9, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xdc, 0xb, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0xf0, 0xa, 
    0x18, 0xc, 0x18, 0xe, 0x18, 0xf3, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x103, 
    0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x7, 0x1a, 0x111, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x114, 0xb, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x5, 0x1d, 0x11d, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x2, 
    0x3, 0x32, 0x22, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x2, 0x5, 
    0x3, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x22, 0x27, 0x2, 
    0x127, 0x2, 0x42, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x55, 0x3, 0x2, 0x2, 0x2, 0xa, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x6b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x81, 0x3, 0x2, 0x2, 0x2, 0x16, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x20, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xce, 0x3, 0x2, 0x2, 0x2, 0x24, 0xd2, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x28, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xea, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf6, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x102, 0x3, 0x2, 0x2, 0x2, 0x34, 0x115, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x38, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x11e, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x120, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x124, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0xc, 
    0x2, 0x2, 0x43, 0x46, 0x5, 0x4, 0x3, 0x2, 0x44, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x47, 0x5, 0x6, 0x4, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x49, 0x5, 0x10, 0x9, 0x2, 0x49, 0x4a, 0x7, 0xd, 0x2, 0x2, 0x4a, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x19, 0x2, 0x2, 0x4c, 0x4d, 0x7, 
    0x3, 0x2, 0x2, 0x4d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x52, 0x5, 0x8, 
    0x5, 0x2, 0x4f, 0x51, 0x5, 0x8, 0x5, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x7, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0xb, 0x2, 0x2, 0x56, 0x57, 
    0x5, 0xa, 0x6, 0x2, 0x57, 0x58, 0x7, 0x4, 0x2, 0x2, 0x58, 0x59, 0x5, 
    0xc, 0x7, 0x2, 0x59, 0x5a, 0x7, 0x5, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0xe, 
    0x2, 0x2, 0x5b, 0x5c, 0x5, 0x12, 0xa, 0x2, 0x5c, 0x5d, 0x5, 0x1a, 0xe, 
    0x2, 0x5d, 0x63, 0x7, 0x3, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x1a, 0xe, 0x2, 
    0x5f, 0x60, 0x7, 0x3, 0x2, 0x2, 0x60, 0x62, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x5, 0x20, 
    0x11, 0x2, 0x67, 0x68, 0x7, 0xf, 0x2, 0x2, 0x68, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0x6a, 0x7, 0x19, 0x2, 0x2, 0x6a, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x70, 0x5, 0xe, 0x8, 0x2, 0x6c, 0x6d, 0x7, 0x6, 0x2, 0x2, 0x6d, 
    0x6f, 0x5, 0xe, 0x8, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0xd, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x76, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 0x7, 0x7, 0x2, 
    0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x5, 0x34, 0x1b, 0x2, 0x78, 
    0x79, 0x7, 0x8, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x18, 0xd, 0x2, 0x7a, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0xa, 0x2, 0x2, 0x7c, 0x7d, 0x5, 
    0x1c, 0xf, 0x2, 0x7d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x18, 
    0xd, 0x2, 0x7f, 0x80, 0x5, 0x14, 0xb, 0x2, 0x80, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x81, 0x86, 0x5, 0x16, 0xc, 0x2, 0x82, 0x83, 0x7, 0x6, 0x2, 0x2, 
    0x83, 0x85, 0x5, 0x16, 0xc, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x85, 
    0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x15, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x19, 0x2, 0x2, 0x8a, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x8c, 0x7, 0x19, 0x2, 0x2, 0x8c, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0xb8, 0x5, 0x1c, 0xf, 0x2, 0x8e, 0x91, 0x5, 0x22, 0x12, 0x2, 
    0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 0x90, 0x92, 0x7, 0x3, 0x2, 0x2, 0x91, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x5, 0x24, 0x13, 0x2, 0x94, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x97, 0x7, 0x3, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x9b, 0x5, 0x26, 0x14, 0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9c, 0x7, 0x3, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa0, 
    0x5, 0x1e, 0x10, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x7, 
    0x3, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x5, 0x20, 0x11, 
    0x2, 0xa3, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x7, 0x3, 0x2, 0x2, 
    0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xb8, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xaa, 0x5, 0x12, 0xa, 0x2, 0xa8, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x3, 0x2, 0x2, 0xaa, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xaf, 0x5, 0x2e, 0x18, 0x2, 0xad, 0xb0, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xb0, 0x7, 0x3, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb4, 0x5, 0x30, 0x19, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 
    0x7, 0x3, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xb7, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0x93, 0x3, 0x2, 0x2, 0x2, 0xb7, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xac, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0xe, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x1a, 
    0xe, 0x2, 0xbb, 0xc1, 0x7, 0x3, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x1a, 0xe, 
    0x2, 0xbd, 0xbe, 0x7, 0x3, 0x2, 0x2, 0xbe, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xbf, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc1, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 
    0xf, 0x2, 0x2, 0xc5, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0xa, 
    0x6, 0x2, 0xc7, 0xc8, 0x7, 0x4, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x34, 0x1b, 
    0x2, 0xc9, 0xca, 0x7, 0x5, 0x2, 0x2, 0xca, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x7, 0x18, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x34, 0x1b, 0x2, 0xcd, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x34, 0x1b, 0x2, 0xcf, 0xd0, 
    0x7, 0x21, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x32, 0x1a, 0x2, 0xd1, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x11, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x32, 
    0x1a, 0x2, 0xd4, 0xd5, 0x5, 0x1a, 0xe, 0x2, 0xd5, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xd6, 0xda, 0x5, 0x28, 0x15, 0x2, 0xd7, 0xd9, 0x5, 0x2a, 0x16, 
    0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 
    0x5, 0x2c, 0x17, 0x2, 0xde, 0x27, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 
    0x12, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x32, 0x1a, 0x2, 0xe1, 0xe2, 0x5, 0x1a, 
    0xe, 0x2, 0xe2, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x13, 0x2, 
    0x2, 0xe4, 0xe5, 0x5, 0x32, 0x1a, 0x2, 0xe5, 0xe6, 0x5, 0x1a, 0xe, 0x2, 
    0xe6, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x14, 0x2, 0x2, 0xe8, 
    0xe9, 0x5, 0x1a, 0xe, 0x2, 0xe9, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 
    0x7, 0x15, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x4, 0x2, 0x2, 0xec, 0xf1, 0x5, 
    0x36, 0x1c, 0x2, 0xed, 0xee, 0x7, 0x6, 0x2, 0x2, 0xee, 0xf0, 0x5, 0x32, 
    0x1a, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xf5, 0x7, 0x5, 0x2, 0x2, 0xf5, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 
    0x7, 0x16, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x4, 0x2, 0x2, 0xf8, 0xf9, 0x5, 
    0x36, 0x1c, 0x2, 0xf9, 0xfa, 0x7, 0x5, 0x2, 0x2, 0xfa, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xfc, 0x8, 0x1a, 0x1, 0x2, 0xfc, 0x103, 0x5, 0x38, 0x1d, 
    0x2, 0xfd, 0x103, 0x5, 0x34, 0x1b, 0x2, 0xfe, 0xff, 0x7, 0x4, 0x2, 0x2, 
    0xff, 0x100, 0x5, 0x32, 0x1a, 0x2, 0x100, 0x101, 0x7, 0x5, 0x2, 0x2, 
    0x101, 0x103, 0x3, 0x2, 0x2, 0x2, 0x102, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0x102, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x103, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0xc, 0x8, 0x2, 0x2, 0x105, 0x106, 
    0x5, 0x3c, 0x1f, 0x2, 0x106, 0x107, 0x5, 0x32, 0x1a, 0x9, 0x107, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0xc, 0x7, 0x2, 0x2, 0x109, 0x10a, 
    0x5, 0x3e, 0x20, 0x2, 0x10a, 0x10b, 0x5, 0x32, 0x1a, 0x8, 0x10b, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0xc, 0x6, 0x2, 0x2, 0x10d, 0x10e, 
    0x5, 0x40, 0x21, 0x2, 0x10e, 0x10f, 0x5, 0x32, 0x1a, 0x7, 0x10f, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x104, 0x3, 0x2, 0x2, 0x2, 0x110, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x111, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x33, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x116, 0x7, 0x19, 0x2, 0x2, 0x116, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x118, 0x7, 0x17, 0x2, 0x2, 0x118, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x11d, 0x7, 0x1a, 0x2, 0x2, 0x11a, 0x11d, 0x7, 
    0x1b, 0x2, 0x2, 0x11b, 0x11d, 0x7, 0x1c, 0x2, 0x2, 0x11c, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x9, 0x2, 
    0x2, 0x2, 0x11f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x9, 0x3, 0x2, 
    0x2, 0x121, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x9, 0x2, 0x2, 0x2, 
    0x123, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x9, 0x4, 0x2, 0x2, 0x125, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x18, 0x46, 0x52, 0x63, 0x70, 0x75, 0x86, 
    0x91, 0x96, 0x9b, 0xa0, 0xa5, 0xaa, 0xaf, 0xb4, 0xb7, 0xc1, 0xda, 0xf1, 
    0x102, 0x110, 0x112, 0x11c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JANTParser::Initializer JANTParser::_init;
