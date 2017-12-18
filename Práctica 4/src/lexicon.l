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
// lexicon.l
//
// Fichero Lex para crear el analizador léxico
//
////////////////////////////////////////////////////////////////////////////////

// Declaraciones

#include <stdlib.h>
#include <string.h>


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
    yylval.type = ENTERO;
    return(TIPO_BASICO);
}

"booleano" {
    ECHO;
    yylval.type = BOOLEANO;
    return(TIPO_BASICO);
}

"caracter" {
    ECHO;
    yylval.type = CARACTER;
    return(TIPO_BASICO);
}

"flotante" {
    ECHO;
    yylval.type = FLOTANTE;
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
    yylval.attr = 0;
    return(OPSIGNO);
}

"-" {
    ECHO;
    yylval.attr = 1;
    return(OPSIGNO);
}

"&" {
    ECHO;
    yylval.attr = 0;
    return(OP_UNARIO);
}

"~" {
    ECHO;
    yylval.attr = 1;
    return(OP_UNARIO);
}

"!" {
    ECHO;
    yylval.attr = 2;
    return(OP_UNARIO);
}

"*" {
    ECHO;
    yylval.attr = 0;
    return(OPMULTIPLICATIVO);
}

"/" {
    ECHO;
    yylval.attr = 1;
    return(OPMULTIPLICATIVO);
}

"==" {
    ECHO;
    yylval.attr = 0;
    return(OPIGUALDAD);
}

"!=" {
    ECHO;
    yylval.attr = 1;
    return(OPIGUALDAD);
}

">" {
    ECHO;
    yylval.attr = 0;
    return(OPRELACION);
}

"<" {
    ECHO;
    yylval.attr = 1;
    return(OPRELACION);
}

"<=" {
    ECHO;
    yylval.attr = 2;
    return(OPRELACION);
}

">=" {
    ECHO;
    yylval.attr = 3;
    return(OPRELACION);
}

"<>" {
    ECHO;
    yylval.attr = 4;
    return(OPRELACION);
}

"&&" {
    ECHO;
    return(OPAND);
}

"||" {
    ECHO;
    return(OPOR);
}

"verdadero" {
    ECHO;
    yylval.attr = 0;
    yylval.lex = strdup(yytext);
    return(CONST_LOGICA);
}

"falso" {
    ECHO;
    yylval.attr = 1;
    yylval.lex = strdup(yytext);
    return(CONST_LOGICA);
}

\'[^\']\' {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 0;
    return(CONST_CARACTER);
}

{entero} {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 1;
    return(CONST_ENTERO_SIN_SIGNO);
}

{real} {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 2;
    return(CONST_FLOTANTE);
}

\"[^\"]+\" {
    ECHO;
    yylval.lex = strdup(yytext);
    yylval.attr = 3;
    return(CADENA);
}

[ \t] {
    ECHO;
}

\n {
    ECHO;
    ++line;
}

[\n\r] {
    ECHO;
}

({letra}|_)({letra}|{digito}|_)* {
    ECHO;
    yylval.lex = strdup(yytext);
    return(IDENTIFICADOR);
}

. {
    printf(" \nError Léxico en Linea: %d. No se reconoce la palabra '%s'. ", yylineno, yytext);
}

%%
