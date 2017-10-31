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
// syntactic.y
//
// Fichero Yacc para crear el analizador sintáctico
//
////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

//#define YYERROR_VERBOSE

//############
int linea_actual = 1 ;
int yydebug=1;
//############

%}

%error-verbose

// A continuación declaramos los nombres simbólicos de los tokens.
// byacc se encarga de asociar a cada uno un código.

//############
%left OPOR
%left OPAND
%left OPRELACIONAL
%left SUMRES
%left OPBINARIO
%right OPUNARIO

%token ASIGNACION
%token CORIZQ
%token CORDER
%token TIPOBASICO
%token CONSTENTERA
%token CONSTLOGICA
%token CONSTREAL
%token CONSTCARACTER
%token CONSTCADENA
%token COMA
%token PARDER
%token PARIZQ
%token PUNTOYCOMA
%token INICIOBLOQUE
%token FINBLOQUE
%token VAR
%token FINVAR
%token SI
%token SINO
%token MIENTRAS
%token LEER
%token ESCRIBIR
%token DEVOLVER
%token REPETIR
%token HASTA
%token PRINCIPAL
%token IDENT
//############

%%

// Producciones

//############

programa : PRINCIPAL bloque ;

bloque : INICIOBLOQUE
	declar_variables_locales
	declar_subprogs
	sentencias
	FINBLOQUE ;

declar_subprogs : declar_subprogs declar_subprog | ;

declar_subprog : cabecera_subprograma bloque ;

declar_variables_locales : VAR variables_locales FINVAR | ;

variables_locales : variables_locales cuerpo_declar_variables
		| cuerpo_declar_variables  ;

cuerpo_declar_variables : TIPOBASICO lista_variables PUNTOYCOMA
		| error;

lista_variables : variable COMA lista_variables
		| variable error lista_variables
		| variable ;

variable : IDENT declar_matriz
	 | IDENT ;

declar_matriz : CORIZQ CONSTENTERA CORDER
		| CORIZQ CONSTENTERA COMA CONSTENTERA CORDER ;

cabecera_subprograma : tipo_retorno IDENT PARIZQ lista_parametros PARDER ;

tipo_retorno : TIPOBASICO declar_matriz
		| TIPOBASICO ;

lista_parametros : TIPOBASICO variable COMA lista_parametros
		| TIPOBASICO variable error lista_parametros
		| TIPOBASICO variable ;

sentencias : sentencia sentencias
		| ;

sentencia : bloque
		| asignacion PUNTOYCOMA
		| si
		| mientras
		| entrada PUNTOYCOMA
		| salida PUNTOYCOMA
		| devolver PUNTOYCOMA
		| repetir_hasta PUNTOYCOMA ;

asignacion : variable ASIGNACION expresion ;


si : SI PARIZQ expresion PARDER sentencia SINO sentencia
		| SI PARIZQ expresion PARDER sentencia ;

mientras : MIENTRAS PARIZQ expresion PARDER sentencia ;

entrada : LEER lista_variables ;

salida : ESCRIBIR lista_expresiones_cad ;

devolver : DEVOLVER expresion ;

repetir_hasta : REPETIR sentencia HASTA PARIZQ expresion PARDER ;

expresion : PARIZQ expresion PARDER
		| OPUNARIO expresion
		| SUMRES expresion %prec OPUNARIO
		| expresion OPBINARIO expresion
		| expresion OPOR expresion
		| expresion OPRELACIONAL expresion
		| expresion OPAND expresion
		| expresion SUMRES expresion
		| variable
		| constante
		| llamada_funcion
		| error;

lista_expresiones : expresion COMA lista_expresiones
		| expresion ;

lista_expresiones_cad : exp_cad COMA lista_expresiones_cad
		| exp_cad ;

exp_cad : expresion | CONSTCADENA ;

constante : CONSTENTERA
		| constante_matriz
		| CONSTLOGICA
		| CONSTREAL
		| CONSTCARACTER ;

llamada_funcion : IDENT PARIZQ lista_expresiones PARDER
		| IDENT PARIZQ PARDER ;

constante_matriz : INICIOBLOQUE auxiliar_matriz FINBLOQUE ;

auxiliar_matriz : agregado_entero
			| agregado_real
			| agregado_logico
			| agregado_caracter ;

agregado_entero : INICIOBLOQUE fila_agregado_entero FINBLOQUE ;

fila_agregado_entero : fila_agregado_entero PUNTOYCOMA lista_entera
				| lista_entera ;

lista_entera : lista_entera COMA CONSTENTERA
			| CONSTENTERA ;

agregado_real : INICIOBLOQUE fila_agregado_real FINBLOQUE ;

fila_agregado_real : fila_agregado_real PUNTOYCOMA lista_real
				| lista_real ;

lista_real : lista_real COMA CONSTREAL
			| CONSTREAL ;

agregado_logico : INICIOBLOQUE fila_agregado_logico FINBLOQUE ;

fila_agregado_logico : fila_agregado_logico PUNTOYCOMA lista_logica
				| lista_logica ;

lista_logica : lista_logica COMA CONSTLOGICA
			| CONSTLOGICA ;

agregado_caracter : INICIOBLOQUE fila_agregado_caracter FINBLOQUE;

fila_agregado_caracter : fila_agregado_caracter PUNTOYCOMA lista_caracter
				| lista_caracter ;

lista_caracter : lista_caracter COMA CONSTCARACTER
			| CONSTCARACTER ;

//############

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
	fprintf(stderr,"[Linea %d]:%s\n", linea_actual, msg) ;
}
