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

programa : { generaFich(); } PRINCIPAL bloque { closeInter(); };

bloque : INI_BLOQUE
	{ tsAddMark(); }
	bloque2
	FIN_BLOQUE { fputs("\n}\n",file); }
	{ tsCleanIn(); }

bloque2 : declar_de_variables_locales
	{	if(varPrinc==1){
			varPrinc=0;
			fputs("int main(){\n",file);
		}
	}
	declar_de_subprogs
	|
	declar_de_variables_locales
	{	if(varPrinc==1){
			varPrinc=0;
			fputs("int main(){\n",file);
		}
	}
	declar_de_subprogs
	sentencias ;


declar_de_subprogs : declar_de_subprogs declar_subprog
				| ;

declar_subprog : cabecera_subprograma { subProg = 1; } bloque { subProg = 0; } ;

declar_de_variables_locales : INI_VAR_LOCAL { decVar = 1; } variables_locales FIN_VAR_LOCAL { decVar = 0; }
				| ;

variables_locales : variables_locales cuerpo_declar_variables
				| cuerpo_declar_variables ;

cuerpo_declar_variables : TIPO_BASICO {tipoTMP = $1.type;tipoArray = $1.type;}{ setType($1); } lista_variables PUNTO_Y_COMA
				| error ;

cabecera_subprograma : TIPO_BASICO IDENTIFICADOR { decParam = 1; } { tsAddSubprog($2); } PARENT_IZQUIERDO cabecera_subprograma2

cabecera_subprograma2 :  lista_parametros PARENT_DERECHO { fputs(")",file); }  { tsUpdateNparam($1); nParam = 0; decParam = 0; } {$1.nDim=0;}
				| PARENT_DERECHO { fputs(")",file); }

sentencias : sentencias {decVar = 2; } sentencia
				| { decVar = 2; } sentencia ;

sentencia : {	if(decIF==1){
						{insertaCond(1);}
						fputs("{\n",file);
						decIF++;
					}
				}bloque
				| sentencia_asignacion
				| { decIF=1;insertaDesc(1);}sentencia_si{decIF = 0;eliminaDesc();}
				|  {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
						insertaDesc(2);
						insertaEtiqEntrada();
						fputs("{\n",file);
					}sentencia_mientras
				| {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}sentencia_entrada
				|  {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}sentencia_salida
				| {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}sentencia_devolver
				| {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}sentencia_hacer_hasta;

sentencia_asignacion : variable ASIGNACION  expresion PUNTO_Y_COMA {

	if($1.type!=$3.type){
		printf("Semantic Error(%d): Types are not equal.\n",line, $1.type, $3.type);
	}
	if(!equalSize($1,$3)){
		printf("Semantic Error(%d): Sizes are not equal.\n",line);
	}
	{
		$$.type =  compruebaTipos2($1,$2,$3);
		if(decIF==1){
			insertaCond(1);
			fputs("{\n",file);
			decIF++;
		}
		genera(4,$1,$2,$3,$4);
	}
} ;

sentencia_si :	SI PARENT_IZQUIERDO expresion PARENT_DERECHO	sentencia
					{	if($3.type != BOOLEANO)
							fprintf(stderr,"[Linea %d]: no hay expresion type logica \n",line);
						$$.lex = $3.lex;
						fputs("}\n",file);
						insertaEtiqElse();
						fputs("{}\n",file);
					}
					| SI PARENT_IZQUIERDO expresion PARENT_DERECHO
					  sentencia sentencia_else
					{	if($3.type != BOOLEANO)
							fprintf(stderr,"[Linea %d]: no hay expresion tipo logica \n",line);
							$$.lex = $3.lex;
					}
					;
sentencia_else : SI_NO {
	decElse=1;
	fputs("}\n",file);
	insertaEtiqElse();
	fputs("{\n",file);
	decElse=0;}
	sentencia {fputs("}\n",file);insertaEtiqSalida();fputs("{}\n",file);};


sentencia_hacer_hasta : HACER sentencia HASTA PARENT_IZQUIERDO expresion PARENT_DERECHO {insertaCond(2);}
{
	if($5.type != BOOLEANO){
		printf("Semantic Error(%d): Expression are not logic.\n", line);
	}
} ;

