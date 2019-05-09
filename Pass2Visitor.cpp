#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;
using namespace std;

Pass2Visitor::Pass2Visitor(ostream& j_file): program_name(""), j_file(j_file)
{
	loopcount = 0;
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProgram(JANTParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    //j_file.close();
    return value;
}

/*antlrcpp::Any Pass2Visitor::visitHeader(JANTParser::HeaderContext *ctx)
{
    program_name = ctx->IDENTIFIER()->toString();
    return visitChildren(ctx);
}*/

antlrcpp::Any Pass2Visitor::visitMain(JANTParser::MainContext *ctx)
{
    // Emit the main program header.
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitStmt(JANTParser::StmtContext *ctx)
{
    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitAssignment_stmt(JANTParser::Assignment_stmtContext *ctx)
{
	cout << "===VisitAssignmentStmt" <<endl;
    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->variable()->IDENTIFIER()->toString()
           << " " << type_indicator << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitLoop_stmt(JANTParser::Loop_stmtContext *ctx)
{
    string start = to_string(loopcount);
    loopcount++;
    string end = to_string(loopcount);
    curr = end;
    loopcount++;
    j_file << endl << "; " + ctx->getText() << endl << endl;

    j_file << "\tLoop" << start<< ":" << endl;

    auto value = visit(ctx->expr());
    //visit(ctx->Compound_stmt());
    j_file << "\tgoto\tLoop" << start << endl;
    j_file << "\tL" << curr << ":" << endl;

    return value;
}

/*antlrcpp::Any Pass2Visitor::visitWhen_stmt(JANTParser::When_stmtContext *ctx)
{
	cout << "===VisitWhenStmt" <<endl;
	j_file << endl << "; " + ctx->getText() << endl;
    end = to_string(loopcount++);
    auto value = visitChildren(ctx);
    j_file << "\tWhen" << end << ":" << endl;
    return value;
}*/

antlrcpp::Any Pass2Visitor::visitWhenall_stmt(JANTParser::Whenall_stmtContext *ctx){
	  j_file << endl
			 << "; " + ctx->getText() << endl
			 << endl;
	  end= to_string(loopcount++);
	  auto value = visitChildren(ctx);
	  j_file << "\tL" << end << ":" << endl;
	  return value;
}

antlrcpp::Any Pass2Visitor::visitWhen_stmt(JANTParser::When_stmtContext *ctx){
	  j_file << endl
				 << "; " + ctx->getText() << endl
				 << endl;
		  curr= to_string(loopcount++);
		  loopcount++;
		  auto value = visitChildren(ctx);
		  j_file << "\tgoto\tL" << end << ":" << endl;
		  j_file << "\tL" << curr << ":" << endl;

   return value;
}

antlrcpp::Any Pass2Visitor::visitWhenif_stmt(JANTParser::Whenif_stmtContext *ctx){
	j_file << endl
			 << "; " + ctx->getText() << endl
			 << endl;
	  curr= to_string(loopcount++);
	  loopcount++;
	  auto value = visitChildren(ctx);
	  j_file << "\tgoto\tL" << end << ":" << endl;
	  j_file << "\tL" << curr << ":" << endl;

  return value;
}

antlrcpp::Any Pass2Visitor::visitOtherwise(JANTParser::OtherwiseContext *ctx){
    j_file  << endl
    		<< "; " + ctx->getText() <<endl
			<< endl;
	auto value = visitChildren(ctx);
	return value;
}

antlrcpp::Any Pass2Visitor::visitAddSubExpr(JANTParser::AddSubExprContext *ctx)
{
    cout << "===VisitAddSubExpr_2" + ctx->getText() << endl;

	auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);    string op = ctx->add_sub_operation()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitMulDivExpr(JANTParser::MulDivExprContext *ctx)
{
	cout << "===VisitMulDivExpr_2" + ctx->getText() << endl;

	auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->mul_div_operation()->getText();
    string opcode;

    if (op == "*")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idpv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit a multiply or divide instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

/*antlrcpp::Any Pass2Visitor::visitVariableExpr(JANTParser::VariableExprContext *ctx)
{
    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    TypeSpec *type = ctx->type;

    string type_indicator = (type == Predefined::integer_type) ? "I"
                          : (type == Predefined::real_type)    ? "F"
                          :                                      "?";

    // Emit a field get instruction.
    j_file << "\tgetstatic\t" << program_name
           << "/" << variable_name << " " << type_indicator << endl;

    return visitChildren(ctx);
}*/

/*antlrcpp::Any Pass2Visitor::visitSignedNumber(JANTParser::SignedNumberContext *ctx)
{
    auto value = visitChildren(ctx);
    TypeSpec *type = ctx->number()->type;

    if (ctx->sign()->children[0] == ctx->sign()->SUB_OP())
    {
        string opcode = (type == Predefined::integer_type) ? "ineg"
                      : (type == Predefined::real_type)    ? "fneg"
                      :                                      "?neg";

        // Emit a negate instruction.
        j_file << "\t" << opcode << endl;
    }

    return value;
}*/

/*antlrcpp::Any Pass2Visitor::visitIntegerConst(JANTParser::IntegerConstContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}*/

/*antlrcpp::Any Pass2Visitor::visitFloatConst(JANTParser::FloatConstContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}*/

antlrcpp::Any Pass2Visitor::visitRelExpr(JANTParser::RelExprContext *ctx){

	auto value = visit(ctx->expr(0));
	//TypeSpec *type1 = ctx->expr(0)->type;

	cout << "===VisitRelExpr" + ctx->getText() << endl;

	//visit(ctx->expr(1));
	//TypeSpec *type2 = ctx->expr(1)->type;
	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

	string rel = ctx->rel_operation()->getText();

	if (rel == "<")
	{
		j_file << "\tif_icmpge\tL" << curr << endl;
	}
	else if (rel == "<=")
	{
		j_file << "\tif_icmpgt\tL" << curr << endl;
	}
	else if (rel == ">")
	{
		j_file << "\tif_icmple\tL" << curr << endl;
	}
	else if (rel == ">=")
	{
		j_file << "\tif_icmplt\tL" << curr << endl;
	}
	else if (rel == "!=")
	{
		j_file << "\tif_icmpne\tL" << curr << endl;
	}
	else if (rel == "==")
	{
		j_file << "\tif_icmpeq\tL" << curr << endl;
	}

	return value;
}

/*antlrcpp::Any Pass2Visitor::visitPrintStrStmt(JANTParser::PrintStrStmtContext *ctx){


	return value;
}*/

antlrcpp::Any Pass2Visitor::visitPrintTxt(JANTParser::PrintTxtContext *ctx){


	j_file << endl << ';' << ctx->getText() << endl;

	j_file << "\tgetstatic\t java/lang/System/out Ljava/io/PrintStream;" << endl;
	auto value = visitChildren(ctx);
	//j_file << "\t ldc \t" << ctx->expr(0)->getText() << endl;
	j_file << "\tinvokevirtual java/io/PrintStream.println(ljaval/lang/String;)V" << endl;

	return value;
}

