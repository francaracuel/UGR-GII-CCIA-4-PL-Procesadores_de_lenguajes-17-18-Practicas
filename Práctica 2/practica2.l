%{

// Declaraciones

#include <stdlib.h>
#include <string.h>
#include "constants.h"


%}

%option yylineno
%option noyywrap

letra [a-zA-Z]
digito [0-9]
entero {digito}+
real {entero}.{entero}

%%


"principal" {
    ECHO;
    return(PRINCIPAL);
}

"{" {
    ECHO;
    return(INI_BLOQUE);
}

"}" {
    ECHO;
    return(FIN_BLOQUE);
}

";" {
    ECHO;
    return(PUNTO_Y_COMA);
}

"," {
    ECHO;
    return(COMA);
}

"(" {
    ECHO;
    return(PARENT_IZQUIERDO);
}

")" {
    ECHO;
    return(PARENT_DERECHO);
}

"ini_var_local" {
    ECHO;
    return(INI_VAR_LOCAL);
}

"fin_var_local" {
    ECHO;
    return(FIN_VAR_LOCAL);
}

"=" {
    ECHO;
    return(ASIGNACION);
}

"[" {
    ECHO;
    return(INI_DIM_MATRIZ);
}

"]" {
    ECHO;
    return(FIN_DIM_MATRIZ);
}

"si" {
    ECHO;
    return(SI);
}

"si_no" {
    ECHO;
    return(SI_NO);
}

"hacer" {
    ECHO;
    return(HACER);
}

"hasta" {
    ECHO;
    return(HASTA);
}

"mientras" {
    ECHO;
    return(MIENTRAS);
}

"devolver" {
    ECHO;
    return(DEVOLVER);
}

"entero" {
    ECHO;
    return(TIPO_BASICO);
}

"booleano" {
    ECHO;
    return(TIPO_BASICO);
}

"caracter" {
    ECHO;
    return(TIPO_BASICO);
}

"flotante" {
    ECHO;
    return(TIPO_BASICO);
}

"leer" {
    ECHO;
    return(ENTRADA);
}

"escribir" {
    ECHO;
    return(SALIDA);
}

"+" {
    ECHO;
    return(SIGNO);
}

"-" {
    ECHO;
    return(SIGNO);
}

"&" {
    ECHO;
    return(OP_UNARIO);
}

"~" {
    ECHO;
    return(OP_UNARIO);
}

"!" {
    ECHO;
    return(OP_UNARIO);
}

"*" {
    ECHO;
    return(OP_BINARIO);
}

"/" {
    ECHO;
    return(OP_BINARIO);
}

"==" {
    ECHO;
    return(OP_BINARIO);
}

"!=" {
    ECHO;
    return(OP_BINARIO);
}

"<=" {
    ECHO;
    return(OP_BINARIO);
}

">=" {
    ECHO;
    return(OP_BINARIO);
}

"<>" {
    ECHO;
    return(OP_BINARIO);
}

"&&" {
    ECHO;
    return(OP_BINARIO);
}

"||" {
    ECHO;
    return(OP_BINARIO);
}

"verdadero" {
    ECHO;
    return(CONST_LOGICA);
}

"falso" {
    ECHO;
    return(CONST_LOGICA);
}

\"[^\"]+\" {
    ECHO;
    return(CADENA);
}

{entero} {
    ECHO;
    return(CONST_ENTERO_SIN_SIGNO);
}

{real} {
    ECHO;
    return(CONST_FLOTANTE);
}

\'[^\']\' {
    ECHO;
    return(CONST_CARACTER);
}


[ \t] {
    ECHO;
}

[\n\r] {
    ECHO;
}

({letra}|_)({letra}|{digito}|_)* {
    ECHO;
    return(IDENTIFICADOR);
}

. {
    printf(" Linea: %d. No se reconoce la palabra '%s'. ", yylineno, yytext);
}

%%

/* Procedimientos de usuario */

int main (int argc, char** argv) {

    // Se comprueba que se recibe 1 argumento (nombre del fichero fuente)
	if (argc <= 1) {

        printf("\nError al ejecutar la aplicación...\n");
        printf("Uso: %s nombre_fichero_fuente\n", argv[0]);

		exit(-1);

	}

    // Se abre el fichero recibido por parámetro
    yyin = fopen(argv[1], "r");

    // Si "yyin" es nulo no se ha podido abrir el fichero
    if (yyin == NULL) {

        printf ("\nError al abrir el fichero %s\n", argv[1]);

        exit (-2);

    }

    // Invoca al analizador léxico para comenzar el análisis
	int an = yylex();

    // Hasta que no termine de analizar todo el fichero no finalizará la
    // ejecución
	while (an != 0) {

		printf("__%d__ ", an);
        //printf("%s ", yytext());
		an = yylex();

	}

	exit(1);

}
