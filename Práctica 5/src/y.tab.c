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
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

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
       0,    90,    90,    90,    90,    92,    93,    95,    92,    98,
     101,   106,   107,   109,   109,   111,   111,   112,   114,   115,
     117,   117,   117,   118,   120,   120,   120,   122,   122,   122,
     123,   125,   125,   126,   126,   128,   128,   134,   135,   135,
     136,   136,   145,   145,   151,   151,   157,   157,   163,   163,
     170,   188,   198,   199,   197,   207,   207,   220,   220,   232,
     233,   235,   237,   237,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   253,   255,   257,
     259,   269,   286,   305,   310,   315,   320,   322,   323,   324,
     326,   327,   329,   330,   332,   333,   335,   336,   337,   338,
     339,   341,   342,   344
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
  "CONST_CARACTER", "IDENTIFICADOR", "$accept", "programa", "$@1", "$@2",
  "bloque", "$@3", "$@4", "$@5", "bloque2", "declar_de_subprogs",
  "declar_subprog", "$@6", "declar_de_variables_locales", "$@7",
  "variables_locales", "cuerpo_declar_variables", "$@8", "$@9",
  "cabecera_subprograma", "$@10", "$@11", "cabecera_subprograma2", "$@12",
  "$@13", "sentencias", "$@14", "$@15", "sentencia", "$@16", "$@17",
  "$@18", "$@19", "$@20", "$@21", "$@22", "sentencia_asignacion",
  "sentencia_si", "$@23", "$@24", "sentencia_hacer_hasta", "$@25",
  "sentencia_mientras", "$@26", "sentencia_entrada", "sentencia_salida",
  "sentencia_devolver", "@27", "expresion", "lista_variables", "variable",
  "var_array", "lista_parametros", "lista_expresiones_o_cadena",
  "expresion_o_cadena", "lista_expresiones", "constante", "funcion",
  "const_matriz", YY_NULLPTR
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

