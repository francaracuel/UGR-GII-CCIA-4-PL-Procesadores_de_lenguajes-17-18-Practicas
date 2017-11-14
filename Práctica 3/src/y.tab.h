/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OPOR = 258,
    OPAND = 259,
    OPIGUALDAD = 260,
    OPRELACION = 261,
    OPSIGNO = 262,
    OPMULTIPLICATIVO = 263,
    OP_UNARIO = 264,
    PRINCIPAL = 265,
    INI_BLOQUE = 266,
    FIN_BLOQUE = 267,
    PUNTO_Y_COMA = 268,
    COMA = 269,
    PARENT_IZQUIERDO = 270,
    PARENT_DERECHO = 271,
    INI_VAR_LOCAL = 272,
    FIN_VAR_LOCAL = 273,
    ASIGNACION = 274,
    INI_DIM_MATRIZ = 275,
    FIN_DIM_MATRIZ = 276,
    SI = 277,
    SI_NO = 278,
    HACER = 279,
    HASTA = 280,
    MIENTRAS = 281,
    DEVOLVER = 282,
    TIPO_BASICO = 283,
    ENTRADA = 284,
    SALIDA = 285,
    CONST_LOGICA = 286,
    CADENA = 287,
    CONST_ENTERO_SIN_SIGNO = 288,
    CONST_CARACTER = 289,
    IDENTIFICADOR = 290,
    PUNTO = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
