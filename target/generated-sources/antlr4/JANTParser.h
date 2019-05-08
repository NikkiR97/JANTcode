
#include "../../../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from JANT.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  JANTParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, PROGRAM = 7, 
    MAIN = 8, FUNC = 9, START = 10, TERMINATE = 11, BEGIN = 12, END = 13, 
    VAR = 14, LOOP = 15, WHEN = 16, WHENIF = 17, OTHERWISE = 18, IDENTIFIER = 19, 
    INTEGER = 20, CHAR = 21, MUL_operation = 22, DIV_operation = 23, ADD_operation = 24, 
    SUB_operation = 25, EQ_operation = 26, EQEQ_operation = 27, NE_operation = 28, 
    LT_operation = 29, LE_operation = 30, GT_operation = 31, GE_operation = 32, 
    NEWLINE = 33, WS = 34
  };

  enum {
    RuleProgram = 0, RuleHeader = 1, RuleFunc_list = 2, RuleFunc = 3, RuleFunc_name = 4, 
    RuleParam_list = 5, RuleParam = 6, RuleMain = 7, RuleDeclarations = 8, 
    RuleVar_list = 9, RuleVar_id = 10, RuleType_id = 11, RuleStmt = 12, 
    RuleCompound_stmt = 13, RuleFuncCall_stmt = 14, RuleAssignment_stmt = 15, 
    RuleLoop_stmt = 16, RuleWhenall_stmt = 17, RuleWhen_stmt = 18, RuleWhenif_stmt = 19, 
    RuleOtherwise = 20, RuleVariable = 21, RuleExpr = 22, RuleNumber = 23, 
    RuleSign = 24, RuleMul_div_operation = 25, RuleAdd_sub_operation = 26, 
    RuleRel_operation = 27
  };

  JANTParser(antlr4::TokenStream *input);
  ~JANTParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class HeaderContext;
  class Func_listContext;
  class FuncContext;
  class Func_nameContext;
  class Param_listContext;
  class ParamContext;
  class MainContext;
  class DeclarationsContext;
  class Var_listContext;
  class Var_idContext;
  class Type_idContext;
  class StmtContext;
  class Compound_stmtContext;
  class FuncCall_stmtContext;
  class Assignment_stmtContext;
  class Loop_stmtContext;
  class Whenall_stmtContext;
  class When_stmtContext;
  class Whenif_stmtContext;
  class OtherwiseContext;
  class VariableContext;
  class ExprContext;
  class NumberContext;
  class SignContext;
  class Mul_div_operationContext;
  class Add_sub_operationContext;
  class Rel_operationContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    HeaderContext *header();
    MainContext *main();
    antlr4::tree::TerminalNode *TERMINATE();
    Func_listContext *func_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  Func_listContext : public antlr4::ParserRuleContext {
  public:
    Func_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FuncContext *> func();
    FuncContext* func(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_listContext* func_list();

  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    Func_nameContext *func_name();
    Param_listContext *param_list();
    Compound_stmtContext *compound_stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncContext* func();

  class  Func_nameContext : public antlr4::ParserRuleContext {
  public:
    Func_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_nameContext* func_name();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_listContext* param_list();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    Type_idContext *type_id();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAIN();
    Compound_stmtContext *compound_stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  DeclarationsContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_idContext *type_id();
    Var_listContext *var_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationsContext* declarations();

  class  Var_listContext : public antlr4::ParserRuleContext {
  public:
    Var_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_idContext *> var_id();
    Var_idContext* var_id(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_listContext* var_list();

  class  Var_idContext : public antlr4::ParserRuleContext {
  public:
    Var_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_idContext* var_id();

  class  Type_idContext : public antlr4::ParserRuleContext {
  public:
    Type_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_idContext* type_id();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StmtContext() = default;
    void copyFrom(StmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhenStmtContext : public StmtContext {
  public:
    WhenStmtContext(StmtContext *ctx);

    Whenall_stmtContext *whenall_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopStmtContext : public StmtContext {
  public:
    LoopStmtContext(StmtContext *ctx);

    Loop_stmtContext *loop_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompoundStmtContext : public StmtContext {
  public:
    CompoundStmtContext(StmtContext *ctx);

    Compound_stmtContext *compound_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncCallStmtContext : public StmtContext {
  public:
    FuncCallStmtContext(StmtContext *ctx);

    FuncCall_stmtContext *funcCall_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EmptyStmtContext : public StmtContext {
  public:
    EmptyStmtContext(StmtContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignmentStmtContext : public StmtContext {
  public:
    AssignmentStmtContext(StmtContext *ctx);

    Assignment_stmtContext *assignment_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationContext : public StmtContext {
  public:
    DeclarationContext(StmtContext *ctx);

    DeclarationsContext *declarations();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StmtContext* stmt();

  class  Compound_stmtContext : public antlr4::ParserRuleContext {
  public:
    Compound_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_stmtContext* compound_stmt();

  class  FuncCall_stmtContext : public antlr4::ParserRuleContext {
  public:
    FuncCall_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_nameContext *func_name();
    Var_listContext *var_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncCall_stmtContext* funcCall_stmt();

  class  Assignment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ_operation();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmtContext* assignment_stmt();

  class  Loop_stmtContext : public antlr4::ParserRuleContext {
  public:
    Loop_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOP();
    ExprContext *expr();
    StmtContext *stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_stmtContext* loop_stmt();

  class  Whenall_stmtContext : public antlr4::ParserRuleContext {
  public:
    Whenall_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    When_stmtContext *when_stmt();
    OtherwiseContext *otherwise();
    std::vector<Whenif_stmtContext *> whenif_stmt();
    Whenif_stmtContext* whenif_stmt(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Whenall_stmtContext* whenall_stmt();

  class  When_stmtContext : public antlr4::ParserRuleContext {
  public:
    When_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    ExprContext *expr();
    StmtContext *stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  When_stmtContext* when_stmt();

  class  Whenif_stmtContext : public antlr4::ParserRuleContext {
  public:
    Whenif_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHENIF();
    ExprContext *expr();
    StmtContext *stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Whenif_stmtContext* whenif_stmt();

  class  OtherwiseContext : public antlr4::ParserRuleContext {
  public:
    OtherwiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OTHERWISE();
    StmtContext *stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OtherwiseContext* otherwise();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentifierContext : public ExprContext {
  public:
    IdentifierContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParensContext : public ExprContext {
  public:
    ParensContext(ExprContext *ctx);

    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubExprContext : public ExprContext {
  public:
    AddSubExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Add_sub_operationContext *add_sub_operation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberConstContext : public ExprContext {
  public:
    NumberConstContext(ExprContext *ctx);

    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelExprContext : public ExprContext {
  public:
    RelExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Rel_operationContext *rel_operation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivExprContext : public ExprContext {
  public:
    MulDivExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Mul_div_operationContext *mul_div_operation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    SignContext *sign();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_operation();
    antlr4::tree::TerminalNode *SUB_operation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  Mul_div_operationContext : public antlr4::ParserRuleContext {
  public:
    Mul_div_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_operation();
    antlr4::tree::TerminalNode *DIV_operation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mul_div_operationContext* mul_div_operation();

  class  Add_sub_operationContext : public antlr4::ParserRuleContext {
  public:
    Add_sub_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_operation();
    antlr4::tree::TerminalNode *SUB_operation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_sub_operationContext* add_sub_operation();

  class  Rel_operationContext : public antlr4::ParserRuleContext {
  public:
    Rel_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQEQ_operation();
    antlr4::tree::TerminalNode *NE_operation();
    antlr4::tree::TerminalNode *LT_operation();
    antlr4::tree::TerminalNode *LE_operation();
    antlr4::tree::TerminalNode *GT_operation();
    antlr4::tree::TerminalNode *GE_operation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rel_operationContext* rel_operation();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

