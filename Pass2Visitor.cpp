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
	param_count = 0;
	variable_type = "";
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProgram(JANTParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    //j_file.close();
    return value;
}

antlrcpp::Any Pass2Visitor::visitHeader(JANTParser::HeaderContext *ctx)
{
    program_name = ctx->IDENTIFIER()->toString();
    return visitChildren(ctx);
}

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
	j_file << endl << "; " + ctx->getText() << endl << endl;

    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";

    // Emit a field put instruction.
    j_file << "\t\tputstatic\t" << program_name
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
    j_file << "L00" << start << ":" << endl;

    auto value = visit(ctx->expr());
    //visit(ctx->Compound_stmt());
    j_file << "\t\tgoto\tL00" << start << endl;
    j_file << "L00" << curr << ":" << endl;

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
	  //j_file << "L00" << loopcount << ":" << endl;
	  end= to_string(loopcount++);
	  auto value = visitChildren(ctx);
	  j_file << "L00" << end << ":" << endl;
	  return value;
}

antlrcpp::Any Pass2Visitor::visitWhen_stmt(JANTParser::When_stmtContext *ctx){
	  j_file << endl
				 << "; " + ctx->getText() << endl
				 << endl;
	  curr= to_string(loopcount);
	  loopcount++;
	  auto value = visitChildren(ctx->expr());
	  j_file << "\t\tgoto\tL00" << end << endl;
	  j_file << "L00" << curr << ":" << endl;

   return value;
}

antlrcpp::Any Pass2Visitor::visitWhenif_stmt(JANTParser::Whenif_stmtContext *ctx){
	j_file << endl
			 << "; " + ctx->getText() << endl
			 << endl;
	  curr= to_string(loopcount);
	  loopcount++;
	  auto value = visitChildren(ctx);
	  j_file << "\t\tgoto\tL00" << end << endl;
	  j_file << "L00" << curr << ":" << endl;

  return value;
}

