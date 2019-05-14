
#include "../../../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from JANT.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "JANTVisitor.h"


/**
 * This class provides an empty implementation of JANTVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  JANTBaseVisitor : public JANTVisitor {
public:

  virtual antlrcpp::Any visitProgram(JANTParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(JANTParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_list(JANTParser::Func_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunct(JANTParser::FunctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunct_name(JANTParser::Funct_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_list(JANTParser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(JANTParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain(JANTParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarations(JANTParser::DeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_list(JANTParser::Var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_id(JANTParser::Var_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_id(JANTParser::Type_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStmt(JANTParser::CompoundStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStmt(JANTParser::AssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoopStmt(JANTParser::LoopStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhenStmt(JANTParser::WhenStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncCallStmt(JANTParser::FuncCallStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctReturnStmt(JANTParser::FunctReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(JANTParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintStrStmt(JANTParser::PrintStrStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintTxtStmt(JANTParser::PrintTxtStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStmt(JANTParser::EmptyStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_stmt(JANTParser::Compound_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncCall_stmt(JANTParser::FuncCall_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunct_return_stmt(JANTParser::Funct_return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(JANTParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop_stmt(JANTParser::Loop_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhenall_stmt(JANTParser::Whenall_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhen_stmt(JANTParser::When_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhenif_stmt(JANTParser::Whenif_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOtherwise(JANTParser::OtherwiseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintStr(JANTParser::PrintStrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintTxt(JANTParser::PrintTxtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableExpr(JANTParser::VariableExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatypeExpr(JANTParser::DatatypeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParens(JANTParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(JANTParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelExpr(JANTParser::RelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(JANTParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(JANTParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStr_id(JANTParser::Str_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerConst(JANTParser::IntegerConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatConst(JANTParser::FloatConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharConst(JANTParser::CharConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(JANTParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_operation(JANTParser::Mul_div_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_operation(JANTParser::Add_sub_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel_operation(JANTParser::Rel_operationContext *ctx) override {
    return visitChildren(ctx);
  }


};

