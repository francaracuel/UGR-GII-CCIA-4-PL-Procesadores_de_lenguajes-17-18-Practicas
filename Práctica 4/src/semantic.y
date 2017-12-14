%{

////////////////////////////////////////////////////////////////////////////////
//
// Ismael Sánchez García
// Juan Manuel Fajardo Sarmiento
// Francisco Javier Caracuel Beltrán
//
// PL - Procesadores de Lenguajes - CCIA
//
// ETSIIT - UGR
//
// Curso 2017-2018
//
// semantic.y
//
// Fichero Yacc para crear el analizador semántico
//
////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantic.h"

// La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
// fuente de lex (prueba.l)
void yyerror(char * msg);

// La siguiente variable se usará para conocer el numero de la línea
// que se esta leyendo en cada momento. También es posible usar la variable
// ’yylineno’ que también nos muestra la línea actual. Para ello es necesario
// invocar a flex con la opción ’-l’ (compatibilidad con lex).

//############
//#define YYDEBUG 1
//############

#define YYERROR_VERBOSE

%}

%error-verbose

// A continuación declaramos los nombres simbólicos de los tokens.
// byacc se encarga de asociar a cada uno un código.

%left OPOR
%left OPAND
%left OPIGUALDAD
%left OPRELACION
%left OPSIGNO
%left OPMULTIPLICATIVO
%right OP_UNARIO

%token PRINCIPAL
%token INI_BLOQUE
%token FIN_BLOQUE
%token PUNTO_Y_COMA
%token COMA
%token PARENT_IZQUIERDO
%token PARENT_DERECHO
%token INI_VAR_LOCAL
%token FIN_VAR_LOCAL
%token ASIGNACION
%token INI_DIM_MATRIZ
%token FIN_DIM_MATRIZ
%token SI
%token SI_NO
%token HACER
%token HASTA
%token MIENTRAS
%token DEVOLVER
%token TIPO_BASICO
%token ENTRADA
%token SALIDA
%token CONST_LOGICA
%token CADENA
%token CONST_ENTERO_SIN_SIGNO
%token CONST_FLOTANTE
%token CONST_CARACTER
%token IDENTIFICADOR

%%

// Producciones

//############

programa : PRINCIPAL bloque ;

bloque : INI_BLOQUE
	{ tsAddMark(); }
	declar_de_variables_locales
	declar_de_subprogs
	FIN_BLOQUE
	{ tsCleanIn(); }
	|
	INI_BLOQUE
	{ tsAddMark(); }
	declar_de_variables_locales
	declar_de_subprogs
	sentencias
	FIN_BLOQUE
	{ tsCleanIn(); } ;

declar_de_subprogs : declar_de_subprogs declar_subprog
				| ;

declar_subprog : cabecera_subprograma { subProg = 1; } bloque { subProg = 0; } ;

declar_de_variables_locales : INI_VAR_LOCAL { decVar = 1; } variables_locales FIN_VAR_LOCAL { decVar = 0; }
				| ;

variables_locales : variables_locales cuerpo_declar_variables
				| cuerpo_declar_variables ;

cuerpo_declar_variables : TIPO_BASICO { setType($1); } lista_variables PUNTO_Y_COMA
				| error ;

cabecera_subprograma : TIPO_BASICO {$1.nDim=0;} variable { decParam = 1; tsAddSubprog($2); } PARENT_IZQUIERDO lista_parametros PARENT_DERECHO { tsUpdateNparam($1); nParam = 0; decParam = 0; }
				| TIPO_BASICO variable { decParam = 1; tsAddSubprog($2); } PARENT_IZQUIERDO PARENT_DERECHO
				| error ;

sentencias : { decVar = 2; } sentencias sentencia
				| sentencia ;

sentencia : bloque
				| sentencia_asignacion
				| sentencia_si
				| sentencia_mientras
				| sentencia_entrada
				| sentencia_salida
				| sentencia_devolver
				| sentencia_hacer_hasta;

sentencia_asignacion : var_array ASIGNACION expresion PUNTO_Y_COMA {
	if($1.type!=$3.type){
		printf("Error(%d): Los types de la parte izquierda %d y derecha %d no coinciden.\n",line, $1.type, $3.type);
	}
	if(!equalSize($1,$3)){
		printf("Error(%d): La parte izquierda y la parte derecha deben tener el mismo tamanyo.\n",line);
	}
} ;

sentencia_si : SI PARENT_IZQUIERDO expresion PARENT_DERECHO sentencia {
	if($3.type != BOOLEANO){
		printf("Error(%d): La expresion no es de type logico.\n", line);
	}
}
				|  SI PARENT_IZQUIERDO expresion PARENT_DERECHO sentencia SI_NO sentencia {
					if($3.type != BOOLEANO){
						printf("Error(%d): La expresion no es de type logico.\n", line);
					}
				} ;

sentencia_hacer_hasta : HACER sentencia HASTA PARENT_IZQUIERDO expresion PARENT_DERECHO {
	if($5.type != BOOLEANO){
		printf("Error(%d): La expresion no es de type logico.\n", line);
	}
} ;

sentencia_mientras : MIENTRAS PARENT_IZQUIERDO expresion PARENT_DERECHO sentencia {
	if($3.type != BOOLEANO){
		printf("Error(%d): La expresion no es de type logico.\n", line);
	}
};

sentencia_entrada : ENTRADA CADENA PUNTO_Y_COMA
				|  ENTRADA CADENA COMA lista_variables PUNTO_Y_COMA ;

