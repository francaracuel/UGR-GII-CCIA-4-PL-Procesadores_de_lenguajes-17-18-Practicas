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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

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
       0,    90,    90,    93,    92,    98,   101,   106,   107,   109,
     109,   111,   111,   112,   114,   115,   117,   117,   118,   120,
     120,   120,   122,   122,   123,   125,   125,   126,   126,   128,
     129,   130,   131,   132,   133,   134,   135,   137,   147,   152,
     158,   164,   170,   171,   173,   175,   175,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     191,   192,   193,   195,   205,   222,   241,   246,   251,   256,
     258,   259,   260,   262,   263,   265,   266,   268,   269,   271,
     272,   273,   274,   275,   277,   278,   280
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
  "CONST_CARACTER", "IDENTIFICADOR", "$accept", "programa", "bloque",
  "$@1", "bloque2", "declar_de_subprogs", "declar_subprog", "$@2",
  "declar_de_variables_locales", "$@3", "variables_locales",
  "cuerpo_declar_variables", "$@4", "cabecera_subprograma", "$@5", "$@6",
  "cabecera_subprograma2", "$@7", "sentencias", "$@8", "$@9", "sentencia",
  "sentencia_asignacion", "sentencia_si", "sentencia_hacer_hasta",
  "sentencia_mientras", "sentencia_entrada", "sentencia_salida",
  "sentencia_devolver", "@10", "expresion", "lista_variables", "variable",
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

#define YYPACT_NINF -71

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-71)))

#define YYTABLE_NINF -7

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    11,    70,   -71,   -71,   -71,    79,   -71,    94,   -71,
      18,   -71,    -2,   -71,   -71,    17,   -71,    76,   -71,   -71,
     107,    68,     8,   -71,   -71,   -71,    11,    68,   105,    68,
     106,    98,    90,     6,   104,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   111,   -71,   127,    47,   -71,   -71,
     -71,   -71,    98,   100,    98,   -71,    98,    98,    98,    98,
     -71,   -71,   -71,   -71,    35,   183,   -71,   -71,   -71,   -71,
      72,   -71,   183,    89,   -71,    98,    98,    93,     8,   -71,
       8,   154,   132,   155,   138,   -71,   -71,   183,    57,   152,
      42,    98,    98,    98,    98,    98,    98,   159,   -71,     8,
     -71,     6,    38,   172,   146,   -71,   -71,    -4,    68,    98,
      68,   -71,    98,   -71,   -71,    40,   145,   109,    26,   103,
     163,   -71,   -71,    87,   -71,   153,   -71,   161,   -71,   147,
     -71,    15,   169,   158,   -71,   183,   -71,   -71,    98,   149,
     -71,   156,   165,   -71,    68,   -71,    60,   173,   147,   147,
     -71,   -71,   -71,   -71,   -71,   -71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     2,     1,    13,    11,     0,     8,
       0,     4,    27,    18,    16,     0,    15,     0,     7,     9,
      25,     0,     0,    12,    14,    19,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    29,    28,    30,    31,    36,
      32,    33,    34,    35,     0,    69,    66,     0,    61,    20,
      10,    26,     0,     0,     0,    59,     0,     0,     0,     0,
      81,    79,    82,    83,    63,    45,    51,    49,    50,    80,
       0,    76,    75,     0,    74,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,    52,    48,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      44,     0,     0,     0,     0,    62,    60,     0,     0,     0,
       0,    86,     0,    47,    85,     0,    58,    57,    55,    56,
      53,    54,    46,     0,    73,    64,    37,    67,    24,     0,
      21,     0,    38,     0,    41,    77,    84,    43,     0,     0,
      71,     0,     0,    22,     0,    40,     0,     0,     0,     0,
      23,    39,    65,    68,    72,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,    10,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   180,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -26,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -29,    97,   -21,    13,   -71,   -71,    96,   -70,   -71,   -71,
     -71
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    35,     6,     8,    12,    18,    26,     9,    10,
      15,    16,    22,    19,    49,    81,   130,   150,    20,    27,
      21,    36,    37,    38,    39,    40,    41,    42,    43,    97,
      87,    47,    66,    48,   131,    73,    74,    88,    67,    68,
      69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    51,    65,    53,    72,   102,    44,    55,    44,    45,
      -5,     4,   128,    56,     1,    57,   141,    58,    13,    13,
     115,    59,     3,    82,   129,    84,    17,    85,    86,   142,
      89,   143,    94,    95,    96,    23,    50,    60,    71,    61,
      62,    63,    64,    55,    46,    14,    14,   103,    78,    56,
      90,    57,   112,    58,   112,    75,   136,    59,   114,   125,
      79,    80,   116,   117,   118,   119,   120,   121,   146,   111,
       5,   112,    72,    60,   112,    61,    62,    63,    64,     3,
     133,   152,   132,   135,   134,    98,    99,    44,    78,    44,
      28,   105,    29,   106,    30,    31,     7,    32,    33,    55,
     137,    80,   100,   101,    34,    56,    11,    57,   140,    58,
      95,    96,    25,    59,    93,    94,    95,    96,   151,    -6,
      52,    54,    70,    44,    75,    83,   104,   154,   155,    60,
      76,    61,    62,    63,    64,    91,    92,    93,    94,    95,
      96,    91,    92,    93,    94,    95,    96,    77,   108,    92,
      93,    94,    95,    96,   110,    91,    92,    93,    94,    95,
      96,    91,    92,    93,    94,    95,    96,   127,   113,   107,
     109,    96,   122,   138,   145,    91,    92,    93,    94,    95,
      96,   139,   147,    34,   148,   126,    91,    92,    93,    94,
      95,    96,   144,   149,   153,    24,   123,   124
};

