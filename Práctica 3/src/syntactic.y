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



//############

%%

// Producciones

//############

programa : PRINCIPAL bloque ;

bloque : INI_BLOQUE
	declar_de_variables_locales
	declar_de_subprogs
	sentencias
	FIN_BLOQUE ;


Programa> : Cabecera_programa bloque

bloque : Inicio_de_bloque Declar_de_variables_locales Declar_de_subprogs Sentencias Fin_de_bloque

Declar_de_subprogs : Declar_de_subprogs Declar_subprog
        		|
Declar_subprog : Cabecera_subprograma bloque

Declar_de_variables_locales : Marca_ini_declar_variables Variables_locales Marca_fin_declar_variables
				|

Cabecera_programa : principal

Inicio_de_bloque : {

Fin_de_bloque : }

Marca_ini_declar_variables : ini_var_local

Marca_fin_declar_variables : fin_var_local

Variables_locales : Variables_locales Cuerpo_declar_variables
                | Cuerpo_declar_variables

Cuerpo_declar_variables : tipo_basico lista_variables ;

Cabecera_subprograma : tipo_basico variable ( lista_parametros )
        		| tipo_basico variable ( )

Sentencias : Sentencias Sentencia
                | Sentencia

Sentencia : bloque
                | sentencia_asignacion
                | sentencia_si
                | sentencia_mientras
                | sentencia_entrada
                | sentencia_salida
                | sentencia_devolver
                | sentencia_hacer_hasta

sentencia_asignacion : var_array = expresion ;

sentencia_si : si ( expresion ) sentencia
        		|  ( expresion ) sentencia si_no sentencia

sentencia_hacer_hasta : hacer sentencia hasta ( expresion )

sentencia_mientras : mientras ( expresion ) sentencia

sentencia_entrada : leer lista_variables ;

sentencia_salida : escribir lista_expresiones_o_cadena ;

sentencia_devolver : devolver expresion ;

expresion : ( expresion )
                | op_unario expresion
                | expresion op_binario expresion
                | constante
                | funcion

tipo_basico : entero
		        | booleano
		        | caracter
		        | flotante

lista_variables : lista_variables , var_array   //hemos puesto var_array por variable es solo para la declaración
		        | var_array

identificador : "cadena que empieza por _ o una letra"

variable : identificador
                | identificador [ const_entero_sin_signo ]
                | identificador [ const_entero_sin_signo ] [ const_entero_sin_signo ]

var_array : identificador
                | identificador [ expresion ]
                | identificador [ expresion, expresion ]

lista_parametros : lista_parametros , tipo_basico variable
        		| tipo_basico variable

lista_entero : lista_entero , const_entero
                | const_entero

lista_booleano : lista_booleano , const_booleano
                | const_booleano

lista_flotante : lista_flotante , const_flotante
                | const_flotante

<lista_caracter : <lista_caracter , <const_caracter
                | <const_caracter

<lista_expresiones_o_cadena : <lista_expresiones_o_cadena , <expresion
		        | <lista_expresiones_o_cadena , <cadena>
		        | <expresion>
		        | <cadena>

<cadena> : "cualquier secuencia de caracteres"

<op_unario> : &
		        | +
		        | -
		        | ~
		        | !

<op_binario> : +
		        | -
		        | *
		        | /
		        | ==
		        | !=
		        | <=
		        | >=
		        | <
		        | >
		        | &&
		        | ||

<signo> : -
                | +
                |

<constante> : <const_entero>
                |<const_entero_sin_signo>
		        | <const_matriz>
		        | <const_booleano>
		        | <const_flotante>
		        | <const_flotante_sin_signo>
		        | <const_caracter>

<funcion> : <identificador> ( <lista_expresiones_o_cadena> ) ;
				| <identificador ( ) ;

<vector> : <tipo_basico> <identificador> [ <const_entero_sin_signo> ] ;
				| <tipo_basico> <identificador> [ <const_entero_sin_signo> , <const_entero_sin_signo> ] ;

<const_entero_sin_signo> : <const_entero_sin_signo> [0-9]
                | [0-9]

<const_entero> : <signo> <const_entero_sin_signo>

<const_matriz> :  <matriz_entero>
                | <matriz_booleano>
                | <matriz_flotante>
                | <matriz_caracter>

<matriz_entero> :  { <lista_entero> }

<matriz_booleano> :  { <lista_booleano> }

<matriz_flotante> :  { <lista_flotante> }

<matriz_caracter :  { <lista_caracter> }

<const_booleano> : verdadero
				| falso

<const_flotante> : <const_entero> . <const_entero_sin_signo>

<const_flotante_sin_signo> : <const_entero_sin_signo> . <const_entero_sin_signo> //Se cree que no es necesario al tener const_entero -, +, o vacío

<const_caracter> : [a-z]
				| [A-Z]






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
