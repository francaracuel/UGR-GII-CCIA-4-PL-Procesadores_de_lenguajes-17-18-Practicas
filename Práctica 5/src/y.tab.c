/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/semantic.y" /* yacc.c:339  */


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


#line 108 "src/y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    CONST_FLOTANTE = 289,
    CONST_CARACTER = 290,
    IDENTIFICADOR = 291
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

/* Copy the second part of user declarations.  */

#line 196 "src/y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  174

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    90,    93,    95,    92,    99,    98,   107,
     106,   116,   117,   119,   119,   121,   121,   122,   124,   125,
     127,   127,   127,   128,   130,   130,   130,   132,   132,   132,
     133,   135,   135,   136,   136,   138,   138,   144,   145,   145,
     146,   146,   155,   155,   161,   161,   167,   167,   173,   173,
     180,   199,   207,   214,   214,   223,   223,   230,   230,   242,
     243,   245,   247,   247,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   263,   265,   267,
     269,   279,   296,   315,   320,   325,   330,   332,   333,   334,
     336,   337,   339,   340,   342,   343,   345,   346,   347,   348,
     349,   351,   352,   354
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPOR", "OPAND", "OPIGUALDAD",
  "OPRELACION", "OPSIGNO", "OPMULTIPLICATIVO", "OP_UNARIO", "PRINCIPAL",
  "INI_BLOQUE", "FIN_BLOQUE", "PUNTO_Y_COMA", "COMA", "PARENT_IZQUIERDO",
  "PARENT_DERECHO", "INI_VAR_LOCAL", "FIN_VAR_LOCAL", "ASIGNACION",
  "INI_DIM_MATRIZ", "FIN_DIM_MATRIZ", "SI", "SI_NO", "HACER", "HASTA",
  "MIENTRAS", "DEVOLVER", "TIPO_BASICO", "ENTRADA", "SALIDA",
  "CONST_LOGICA", "CADENA", "CONST_ENTERO_SIN_SIGNO", "CONST_FLOTANTE",
  "CONST_CARACTER", "IDENTIFICADOR", "$accept", "programa", "$@1",
  "bloque", "$@2", "$@3", "bloque2", "$@4", "$@5", "declar_de_subprogs",
  "declar_subprog", "$@6", "declar_de_variables_locales", "$@7",
  "variables_locales", "cuerpo_declar_variables", "$@8", "$@9",
  "cabecera_subprograma", "$@10", "$@11", "cabecera_subprograma2", "$@12",
  "$@13", "sentencias", "$@14", "$@15", "sentencia", "$@16", "$@17",
  "$@18", "$@19", "$@20", "$@21", "$@22", "sentencia_asignacion",
  "sentencia_si", "sentencia_else", "$@23", "sentencia_hacer_hasta",
  "$@24", "sentencia_mientras", "$@25", "sentencia_entrada",
  "sentencia_salida", "sentencia_devolver", "@26", "expresion",
  "lista_variables", "variable", "var_array", "lista_parametros",
  "lista_expresiones_o_cadena", "expresion_o_cadena", "lista_expresiones",
  "constante", "funcion", "const_matriz", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -70,    17,    31,   -70,    40,   -70,   -70,    56,   -70,    84,
       3,     1,   -70,   -70,   -70,   -70,   -70,     8,   -70,   -70,
      39,    39,   -70,   -70,   -70,    67,   -70,   -70,    96,    89,
       2,   -70,    40,    89,    90,   -70,    40,    92,    91,    95,
      99,   111,    98,   -70,   121,   -70,   123,    26,   -70,   -70,
     -70,   -70,    71,   -70,   126,   -70,   165,   -70,   112,   -70,
      13,   -70,    71,   -70,    89,   -70,    71,   125,     2,   -70,
       2,   166,   -70,    71,    71,    71,    71,   -70,   -70,   -70,
     -70,    -7,   180,   -70,    55,   -70,   -70,   -70,    71,    71,
      50,   -70,   180,   107,   -70,   180,   153,   169,   168,   -70,
     -70,    34,   -70,   -70,    47,   129,    59,    71,    71,    71,
      71,    71,    71,    71,   170,   143,   149,   -70,     2,   -70,
      13,   178,   177,   -70,   173,   -70,   158,   -70,     9,   -70,
     -70,   -70,    65,   156,    93,    81,   120,   187,   -70,   180,
      71,    89,   -70,    29,   -70,   -70,    71,   164,   -70,   171,
     172,   -70,   -70,    63,   175,    89,   -70,   163,   181,   158,
     158,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,    89,   -70,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     3,    17,    15,     0,
       9,     0,     5,    12,    12,    23,    20,     0,    19,     6,
       8,    33,    21,    16,    18,     0,    11,    13,    31,    35,
       0,    24,     0,    35,    80,    34,     0,     0,     0,     0,
       0,     0,     0,    37,     0,    86,    83,     0,    78,    25,
      14,    32,     0,    36,     0,    39,     0,    41,     0,    43,
       0,    45,     0,    47,    35,    49,     0,     0,     0,    22,
       0,     0,    76,     0,     0,     0,     0,    98,    96,    99,
     100,    80,    95,    68,     0,    66,    67,    97,     0,     0,
       0,    93,    92,     0,    91,    62,     0,     0,     0,    79,
      77,     0,    69,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    59,     0,    61,
       0,     0,     0,    50,    84,    30,     0,    26,     0,   103,
      64,   102,     0,    75,    74,    72,    73,    70,    71,    94,
       0,    35,    57,     0,    90,    63,     0,     0,    88,     0,
       0,    27,   101,     0,    51,    35,    60,     0,     0,     0,
       0,    28,    82,    53,    52,    58,    55,    85,    89,    87,
      29,    35,    56,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,   -20,   -70,   -70,   -70,   -70,   -70,   182,
     -70,   -70,   -70,   -70,   -70,   184,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -32,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -55,    85,   -29,
      15,   -70,   -70,    86,   -69,   -70,   -70,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,    19,     9,    13,    14,    20,
      26,    32,    10,    11,    17,    18,    22,    30,    27,    49,
      71,   127,   161,   170,    28,    33,    29,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    55,   164,   171,    65,
     172,    57,   155,    59,    61,    63,   121,    82,    47,    83,
      48,   128,    93,    94,    84,    85,    86,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    51,    15,    45,    44,    92,   104,    95,   106,    15,
     149,    97,    50,    52,    72,    -7,    53,     3,   102,   103,
      73,   105,    74,   150,    75,   151,    23,    68,    76,    16,
      68,    -7,    96,   115,   116,    44,    16,   132,    46,    69,
      70,     4,   156,    70,    77,    91,    78,    79,    80,    81,
     125,     5,   133,   134,   135,   136,   137,   138,   139,   129,
      72,   113,   126,   117,   118,    92,    73,    25,    74,   113,
      75,   153,    72,     8,    76,   131,   114,   113,    73,   113,
      74,   152,    75,    99,   162,   100,    76,   110,   111,   112,
      77,   157,    78,    79,    80,    81,    12,   148,   109,   110,
     111,   112,    77,    31,    78,    79,    80,    81,   -10,   154,
      52,   -38,    44,   -48,    54,   -40,   -46,    56,   -42,   -44,
     119,   120,    64,   165,    58,    34,    44,   111,   112,    60,
     168,   169,   107,   108,   109,   110,   111,   112,    62,   173,
      66,    88,    44,    67,    90,   130,   107,   108,   109,   110,
     111,   112,   107,   108,   109,   110,   111,   112,    98,   141,
     108,   109,   110,   111,   112,   142,   107,   108,   109,   110,
     111,   112,   107,   108,   109,   110,   111,   112,   122,   166,
      89,   101,   123,   107,   108,   109,   110,   111,   112,   124,
     140,   145,   146,   147,    34,   112,    21,   158,   163,   159,
     160,    24,   167,   143,     0,     0,   144
};

