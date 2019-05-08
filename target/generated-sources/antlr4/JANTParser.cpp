
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
    setState(56);
    match(JANTParser::START);
    setState(57);
    header();
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JANTParser::MAIN: {
        break;
      }

      case JANTParser::FUNC: {
        setState(59);
        func_list();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(62);
    main();
    setState(63);
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
    setState(65);
    match(JANTParser::IDENTIFIER);
    setState(66);
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

std::vector<JANTParser::FuncContext *> JANTParser::Func_listContext::func() {
  return getRuleContexts<JANTParser::FuncContext>();
}

JANTParser::FuncContext* JANTParser::Func_listContext::func(size_t i) {
  return getRuleContext<JANTParser::FuncContext>(i);
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
    setState(68);
    func();
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::FUNC) {
      setState(69);
      func();
      setState(74);
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

//----------------- FuncContext ------------------------------------------------------------------

JANTParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::FuncContext::FUNC() {
  return getToken(JANTParser::FUNC, 0);
}

JANTParser::Func_nameContext* JANTParser::FuncContext::func_name() {
  return getRuleContext<JANTParser::Func_nameContext>(0);
}

JANTParser::Param_listContext* JANTParser::FuncContext::param_list() {
  return getRuleContext<JANTParser::Param_listContext>(0);
}

JANTParser::Compound_stmtContext* JANTParser::FuncContext::compound_stmt() {
  return getRuleContext<JANTParser::Compound_stmtContext>(0);
}


size_t JANTParser::FuncContext::getRuleIndex() const {
  return JANTParser::RuleFunc;
}


antlrcpp::Any JANTParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::FuncContext* JANTParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 6, JANTParser::RuleFunc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(JANTParser::FUNC);
    setState(76);
    func_name();
    setState(77);
    match(JANTParser::T__1);
    setState(78);
    param_list();
    setState(79);
    match(JANTParser::T__2);
    setState(80);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_nameContext ------------------------------------------------------------------

JANTParser::Func_nameContext::Func_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::Func_nameContext::IDENTIFIER() {
  return getToken(JANTParser::IDENTIFIER, 0);
}


size_t JANTParser::Func_nameContext::getRuleIndex() const {
  return JANTParser::RuleFunc_name;
}


antlrcpp::Any JANTParser::Func_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitFunc_name(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::Func_nameContext* JANTParser::func_name() {
  Func_nameContext *_localctx = _tracker.createInstance<Func_nameContext>(_ctx, getState());
  enterRule(_localctx, 8, JANTParser::RuleFunc_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
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
    setState(84);
    param();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::T__3) {
      setState(85);
      match(JANTParser::T__3);
      setState(86);
      param();
      setState(91);
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
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JANTParser::IDENTIFIER: {
        break;
      }

      case JANTParser::T__4: {
        setState(93);
        match(JANTParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(96);
    variable();
    setState(97);
    match(JANTParser::T__5);
    setState(98);
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
    setState(100);
    match(JANTParser::MAIN);
    setState(101);
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
    setState(103);
    type_id();
    setState(104);
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
    setState(106);
    var_id();
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::T__3) {
      setState(107);
      match(JANTParser::T__3);
      setState(108);
      var_id();
      setState(113);
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
    setState(114);
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
    setState(116);
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
    setState(145);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::CompoundStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(118);
      compound_stmt();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::AssignmentStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(119);
      assignment_stmt();
      setState(122);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(121);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::LoopStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(124);
      loop_stmt();
      setState(127);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(126);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::WhenStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(129);
      whenall_stmt();
      setState(132);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(131);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::FuncCallStmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(134);
      funcCall_stmt();
      setState(137);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(136);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::DeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(139);
      declarations();
      setState(142);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(141);
        match(JANTParser::T__0);
        break;
      }

      }
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<JANTParser::EmptyStmtContext>(_localctx));
      enterOuterAlt(_localctx, 7);

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
    setState(147);
    match(JANTParser::BEGIN);
    setState(148);
    stmt();
    setState(149);
    match(JANTParser::T__0);
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JANTParser::T__0)
      | (1ULL << JANTParser::BEGIN)
      | (1ULL << JANTParser::LOOP)
      | (1ULL << JANTParser::WHEN)
      | (1ULL << JANTParser::IDENTIFIER))) != 0)) {
      setState(150);
      stmt();
      setState(151);
      match(JANTParser::T__0);
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(158);
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

JANTParser::Func_nameContext* JANTParser::FuncCall_stmtContext::func_name() {
  return getRuleContext<JANTParser::Func_nameContext>(0);
}

JANTParser::Var_listContext* JANTParser::FuncCall_stmtContext::var_list() {
  return getRuleContext<JANTParser::Var_listContext>(0);
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
    setState(160);
    func_name();
    setState(161);
    match(JANTParser::T__1);
    setState(162);
    var_list();
    setState(163);
    match(JANTParser::T__2);
   
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
  enterRule(_localctx, 30, JANTParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    variable();
    setState(166);
    match(JANTParser::EQ_operation);
    setState(167);
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
  enterRule(_localctx, 32, JANTParser::RuleLoop_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(JANTParser::LOOP);
    setState(170);
    expr(0);
    setState(171);
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
  enterRule(_localctx, 34, JANTParser::RuleWhenall_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    when_stmt();
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JANTParser::WHENIF) {
      setState(174);
      whenif_stmt();
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
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
  enterRule(_localctx, 36, JANTParser::RuleWhen_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(JANTParser::WHEN);
    setState(183);
    expr(0);
    setState(184);
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
  enterRule(_localctx, 38, JANTParser::RuleWhenif_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(JANTParser::WHENIF);
    setState(187);
    expr(0);
    setState(188);
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
  enterRule(_localctx, 40, JANTParser::RuleOtherwise);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(JANTParser::OTHERWISE);
    setState(191);
    stmt();
   
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
  enterRule(_localctx, 42, JANTParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(JANTParser::IDENTIFIER);
   
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

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* JANTParser::IdentifierContext::IDENTIFIER() {
  return getToken(JANTParser::IDENTIFIER, 0);
}

JANTParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
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
//----------------- NumberConstContext ------------------------------------------------------------------

JANTParser::NumberContext* JANTParser::NumberConstContext::number() {
  return getRuleContext<JANTParser::NumberContext>(0);
}

JANTParser::NumberConstContext::NumberConstContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any JANTParser::NumberConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitNumberConst(this);
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
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, JANTParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(202);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JANTParser::INTEGER:
      case JANTParser::ADD_operation:
      case JANTParser::SUB_operation: {
        _localctx = _tracker.createInstance<NumberConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(196);
        number();
        break;
      }

      case JANTParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(197);
        match(JANTParser::IDENTIFIER);
        break;
      }

      case JANTParser::T__1: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(198);
        match(JANTParser::T__1);
        setState(199);
        expr(0);
        setState(200);
        match(JANTParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(218);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(216);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(204);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(205);
          mul_div_operation();
          setState(206);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(208);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(209);
          add_sub_operation();
          setState(210);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(212);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(213);
          rel_operation();
          setState(214);
          expr(5);
          break;
        }

        } 
      }
      setState(220);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

JANTParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JANTParser::NumberContext::INTEGER() {
  return getToken(JANTParser::INTEGER, 0);
}

JANTParser::SignContext* JANTParser::NumberContext::sign() {
  return getRuleContext<JANTParser::SignContext>(0);
}


size_t JANTParser::NumberContext::getRuleIndex() const {
  return JANTParser::RuleNumber;
}


antlrcpp::Any JANTParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JANTVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

JANTParser::NumberContext* JANTParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 46, JANTParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JANTParser::ADD_operation

    || _la == JANTParser::SUB_operation) {
      setState(221);
      sign();
    }
    setState(224);
    match(JANTParser::INTEGER);
   
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
  enterRule(_localctx, 48, JANTParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
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
  enterRule(_localctx, 50, JANTParser::RuleMul_div_operation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
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
  enterRule(_localctx, 52, JANTParser::RuleAdd_sub_operation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
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
  enterRule(_localctx, 54, JANTParser::RuleRel_operation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
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
    case 22: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "program", "header", "func_list", "func", "func_name", "param_list", "param", 
  "main", "declarations", "var_list", "var_id", "type_id", "stmt", "compound_stmt", 
  "funcCall_stmt", "assignment_stmt", "loop_stmt", "whenall_stmt", "when_stmt", 
  "whenif_stmt", "otherwise", "variable", "expr", "number", "sign", "mul_div_operation", 
  "add_sub_operation", "rel_operation"
};

std::vector<std::string> JANTParser::_literalNames = {
  "", "';'", "'('", "')'", "','", "'Ref'", "'As'", "'PROGRAM'", "'MAIN'", 
  "'FUNC'", "'START'", "'TERMINATE'", "'{'", "'}'", "'VAR'", "'LOOP'", "'WHEN'", 
  "'WHENIF'", "'OTHERWISE'", "", "", "", "'*'", "'/'", "'+'", "'-'", "'='", 
  "'=='", "'!='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> JANTParser::_symbolicNames = {
  "", "", "", "", "", "", "", "PROGRAM", "MAIN", "FUNC", "START", "TERMINATE", 
  "BEGIN", "END", "VAR", "LOOP", "WHEN", "WHENIF", "OTHERWISE", "IDENTIFIER", 
  "INTEGER", "CHAR", "MUL_operation", "DIV_operation", "ADD_operation", 
  "SUB_operation", "EQ_operation", "EQEQ_operation", "NE_operation", "LT_operation", 
  "LE_operation", "GT_operation", "GE_operation", "NEWLINE", "WS"
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
    0x3, 0x24, 0xed, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x5, 0x2, 0x3f, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x49, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x4c, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x7, 0x7, 0x5a, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x5d, 0xb, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x61, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x70, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0x73, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x7d, 0xa, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x82, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x87, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x8c, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x91, 0xa, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x94, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x9c, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x9f, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x7, 
    0x13, 0xb2, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xb5, 0xb, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x5, 0x18, 0xcd, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0xdb, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0xde, 0xb, 0x18, 0x3, 0x19, 0x5, 0x19, 0xe1, 0xa, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x2, 0x3, 0x2e, 0x1e, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x2, 0x5, 0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x18, 0x19, 0x3, 
    0x2, 0x1d, 0x22, 0x2, 0xe8, 0x2, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x46, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x54, 0x3, 0x2, 0x2, 0x2, 0xc, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x60, 0x3, 0x2, 0x2, 0x2, 0x10, 0x66, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x76, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x95, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x22, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x26, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x30, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x34, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x38, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x7, 0xc, 0x2, 0x2, 0x3b, 0x3e, 0x5, 0x4, 0x3, 
    0x2, 0x3c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0x6, 0x4, 0x2, 
    0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x5, 0x10, 0x9, 0x2, 0x41, 0x42, 
    0x7, 0xd, 0x2, 0x2, 0x42, 0x3, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 
    0x15, 0x2, 0x2, 0x44, 0x45, 0x7, 0x3, 0x2, 0x2, 0x45, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x4a, 0x5, 0x8, 0x5, 0x2, 0x47, 0x49, 0x5, 0x8, 0x5, 
    0x2, 0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 
    0x7, 0xb, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0xa, 0x6, 0x2, 0x4f, 0x50, 0x7, 
    0x4, 0x2, 0x2, 0x50, 0x51, 0x5, 0xc, 0x7, 0x2, 0x51, 0x52, 0x7, 0x5, 
    0x2, 0x2, 0x52, 0x53, 0x5, 0x1c, 0xf, 0x2, 0x53, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x55, 0x7, 0x15, 0x2, 0x2, 0x55, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x5b, 0x5, 0xe, 0x8, 0x2, 0x57, 0x58, 0x7, 0x6, 0x2, 0x2, 0x58, 
    0x5a, 0x5, 0xe, 0x8, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x61, 0x7, 0x7, 0x2, 
    0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x5, 0x2c, 0x17, 0x2, 0x63, 
    0x64, 0x7, 0x8, 0x2, 0x2, 0x64, 0x65, 0x5, 0x18, 0xd, 0x2, 0x65, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0xa, 0x2, 0x2, 0x67, 0x68, 0x5, 
    0x1c, 0xf, 0x2, 0x68, 0x11, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x18, 
    0xd, 0x2, 0x6a, 0x6b, 0x5, 0x14, 0xb, 0x2, 0x6b, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x71, 0x5, 0x16, 0xc, 0x2, 0x6d, 0x6e, 0x7, 0x6, 0x2, 0x2, 
    0x6e, 0x70, 0x5, 0x16, 0xc, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x15, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0x15, 0x2, 0x2, 0x75, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x77, 0x7, 0x15, 0x2, 0x2, 0x77, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x94, 0x5, 0x1c, 0xf, 0x2, 0x79, 0x7c, 0x5, 0x20, 0x11, 0x2, 
    0x7a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x7, 0x3, 0x2, 0x2, 0x7c, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x5, 0x22, 0x12, 0x2, 0x7f, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x82, 0x7, 0x3, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 0x94, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x86, 0x5, 0x24, 0x13, 0x2, 0x84, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x85, 0x87, 0x7, 0x3, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x94, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 
    0x5, 0x1e, 0x10, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8c, 0x7, 
    0x3, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x94, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x90, 0x5, 0x12, 0xa, 
    0x2, 0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x91, 0x7, 0x3, 0x2, 0x2, 
    0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x3, 0x2, 0x2, 0x2, 0x93, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x93, 0x79, 0x3, 0x2, 0x2, 0x2, 0x93, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x83, 0x3, 0x2, 0x2, 0x2, 0x93, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x93, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x93, 0x92, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x7, 0xe, 0x2, 0x2, 
    0x96, 0x97, 0x5, 0x1a, 0xe, 0x2, 0x97, 0x9d, 0x7, 0x3, 0x2, 0x2, 0x98, 
    0x99, 0x5, 0x1a, 0xe, 0x2, 0x99, 0x9a, 0x7, 0x3, 0x2, 0x2, 0x9a, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xa1, 0x7, 0xf, 0x2, 0x2, 0xa1, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0xa3, 0x5, 0xa, 0x6, 0x2, 0xa3, 0xa4, 0x7, 0x4, 0x2, 0x2, 0xa4, 
    0xa5, 0x5, 0x14, 0xb, 0x2, 0xa5, 0xa6, 0x7, 0x5, 0x2, 0x2, 0xa6, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x2c, 0x17, 0x2, 0xa8, 0xa9, 0x7, 
    0x1c, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x2e, 0x18, 0x2, 0xaa, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xac, 0x7, 0x11, 0x2, 0x2, 0xac, 0xad, 0x5, 0x2e, 0x18, 
    0x2, 0xad, 0xae, 0x5, 0x1a, 0xe, 0x2, 0xae, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xb3, 0x5, 0x26, 0x14, 0x2, 0xb0, 0xb2, 0x5, 0x28, 0x15, 0x2, 
    0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x5, 
    0x2a, 0x16, 0x2, 0xb7, 0x25, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x12, 
    0x2, 0x2, 0xb9, 0xba, 0x5, 0x2e, 0x18, 0x2, 0xba, 0xbb, 0x5, 0x1a, 0xe, 
    0x2, 0xbb, 0x27, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x13, 0x2, 0x2, 
    0xbd, 0xbe, 0x5, 0x2e, 0x18, 0x2, 0xbe, 0xbf, 0x5, 0x1a, 0xe, 0x2, 0xbf, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x14, 0x2, 0x2, 0xc1, 0xc2, 
    0x5, 0x1a, 0xe, 0x2, 0xc2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 
    0x15, 0x2, 0x2, 0xc4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x8, 0x18, 
    0x1, 0x2, 0xc6, 0xcd, 0x5, 0x30, 0x19, 0x2, 0xc7, 0xcd, 0x7, 0x15, 0x2, 
    0x2, 0xc8, 0xc9, 0x7, 0x4, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x2e, 0x18, 0x2, 
    0xca, 0xcb, 0x7, 0x5, 0x2, 0x2, 0xcb, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0xc, 
    0x8, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0x34, 0x1b, 0x2, 0xd0, 0xd1, 0x5, 0x2e, 
    0x18, 0x9, 0xd1, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0xc, 0x7, 0x2, 
    0x2, 0xd3, 0xd4, 0x5, 0x36, 0x1c, 0x2, 0xd4, 0xd5, 0x5, 0x2e, 0x18, 
    0x8, 0xd5, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0xc, 0x6, 0x2, 0x2, 
    0xd7, 0xd8, 0x5, 0x38, 0x1d, 0x2, 0xd8, 0xd9, 0x5, 0x2e, 0x18, 0x7, 
    0xd9, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xda, 0xce, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe1, 0x5, 0x32, 0x1a, 0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xe3, 0x7, 0x16, 0x2, 0x2, 0xe3, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe5, 0x9, 0x2, 0x2, 0x2, 0xe5, 0x33, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 
    0x9, 0x3, 0x2, 0x2, 0xe7, 0x35, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x9, 
    0x2, 0x2, 0x2, 0xe9, 0x37, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x9, 0x4, 
    0x2, 0x2, 0xeb, 0x39, 0x3, 0x2, 0x2, 0x2, 0x13, 0x3e, 0x4a, 0x5b, 0x60, 
    0x71, 0x7c, 0x81, 0x86, 0x8b, 0x90, 0x93, 0x9d, 0xb3, 0xcc, 0xda, 0xdc, 
    0xe0, 
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
