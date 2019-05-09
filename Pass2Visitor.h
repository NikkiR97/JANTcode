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

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

    antlrcpp::Any visitProgram(JANTParser::ProgramContext *ctx) override;
    //antlrcpp::Any visitHeader(JANTParser::HeaderContext *ctx) override; //no header in ours
    antlrcpp::Any visitMain(JANTParser::MainContext *ctx) override;
    antlrcpp::Any visitStmt(JANTParser::StmtContext *ctx); //override
    antlrcpp::Any visitAssignment_stmt(JANTParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(JANTParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(JANTParser::MulDivExprContext *ctx) override;
    //antlrcpp::Any visitVariableExpr(JANTParser::VariableExprContext *ctx) override; //expr locals
    //antlrcpp::Any visitSign(JANTParser::SignContext *ctx) override; //expr locals
    //antlrcpp::Any visitInteger(JANTParser::IntegerConst *ctx) override; //number locals
    //antlrcpp::Any visitFloatConst(JANTParser::FloatConstContext *ctx) override; //number locals
    //antlrcpp::Any visitLoopStmt(JANTParser::LoopStmtContext *ctx) override;
    //antlrcpp::Any visitCondStmt(JANTParser::CondStmtContext *ctx) override;
    //antlrcpp::Any visitSign(JANTParser::SignContext *ctx) override; //expr locals

    //antlrcpp::Any visitNumber(JANTParser::NumberContext *ctx) override; // new
    antlrcpp::Any visitRelExpr(JANTParser::RelExprContext *ctx) override; //new

    //antlrcpp::Any visitEmptyStmt(JANTParser::EmptyStmtContext *ctx) override; //new

    //antlrcpp::Any visitCompound_stmt(JANTParser::Compound_stmtContext *ctx) override; //new

    //antlrcpp::Any visitFuncCall_stmt(JANTParser::FuncCall_stmtContext *ctx) override; //new
    antlrcpp::Any visitLoop_stmt(JANTParser::Loop_stmtContext *ctx) override; //new
    //antlrcpp::Any visitWhen_stmt(JANTParser::When_stmtContext *ctx) override; //new

    antlrcpp::Any visitWhenall_stmt(JANTParser::Whenall_stmtContext *ctx) override;
    antlrcpp::Any visitWhen_stmt(JANTParser::When_stmtContext *ctx) override;
    antlrcpp::Any visitWhenif_stmt(JANTParser::Whenif_stmtContext *ctx) override;
    antlrcpp::Any visitOtherwise(JANTParser::OtherwiseContext *ctx) override;

    //antlrcpp::Any visitPrintStrStmt(JANTParser::PrintStrStmtContext *ctx) override;
    antlrcpp::Any visitPrintTxt(JANTParser::PrintTxtContext *ctx) override;
};


#endif /* PASS2VISITOR_H_ */
