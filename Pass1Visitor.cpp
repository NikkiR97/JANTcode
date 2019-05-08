#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    symtab_stack->set_program_id(program_id);
    type = NULL;
    type_indicator = "";
    indexer = 0;

    //cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProgram(JANTParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);

//    cout << "=== visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);
    return value;
}

antlrcpp::Any Pass1Visitor::visitHeader(JANTParser::HeaderContext *ctx)
{
//    cout << "=== visitHeader: " + ctx->getText() << endl;

    string program_name = ctx->IDENTIFIER()->toString();

    program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                              symtab_stack->push());
    symtab_stack->set_program_id(program_id);

    // Create the assembly output file.
    j_file.open(program_name + ".j");
    if (j_file.fail())
    {
            cout << "***** Cannot open assembly file." << endl;
            exit(-99);
    }

    // Emit the program header.
    j_file << ".class public " << program_name << endl;
    j_file << ".super java/lang/Object" << endl;

    // Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitDeclarations(JANTParser::DeclarationsContext *ctx)
{
    cout << "=== visitDeclarations: " << ctx->getText() << endl;

    auto value = visitChildren(ctx);

    // Emit the class constructor.
    j_file << endl;
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;

    return value;
}

/*antlrcpp::Any Pass1Visitor::visitDecl(JANTParser::DeclContext *ctx)
{
//    cout << "=== visitDecl: " + ctx->getText() << endl;

    j_file << "\n; " << ctx->getText() << "\n" << endl;
    return visitChildren(ctx);
}*/

antlrcpp::Any Pass1Visitor::visitVar_list(JANTParser::Var_listContext *ctx)
{
	cout << "=== visitVarList: " + ctx->getText() << endl;
	//cout <<  "~~~~Entering visitVar_list." << endl;
    variable_id_list.resize(0);
    //cout <<  "~~~~Exiting visitVar_list." << endl;


    /*auto value = visitChildren(ctx);
    int counter=0;

   for(SymTabEntry *id : variable_id_list){
    	id-> set_typespec(type);

    	if(symtab_stack->get_current_nesting_level() == 1)
    		j_file <<  ".field private static" << id-> get_name() << " " << type_indicator << endl;
    	counter=counter+1;
    }

    indexer = counter+1;*/

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVar_id(JANTParser::Var_idContext *ctx)
{
    cout << "=== visitVarId: " + ctx->getText() << endl;
	//cout <<  "<<<Entering visitVarId." << endl;

    string variable_name = ctx->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id_list.push_back(variable_id);
    //if(symtab_stack->get_current_nesting_level() == 2)
    	//variable_func_list.push_back(variable_name);

    //out << "<<<Exiting visitVarId: " + ctx->getText() << endl;
    variable_id_list.back()-> set_typespec(type);
    j_file <<  ".field private static" << variable_id_list.back()-> get_name() << " " << type_indicator << endl;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitType_id(JANTParser::Type_idContext *ctx)
{
    //cout << "=== visitTypeId: " + ctx->getText() << endl;
	cout << "=== visitTypeId" << endl;

    //TypeSpec *type;
    //string type_indicator;

	//will overwrite type_name and type_indicator everytime so by the time it reaches the varList method, assingments can be done correctly.

    string type_name = ctx->IDENTIFIER()->toString();
    if (type_name == "Integer")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name == "real")
    {
        type = Predefined::real_type;
        type_indicator = "F";
    }
    else
    {
        type = nullptr;
        type_indicator = "?";
    }

    cout << ">>>ExitTypeid" << endl;

    /*for (SymTabEntry *id : variable_id_list) {
        id->set_typespec(type);

        // Emit a field declaration.
        cout << "Printing Variables. " << endl;
        j_file << ".field private static "
               << id->get_name() << " " << type_indicator << endl;
    }
    cout<<"leaving visit type_id"<<endl;
    return visitChildren(ctx);*/
}

antlrcpp::Any Pass1Visitor::visitAddSubExpr(JANTParser::AddSubExprContext *ctx)
{
//    cout << "=== visitAddSubExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitMulDivExpr(JANTParser::MulDivExprContext *ctx)
{
//    cout << "=== visitMulDivExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

/*antlrcpp::Any Pass1Visitor::visitVariableExpr(JANTParser::VariableExprContext *ctx)
{
//    cout << "=== visitVariableExpr: " + ctx->getText() << endl;

    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);

    ctx->type = variable_id->get_typespec();
    return visitChildren(ctx);
}*/

/*antlrcpp::Any Pass1Visitor::visitSignedNumberExpr(JANTParser::SignedNumberExprContext *ctx)
{
//    cout << "=== visitSignedNumberExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->signedNumber()->type;
    return value;
}*/

/*antlrcpp::Any Pass1Visitor::visitSignedNumber(JANTParser::SignedNumberContext *ctx)
{
//    cout << "=== visitSignedNumber: " + ctx->getText() << endl;

    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}*/

/*antlrcpp::Any Pass1Visitor::visitUnsignedNumberExpr(JANTParser::UnsignedNumberExprContext *ctx)
{
//    cout << "=== visitUnsignedNumberExpr: " + ctx->getText() << endl;

    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}*/

/*antlrcpp::Any Pass1Visitor::visitIntegerConst(JANTParser::IntegerConstContext *ctx)
{
//    cout << "=== visitIntegerConst: " + ctx->getText() << endl;

    ctx->type = Predefined::integer_type;
    return visitChildren(ctx);
}*/

/*antlrcpp::Any Pass1Visitor::visitFloatConst(JANTParser::FloatConstContext *ctx)
{
//    cout << "=== visitFloatConst: " + ctx->getText() << endl;

    ctx->type = Predefined::real_type;
    return visitChildren(ctx);
}*/

antlrcpp::Any Pass1Visitor::visitParens(JANTParser::ParensContext *ctx)
{
//    cout << "=== visitParenExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}
/*
antlrcpp::Any Pass1Visitor::visitNumber(JANTParser::NumberContext *ctx)
{
//    cout << "=== visitUnsignedNumberExpr: " + ctx->getText() << endl;

	auto value = visit(ctx->number());
	ctx->type = ctx->number()->type;
	return value;
}*/

//antlrcpp::Any Pass1Visitor::visitFunc(JANTParser::FuncContext *ctx){


//}

/*virtual antlrcpp::Any Pass1Visitor::visitAssignmentStmt(JANTParser::AssignmentStmtContext *ctx){

    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";

    string var_name = ctx->varible()->IDENTIFIER()->toString();

    if(symtab_stack -> get_current_nesting_level() == 2){
    	for(int i=0; i<variable_func_list.size; i++){
    		if(variable_func_list[i] == var_name){
    			j_file << "\t" << (char)tolower(type_indicator[0]) << "store_" <<i << endl;
    		}
    	}
    }


    return value;

}*/
