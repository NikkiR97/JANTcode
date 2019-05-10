
#include "../../../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from JANT.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "JANTParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by JANTParser.
 */
class  JANTVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by JANTParser.
   */
    virtual antlrcpp::Any visitProgram(JANTParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitHeader(JANTParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitFunc_list(JANTParser::Func_listContext *context) = 0;

    virtual antlrcpp::Any visitFunc(JANTParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitFunc_name(JANTParser::Func_nameContext *context) = 0;

    virtual antlrcpp::Any visitParam_list(JANTParser::Param_listContext *context) = 0;

    virtual antlrcpp::Any visitParam(JANTParser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitMain(JANTParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitDeclarations(JANTParser::DeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitVar_list(JANTParser::Var_listContext *context) = 0;

    virtual antlrcpp::Any visitVar_id(JANTParser::Var_idContext *context) = 0;

    virtual antlrcpp::Any visitType_id(JANTParser::Type_idContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStmt(JANTParser::CompoundStmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(JANTParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitLoopStmt(JANTParser::LoopStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhenStmt(JANTParser::WhenStmtContext *context) = 0;

    virtual antlrcpp::Any visitFuncCallStmt(JANTParser::FuncCallStmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(JANTParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPrintStrStmt(JANTParser::PrintStrStmtContext *context) = 0;

    virtual antlrcpp::Any visitPrintTxtStmt(JANTParser::PrintTxtStmtContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStmt(JANTParser::EmptyStmtContext *context) = 0;

    virtual antlrcpp::Any visitCompound_stmt(JANTParser::Compound_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFuncCall_stmt(JANTParser::FuncCall_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(JANTParser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitLoop_stmt(JANTParser::Loop_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhenall_stmt(JANTParser::Whenall_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhen_stmt(JANTParser::When_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhenif_stmt(JANTParser::Whenif_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOtherwise(JANTParser::OtherwiseContext *context) = 0;

    virtual antlrcpp::Any visitPrintStr(JANTParser::PrintStrContext *context) = 0;

    virtual antlrcpp::Any visitPrintTxt(JANTParser::PrintTxtContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(JANTParser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitDatatypeExpr(JANTParser::DatatypeExprContext *context) = 0;

    virtual antlrcpp::Any visitParens(JANTParser::ParensContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(JANTParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitRelExpr(JANTParser::RelExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(JANTParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitVariable(JANTParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitStr_id(JANTParser::Str_idContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConst(JANTParser::IntegerConstContext *context) = 0;

    virtual antlrcpp::Any visitFloatConst(JANTParser::FloatConstContext *context) = 0;

    virtual antlrcpp::Any visitCharConst(JANTParser::CharConstContext *context) = 0;

    virtual antlrcpp::Any visitSign(JANTParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_operation(JANTParser::Mul_div_operationContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_operation(JANTParser::Add_sub_operationContext *context) = 0;

    virtual antlrcpp::Any visitRel_operation(JANTParser::Rel_operationContext *context) = 0;


};