static const yytype_int16 yycheck[] =
{
      29,    33,     1,     1,    33,    60,    75,    62,    15,     1,
       1,    66,    32,    20,     1,    12,    36,     0,    73,    74,
       7,    76,     9,    14,    11,    16,    18,     1,    15,    28,
       1,    28,    64,    88,    89,    64,    28,   106,    36,    13,
      14,    10,    13,    14,    31,    32,    33,    34,    35,    36,
      16,    11,   107,   108,   109,   110,   111,   112,   113,    12,
       1,    14,    28,    13,    14,   120,     7,    28,     9,    14,
      11,   140,     1,    17,    15,    16,    21,    14,     7,    14,
       9,    16,    11,    68,    21,    70,    15,     6,     7,     8,
      31,   146,    33,    34,    35,    36,    12,   126,     5,     6,
       7,     8,    31,    36,    33,    34,    35,    36,    12,   141,
      20,    22,   141,    24,    22,    26,    27,    26,    29,    30,
      13,    14,    24,   155,    29,    36,   155,     7,     8,    30,
     159,   160,     3,     4,     5,     6,     7,     8,    27,   171,
      19,    15,   171,    20,    32,    16,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,    33,    16,
       4,     5,     6,     7,     8,    16,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,    25,    16,
      15,    15,    13,     3,     4,     5,     6,     7,     8,    21,
      20,    13,    15,    20,    36,     8,    14,    33,    23,    28,
      28,    17,    21,   118,    -1,    -1,   120
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,    10,    11,    40,    41,    17,    43,
      49,    50,    12,    44,    45,     1,    28,    51,    52,    42,
      46,    46,    53,    18,    52,    28,    47,    55,    61,    63,
      54,    36,    48,    62,    36,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    86,     1,    36,    85,    87,    56,
      40,    64,    20,    40,    22,    73,    26,    78,    29,    80,
      30,    81,    27,    82,    24,    76,    19,    20,     1,    13,
      14,    57,     1,     7,     9,    11,    15,    31,    33,    34,
      35,    36,    84,    86,    91,    92,    93,    94,    15,    15,
      32,    32,    84,    89,    90,    84,    64,    84,    33,    87,
      87,    15,    84,    84,    91,    84,    15,     3,     4,     5,
       6,     7,     8,    14,    21,    84,    84,    13,    14,    13,
      14,    83,    25,    13,    21,    16,    28,    58,    88,    12,
      16,    16,    91,    84,    84,    84,    84,    84,    84,    84,
      20,    16,    16,    85,    90,    13,    15,    20,    86,     1,
      14,    16,    16,    91,    64,    79,    13,    84,    33,    28,
      28,    59,    21,    23,    74,    64,    16,    21,    86,    86,
      60,    75,    77,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    39,    38,    41,    42,    40,    44,    43,    45,
      43,    46,    46,    48,    47,    50,    49,    49,    51,    51,
      53,    54,    52,    52,    56,    57,    55,    59,    60,    58,
      58,    62,    61,    63,    61,    65,    64,    64,    66,    64,
      67,    64,    68,    64,    69,    64,    70,    64,    71,    64,
      72,    73,    73,    75,    74,    77,    76,    79,    78,    80,
      80,    81,    83,    82,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    88,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    93,    93,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     0,     5,     0,     3,     0,
       4,     2,     0,     0,     3,     0,     4,     0,     2,     1,
       0,     0,     5,     1,     0,     0,     6,     0,     0,     4,
       1,     0,     3,     0,     2,     0,     2,     1,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       4,     5,     6,     0,     3,     0,     7,     0,     6,     3,
       5,     3,     0,     4,     3,     2,     1,     1,     1,     2,
       3,     3,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     4,     7,     1,     4,     7,     1,     4,     2,     4,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 90 "src/semantic.y" /* yacc.c:1646  */
    { generaFich(); }
#line 1417 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 90 "src/semantic.y" /* yacc.c:1646  */
    { closeInter(); }
#line 1423 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 93 "src/semantic.y" /* yacc.c:1646  */
    { tsAddMark(); }
#line 1429 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "src/semantic.y" /* yacc.c:1646  */
    { fputs("\n}\n",file); }
#line 1435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 96 "src/semantic.y" /* yacc.c:1646  */
    { tsCleanIn(); }
#line 1441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 99 "src/semantic.y" /* yacc.c:1646  */
    {	if(varPrinc==1){
			varPrinc=0;
			fputs("int main(){\n",file);
		}
	}
#line 1451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 107 "src/semantic.y" /* yacc.c:1646  */
    {	if(varPrinc==1){
			varPrinc=0;
			fputs("int main(){\n",file);
		}
	}
#line 1461 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "src/semantic.y" /* yacc.c:1646  */
    { subProg = 1; }
#line 1467 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 119 "src/semantic.y" /* yacc.c:1646  */
    { subProg = 0; }
#line 1473 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 1; }
#line 1479 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 121 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 0; }
#line 1485 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 127 "src/semantic.y" /* yacc.c:1646  */
    {tipoTMP = (yyvsp[0]).type;tipoArray = (yyvsp[0]).type;}
#line 1491 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 127 "src/semantic.y" /* yacc.c:1646  */
    { setType((yyvsp[-1])); }
#line 1497 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 130 "src/semantic.y" /* yacc.c:1646  */
    { decParam = 1; }
#line 1503 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 130 "src/semantic.y" /* yacc.c:1646  */
    { tsAddSubprog((yyvsp[-1])); }
#line 1509 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 132 "src/semantic.y" /* yacc.c:1646  */
    { fputs(")",file); }
#line 1515 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 132 "src/semantic.y" /* yacc.c:1646  */
    { tsUpdateNparam((yyvsp[-2])); nParam = 0; decParam = 0; }
#line 1521 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 132 "src/semantic.y" /* yacc.c:1646  */
    {(yyvsp[-3]).nDim=0;}
#line 1527 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 133 "src/semantic.y" /* yacc.c:1646  */
    { fputs(")",file); }
#line 1533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 135 "src/semantic.y" /* yacc.c:1646  */
    {decVar = 2; }
#line 1539 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 136 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 2; }
#line 1545 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
						{insertaCond(1);}
						fputs("{\n",file);
						decIF++;
					}
				}
