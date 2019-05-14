
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
    VAR = 14, LOOP = 15, WHEN = 16, WHENIF = 17, OTHERWISE = 18, PRINTSTR = 19, 
    PRINTXT = 20, STRING = 21, RETURN = 22, IDENTIFIER = 23, INTEGER = 24, 
    FLOAT = 25, CHAR = 26, MUL_operation = 27, DIV_operation = 28, ADD_operation = 29, 
    SUB_operation = 30, EQ_operation = 31, EQEQ_operation = 32, NE_operation = 33, 
    LT_operation = 34, LE_operation = 35, GT_operation = 36, GE_operation = 37, 
    NEWLINE = 38, WS = 39
  };

  enum {
    RuleProgram = 0, RuleHeader = 1, RuleFunc_list = 2, RuleFunct = 3, RuleFunct_name = 4, 
    RuleParam_list = 5, RuleParam = 6, RuleMain = 7, RuleDeclarations = 8, 
    RuleVar_list = 9, RuleVar_id = 10, RuleType_id = 11, RuleStmt = 12, 
    RuleCompound_stmt = 13, RuleFuncCall_stmt = 14, RuleFunct_return_stmt = 15, 
    RuleAssignment_stmt = 16, RuleLoop_stmt = 17, RuleWhenall_stmt = 18, 
    RuleWhen_stmt = 19, RuleWhenif_stmt = 20, RuleOtherwise = 21, RulePrintStr = 22, 
    RulePrintTxt = 23, RuleExpr = 24, RuleVariable = 25, RuleStr_id = 26, 
    RuleDatatype = 27, RuleSign = 28, RuleMul_div_operation = 29, RuleAdd_sub_operation = 30, 
    RuleRel_operation = 31
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
  class FunctContext;
  class Funct_nameContext;
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
  class Funct_return_stmtContext;
  class Assignment_stmtContext;
  class Loop_stmtContext;
  class Whenall_stmtContext;
  class When_stmtContext;
  class Whenif_stmtContext;
  class OtherwiseContext;
  class PrintStrContext;
  class PrintTxtContext;
  class ExprContext;
  class VariableContext;
  class Str_idContext;
  class DatatypeContext;
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
    std::vector<FunctContext *> funct();
    FunctContext* funct(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_listContext* func_list();

  class  FunctContext : public antlr4::ParserRuleContext {
  public:
    FunctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    Funct_nameContext *funct_name();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *BEGIN();
    DeclarationsContext *declarations();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    Funct_return_stmtContext *funct_return_stmt();
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctContext* funct();

  class  Funct_nameContext : public antlr4::ParserRuleContext {
  public:
    Funct_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Funct_nameContext* funct_name();

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

  class  PrintTxtStmtContext : public StmtContext {
  public:
    PrintTxtStmtContext(StmtContext *ctx);

    PrintTxtContext *printTxt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopStmtContext : public StmtContext {
  public:
    LoopStmtContext(StmtContext *ctx);

    Loop_stmtContext *loop_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctReturnStmtContext : public StmtContext {
  public:
    FunctReturnStmtContext(StmtContext *ctx);

    Funct_return_stmtContext *funct_return_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompoundStmtContext : public StmtContext {
  public:
    CompoundStmtContext(StmtContext *ctx);

    Compound_stmtContext *compound_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintStrStmtContext : public StmtContext {
  public:
    PrintStrStmtContext(StmtContext *ctx);

    PrintStrContext *printStr();

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
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ_operation();
    Funct_nameContext *funct_name();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncCall_stmtContext* funcCall_stmt();

  class  Funct_return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Funct_return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    VariableContext *variable();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Funct_return_stmtContext* funct_return_stmt();

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

  class  PrintStrContext : public antlr4::ParserRuleContext {
  public:
    PrintStrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINTSTR();
    Str_idContext *str_id();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintStrContext* printStr();

  class  PrintTxtContext : public antlr4::ParserRuleContext {
  public:
    PrintTxtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINTXT();
    Str_idContext *str_id();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintTxtContext* printTxt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VariableExprContext : public ExprContext {
  public:
    VariableExprContext(ExprContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DatatypeExprContext : public ExprContext {
  public:
    DatatypeExprContext(ExprContext *ctx);

    DatatypeContext *datatype();

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
  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  Str_idContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    Str_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Str_idContext* str_id();

  class  DatatypeContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    DatatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DatatypeContext() = default;
    void copyFrom(DatatypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FloatConstContext : public DatatypeContext {
  public:
    FloatConstContext(DatatypeContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerConstContext : public DatatypeContext {
  public:
    IntegerConstContext(DatatypeContext *ctx);

    antlr4::tree::TerminalNode *INTEGER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharConstContext : public DatatypeContext {
  public:
    CharConstContext(DatatypeContext *ctx);

    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DatatypeContext* datatype();

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