#define YYPACT_NINF -68

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-68)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -68,    28,    49,   -68,   -68,    62,   -68,   -68,   -68,    70,
     -68,    88,   -68,     9,   -68,    -5,   -68,   -68,     8,   -68,
     -68,    67,   -68,   -68,    89,    86,   -68,   -68,   -68,   -68,
      62,    86,    91,   -68,    62,   107,   104,   102,   105,   109,
     110,   -68,   118,     4,   -68,   -68,   -68,    71,   -68,   124,
     -68,   125,   -68,   126,   -68,    10,   -68,    71,   -68,    86,
     -68,    71,   -68,   121,    19,   -68,   127,   -68,    71,    71,
      71,    71,   -68,   -68,   -68,   -68,     7,   192,   -68,    44,
     -68,   -68,   -68,    71,    71,     0,   -68,   192,    25,   -68,
     192,   131,   181,   128,     4,   -68,     4,    -4,   -68,   -68,
      55,   141,    59,    71,    71,    71,    71,    71,    71,    71,
     139,   147,   161,   -68,     4,   -68,    10,   149,   145,   -68,
     155,   -68,   -68,   -68,   142,   -68,    48,   -68,   -68,   -68,
      65,   113,   119,    90,    40,   171,   -68,   192,    71,    86,
     -68,    75,   -68,   -68,    71,   160,   -68,   153,   154,   -68,
     -68,    63,   168,    86,   -68,   167,   157,   142,   142,   -68,
     -68,   -68,   -68,   -68,   172,   -68,   -68,   -68,    86,   -68,
     -68,   -68,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     3,     0,     5,     4,     6,    17,
      15,     0,    12,     0,     7,    33,    23,    20,     0,    19,
       8,     0,    11,    13,    31,    35,    21,    16,    18,    24,
       0,    35,    80,    34,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,    25,    14,    32,     0,    36,     0,
      39,     0,    41,     0,    43,     0,    45,     0,    47,    35,
      49,     0,    86,    83,     0,    78,     0,    76,     0,     0,
       0,     0,    98,    96,    99,   100,    80,    95,    68,     0,
      66,    67,    97,     0,     0,     0,    93,    92,     0,    91,
      62,     0,     0,     0,     0,    22,     0,     0,    69,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    59,     0,    61,     0,     0,     0,    50,
       0,    79,    77,    30,     0,    26,     0,   103,    64,   102,
       0,    75,    74,    72,    73,    70,    71,    94,     0,    35,
      57,     0,    90,    63,     0,    84,    88,     0,     0,    27,
     101,     0,    51,    35,    60,     0,     0,     0,     0,    28,
      82,    52,    58,    55,     0,    89,    87,    29,    35,    56,
      85,    53,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,   -68,    27,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   174,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -30,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -53,    87,   -25,
     -11,   -68,   -68,    92,   -67,   -68,   -68,   -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     7,     8,     9,    20,    11,    15,
      22,    30,    12,    13,    18,    19,    26,    43,    23,    44,
      66,   125,   159,   167,    24,    31,    25,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    50,   168,   172,    60,
     169,    52,   153,    54,    56,    58,   117,    77,    64,    78,
      65,   126,    88,    89,    79,    80,    81,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    46,    87,   100,    90,    62,    42,    -9,    92,    16,
      16,    67,   123,   113,   114,    98,    99,    68,   101,    69,
      94,    70,   102,    21,   124,    71,    27,    47,     3,    91,
     111,   112,    95,    96,    42,   130,    17,    17,   115,   116,
      63,    72,    86,    73,    74,    75,    76,   107,   108,   147,
     131,   132,   133,   134,   135,   136,   137,    45,   109,     4,
      67,    48,   148,    87,   149,   110,    68,   127,    69,   109,
      70,   151,    67,     6,    71,   129,    94,   109,    68,   109,
      69,   150,    70,   121,   160,   122,    71,    10,   154,    96,
      72,   155,    73,    74,    75,    76,   106,   107,   108,   146,
      14,   -10,    72,    29,    73,    74,    75,    76,   -38,   152,
     -48,    47,   -40,   -46,    42,   -42,   -44,   104,   105,   106,
     107,   108,    32,   162,   105,   106,   107,   108,    42,    49,
      51,    53,   165,   166,    59,    55,    57,    61,   171,    83,
      84,    93,    97,    42,   103,   104,   105,   106,   107,   108,
     103,   104,   105,   106,   107,   108,   118,   128,    85,   138,
     144,   120,   143,   139,   103,   104,   105,   106,   107,   108,
     103,   104,   105,   106,   107,   108,   145,   140,    32,   108,
     156,   157,   158,   163,   103,   104,   105,   106,   107,   108,
     164,   161,    28,   170,   119,   103,   104,   105,   106,   107,
     108,   141,     0,     0,     0,     0,     0,     0,   142
};