#line 1556 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 145 "src/semantic.y" /* yacc.c:1646  */
    { decIF=1;insertaDesc(1);}
#line 1562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 145 "src/semantic.y" /* yacc.c:1646  */
    {decIF = 0;eliminaDesc();}
#line 1568 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 146 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
						insertaDesc(2);
						insertaEtiqEntrada();
						fputs("{\n",file);
					}
#line 1582 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 155 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}
#line 1593 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 161 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}
#line 1604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 167 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}
#line 1615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 173 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}
#line 1626 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 180 "src/semantic.y" /* yacc.c:1646  */
    {

	if((yyvsp[-3]).type!=(yyvsp[-1]).type){
		printf("Semantic Error(%d): Types are not equal.\n",line, (yyvsp[-3]).type, (yyvsp[-1]).type);
	}
	if(!equalSize((yyvsp[-3]),(yyvsp[-1]))){
		printf("Semantic Error(%d): Sizes are not equal.\n",line);
	}
	{
		(yyval).type =  compruebaTipos2((yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]));
		if(decIF==1){
			insertaCond(1);
			fputs("{\n",file);
			decIF++;
		}
		genera(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
	}
}
#line 1649 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 200 "src/semantic.y" /* yacc.c:1646  */
    {	if((yyvsp[-2]).type != BOOLEANO)
							fprintf(stderr,"[Linea %d]: no hay expresion type logica \n",line);
						(yyval).lex = (yyvsp[-2]).lex;
						fputs("}\n",file);
						insertaEtiqElse();
						fputs("{}\n",file);
					}