sentencia_salida : SALIDA lista_expresiones_o_cadena PUNTO_Y_COMA ;

sentencia_devolver : DEVOLVER expresion { tsCheckReturn($2,&$$); } PUNTO_Y_COMA ;

expresion : PARENT_IZQUIERDO expresion PARENT_DERECHO { $$.type = $2.type; $$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2; }
				| OP_UNARIO expresion {tsOpUnary($1, $2, &$$); }
				| constante { $$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; }
				| funcion {$$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; currentFunction = -1;}
				| IDENTIFICADOR { decVar = 0;}
				| OPSIGNO expresion {tsOpSign($1, $2, &$$); } %prec OP_UNARIO
				| expresion OPSIGNO expresion { tsOpSignBin($1, $2, $3, &$$); }
				| expresion OPMULTIPLICATIVO expresion {tsOpMul($1, $2, $3, &$$); }
				| expresion OPIGUALDAD expresion {tsOpEqual($1, $2, $3, &$$); }
				| expresion OPRELACION expresion {tsOpRel($1, $2, $3, &$$); }
				| expresion OPAND expresion {tsOpAnd($1, $2, $3, &$$); }
				| expresion OPOR expresion {tsOpOr($1, $2, $3, &$$); }
				| error ;

lista_variables : lista_variables COMA var_array   //hemos puesto var_array por variable es solo para la declaración
				| var_array
				| lista_variables error var_array ;

variable : IDENTIFICADOR {
					if(decVar == 1){
						$1.nDim=0; $1.tDim1 = 0; $1.tDim2 = 0; tsAddId($1);
					} else{
						tsGetId($1, &$$);
					}
				}
				| IDENTIFICADOR INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ {
						if(decVar == 1) {
							$1.nDim=$2.nDim; $1.tDim1=$2.tDim1; $1.tDim2=$2.tDim2; tsAddId($1);
						} else {
							if (decVar == 2){
								tsGetId($1, &$$);
								if($$.nDim == $2.nDim){
									$$.nDim = 0;
									$$.tDim1 = 0;
									$$.tDim2 = 0;
								} else{
									if($$.nDim > $2.nDim){
										if($2.nDim == 0) {
											$$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2;
										} else{
											printf("Error(%d): Dimension not allowed.\n",line);
										}
									} else{
										printf("Error(%d): Dimension not allowed.\n",line); }
								}
							} else {
								tsGetId($1, &$$);
							}
						}
					} {$$.nDim = 1; $$.tDim1=atoi($2.lex); $$.tDim2 = 0; }
				| IDENTIFICADOR INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ {
						if(decVar == 1) {
							$1.nDim=$2.nDim; $1.tDim1=$2.tDim1; $1.tDim2=$2.tDim2; tsAddId($1);
						} else {
							if (decVar == 2){
								tsGetId($1, &$$);
								if($$.nDim == $2.nDim){
									$$.nDim = 0;
									$$.tDim1 = 0;
									$$.tDim2 = 0;
								} else{
									if($$.nDim > $2.nDim){
										if($2.nDim == 0) {
											$$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2;
										} else{
											printf("Error(%d): Dimension not allowed.\n",line);
										}
									} else{
										printf("Error(%d): Dimension not allowed.\n",line); }
								}
							} else {
								tsGetId($1, &$$);
							}
						}
					} {$$.nDim = 2; $$.tDim1=atoi($2.lex); $$.tDim2=atoi($4.lex); } ;

var_array : IDENTIFICADOR
                | IDENTIFICADOR INI_DIM_MATRIZ lista_expresiones FIN_DIM_MATRIZ
				| error ;

lista_parametros : lista_parametros COMA TIPO_BASICO variable
				| TIPO_BASICO variable { $2.nDim=0; nParam++; setType($1); tsAddParam($2); }
				| lista_parametros error TIPO_BASICO variable ;

lista_expresiones_o_cadena : lista_expresiones_o_cadena COMA expresion_o_cadena { nParam++; tsCheckParam($1, nParam); }
				| expresion_o_cadena { nParam = 1; tsCheckParam($1, nParam); } ;

expresion_o_cadena : expresion
				| CADENA ;

lista_expresiones : lista_expresiones COMA expresion
				| expresion;

constante : CONST_ENTERO_SIN_SIGNO { $$.type = ENTERO; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
				| const_matriz { aux = 1; $$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; }
				| CONST_LOGICA { $$.type = BOOLEANO; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
				| CONST_FLOTANTE { $$.type = FLOTANTE; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
				| CONST_CARACTER  { $$.type = CARACTER; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; } ;

funcion : IDENTIFICADOR PARENT_IZQUIERDO lista_expresiones PARENT_DERECHO { tsFunctionCall($1, &$$); }
				| IDENTIFICADOR PARENT_IZQUIERDO PARENT_DERECHO { tsFunctionCall($1, &$$); } ;

const_matriz :  INI_BLOQUE lista_expresiones FIN_BLOQUE { $$.type = $2.type; $$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2;} ;

%%

// Aqui incluimos el fichero generado por el ’lex’ que implementa la función
// ’yylex’

#ifdef DOSWINDOWS /* Variable de entorno que indica la plataforma */
#include "lexyy.c"
#else
#include "lex.yy.c"
#endif

// Se debe implementar la función yyerror. En este caso simplemente escribimos
// el mensaje de error en pantalla
void yyerror( char *msg ){
	fprintf(stderr, "Línea %d: %s\n", yylineno, msg) ;
}