static const yytype_uint8 yycheck[] =
{
      21,    27,    31,    29,    33,    75,    27,     1,    29,     1,
      12,     1,    16,     7,    10,     9,     1,    11,     1,     1,
      90,    15,    11,    52,    28,    54,    28,    56,    57,    14,
      59,    16,     6,     7,     8,    18,    26,    31,    32,    33,
      34,    35,    36,     1,    36,    28,    28,    76,     1,     7,
      15,     9,    14,    11,    14,    20,    16,    15,    16,    21,
      13,    14,    91,    92,    93,    94,    95,    96,   138,    12,
       0,    14,   101,    31,    14,    33,    34,    35,    36,    11,
     109,    21,   108,   112,   110,    13,    14,   108,     1,   110,
      22,    78,    24,    80,    26,    27,    17,    29,    30,     1,
      13,    14,    13,    14,    36,     7,    12,     9,   129,    11,
       7,     8,    36,    15,     5,     6,     7,     8,   144,    12,
      15,    15,    32,   144,    20,    25,    33,   148,   149,    31,
      19,    33,    34,    35,    36,     3,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,    20,    16,     4,
       5,     6,     7,     8,    16,     3,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,    21,    16,    15,
      15,     8,    13,    20,    16,     3,     4,     5,     6,     7,
       8,    20,    33,    36,    28,    13,     3,     4,     5,     6,
       7,     8,    23,    28,    21,    15,    99,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    38,    11,    39,     0,    40,    17,    41,    45,
      46,    12,    42,     1,    28,    47,    48,    28,    43,    50,
      55,    57,    49,    18,    48,    36,    44,    56,    22,    24,
      26,    27,    29,    30,    36,    39,    58,    59,    60,    61,
      62,    63,    64,    65,    69,     1,    36,    68,    70,    51,
      39,    58,    15,    58,    15,     1,     7,     9,    11,    15,
      31,    33,    34,    35,    36,    67,    69,    75,    76,    77,
      32,    32,    67,    72,    73,    20,    19,    20,     1,    13,
      14,    52,    67,    25,    67,    67,    67,    67,    74,    67,
      15,     3,     4,     5,     6,     7,     8,    66,    13,    14,
      13,    14,    74,    67,    33,    70,    70,    15,    16,    15,
      16,    12,    14,    16,    16,    74,    67,    67,    67,    67,
      67,    67,    13,    68,    73,    21,    13,    21,    16,    28,
      53,    71,    58,    67,    58,    67,    16,    13,    20,    20,
      69,     1,    14,    16,    23,    16,    74,    33,    28,    28,
      54,    58,    21,    21,    69,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    40,    39,    41,    41,    42,    42,    44,
      43,    46,    45,    45,    47,    47,    49,    48,    48,    51,
      52,    50,    54,    53,    53,    56,    55,    57,    55,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    60,    60,
      61,    62,    63,    63,    64,    66,    65,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      68,    68,    68,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    76,    76,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     2,     3,     2,     0,     0,
       3,     0,     4,     0,     2,     1,     0,     4,     1,     0,
       0,     6,     0,     3,     1,     0,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     7,
       6,     5,     3,     5,     3,     0,     4,     3,     2,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     1,     4,     7,     1,     4,     7,     1,
       4,     2,     4,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     4,     3,     3
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
        case 3:
#line 93 "src/semantic.y" /* yacc.c:1646  */
    { tsAddMark(); }
#line 1399 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 96 "src/semantic.y" /* yacc.c:1646  */
    { tsCleanIn(); }
#line 1405 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 109 "src/semantic.y" /* yacc.c:1646  */
    { subProg = 1; }
#line 1411 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 109 "src/semantic.y" /* yacc.c:1646  */
    { subProg = 0; }
#line 1417 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 1; }
#line 1423 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 111 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 0; }
#line 1429 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 117 "src/semantic.y" /* yacc.c:1646  */
    { setType((yyvsp[0])); }
#line 1435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 120 "src/semantic.y" /* yacc.c:1646  */
    { decParam = 1; }
#line 1441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 120 "src/semantic.y" /* yacc.c:1646  */
    { tsAddSubprog((yyvsp[-1])); }
#line 1447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 122 "src/semantic.y" /* yacc.c:1646  */
    { tsUpdateNparam((yyvsp[-1])); nParam = 0; decParam = 0; }
#line 1453 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 122 "src/semantic.y" /* yacc.c:1646  */
    {(yyvsp[-2]).nDim=0;}
#line 1459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 125 "src/semantic.y" /* yacc.c:1646  */
    {decVar = 2; }
#line 1465 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 126 "src/semantic.y" /* yacc.c:1646  */
    { decVar = 2; }
#line 1471 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 137 "src/semantic.y" /* yacc.c:1646  */
    {

	if((yyvsp[-3]).type!=(yyvsp[-1]).type){
		printf("Semantic Error(%d): Types are not equal.\n",line, (yyvsp[-3]).type, (yyvsp[-1]).type);
	}
	if(!equalSize((yyvsp[-3]),(yyvsp[-1]))){
		printf("Semantic Error(%d): Sizes are not equal.\n",line);
	}
}
#line 1485 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 147 "src/semantic.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2]).type != BOOLEANO){
		printf("Semantic Error(%d): Expression are not logic.\n", line);
	}
}
#line 1495 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 152 "src/semantic.y" /* yacc.c:1646  */
    {
					if((yyvsp[-4]).type != BOOLEANO){
						printf("Semantic Error(%d): Expression are not logic.\n", line);
					}
				}