#line 1661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 209 "src/semantic.y" /* yacc.c:1646  */
    {	if((yyvsp[-3]).type != BOOLEANO)
							fprintf(stderr,"[Linea %d]: no hay expresion tipo logica \n",line);
							(yyval).lex = (yyvsp[-3]).lex;
					}
#line 1670 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 214 "src/semantic.y" /* yacc.c:1646  */
    {
	decElse=1;
	fputs("}\n",file);
	insertaEtiqElse();
	fputs("{\n",file);
	decElse=0;}
#line 1681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 220 "src/semantic.y" /* yacc.c:1646  */
    {fputs("}\n",file);insertaEtiqSalida();fputs("{}\n",file);}
#line 1687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 223 "src/semantic.y" /* yacc.c:1646  */
    {insertaCond(2);}
#line 1693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 224 "src/semantic.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2]).type != BOOLEANO){
		printf("Semantic Error(%d): Expression are not logic.\n", line);
	}
}
#line 1703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 230 "src/semantic.y" /* yacc.c:1646  */
    {insertaCond(2);}
#line 1709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 231 "src/semantic.y" /* yacc.c:1646  */
    {	if((yyvsp[-3]).type != BOOLEANO)
								fprintf(stderr,"[Linea %d]: no hay expresion tipo logica \n",line);

							(yyval).lex = (yyvsp[-3]).lex;
							fputs("}\n",file);
							insertaGotoEntrada();
							insertaEtiqSalida();
							fputs("{}\n",file);
						}
