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
    return(OPSIGNO);
}

"-" {
    ECHO;
    return(OPSIGNO);
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
    return(OPMULTIPLICATIVO);
}

"/" {
    ECHO;
    return(OPMULTIPLICATIVO);
}

"==" {
    ECHO;
    return(OPIGUALDAD);
}

">" {
    ECHO;
    return(OPRELACION);
}

"<" {
    ECHO;
    return(OPRELACION);
}

"!=" {
    ECHO;
    return(OPIGUALDAD);
}

"<=" {
    ECHO;
    return(OPRELACION);
}

">=" {
    ECHO;
    return(OPRELACION);
}

"<>" {
    ECHO;
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
    printf(" \nError Léxico en Linea: %d. No se reconoce la palabra '%s'. ", yylineno, yytext);
}

%%