static const yytype_int16 yycheck[] =
{
      25,    31,    55,    70,    57,     1,    31,    12,    61,     1,
       1,     1,    16,    13,    14,    68,    69,     7,    71,     9,
       1,    11,    15,    28,    28,    15,    18,    20,     0,    59,
      83,    84,    13,    14,    59,   102,    28,    28,    13,    14,
      36,    31,    32,    33,    34,    35,    36,     7,     8,     1,
     103,   104,   105,   106,   107,   108,   109,    30,    14,    10,
       1,    34,    14,   116,    16,    21,     7,    12,     9,    14,
      11,   138,     1,    11,    15,    16,     1,    14,     7,    14,
       9,    16,    11,    94,    21,    96,    15,    17,    13,    14,
      31,   144,    33,    34,    35,    36,     6,     7,     8,   124,
      12,    12,    31,    36,    33,    34,    35,    36,    22,   139,
      24,    20,    26,    27,   139,    29,    30,     4,     5,     6,
       7,     8,    36,   153,     5,     6,     7,     8,   153,    22,
      26,    29,   157,   158,    24,    30,    27,    19,   168,    15,
      15,    20,    15,   168,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,    25,    16,    32,    20,
      15,    33,    13,    16,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,    21,    16,    36,     8,
      20,    28,    28,    16,     3,     4,     5,     6,     7,     8,
      33,    23,    18,    21,    13,     3,     4,     5,     6,     7,
       8,   114,    -1,    -1,    -1,    -1,    -1,    -1,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,    10,    40,    11,    41,    42,    43,
      17,    45,    49,    50,    12,    46,     1,    28,    51,    52,
      44,    28,    47,    55,    61,    63,    53,    18,    52,    36,
      48,    62,    36,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    86,    54,    56,    41,    64,    20,    41,    22,
      73,    26,    78,    29,    80,    30,    81,    27,    82,    24,
      76,    19,     1,    36,    85,    87,    57,     1,     7,     9,
      11,    15,    31,    33,    34,    35,    36,    84,    86,    91,
      92,    93,    94,    15,    15,    32,    32,    84,    89,    90,
      84,    64,    84,    20,     1,    13,    14,    15,    84,    84,
      91,    84,    15,     3,     4,     5,     6,     7,     8,    14,
      21,    84,    84,    13,    14,    13,    14,    83,    25,    13,
      33,    87,    87,    16,    28,    58,    88,    12,    16,    16,
      91,    84,    84,    84,    84,    84,    84,    84,    20,    16,
      16,    85,    90,    13,    15,    21,    86,     1,    14,    16,
      16,    91,    64,    79,    13,    84,    20,    28,    28,    59,
      21,    23,    64,    16,    33,    86,    86,    60,    74,    77,
      21,    64,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    39,    40,    38,    42,    43,    44,    41,    45,
      45,    46,    46,    48,    47,    50,    49,    49,    51,    51,
      53,    54,    52,    52,    56,    57,    55,    59,    60,    58,
      58,    62,    61,    63,    61,    65,    64,    64,    66,    64,
      67,    64,    68,    64,    69,    64,    70,    64,    71,    64,
      72,    73,    74,    75,    73,    77,    76,    79,    78,    80,
      80,    81,    83,    82,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    88,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    93,    93,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     4,     0,     0,     0,     6,     2,
       3,     2,     0,     0,     3,     0,     4,     0,     2,     1,
       0,     0,     5,     1,     0,     0,     6,     0,     0,     4,
       1,     0,     3,     0,     2,     0,     2,     1,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       4,     5,     0,     0,     9,     0,     7,     0,     6,     3,
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
    { fputs("int main()",file); }
#line 1423 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 90 "src/semantic.y" /* yacc.c:1646  */
    { closeInter(); }
#line 1429 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 92 "src/semantic.y" /* yacc.c:1646  */
    { fputs("\n{\n",file); }
#line 1435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 93 "src/semantic.y" /* yacc.c:1646  */
    { tsAddMark(); }
#line 1441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 95 "src/semantic.y" /* yacc.c:1646  */
    { fputs("\n}\n",file); }
#line 1447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 96 "src/semantic.y" /* yacc.c:1646  */
    { tsCleanIn(); }
#line 1453 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 109 "src/semantic.y" /* yacc.c:1646  */
    { subProg = 1; }
#line 1459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 109 "src/semantic.y" /* yacc.c:1646  */
    { subProg = 0; }
#line 1465 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 111 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 1; }
#line 1471 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 111 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 0; }
#line 1477 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 117 "src/semantic.y" /* yacc.c:1646  */
    {tipoTMP = (yyvsp[0]).type;tipoArray = (yyvsp[0]).type;}
#line 1483 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 117 "src/semantic.y" /* yacc.c:1646  */
    { setType((yyvsp[-1])); }
#line 1489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "src/semantic.y" /* yacc.c:1646  */
    { decParam = 1; }
#line 1495 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 120 "src/semantic.y" /* yacc.c:1646  */
    { tsAddSubprog((yyvsp[-1])); }
#line 1501 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 122 "src/semantic.y" /* yacc.c:1646  */
    { fputs(")",file); }
#line 1507 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 122 "src/semantic.y" /* yacc.c:1646  */
    { tsUpdateNparam((yyvsp[-2])); nParam = 0; decParam = 0; }
#line 1513 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 122 "src/semantic.y" /* yacc.c:1646  */
    {(yyvsp[-3]).nDim=0;}
#line 1519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 123 "src/semantic.y" /* yacc.c:1646  */
    { fputs(")",file); }
#line 1525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "src/semantic.y" /* yacc.c:1646  */
    {decVar = 2; }
#line 1531 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 126 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 2; }
#line 1537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
						{insertaCond(1);}
						fputs("{\n",file);
						decIF++;
					}
				}
