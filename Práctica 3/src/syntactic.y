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
#include "y.tab.h"

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
%token CONST_CARACTER
%token IDENTIFICADOR
%token PUNTO

%%

// Producciones

//############

programa : PRINCIPAL bloque ;

bloque : INI_BLOQUE
	declar_de_variables_locales
	declar_de_subprogs
	FIN_BLOQUE
				|
	INI_BLOQUE
	declar_de_variables_locales
	declar_de_subprogs
	sentencias
	FIN_BLOQUE ;

declar_de_subprogs : declar_de_subprogs declar_subprog
        		| ;

declar_subprog : cabecera_subprograma bloque ;

declar_de_variables_locales : INI_VAR_LOCAL variables_locales FIN_VAR_LOCAL
				| ;

variables_locales : variables_locales cuerpo_declar_variables
                | cuerpo_declar_variables ;

cuerpo_declar_variables : TIPO_BASICO lista_variables PUNTO_Y_COMA
				| error ;

cabecera_subprograma : TIPO_BASICO variable PARENT_IZQUIERDO lista_parametros PARENT_DERECHO
        		| TIPO_BASICO variable PARENT_IZQUIERDO PARENT_DERECHO
				| error ;

sentencias : sentencias sentencia
                | sentencia ;

sentencia : bloque
                | sentencia_asignacion
                | sentencia_si
                | sentencia_mientras
                | sentencia_entrada
                | sentencia_salida
                | sentencia_devolver
                | sentencia_hacer_hasta;

sentencia_asignacion : var_array ASIGNACION expresion PUNTO_Y_COMA ;

sentencia_si : SI PARENT_IZQUIERDO expresion PARENT_DERECHO sentencia
        		|  SI PARENT_IZQUIERDO expresion PARENT_DERECHO sentencia SI_NO sentencia ;

sentencia_hacer_hasta : HACER sentencia HASTA PARENT_IZQUIERDO expresion PARENT_DERECHO ;

sentencia_mientras : MIENTRAS PARENT_IZQUIERDO expresion PARENT_DERECHO sentencia ;

sentencia_entrada : ENTRADA CADENA PUNTO_Y_COMA
				|  ENTRADA CADENA COMA lista_variables PUNTO_Y_COMA ;

sentencia_salida : SALIDA lista_expresiones_o_cadena PUNTO_Y_COMA ;

sentencia_devolver : DEVOLVER expresion PUNTO_Y_COMA ;

expresion : PARENT_IZQUIERDO expresion PARENT_DERECHO
                | OP_UNARIO expresion
                | constante
                | funcion
				| IDENTIFICADOR
				| OPSIGNO expresion %prec OP_UNARIO
                | expresion OPSIGNO expresion
                | expresion OPMULTIPLICATIVO expresion
                | expresion OPIGUALDAD expresion
                | expresion OPRELACION expresion
                | expresion OPAND expresion
                | expresion OPOR expresion ;

lista_variables : lista_variables COMA var_array   //hemos puesto var_array por variable es solo para la declaración
		        | var_array ;

variable : IDENTIFICADOR
                | IDENTIFICADOR INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ
                | IDENTIFICADOR INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ INI_DIM_MATRIZ CONST_ENTERO_SIN_SIGNO FIN_DIM_MATRIZ ;

var_array : IDENTIFICADOR
                | IDENTIFICADOR INI_DIM_MATRIZ lista_expresiones FIN_DIM_MATRIZ
				| error ;

lista_parametros : lista_parametros COMA TIPO_BASICO variable
        		| TIPO_BASICO variable ;

/*lista_entero : lista_entero COMA const_entero
                | const_entero ;

lista_booleano : lista_booleano COMA CONST_LOGICA
                | CONST_LOGICA ;

lista_flotante : lista_flotante COMA CONST_FLOTANTE
                | CONST_FLOTANTE ;

lista_caracter : lista_caracter COMA CONST_CARACTER
                | CONST_CARACTER ;*/

lista_expresiones_o_cadena : lista_expresiones_o_cadena COMA expresion_o_cadena
		        | expresion_o_cadena;
expresion_o_cadena : expresion
		        | CADENA ;

lista_expresiones : lista_expresiones COMA expresion
				| expresion;

constante : CONST_ENTERO_SIN_SIGNO
				| const_matriz
		        | CONST_LOGICA
		        | const_flotante_sin_signo
		        | CONST_CARACTER ;

funcion : IDENTIFICADOR PARENT_IZQUIERDO lista_expresiones PARENT_DERECHO
				| IDENTIFICADOR PARENT_IZQUIERDO PARENT_DERECHO ;

const_matriz :  INI_BLOQUE lista_expresiones FIN_BLOQUE ;

/*matriz_entero :  INI_BLOQUE lista_entero FIN_BLOQUE ;

matriz_booleano :  INI_BLOQUE lista_booleano FIN_BLOQUE ;

matriz_flotante :  INI_BLOQUE lista_flotante FIN_BLOQUE ;

matriz_caracter :  INI_BLOQUE lista_caracter FIN_BLOQUE ;
*/
const_flotante_sin_signo : CONST_ENTERO_SIN_SIGNO PUNTO CONST_ENTERO_SIN_SIGNO ; //Se cree que no es necesario al tener const_entero -, +, o vacío

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
