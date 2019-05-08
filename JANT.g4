grammar JANT; 

@header {
#include "../../../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program : START header (|func_list) main TERMINATE ;
header :  IDENTIFIER ';' ;


func_list  : func (func)* ;

func	   : FUNC func_name '(' param_list ')' compound_stmt;
func_name  : IDENTIFIER ;
param_list : param (',' param)*;
param	   : (|'Ref') variable 'As' type_id;

main   :  MAIN compound_stmt ;

declarations : type_id var_list ;
var_list     : var_id ( ',' var_id )* ;
var_id       : IDENTIFIER ;
type_id      : IDENTIFIER ;




stmt : compound_stmt    # compoundStmt
     | assignment_stmt (|';') # assignmentStmt
     | loop_stmt   (|';')# loopStmt 
     | whenall_stmt   (|';')  # whenStmt
     | funcCall_stmt (|';')	# funcCallStmt
     | declarations	(|';')	#declaration
     |                 # emptyStmt
     ;
     
   
compound_stmt : BEGIN stmt ';' ( stmt ';')* END ;     
funcCall_stmt   : func_name '(' var_list ')';     
assignment_stmt : variable '=' expr ;
loop_stmt  		: LOOP expr stmt ;

whenall_stmt    : when_stmt (whenif_stmt)* otherwise;
when_stmt       : WHEN expr stmt;
whenif_stmt     : WHENIF expr stmt;
otherwise		: OTHERWISE stmt;



variable : IDENTIFIER ;

expr locals [ TypeSpec *type = nullptr ]
	 : expr mul_div_operation expr     # mulDivExpr
     | expr add_sub_operation expr     # addSubExpr
     | expr rel_operation expr         # relExpr
     | number                   # numberConst
     | IDENTIFIER               # identifier
     | '(' expr ')'             # parens
     ;
     
number locals [ TypeSpec *type = nullptr ] 
	 : sign? INTEGER ;
sign   : '+' | '-' ;

    
mul_div_operation : MUL_operation | DIV_operation ;
add_sub_operation : ADD_operation | SUB_operation ;
rel_operation     : EQEQ_operation | NE_operation | LT_operation | LE_operation | GT_operation | GE_operation ;

PROGRAM : 'PROGRAM' ;
MAIN : 'MAIN' ;
FUNC: 'FUNC' ;
START : 'START' ;
TERMINATE : 'TERMINATE' ;
BEGIN   : '{' ;
END     : '}' ;
VAR     : 'VAR' ;
LOOP   : 'LOOP' ;
WHEN    : 'WHEN' ;
WHENIF	: 'WHENIF' ;
OTHERWISE : 'OTHERWISE' ; 

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9] ;
CHAR       : [a-z] ;

MUL_operation :   '*' ;
DIV_operation :   '/' ;
ADD_operation :   '+' ;
SUB_operation :   '-' ;

EQ_operation  : '=' ;
EQEQ_operation: '==';
NE_operation  : '!=' ;
LT_operation  : '<' ;
LE_operation  : '<=' ;
GT_operation  : '>' ;
GE_operation  : '>=' ;

NEWLINE : '\r'? '\n' -> skip ;
WS      : [ \t]+ -> skip ;