sentencia_mientras : MIENTRAS PARENT_IZQUIERDO expresion PARENT_DERECHO {insertaCond(2);}sentencia
						{	if($3.type != BOOLEANO)
								fprintf(stderr,"[Linea %d]: no hay expresion tipo logica \n",line);

							$$.lex = $3.lex;
							fputs("}\n",file);
							insertaGotoEntrada();
							insertaEtiqSalida();
							fputs("{}\n",file);
						}
						;

sentencia_entrada : ENTRADA CADENA PUNTO_Y_COMA {generaEntSal(1,$2);}
				|  ENTRADA CADENA COMA lista_variables PUNTO_Y_COMA {generaEntSal(1,$2);};

sentencia_salida : SALIDA lista_expresiones_o_cadena PUNTO_Y_COMA {generaEntSal(2,$2);};

sentencia_devolver : DEVOLVER expresion { tsCheckReturn($2,&$$); } PUNTO_Y_COMA ;

expresion : PARENT_IZQUIERDO expresion PARENT_DERECHO { $$.type = $2.type; $$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2; }
				| OP_UNARIO expresion {tsOpUnary($1, $2, &$$); }
				| constante {$$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; }
				| funcion {$$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; currentFunction = -1;}
				| variable {decVar = 0;}
				| OPSIGNO expresion {tsOpSign($1, $2, &$$); } %prec OP_UNARIO
				| expresion OPSIGNO expresion  {tsOpSignBin($1, $2, $3, &$$); }
				| expresion OPMULTIPLICATIVO expresion  {tsOpMul($1, $2, $3, &$$); }
				| expresion OPIGUALDAD expresion  {tsOpEqual($1, $2, $3, &$$); }
				| expresion OPRELACION expresion  {tsOpRel($1, $2, $3, &$$); }
				| expresion OPAND expresion  {tsOpAnd($1, $2, $3, &$$); }
				| expresion OPOR expresion  {tsOpOr($1, $2, $3, &$$); }
				| error ;

lista_variables : lista_variables COMA var_array   //hemos puesto var_array por variable es solo para la declaración

				| var_array { generaDecVar($1); }

				| lista_variables error var_array ;

variable : IDENTIFICADOR {

					if(decVar == 1){
						$1.nDim=0; $1.tDim1 = 0; $1.tDim2 = 0; tsAddId($1);
					} else{
						if(decParam == 0)
							tsGetId($1, &$$);
					}

				}
				| IDENTIFICADOR INI_DIM_MATRIZ lista_expresiones FIN_DIM_MATRIZ {

						if(decVar == 2) {

							tsGetId($1, &$$);

							/*if($$.tDim1 < $3.tDim1){
								printf("Semantic Error(%d): Dimension not allowed.\n",line);
							}else{*/
								$$.tDim1 = $3.tDim1;
								$$.tDim2 = $3.tDim2;
								$$.nDim = $$.nDim -1;
							//}

						}

					}
				| IDENTIFICADOR INI_DIM_MATRIZ lista_expresiones FIN_DIM_MATRIZ INI_DIM_MATRIZ lista_expresiones FIN_DIM_MATRIZ {

					if(decVar == 2) {

						tsGetId($1, &$$);
						/*printf("$3.nDim:%d\n",$3.nDim );
						printf("$6.nDim:%d\n",$6.nDim);
						if($$.tDim1 < $3.tDim1 && $$.tDim2 < $6.tDim2){
							printf("Semantic Error(%d): Dimension not allowed.\n",line);
						}else{*/
							$$.tDim1 = $3.tDim1;
							$$.tDim2 = $6.tDim2;
							$$.nDim = $$.nDim -2;
						//}

					}

				};

var_array : IDENTIFICADOR {
					if(decVar == 1){
						$1.nDim=0; $1.tDim1 = 0; $1.tDim2 = 0; tsAddId($1);
					}
				}
        | IDENTIFICADOR INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ {
						if(decVar == 1) {
							$1.nDim=1; $1.tDim1=atoi($3.lex); $1.tDim2=0; tsAddId($1);
						}
				}
				| IDENTIFICADOR INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ {
					if(decVar == 1) {
						$1.nDim=2; $1.tDim1=atoi($3.lex); $1.tDim2=atoi($6.lex); tsAddId($1);
					}
				}
				| error ;

lista_parametros : lista_parametros COMA TIPO_BASICO variable { $4.nDim=0; nParam++; setType($3); tsAddParam($4); }
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
	fprintf(stderr, "Line %d: %s\n", yylineno, msg) ;
}
