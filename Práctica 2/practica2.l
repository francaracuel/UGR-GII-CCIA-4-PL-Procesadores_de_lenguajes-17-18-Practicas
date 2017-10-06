%{
#include <stdlib.h>
#include <string.h>
#include "constants.h"

%}

%option yylineno
%option noyywrap

%%

"repetir"		{  ECHO; return(REPETIR);}
"hasta"			{  ECHO; return(HASTA);}
"leer"			{  ECHO; return(LEER);}
"escribir"		{  ECHO; return(ESCRIBIR);}
"mientras"		{  ECHO; return(MIENTRAS);}
"si"			{  ECHO; return(SI);}
"sino"			{  ECHO; return(SINO);}
"="				{  ECHO; return(ASIGNACION);}
"{"				{   ECHO; return(INICIOBLOQUE);}
"}"				{   ECHO; return(FINBLOQUE);}
"principal"		{  ECHO; return(PRINCIPAL);}
"var"			{  ECHO; return(VAR);}
"finvar"		{  ECHO; return(FINVAR);}
"devolver"		{  ECHO; return(DEVOLVER);}
"entero"		{  ECHO; return(TIPOBASICO);}
"real"			{  ECHO; return(TIPOBASICO);}
"caracter"		{ ECHO; return(TIPOBASICO);}
"logico"		{ ECHO; return(TIPOBASICO);}
"["				{  ECHO; return(CORIZQ);}
"]"				{  ECHO; return(CORDER);}
","				{  ECHO; return(COMA);}
"("				{   ECHO; return(PARIZQ);}
")"				{   ECHO; return(PARDER);}
";"				{  ECHO; return(PUNTOYCOMA);}
"+"				{  ECHO; return(SUMRES);}
"-"				{  ECHO; return(SUMRES);}
"*"				{  ECHO; return(OPBINARIO);}
"/"				{  ECHO; return(OPBINARIO);}
"=="			{  ECHO; return(OPBINARIO);}
"!="			{  ECHO; return(OPBINARIO);}
"<="			{  ECHO; return(OPBINARIO);}
">="			{  ECHO; return(OPBINARIO);}
"<"				{  ECHO; return(OPBINARIO);}
">"				{  ECHO; return(OPBINARIO);}
"&&"			{  ECHO; return(OPBINARIO);}
"||"			{  ECHO; return(OPBINARIO);}
"^"				{  ECHO; return(OPBINARIO);}
"!"				{  ECHO; return(OPUNARIO);}
"#"				{  ECHO; return(OPUNARIO);}
"?"				{  ECHO; return(OPUNARIO);}
"verdadero"		{  ECHO; return(CONSTLOGICA);}
"falso" 		{  ECHO; return(CONSTLOGICA);}
[a-zA-Z]([a-zA-Z]|[0-9]|_)*			{  ECHO; return(IDENT);}
[0-9]+				{  ECHO; return(CONSTENTERA);}
[0-9]*\.([0-9]+)?	{  ECHO; return(CONSTREAL);}
"'"[^"'"]"'"	{  ECHO; return(CONSTCARACTER);}
\"[^\"]+\"		{  ECHO; return(CONSTCADENA);}

[ \t]				{ECHO;}
[\n\r]					{ECHO;}
.   				{printf("(Line ) %d el(los) caracter(es) '%s' no forma(n) ningun token conocido",yylineno,yytext); }
%%

int main (int argc, char** argv) {

	if (argc <= 1) {
		exit(1);
	}else {
		yyin = fopen(argv[1], "r");
		int val;
		val = yylex();
		while (val != 0) {
			printf("%d ", val);
			val = yylex();
		}
	}
	exit(1);
}