antlrcpp::Any Pass2Visitor::visitOtherwise(JANTParser::OtherwiseContext *ctx){
    j_file  << endl
    		<< "; " + ctx->getText() <<endl
			<< endl;
    //curr= to_string(loopcount);
    //loopcount++;
	auto value = visitChildren(ctx);
	//j_file << "L00" << curr << ":" << endl;
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
    j_file << "\t\t" << opcode << endl;

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
    j_file << "\t\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitVariableExpr(JANTParser::VariableExprContext *ctx)
{
    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    TypeSpec *type = ctx->type;

    string type_indicator = (type == Predefined::integer_type) ? "I"
                          : (type == Predefined::real_type)    ? "F"
						  : (type == Predefined::char_type)    ? "C"
                          :                                      "?";

    // Emit a field get instruction.
    j_file << "\t\tgetstatic\t" << program_name
           << "/" << variable_name << " " << type_indicator << endl;

    return visitChildren(ctx);
}

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

antlrcpp::Any Pass2Visitor::visitIntegerConst(JANTParser::IntegerConstContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\t\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitFloatConst(JANTParser::FloatConstContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\t\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitRelExpr(JANTParser::RelExprContext *ctx){

	auto value = visit(ctx->expr(0));
	TypeSpec *type1 = ctx->expr(0)->type;

	cout << "===VisitRelExpr" + ctx->getText() << endl;

	visit(ctx->expr(1));
	TypeSpec *type2 = ctx->expr(1)->type;
	//TypeSpec *type1 = ctx->expr(0)->type;
	//TypeSpec *type2 = ctx->expr(1)->type;

	string rel = ctx->rel_operation()->getText();

	if (rel == "<")
	{
		j_file << "\t\tif_icmpge\tL00" << curr << endl;
	}
	else if (rel == "<=")
	{
		j_file << "\t\tif_icmpgt\tL00" << curr << endl;
	}
	else if (rel == ">")
	{
		j_file << "\t\tif_icmple\tL00" << curr << endl;
	}
	else if (rel == ">=")
	{
		j_file << "\t\tif_icmplt\tL00" << curr << endl;
	}
	else if (rel == "!=")
	{
		j_file << "\t\tif_icmpne\tL00" << curr << endl;
	}
	else if (rel == "==")
	{
		j_file << "\t\tif_icmpeq\tL00" << curr << endl;
	}

	//j_file << "\t\tL00" << loopcount++ << endl;
	//j_file << "\t\ticonst_0" << endl;
	//j_file << "\t\tgoto\tL00" << loopcount << endl;
	//j_file << "L00" << loopcount-1 << ":" << endl;
	//j_file << "\t\ticonst_1" << endl;
	//j_file << "L00" << loopcount << ":" << endl;
	//j_file << "\t\tifeq\tL00" << ++loopcount << endl;

	return value;
}

antlrcpp::Any Pass2Visitor::visitPrintStr(JANTParser::PrintStrContext *ctx){
	j_file << endl << ';' << ctx->getText() << endl;

	auto value = visit(ctx->str_id());
	//auto value = visitChildren(ctx);

	j_file << "\t\tgetstatic\t java/lang/System/out Ljava/io/PrintStream;" << endl;

	j_file << "\t\tldc\t" << ctx->str_id()->getText() << endl;
	j_file << "\t\ticonst_" << ctx->expr().size() << endl;
	j_file << "\t\tanewarray \tjava/lang/Object" << endl;

	for(int i=0; i<(ctx->expr().size()); i++){
		j_file << "\tdup\t" <<endl;
		j_file << "\ticonst_" << i << "\t" <<endl;
		//j_file << "\tgetstatic \t FormatTest/n " << "I" << endl;

		visit(ctx->expr(i));
		TypeSpec *type = ctx->expr(i)->type;
		if(type == Predefined::integer_type){
			j_file << "\t\tgetstatic \t FormatTest/" << ctx->expr(i)->getText() << " I" << endl;
			//j_file << "\t\t ldc " << ctx->expr(i)->depth() << endl;
			j_file << "\t\tinvokestatic\t java/lang/Integer.valueOf(I)Ljava/lang/Integer;" << endl;}
		else if(type == Predefined::real_type){
			j_file << "\t\tgetstatic \t FormatTest/" << ctx->expr(i)->getText() << " F" << endl;
			j_file << "\t\tinvokestatic\t java/lang/Float.valueOf(F)Ljava/lang/Float;" << endl;}
		else if(type == Predefined::char_type){
			j_file << "\t\tgetstatic \t FormatTest/" << ctx->expr(i)->getText() << " C" << endl;
			j_file << "\t\tinvokestatic\t java/lang/Char.valueOf(C)Ljava/lang/Char;" << endl;}


		j_file << "\taastore\t" << endl;

	}

	j_file << "\tinvokevirtual\t java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" << endl;
	j_file << "\tpop\t" << endl;


	return value;
}

antlrcpp::Any Pass2Visitor::visitPrintTxt(JANTParser::PrintTxtContext *ctx){


	j_file << endl << ';' << ctx->getText() << endl;

	j_file << "\tgetstatic\t java/lang/System/out Ljava/io/PrintStream;" << endl;
	auto value = visitChildren(ctx);
	j_file << "\tldc\t" << ctx->str_id()->getText() << endl;
	j_file << "\tinvokevirtual java/io/PrintStream.println(Ljava/lang/String;)V" << endl;

	return value;
}

antlrcpp::Any Pass2Visitor::visitFunct(JANTParser::FunctContext *ctx){
	  FnctVars.clear();
	  FnctVarTypes.clear();

	  auto value = visitChildren(ctx);
	  j_file << "\n\n.method\tpublic static";

	  if(ReturnType == "V"){
		  j_file << "\treturn" << endl;
	  }

	  j_file <<".limit stack 16" << endl;
	  j_file << ".limit locals 16" << endl;

	  j_file << ".end method" << endl;

	  param_count++;

	  return value;
}

antlrcpp::Any Pass2Visitor::visitFuncCall_stmt(JANTParser::FuncCall_stmtContext *ctx){
	string FunctName = ctx->funct_name()->getText() ;
	string variable;
	string parameters = "";
	TypeSpec *type_1;
	auto value = 0;

	for(int i=1; (ctx->expr(i) != NULL); i++){
		value = visit(ctx->expr(i));
		type_1 = ctx->expr(i)->type;
		if(type_1 == Predefined::integer_type){
			parameters += "I";
		}
		else if(type_1 == Predefined::integer_type){
			parameters += "F";
		}
	}

	j_file << "\tinvokestatic\t" + program_name + "/" + FunctName + "(" + parameters + ")";

	type_1 = ctx->expr(0)->type;
	parameters.clear();

	if(type_1 == Predefined::integer_type){
		j_file << "I" << endl;
		parameters = "I";
	}
	else if(type_1 == Predefined::real_type){
		j_file << "F" << endl;
		parameters = "F";
	}
	else{
		j_file << "V" << endl;
	}

	if(ctx->variable() != NULL){
		variable = ctx->variable()->IDENTIFIER()->toString();
		j_file << "\tputstatic\t" << program_name << "/" << variable << " " << parameters;
	}
	j_file << endl << endl;

	return value;
}

antlrcpp::Any Pass2Visitor::visitFunct_name(JANTParser::Funct_nameContext *ctx){
   string Funct_Name = ctx->IDENTIFIER()->toString();
   j_file << Funct_Name;
   auto value = visitChildren(ctx);

   return value;
}

antlrcpp::Any Pass2Visitor::visitFunct_return_stmt(JANTParser::Funct_return_stmtContext *ctx){
	auto value = visitChildren(ctx);
	if(ReturnType == "I"){
		j_file << "\tireturn" << endl;
	}
	else if (ReturnType == "F"){
		j_file << "\tfreturn" << endl;
	}
	return value;
}

antlrcpp::Any Pass2Visitor::visitParam_list(JANTParser::Param_listContext *ctx){
	j_file << "(";
	auto value = visitChildren(ctx);
	j_file << ")";
	return value;
}

antlrcpp::Any Pass2Visitor::visitParam(JANTParser::ParamContext *ctx){
	param_count++;

	if(ctx->type_id()->IDENTIFIER()->toString() == "int"){
		variable_type = "I";
	}
	else if(ctx->type_id()->IDENTIFIER()->toString() == "real"){
		variable_type = "F";
	}
	else{
		variable_type = "?";
	}

	auto value = visitChildren(ctx);
	string Current_Type;

	if(ctx->type_id()->IDENTIFIER()->toString() == "int"){
		Current_Type = "I";
	}
	else if(ctx->type_id()->IDENTIFIER()->toString() == "real"){
		Current_Type = "F";
	}
	else{
		Current_Type = "?";
	}

	j_file << Current_Type;
}
