#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "target/generated-sources/antlr4/JANTBaseVisitor.h"
#include "antlr4-runtime.h"
#include "target/generated-sources/antlr4/JANTVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public JANTBaseVisitor
{
private:
	string program_name;
	ostream& j_file;
    int loopcount;
    string curr;
    string end;

    vector<string> FnctVars;
    vector<string> FnctVarTypes;
    int param_count;
    string ReturnType;
    string variable_type;

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

    antlrcpp::Any visitProgram(JANTParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(JANTParser::HeaderContext *ctx) override; //no header in ours
    antlrcpp::Any visitMain(JANTParser::MainContext *ctx) override;
    antlrcpp::Any visitStmt(JANTParser::StmtContext *ctx); //override
    antlrcpp::Any visitAssignment_stmt(JANTParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(JANTParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(JANTParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(JANTParser::VariableExprContext *ctx) override; //expr locals
    //antlrcpp::Any visitSign(JANTParser::SignContext *ctx) override; //expr locals
    antlrcpp::Any visitIntegerConst(JANTParser::IntegerConstContext *ctx) override; //number locals
    antlrcpp::Any visitFloatConst(JANTParser::FloatConstContext *ctx) override; //number locals
    //antlrcpp::Any visitLoopStmt(JANTParser::LoopStmtContext *ctx) override;
    //antlrcpp::Any visitCondStmt(JANTParser::CondStmtContext *ctx) override;
    //antlrcpp::Any visitSign(JANTParser::SignContext *ctx) override; //expr locals

    //antlrcpp::Any visitNumber(JANTParser::NumberContext *ctx) override; // new
    antlrcpp::Any visitRelExpr(JANTParser::RelExprContext *ctx) override; //new

    //antlrcpp::Any visitEmptyStmt(JANTParser::EmptyStmtContext *ctx) override; //new

    //antlrcpp::Any visitCompound_stmt(JANTParser::Compound_stmtContext *ctx) override; //new

    antlrcpp::Any visitFunct(JANTParser::FunctContext *ctx) override; //Function_def
    antlrcpp::Any visitFuncCall_stmt(JANTParser::FuncCall_stmtContext *ctx) override; //FunctionCall
    antlrcpp::Any visitFunct_name(JANTParser::Funct_nameContext *ctx) override; //FuncName
    antlrcpp::Any visitFunct_return_stmt(JANTParser::Funct_return_stmtContext *ctx) override; //RetType
    antlrcpp::Any visitParam_list(JANTParser::Param_listContext *ctx) override; //Function_def_parms
	antlrcpp::Any visitParam(JANTParser::ParamContext *ctx) override; //FuncParam



    antlrcpp::Any visitLoop_stmt(JANTParser::Loop_stmtContext *ctx) override; //new
    //antlrcpp::Any visitWhen_stmt(JANTParser::When_stmtContext *ctx) override; //new

    antlrcpp::Any visitWhenall_stmt(JANTParser::Whenall_stmtContext *ctx) override; //new
    antlrcpp::Any visitWhen_stmt(JANTParser::When_stmtContext *ctx) override; //new
    antlrcpp::Any visitWhenif_stmt(JANTParser::Whenif_stmtContext *ctx) override;//new
    antlrcpp::Any visitOtherwise(JANTParser::OtherwiseContext *ctx) override; //new

    antlrcpp::Any visitPrintStr(JANTParser::PrintStrContext *ctx) override; //new
    antlrcpp::Any visitPrintTxt(JANTParser::PrintTxtContext *ctx) override; //new
    //antlrcpp::Any visitVariable(JANTParser::VariableContext *ctx) override;

};


#endif /* PASS2VISITOR_H_ */
