#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "target/generated-sources/antlr4/JANTBaseVisitor.h"
#include "antlr4-runtime.h"
#include "target/generated-sources/antlr4/JANTVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public JANTBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;

    TypeSpec *type;
    string type_indicator;
    int indexer;
    string program_name;
	string name;
    ofstream j_file;


public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(JANTParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(JANTParser::HeaderContext *ctx) override;
    antlrcpp::Any visitDeclarations(JANTParser::DeclarationsContext *ctx) override;
    //antlrcpp::Any visitDecl(JANTParser::DeclContext *ctx) override;
    antlrcpp::Any visitVar_list(JANTParser::Var_listContext *ctx) override;
    antlrcpp::Any visitVar_id(JANTParser::Var_idContext *ctx) override;
    antlrcpp::Any visitType_id(JANTParser::Type_idContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(JANTParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(JANTParser::MulDivExprContext *ctx) override;
    //antlrcpp::Any visitVariableExpr(JANTParser::VariableExprContext *ctx) override;
    //antlrcpp::Any visitSignedNumberExpr(JANTParser::SignedNumberExprContext *ctx) override;
    //antlrcpp::Any visitSignedNumber(JANTParser::SignedNumberContext *ctx) override;
    //antlrcpp::Any visitUnsignedNumberExpr(JANTParser::UnsignedNumberExprContext *ctx) override;
    //antlrcpp::Any visitIntegerConst(JANTParser::IntegerConstContext *ctx) override;
    //antlrcpp::Any visitFloatConst(JANTParser::FloatConstContext *ctx) override;
    antlrcpp::Any  visitParens(JANTParser:: ParensContext *ctx) override;

    //antlrcpp::Any visitRelExpr(JANTParser::RelExprContext *ctx) override; //new
    //antlrcpp::Any visitNumber(JANTParser::NumberContext *ctx) override; //new // assume same as signed number

    //antlrcpp::Any visitFunc_list(JANTParser::Func_listContext *ctx) override; //new
    //antlrcpp::Any visitFunc(JANTParser::FuncContext *ctx) override; //new
    //antlrcpp::Any visitFunc_name(JANTParser::Func_nameContext *ctx) override; //new
    //antlrcpp::Any visitParam_list(JANTParser::Param_listContext *ctx) override; //new
    //antlrcpp::Any visitParam(JANTParser::ParamContext *ctx) override; //new

    //antlrcpp::Any visitAssignmentStmt(JANTParser::AssignmentStmtContext *ctx) override;
    antlrcpp::Any visitNumberConst(JANTParser::NumberConstContext *ctx) override;
};

#endif /* PASS1VISITOR_H_ */