#line 1723 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 242 "src/semantic.y" /* yacc.c:1646  */
    {generaEntSal(1,(yyvsp[-1]));}
#line 1729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 243 "src/semantic.y" /* yacc.c:1646  */
    {generaEntSal(1,(yyvsp[-3]));}
#line 1735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 245 "src/semantic.y" /* yacc.c:1646  */
    {generaEntSal(2,(yyvsp[-1]));}
#line 1741 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 247 "src/semantic.y" /* yacc.c:1646  */
    { tsCheckReturn((yyvsp[0]),&(yyval)); }
#line 1747 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 249 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; (yyval).nDim = (yyvsp[-1]).nDim; (yyval).tDim1 = (yyvsp[-1]).tDim1; (yyval).tDim2 = (yyvsp[-1]).tDim2; }
#line 1753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 250 "src/semantic.y" /* yacc.c:1646  */
    {tsOpUnary((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1759 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 251 "src/semantic.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; }
#line 1765 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 252 "src/semantic.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; currentFunction = -1;}
#line 1771 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 253 "src/semantic.y" /* yacc.c:1646  */
    {decVar = 0;}
#line 1777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 254 "src/semantic.y" /* yacc.c:1646  */
    {tsOpSign((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1783 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 255 "src/semantic.y" /* yacc.c:1646  */
    {tsOpSignBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1789 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 256 "src/semantic.y" /* yacc.c:1646  */
    {tsOpMul((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1795 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 257 "src/semantic.y" /* yacc.c:1646  */
    {tsOpEqual((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 258 "src/semantic.y" /* yacc.c:1646  */
    {tsOpRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1807 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 259 "src/semantic.y" /* yacc.c:1646  */
    {tsOpAnd((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1813 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 260 "src/semantic.y" /* yacc.c:1646  */
    {tsOpOr((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1819 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 265 "src/semantic.y" /* yacc.c:1646  */
    { generaDecVar((yyvsp[0])); }
#line 1825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 269 "src/semantic.y" /* yacc.c:1646  */
    {

					if(decVar == 1){
						(yyvsp[0]).nDim=0; (yyvsp[0]).tDim1 = 0; (yyvsp[0]).tDim2 = 0; tsAddId((yyvsp[0]));
					} else{
						if(decParam == 0)
							tsGetId((yyvsp[0]), &(yyval));
					}

				}
#line 1840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 279 "src/semantic.y" /* yacc.c:1646  */
    {

						if(decVar == 2) {

							tsGetId((yyvsp[-3]), &(yyval));

							/*if($$.tDim1 < $3.tDim1){
								printf("Semantic Error(%d): Dimension not allowed.\n",line);
							}else{*/
								(yyval).tDim1 = (yyvsp[-1]).tDim1;
								(yyval).tDim2 = (yyvsp[-1]).tDim2;
								(yyval).nDim = (yyval).nDim -1;
							//}

						}

					}
#line 1862 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 296 "src/semantic.y" /* yacc.c:1646  */
    {

					if(decVar == 2) {

						tsGetId((yyvsp[-6]), &(yyval));
						/*printf("$3.nDim:%d\n",$3.nDim );
						printf("$6.nDim:%d\n",$6.nDim);
						if($$.tDim1 < $3.tDim1 && $$.tDim2 < $6.tDim2){
							printf("Semantic Error(%d): Dimension not allowed.\n",line);
						}else{*/
							(yyval).tDim1 = (yyvsp[-4]).tDim1;
							(yyval).tDim2 = (yyvsp[-1]).tDim2;
							(yyval).nDim = (yyval).nDim -2;
						//}

					}

				}
#line 1885 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 315 "src/semantic.y" /* yacc.c:1646  */
    {
					if(decVar == 1){
						(yyvsp[0]).nDim=0; (yyvsp[0]).tDim1 = 0; (yyvsp[0]).tDim2 = 0; tsAddId((yyvsp[0]));
					}
				}
#line 1895 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 320 "src/semantic.y" /* yacc.c:1646  */
    {
						if(decVar == 1) {
							(yyvsp[-3]).nDim=1; (yyvsp[-3]).tDim1=atoi((yyvsp[-1]).lex); (yyvsp[-3]).tDim2=0; tsAddId((yyvsp[-3]));
						}
				}
#line 1905 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 325 "src/semantic.y" /* yacc.c:1646  */
    {
					if(decVar == 1) {
						(yyvsp[-6]).nDim=2; (yyvsp[-6]).tDim1=atoi((yyvsp[-4]).lex); (yyvsp[-6]).tDim2=atoi((yyvsp[-1]).lex); tsAddId((yyvsp[-6]));
					}
				}
#line 1915 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 332 "src/semantic.y" /* yacc.c:1646  */
    { (yyvsp[0]).nDim=0; nParam++; setType((yyvsp[-1])); tsAddParam((yyvsp[0])); }
#line 1921 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 333 "src/semantic.y" /* yacc.c:1646  */
    { (yyvsp[0]).nDim=0; nParam++; setType((yyvsp[-1])); tsAddParam((yyvsp[0])); }
#line 1927 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 336 "src/semantic.y" /* yacc.c:1646  */
    { nParam++; tsCheckParam((yyvsp[-2]), nParam); }
#line 1933 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 337 "src/semantic.y" /* yacc.c:1646  */
    { nParam = 1; tsCheckParam((yyvsp[0]), nParam); }
#line 1939 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 345 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = ENTERO; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1945 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 346 "src/semantic.y" /* yacc.c:1646  */
    { aux = 1; (yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; }
#line 1951 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 347 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = BOOLEANO; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1957 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 348 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = FLOTANTE; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1963 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 349 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = CARACTER; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1969 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 351 "src/semantic.y" /* yacc.c:1646  */
    { tsFunctionCall((yyvsp[-3]), &(yyval)); }
#line 1975 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 352 "src/semantic.y" /* yacc.c:1646  */
    { tsFunctionCall((yyvsp[-2]), &(yyval)); }
#line 1981 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 354 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; (yyval).nDim = (yyvsp[-1]).nDim; (yyval).tDim1 = (yyvsp[-1]).tDim1; (yyval).tDim2 = (yyvsp[-1]).tDim2;}
#line 1987 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 1991 "src/y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 356 "src/semantic.y" /* yacc.c:1906  */


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