#line 1548 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 135 "src/semantic.y" /* yacc.c:1646  */
    { decIF=1;insertaDesc(1);}
#line 1554 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 135 "src/semantic.y" /* yacc.c:1646  */
    {decIF = 0;eliminaDesc();}
#line 1560 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 136 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
						insertaDesc(2);
						insertaEtiqEntrada();
						fputs("{\n",file);
					}
#line 1574 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 145 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}
#line 1585 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}
#line 1596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 157 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}
#line 1607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 163 "src/semantic.y" /* yacc.c:1646  */
    {	if(decIF==1){
							insertaCond(1);
							fputs("{\n",file);
							decIF++;
						}
					}
#line 1618 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 170 "src/semantic.y" /* yacc.c:1646  */
    {

	if((yyvsp[-3]).type!=(yyvsp[-1]).type){
		printf("Semantic Error(%d): Types are not equal.\n",line, (yyvsp[-3]).type, (yyvsp[-1]).type);
	}
	if(!equalSize((yyvsp[-3]),(yyvsp[-1]))){
		printf("Semantic Error(%d): Sizes are not equal.\n",line);
	}
	{	(yyval).type =  compruebaTipos2((yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]));
		if(decIF==1){
			insertaCond(1);
			fputs("{\n",file);
			decIF++;
		}
		genera(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));
	}
}
#line 1640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 188 "src/semantic.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2]).type != BOOLEANO){
		printf("Semantic Error(%d): Expression are not logic.\n", line);
		(yyval).lex = (yyvsp[-2]).lex;
		fputs("}\n",file);
		insertaEtiqElse();
		fputs("{}\n",file);
	}
}
#line 1654 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 198 "src/semantic.y" /* yacc.c:1646  */
    {decElse=1;fputs("}\n",file);insertaEtiqElse();fputs("{\n",file);decElse=0;}
#line 1660 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 199 "src/semantic.y" /* yacc.c:1646  */
    {fputs("}\n",file);insertaEtiqSalida();fputs("{}\n",file);}
#line 1666 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 200 "src/semantic.y" /* yacc.c:1646  */
    {
					if((yyvsp[-6]).type != BOOLEANO){
						printf("Semantic Error(%d): Expression are not logic.\n", line);
						(yyval).lex = (yyvsp[-6]).lex;
					}
				}
#line 1677 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 207 "src/semantic.y" /* yacc.c:1646  */
    {insertaCond(2);}
#line 1683 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 208 "src/semantic.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2]).type != BOOLEANO){
		printf("Semantic Error(%d): Expression are not logic.\n", line);

		(yyval).lex = (yyvsp[-4]).lex;
		fputs("}\n",file);
		insertaGotoEntrada();
		insertaEtiqSalida();
		fputs("{}\n",file);
	}
}
#line 1699 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 220 "src/semantic.y" /* yacc.c:1646  */
    {insertaCond(2);}
#line 1705 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 220 "src/semantic.y" /* yacc.c:1646  */
    {
	if((yyvsp[-3]).type != BOOLEANO){
		printf("Semantic Error(%d): Expression are not logic.\n", line);

		(yyval).lex = (yyvsp[-3]).lex;
		fputs("}\n",file);
		insertaGotoEntrada();
		insertaEtiqSalida();
		fputs("{}\n",file);
	}
}
#line 1721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 232 "src/semantic.y" /* yacc.c:1646  */
    {generaEntSal(1,(yyvsp[-1]));}
#line 1727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 233 "src/semantic.y" /* yacc.c:1646  */
    {generaEntSal(1,(yyvsp[-3]));}
#line 1733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 235 "src/semantic.y" /* yacc.c:1646  */
    {generaEntSal(2,(yyvsp[-1]));}
#line 1739 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 237 "src/semantic.y" /* yacc.c:1646  */
    { tsCheckReturn((yyvsp[0]),&(yyval)); }