#line 1505 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 158 "src/semantic.y" /* yacc.c:1646  */
    {
	if((yyvsp[-1]).type != BOOLEANO){
		printf("Semantic Error(%d): Expression are not logic.\n", line);
	}
}
#line 1515 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 164 "src/semantic.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2]).type != BOOLEANO){
		printf("Semantic Error(%d): Expression are not logic.\n", line);
	}
}
#line 1525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 175 "src/semantic.y" /* yacc.c:1646  */
    { tsCheckReturn((yyvsp[0]),&(yyval)); }
#line 1531 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 177 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; (yyval).nDim = (yyvsp[-1]).nDim; (yyval).tDim1 = (yyvsp[-1]).tDim1; (yyval).tDim2 = (yyvsp[-1]).tDim2; }
#line 1537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 178 "src/semantic.y" /* yacc.c:1646  */
    {tsOpUnary((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1543 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 179 "src/semantic.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; }
#line 1549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 180 "src/semantic.y" /* yacc.c:1646  */
    {(yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; currentFunction = -1;}
#line 1555 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 181 "src/semantic.y" /* yacc.c:1646  */
    {decVar = 0;}
#line 1561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 182 "src/semantic.y" /* yacc.c:1646  */
    {tsOpSign((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1567 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 183 "src/semantic.y" /* yacc.c:1646  */
    {tsOpSignBin((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1573 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 184 "src/semantic.y" /* yacc.c:1646  */
    {tsOpMul((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 185 "src/semantic.y" /* yacc.c:1646  */
    {tsOpEqual((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1585 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 186 "src/semantic.y" /* yacc.c:1646  */
    {tsOpRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1591 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 187 "src/semantic.y" /* yacc.c:1646  */
    {tsOpAnd((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1597 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 188 "src/semantic.y" /* yacc.c:1646  */
    {tsOpOr((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1603 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 195 "src/semantic.y" /* yacc.c:1646  */
    {

					if(decVar == 1){
						(yyvsp[0]).nDim=0; (yyvsp[0]).tDim1 = 0; (yyvsp[0]).tDim2 = 0; tsAddId((yyvsp[0]));
					} else{
						if(decParam == 0)
							tsGetId((yyvsp[0]), &(yyval));
					}

				}
#line 1618 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 205 "src/semantic.y" /* yacc.c:1646  */
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
#line 1640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 222 "src/semantic.y" /* yacc.c:1646  */
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
#line 1663 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 241 "src/semantic.y" /* yacc.c:1646  */
    {
					if(decVar == 1){
						(yyvsp[0]).nDim=0; (yyvsp[0]).tDim1 = 0; (yyvsp[0]).tDim2 = 0; tsAddId((yyvsp[0]));
					}
				}
#line 1673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 246 "src/semantic.y" /* yacc.c:1646  */
    {
						if(decVar == 1) {
							(yyvsp[-3]).nDim=1; (yyvsp[-3]).tDim1=atoi((yyvsp[-1]).lex); (yyvsp[-3]).tDim2=0; tsAddId((yyvsp[-3]));
						}
				}
#line 1683 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 251 "src/semantic.y" /* yacc.c:1646  */
    {
					if(decVar == 1) {
						(yyvsp[-6]).nDim=2; (yyvsp[-6]).tDim1=atoi((yyvsp[-4]).lex); (yyvsp[-6]).tDim2=atoi((yyvsp[-1]).lex); tsAddId((yyvsp[-6]));
					}
				}
#line 1693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 258 "src/semantic.y" /* yacc.c:1646  */
    { (yyvsp[0]).nDim=0; nParam++; setType((yyvsp[-1])); tsAddParam((yyvsp[0])); }
#line 1699 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 259 "src/semantic.y" /* yacc.c:1646  */
    { (yyvsp[0]).nDim=0; nParam++; setType((yyvsp[-1])); tsAddParam((yyvsp[0])); }
#line 1705 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 262 "src/semantic.y" /* yacc.c:1646  */
    { nParam++; tsCheckParam((yyvsp[-2]), nParam); }
#line 1711 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 263 "src/semantic.y" /* yacc.c:1646  */
    { nParam = 1; tsCheckParam((yyvsp[0]), nParam); }
#line 1717 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 271 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = ENTERO; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1723 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 272 "src/semantic.y" /* yacc.c:1646  */
    { aux = 1; (yyval).type = (yyvsp[0]).type; (yyval).nDim = (yyvsp[0]).nDim; (yyval).tDim1 = (yyvsp[0]).tDim1; (yyval).tDim2 = (yyvsp[0]).tDim2; }
#line 1729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 273 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = BOOLEANO; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 274 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = FLOTANTE; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1741 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 275 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = CARACTER; (yyval).nDim = 0; (yyval).tDim1 = 0; (yyval).tDim2 = 0; }
#line 1747 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 277 "src/semantic.y" /* yacc.c:1646  */
    { tsFunctionCall((yyvsp[-3]), &(yyval)); }
#line 1753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 278 "src/semantic.y" /* yacc.c:1646  */
    { tsFunctionCall((yyvsp[-2]), &(yyval)); }
#line 1759 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 280 "src/semantic.y" /* yacc.c:1646  */
    { (yyval).type = (yyvsp[-1]).type; (yyval).nDim = (yyvsp[-1]).nDim; (yyval).tDim1 = (yyvsp[-1]).tDim1; (yyval).tDim2 = (yyvsp[-1]).tDim2;}
#line 1765 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 1769 "src/y.tab.c" /* yacc.c:1646  */
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
#line 282 "src/semantic.y" /* yacc.c:1906  */


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