#line 1745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 239 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; (yyval).nDim = (yyvsp[-1]).nDim; (yyval).tDim1 = (yyvsp[-1]).tDim1; (yyval).tDim2 = (yyvsp[-1]).tDim2; }
#line 1751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 240 "src/semantic.y" /* yacc.c:1646  */
    {tsOpUnary((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 241 "src/semantic.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; }
#line 1763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 242 "src/semantic.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; currentFunction = -1;}
#line 1769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 243 "src/semantic.y" /* yacc.c:1646  */
    {decVar = 0;}
#line 1775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 244 "src/semantic.y" /* yacc.c:1646  */
    {tsOpSign((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1781 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 245 "src/semantic.y" /* yacc.c:1646  */
    {tsOpSignBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 246 "src/semantic.y" /* yacc.c:1646  */
    {tsOpMul((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1793 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 247 "src/semantic.y" /* yacc.c:1646  */
    {tsOpEqual((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1799 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 248 "src/semantic.y" /* yacc.c:1646  */
    {tsOpRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 249 "src/semantic.y" /* yacc.c:1646  */
    {tsOpAnd((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1811 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 250 "src/semantic.y" /* yacc.c:1646  */
    {tsOpOr((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 259 "src/semantic.y" /* yacc.c:1646  */
    {

					if(decVar == 1){
						(yyvsp[0]).nDim=0; (yyvsp[0]).tDim1 = 0; (yyvsp[0]).tDim2 = 0; tsAddId((yyvsp[0]));
					} else{
						if(decParam == 0)
							tsGetId((yyvsp[0]), &(yyval));
					}

				}
#line 1832 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 269 "src/semantic.y" /* yacc.c:1646  */
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
#line 1854 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 286 "src/semantic.y" /* yacc.c:1646  */
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
#line 1877 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 305 "src/semantic.y" /* yacc.c:1646  */
    {
					if(decVar == 1){
						(yyvsp[0]).nDim=0; (yyvsp[0]).tDim1 = 0; (yyvsp[0]).tDim2 = 0; tsAddId((yyvsp[0]));
					}
				}
#line 1887 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 310 "src/semantic.y" /* yacc.c:1646  */
    {
						if(decVar == 1) {
							(yyvsp[-3]).nDim=1; (yyvsp[-3]).tDim1=atoi((yyvsp[-1]).lex); (yyvsp[-3]).tDim2=0; tsAddId((yyvsp[-3]));
						}
				}
#line 1897 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 315 "src/semantic.y" /* yacc.c:1646  */
    {
					if(decVar == 1) {
						(yyvsp[-6]).nDim=2; (yyvsp[-6]).tDim1=atoi((yyvsp[-4]).lex); (yyvsp[-6]).tDim2=atoi((yyvsp[-1]).lex); tsAddId((yyvsp[-6]));
					}
				}
#line 1907 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 322 "src/semantic.y" /* yacc.c:1646  */
    { (yyvsp[0]).nDim=0; nParam++; setType((yyvsp[-1])); tsAddParam((yyvsp[0])); }
#line 1913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 323 "src/semantic.y" /* yacc.c:1646  */
    { (yyvsp[0]).nDim=0; nParam++; setType((yyvsp[-1])); tsAddParam((yyvsp[0])); }
#line 1919 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 326 "src/semantic.y" /* yacc.c:1646  */
    { nParam++; tsCheckParam((yyvsp[-2]), nParam); }
#line 1925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 327 "src/semantic.y" /* yacc.c:1646  */
    { nParam = 1; tsCheckParam((yyvsp[0]), nParam); }
#line 1931 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 335 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = ENTERO; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1937 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 336 "src/semantic.y" /* yacc.c:1646  */
    { aux = 1; (yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; }
#line 1943 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 337 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = BOOLEANO; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1949 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 338 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = FLOTANTE; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1955 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 339 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = CARACTER; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1961 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 341 "src/semantic.y" /* yacc.c:1646  */
    { tsFunctionCall((yyvsp[-3]), &(yyval)); }
#line 1967 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 342 "src/semantic.y" /* yacc.c:1646  */
    { tsFunctionCall((yyvsp[-2]), &(yyval)); }
#line 1973 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 344 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; (yyval).nDim = (yyvsp[-1]).nDim; (yyval).tDim1 = (yyvsp[-1]).tDim1; (yyval).tDim2 = (yyvsp[-1]).tDim2;}
#line 1979 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 1983 "src/y.tab.c" /* yacc.c:1646  */
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
#line 346 "src/semantic.y" /* yacc.c:1906  */


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
