
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "AnalizadorBison.y"

#include <stdio.h>
#include <math.h>
#include "tablaDeSimbolos.h"

#define YYERROR_VERBOSE 1

extern FILE* yyin;
extern int yylineno;

void validarAnalisisLexico();
int yylex();
int yywrap() { return(1); }
void yyerror (char const *s) { fprintf (stderr, "\n%d: %s ",yylineno,s); }

int flag_funcion = 0;
listaParametros parametros = {NULL};



/* Line 189 of yacc.c  */
#line 94 "AnalizadorBison.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFICADOR = 258,
     CONSTANTE_DECIMAL = 259,
     CONSTANTE_CARACTER = 260,
     CONSTANTE_HEXADECIMAL = 261,
     CONSTANTE_OCTAL = 262,
     CONSTANTE_REAL = 263,
     LITERAL_CADENA = 264,
     AND_LOGICO = 265,
     BREAK = 266,
     CASE = 267,
     CHAR = 268,
     DEFINE = 269,
     DISTINTO = 270,
     DIVISION_IGUAL = 271,
     DO = 272,
     DOUBLE = 273,
     ELSE = 274,
     ENUM = 275,
     FLOAT = 276,
     FOR = 277,
     IF = 278,
     IGUAL_IGUAL = 279,
     INCLUDE = 280,
     INT = 281,
     LONG = 282,
     MAS_IGUAL = 283,
     MAS_MAS = 284,
     MAYOR_IGUAL = 285,
     MENOR_IGUAL = 286,
     MENOS_IGUAL = 287,
     MENOS_MENOS = 288,
     MODULO_IGUAL = 289,
     O_IGUAL = 290,
     OR_LOGICO = 291,
     POR_IGUAL = 292,
     RETURN = 293,
     SHORT = 294,
     SWITCH = 295,
     VOID = 296,
     WHILE = 297,
     IFX = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 21 "AnalizadorBison.y"

 char* cadena;
 struct yylval_struct {
    char* tipo;
    int valor_entero;
    float valor_float;
  } mystruct;



/* Line 214 of yacc.c  */
#line 184 "AnalizadorBison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 196 "AnalizadorBison.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNRULES -- Number of states.  */
#define YYNSTATES  321

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,     2,     2,    64,    61,     2,
      47,    48,    45,    43,    51,    44,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    50,
      62,    52,    63,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,    59,    54,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    13,    16,    18,    21,
      23,    25,    30,    34,    38,    41,    45,    48,    50,    53,
      56,    58,    60,    62,    64,    66,    68,    70,    72,    74,
      76,    80,    82,    86,    89,    91,    97,   102,   105,   107,
     111,   113,   117,   120,   122,   124,   128,   133,   137,   142,
     147,   151,   154,   156,   158,   160,   164,   167,   170,   172,
     174,   178,   180,   184,   189,   191,   195,   198,   200,   202,
     205,   207,   211,   216,   220,   224,   227,   232,   236,   240,
     243,   245,   247,   249,   251,   253,   255,   259,   264,   267,
     269,   274,   278,   282,   285,   287,   290,   296,   304,   310,
     316,   324,   333,   343,   352,   361,   369,   378,   386,   394,
     401,   404,   408,   411,   413,   417,   419,   423,   425,   427,
     429,   431,   433,   435,   437,   443,   445,   447,   451,   453,
     457,   459,   463,   465,   469,   471,   475,   477,   481,   485,
     487,   491,   495,   499,   503,   505,   507,   511,   515,   517,
     521,   525,   529,   531,   536,   538,   541,   544,   547,   549,
     551,   553,   555,   557,   559,   564,   569,   573,   576,   579,
     581,   583,   585,   589,   591,   595,   597,   599,   601,   603,
     605
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    -1,    25,    67,    -1,    14,   120,    67,
      -1,    68,    -1,     1,    68,    -1,    69,    -1,    68,    69,
      -1,    70,    -1,    71,    -1,    73,    81,    72,    96,    -1,
      81,    72,    96,    -1,    73,    81,    96,    -1,    81,    96,
      -1,    73,    75,    50,    -1,    73,    50,    -1,    71,    -1,
      72,    71,    -1,    74,    73,    -1,    74,    -1,    26,    -1,
      13,    -1,    21,    -1,    18,    -1,    39,    -1,    41,    -1,
      27,    -1,    78,    -1,    76,    -1,    75,    51,    76,    -1,
      81,    -1,    81,    52,    88,    -1,    74,    77,    -1,    74,
      -1,    20,     3,    53,    79,    54,    -1,    20,    53,    79,
      54,    -1,    20,     3,    -1,    80,    -1,    79,    51,    80,
      -1,     3,    -1,     3,    52,   105,    -1,    83,    82,    -1,
      82,    -1,     3,    -1,    47,    81,    48,    -1,    82,    55,
     105,    56,    -1,    82,    55,    56,    -1,    82,    47,    84,
      48,    -1,    82,    47,    87,    48,    -1,    82,    47,    48,
      -1,    45,    83,    -1,    45,    -1,    85,    -1,    86,    -1,
      85,    51,    86,    -1,    73,    81,    -1,    73,    91,    -1,
      73,    -1,     3,    -1,    87,    51,     3,    -1,   102,    -1,
      53,    89,    54,    -1,    53,    89,    51,    54,    -1,    88,
      -1,    89,    51,    88,    -1,    77,    91,    -1,    77,    -1,
      83,    -1,    83,    92,    -1,    92,    -1,    47,    91,    48,
      -1,    92,    55,   105,    56,    -1,    55,   105,    56,    -1,
      92,    55,    56,    -1,    55,    56,    -1,    92,    47,    84,
      48,    -1,    47,    84,    48,    -1,    92,    47,    48,    -1,
      47,    48,    -1,    94,    -1,    95,    -1,    96,    -1,    98,
      -1,    99,    -1,   100,    -1,     3,    57,    93,    -1,    12,
     105,    57,    93,    -1,   101,    50,    -1,    50,    -1,    53,
      72,    97,    54,    -1,    53,    97,    54,    -1,    53,    72,
      54,    -1,    53,    54,    -1,    93,    -1,    97,    93,    -1,
      23,    47,   101,    48,    93,    -1,    23,    47,   101,    48,
      93,    19,    93,    -1,    40,    47,   101,    48,    93,    -1,
      42,    47,   101,    48,    93,    -1,    17,    93,    42,    47,
     101,    48,    50,    -1,    22,    47,    71,   101,    50,   101,
      48,    93,    -1,    22,    47,   101,    50,   101,    50,   101,
      48,    93,    -1,    22,    47,   101,    50,   101,    50,    48,
      93,    -1,    22,    47,   101,    50,    50,   101,    48,    93,
      -1,    22,    47,   101,    50,    50,    48,    93,    -1,    22,
      47,    50,   101,    50,   101,    48,    93,    -1,    22,    47,
      50,   101,    50,    48,    93,    -1,    22,    47,    50,    50,
     101,    48,    93,    -1,    22,    47,    50,    50,    48,    93,
      -1,    11,    50,    -1,    38,   101,    50,    -1,    38,    50,
      -1,   102,    -1,   101,    51,   102,    -1,   104,    -1,   117,
     103,   102,    -1,    37,    -1,    16,    -1,    28,    -1,    32,
      -1,    34,    -1,    52,    -1,   106,    -1,   106,    58,   101,
      57,   104,    -1,   104,    -1,   107,    -1,   106,    36,   107,
      -1,   108,    -1,   107,    10,   108,    -1,   109,    -1,   108,
      59,   109,    -1,   110,    -1,   109,    60,   110,    -1,   111,
      -1,   110,    61,   111,    -1,   112,    -1,   111,    24,   112,
      -1,   111,    15,   112,    -1,   113,    -1,   112,    62,   113,
      -1,   112,    63,   113,    -1,   112,    31,   113,    -1,   112,
      30,   113,    -1,   114,    -1,   115,    -1,   114,    43,   115,
      -1,   114,    44,   115,    -1,   116,    -1,   115,    45,   116,
      -1,   115,    46,   116,    -1,   115,    64,   116,    -1,   117,
      -1,    47,    90,    48,   116,    -1,   119,    -1,    33,   117,
      -1,    29,   117,    -1,   118,   116,    -1,    61,    -1,    45,
      -1,    43,    -1,    44,    -1,    65,    -1,   120,    -1,   119,
      55,   101,    56,    -1,   119,    47,   121,    48,    -1,   119,
      47,    48,    -1,   119,    33,    -1,   119,    29,    -1,     3,
      -1,   122,    -1,     9,    -1,    47,   101,    48,    -1,   102,
      -1,   121,    51,   102,    -1,     7,    -1,     6,    -1,     4,
      -1,     5,    -1,     8,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    55,    56,    57,    58,    61,    62,    65,
      66,    69,    70,    71,    72,    75,    76,    79,    80,    83,
      84,    87,    88,    89,    90,    91,    92,    93,    94,    98,
      99,   102,   103,   107,   108,   112,   113,   114,   117,   118,
     121,   122,   125,   126,   129,   130,   131,   132,   133,   134,
     135,   138,   139,   142,   145,   146,   149,   150,   151,   154,
     155,   157,   158,   159,   161,   162,   164,   165,   167,   168,
     169,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     181,   182,   183,   184,   185,   186,   188,   189,   191,   192,
     194,   195,   196,   197,   199,   200,   202,   203,   204,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     218,   219,   220,   222,   223,   225,   226,   228,   229,   230,
     231,   232,   233,   235,   236,   238,   240,   241,   243,   244,
     246,   247,   249,   250,   252,   253,   255,   256,   257,   259,
     260,   261,   262,   263,   265,   267,   268,   277,   279,   280,
     281,   286,   288,   289,   291,   292,   293,   294,   296,   297,
     298,   299,   300,   302,   303,   304,   305,   306,   307,   309,
     310,   311,   312,   314,   315,   317,   318,   319,   320,   321,
     322
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICADOR", "CONSTANTE_DECIMAL",
  "CONSTANTE_CARACTER", "CONSTANTE_HEXADECIMAL", "CONSTANTE_OCTAL",
  "CONSTANTE_REAL", "LITERAL_CADENA", "AND_LOGICO", "BREAK", "CASE",
  "CHAR", "DEFINE", "DISTINTO", "DIVISION_IGUAL", "DO", "DOUBLE", "ELSE",
  "ENUM", "FLOAT", "FOR", "IF", "IGUAL_IGUAL", "INCLUDE", "INT", "LONG",
  "MAS_IGUAL", "MAS_MAS", "MAYOR_IGUAL", "MENOR_IGUAL", "MENOS_IGUAL",
  "MENOS_MENOS", "MODULO_IGUAL", "O_IGUAL", "OR_LOGICO", "POR_IGUAL",
  "RETURN", "SHORT", "SWITCH", "VOID", "WHILE", "'+'", "'-'", "'*'", "'/'",
  "'('", "')'", "IFX", "';'", "','", "'='", "'{'", "'}'", "'['", "']'",
  "':'", "'?'", "'|'", "'^'", "'&'", "'<'", "'>'", "'%'", "'!'", "$accept",
  "unidad_de_programa", "unidad_de_traduccion", "declaracion_externa",
  "definicion_de_funcion", "declaracion", "lista_de_declaracion",
  "especificadores_de_declaracion", "especificador_de_tipo",
  "lista_declaradores_init", "declarador_init",
  "lista_calificador_especificador", "especificador_enum",
  "lista_de_enumerador", "enumerador", "declarador", "declarador_directo",
  "apuntador", "lista_tipos_de_parametro", "lista_de_parametros",
  "declaracion_de_parametro", "lista_de_identificadores", "inicializador",
  "lista_de_inicializadores", "nombre_de_tipo", "declarador_abstracto",
  "declarador_abstracto_directo", "sentencia", "sentencia_etiquetada",
  "sentencia_expresion", "sentencia_compuesta", "lista_de_sentencias",
  "sentencia_de_seleccion", "sentencia_de_iteracion", "sentencia_de_salto",
  "expresion", "expresion_de_asignacion", "operador_de_asignacion",
  "expresion_condicional", "expresion_constante", "expresion_logica_or",
  "expresion_logica_and", "expresion_or_inclusivo",
  "expresion_or_exclusivo", "expresion_and", "expresion_de_igualdad",
  "expresion_relacional", "expresion_de_corrimiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_cast", "expresion_unaria",
  "operador_unario", "expresion_posfija", "expresion_primaria",
  "lista_expresiones_argumento", "constante", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    43,    45,    42,    47,    40,    41,   298,
      59,    44,    61,   123,   125,    91,    93,    58,    63,   124,
      94,    38,    60,    62,    37,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    84,    85,    85,    86,    86,    86,    87,
      87,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   103,
     103,   103,   103,   104,   104,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   111,   112,
     112,   112,   112,   112,   113,   114,   114,   114,   115,   115,
     115,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   119,   119,   119,   119,   119,   119,   120,
     120,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     122
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     1,     2,     1,     2,     1,
       1,     4,     3,     3,     2,     3,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     1,     5,     4,     2,     1,     3,
       1,     3,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     2,     1,     1,     1,     3,     2,     2,     1,     1,
       3,     1,     3,     4,     1,     3,     2,     1,     1,     2,
       1,     3,     4,     3,     3,     2,     4,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     2,     1,
       4,     3,     3,     2,     1,     2,     5,     7,     5,     5,
       7,     8,     9,     8,     8,     7,     8,     7,     7,     6,
       2,     3,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     2,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    44,    22,     0,    24,     0,    23,     0,    21,
      27,    25,    26,    52,     0,     0,     5,     7,     9,    10,
       0,    20,    28,     0,    43,     0,     6,   169,   177,   178,
     176,   175,   179,   171,   180,     0,     0,   170,    37,     0,
       3,    51,     0,     1,     8,    16,     0,    29,    31,    19,
       0,    17,     0,     0,    14,     0,     0,    42,     0,     0,
     160,   161,   159,     0,   158,   162,     0,   113,   115,   123,
     126,   128,   130,   132,   134,   136,   139,   144,   145,   148,
     152,     0,   154,   163,     4,     0,    40,     0,    38,    45,
      15,     0,     0,     0,    13,   169,     0,     0,     0,   180,
       0,     0,     0,     0,     0,    89,    93,     0,    94,    80,
      81,    82,     0,    83,    84,    85,     0,    18,    12,    31,
      59,    50,    58,     0,    53,    54,     0,    47,   125,     0,
     152,   156,   155,    34,    67,     0,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   117,
     122,     0,   157,   168,   167,     0,     0,     0,     0,     0,
      36,    30,     0,    32,    61,    11,     0,   110,     0,     0,
       0,     0,   112,     0,     0,     0,    92,     0,    91,    95,
      88,     0,     0,    56,    68,    57,    70,    48,     0,    49,
       0,    46,    33,     0,    68,    66,     0,   114,   127,     0,
     129,   131,   133,   135,   138,   137,   143,   142,   140,   141,
     146,   147,   149,   150,   151,   116,   166,   173,     0,     0,
      35,    41,    39,    64,     0,    86,     0,     0,     0,     0,
       0,     0,   111,     0,     0,    90,    79,     0,     0,    75,
       0,    69,     0,     0,    55,    60,   153,     0,   165,     0,
     164,     0,    62,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    71,    73,    78,     0,    74,     0,   124,
     174,    63,    65,     0,     0,     0,     0,     0,     0,     0,
      96,    98,    99,    76,    72,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   108,   107,     0,     0,
     105,     0,     0,     0,    97,   106,   101,   104,   103,     0,
     102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    52,    53,    21,    46,
      47,   134,    22,    87,    88,    23,    24,    25,   247,   124,
     125,   126,   173,   234,   135,   248,   196,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    67,   161,    68,   129,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   228,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const yytype_int16 yypact[] =
{
    1158,  1199,  -166,  -166,   234,  -166,    13,  -166,  1158,  -166,
    -166,  -166,  -166,   -33,    42,   105,  1199,  -166,  -166,  -166,
      61,  1093,  -166,   566,    16,    22,  1199,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  1060,  1158,  -166,    54,   137,
    -166,  -166,    -2,  -166,  -166,  -166,   126,  -166,   139,  -166,
     253,  -166,   566,    61,  -166,  1174,   670,    16,  1079,  1079,
    -166,  -166,  -166,   605,  -166,  -166,    46,  -166,  -166,   -21,
      99,    88,    94,   102,    53,   106,  -166,   145,   -10,  -166,
     635,  1060,   115,  -166,  -166,   137,   119,   -28,  -166,  -166,
    -166,    42,   716,   566,  -166,   150,   159,  1060,   505,    13,
     173,   178,   735,   184,   203,  -166,  -166,   316,  -166,  -166,
    -166,  -166,   379,  -166,  -166,  -166,   132,  -166,  -166,   162,
    -166,  -166,    15,   215,   216,  -166,    82,  -166,  -166,   243,
    -166,  -166,  -166,  1093,    48,   235,  -166,  1060,  1060,  1060,
    1060,  1060,  1060,  1060,  1060,  1060,  1060,  1060,  1060,  1060,
    1060,  1060,  1060,  1060,  1060,  -166,  -166,  -166,  -166,  -166,
    -166,  1060,  -166,  -166,  -166,   783,  1060,    84,  1060,   137,
    -166,  -166,   716,  -166,  -166,  -166,   505,  -166,   247,   263,
     556,  1060,  -166,   185,  1060,  1060,  -166,   442,  -166,  -166,
    -166,  1115,   814,  -166,    18,  -166,    28,  -166,  1093,  -166,
     307,  -166,  -166,  1210,    43,  -166,  1060,  -166,    99,    -9,
      88,    94,   102,    53,   106,   106,  -166,  -166,  -166,  -166,
     -10,   -10,  -166,  -166,  -166,  -166,  -166,  -166,    91,    -7,
    -166,  -166,  -166,  -166,   104,  -166,   505,   264,   833,  1060,
     198,   113,  -166,   142,   149,  -166,  -166,   265,   267,  -166,
     256,    28,  1125,   881,  -166,  -166,  -166,  1060,  -166,  1060,
    -166,   651,  -166,  -166,  1060,   900,   227,   239,   946,   505,
     505,   505,  -166,  -166,  -166,  -166,   268,  -166,   261,  -166,
    -166,  -166,  -166,   154,   505,   160,   965,  1060,   996,   251,
     311,  -166,  -166,  -166,  -166,   276,  -166,   505,   505,   167,
     221,   505,   236,  1029,   505,  -166,  -166,  -166,   505,   505,
    -166,   505,   505,   237,  -166,  -166,  -166,  -166,  -166,   505,
    -166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,     2,   330,    27,  -166,     7,    51,     3,   -49,  -166,
     241,   202,  -166,   255,   172,   -12,   -19,    19,   -54,  -166,
     146,  -166,  -165,  -166,  -166,   -82,  -118,   -85,  -166,  -166,
      -1,   240,  -166,  -166,  -166,   -35,   -87,  -166,   -36,   -80,
    -166,   208,   210,   207,   209,   219,   164,    98,  -166,    45,
     -72,   -25,  -166,  -166,   348,  -166,  -166
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      66,   123,    42,    20,    20,   174,    57,   233,    48,   162,
      40,    20,    13,   179,   133,   138,    38,   178,     2,    20,
     128,     2,    54,   169,    49,     2,   170,   189,    66,    20,
      51,   130,    41,   131,   132,   152,   153,   139,    84,    20,
     195,   119,   137,    44,   137,     2,    89,    94,   257,   260,
     207,   118,   205,    44,   154,    51,   130,    51,   122,   117,
      13,   128,   191,    55,     2,   191,    39,   183,   144,    14,
     192,    56,   130,   192,   225,   252,   251,   145,   227,   119,
     222,   223,   224,   253,   133,   174,   251,    13,   231,    14,
     203,   235,   175,    13,   136,   203,   282,   137,   192,    93,
     117,   107,   189,   192,   209,    43,    13,    85,    14,   140,
     193,    45,   250,   130,   117,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     199,   229,   128,   200,   256,   169,   146,   147,   230,   258,
      86,   194,   259,   130,   163,   240,   241,   141,   164,   243,
     244,   263,     3,   204,   142,   261,   128,     5,   262,     6,
       7,   269,   165,   143,   137,     9,    10,   130,   148,   149,
     166,   168,   280,   278,   174,    57,    90,    91,    11,    42,
      12,   130,   190,   137,   290,   291,   292,   239,   150,   151,
     270,    92,    50,   137,   122,   220,   221,   271,   276,   296,
     137,   122,   295,   266,   267,   137,   122,   176,   297,   177,
     194,   137,   306,   307,    92,   308,   310,   128,   137,   314,
     180,   279,   204,   315,   316,   181,   317,   318,   130,   283,
     285,   184,   130,   289,   320,   242,   137,    27,    28,    29,
      30,    31,    32,    33,   216,   217,   218,   219,   268,   137,
     185,   299,   300,   302,    34,   122,    95,    28,    29,    30,
      31,    32,    33,   197,    96,    97,     3,   198,   313,   309,
      98,     5,   137,    99,     7,   100,   101,   286,   137,     9,
      10,    35,    58,   206,   311,   319,    59,   137,   137,   287,
     137,   102,    11,   103,    12,   104,    60,    61,    62,   201,
      63,   303,   137,   105,   236,   237,    50,   106,   214,   215,
     255,   264,   274,   272,    64,   273,   293,   294,    65,    95,
      28,    29,    30,    31,    32,    33,   305,    96,    97,     3,
     304,    26,   171,    98,     5,   202,    99,     7,   100,   101,
     167,   232,     9,    10,   254,    58,   208,   187,   211,    59,
     210,   212,    36,     0,   102,    11,   103,    12,   104,    60,
      61,    62,   213,    63,     0,     0,   105,     0,     0,    50,
     186,     0,     0,     0,     0,     0,     0,    64,     0,     0,
       0,    65,    95,    28,    29,    30,    31,    32,    33,     0,
      96,    97,     0,     0,     0,     0,    98,     0,     0,    34,
       0,   100,   101,     0,     0,     0,     0,     0,    58,     0,
       0,     0,    59,     0,     0,     0,     0,   102,     0,   103,
       0,   104,    60,    61,    62,     0,    63,     0,     0,   105,
       0,     0,    50,   188,     0,     0,     0,     0,     0,     0,
      64,     0,     0,     0,    65,    95,    28,    29,    30,    31,
      32,    33,     0,    96,    97,     0,     0,     0,     0,    98,
       0,     0,    34,     0,   100,   101,     0,     0,     0,     0,
       0,    58,     0,     0,     0,    59,     0,     0,     0,     0,
     102,     0,   103,     0,   104,    60,    61,    62,     0,    63,
       0,     0,   105,     0,     0,    50,   245,     0,     0,     0,
       0,     0,     0,    64,     0,     0,     0,    65,    95,    28,
      29,    30,    31,    32,    33,     0,    96,    97,     0,     0,
       0,     0,    98,     0,     0,    34,     0,   100,   101,     0,
       0,     0,     0,     0,    58,     0,     0,     0,    59,     0,
       0,     0,     0,   102,     0,   103,     0,   104,    60,    61,
      62,     0,    63,     0,     0,   105,     0,     0,    50,    27,
      28,    29,    30,    31,    32,    33,    64,     0,     0,     3,
      65,     0,     0,     0,     5,     0,    99,     7,     0,     3,
       0,     0,     9,    10,     5,    58,     6,     7,     0,    59,
       0,     0,     9,    10,     0,    11,     0,    12,     0,    60,
      61,    62,     0,    63,     0,    11,   238,    12,    27,    28,
      29,    30,    31,    32,    33,     0,     0,    64,     3,    50,
       0,    65,     0,     5,     0,    99,     7,     0,     0,     0,
       0,     9,    10,     0,    58,     0,     0,     0,    59,     0,
       0,     0,     0,     0,    11,     0,    12,     0,    60,    61,
      62,   155,    63,     0,    27,    28,    29,    30,    31,    32,
      33,     0,     0,   156,     0,     0,    64,   157,     0,   158,
      65,    34,   159,    27,    28,    29,    30,    31,    32,    33,
      58,     0,     0,     0,    59,     0,     0,   160,     0,     0,
      34,     0,     0,     0,    60,    61,    62,     0,    63,    58,
       0,     0,     0,    59,   172,   281,     0,     0,     0,     0,
       0,     0,    64,    60,    61,    62,    65,    63,     0,    27,
      28,    29,    30,    31,    32,    33,   127,     0,     0,     0,
       0,    64,     0,     0,     0,    65,    34,     0,    27,    28,
      29,    30,    31,    32,    33,    58,     0,     0,     0,    59,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    60,
      61,    62,     0,    63,    58,     0,     0,     0,    59,   172,
       0,     0,     0,     0,     0,     0,     0,    64,    60,    61,
      62,    65,    63,     0,     0,   182,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,    64,     0,     0,     0,
      65,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,    59,    27,    28,    29,
      30,    31,    32,    33,     0,     0,    60,    61,    62,     0,
      63,   226,     0,     0,    34,     0,    27,    28,    29,    30,
      31,    32,    33,    58,    64,     0,     0,    59,    65,     0,
       0,     0,     0,    34,     0,     0,     0,    60,    61,    62,
       0,    63,    58,     0,     0,     0,    59,     0,     0,     0,
     249,     0,     0,     0,     0,    64,    60,    61,    62,    65,
      63,     0,     0,   265,    27,    28,    29,    30,    31,    32,
      33,     0,     0,     0,    64,     0,     0,     0,    65,     0,
       0,    34,     0,    27,    28,    29,    30,    31,    32,    33,
      58,     0,     0,     0,    59,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    60,    61,    62,     0,    63,    58,
       0,     0,     0,    59,     0,     0,     0,   277,     0,     0,
       0,     0,    64,    60,    61,    62,    65,    63,   284,    27,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,    64,     0,     0,     0,    65,    34,     0,    27,    28,
      29,    30,    31,    32,    33,    58,     0,     0,     0,    59,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    60,
      61,    62,     0,    63,    58,     0,   288,     0,    59,    27,
      28,    29,    30,    31,    32,    33,     0,    64,    60,    61,
      62,    65,    63,   298,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    58,    64,     0,     0,    59,
      65,     0,    27,    28,    29,    30,    31,    32,    33,    60,
      61,    62,     0,    63,   301,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,    64,    58,     0,
       0,    65,    59,    27,    28,    29,    30,    31,    32,    33,
       0,     0,    60,    61,    62,     0,    63,   312,     0,     0,
      34,     0,    27,    28,    29,    30,    31,    32,    33,    58,
      64,     0,     0,    59,    65,     0,     0,     0,     0,    34,
       0,     0,     0,    60,    61,    62,     3,    63,    58,     0,
       0,     5,    59,     6,     7,     0,     0,     0,     2,     9,
      10,    64,    60,    61,    62,    65,    35,     0,     3,     0,
       0,     0,    11,     5,    12,     6,     7,     0,     3,     0,
      64,     9,    10,     5,    65,     6,     7,     0,     0,     0,
       0,     9,    10,     0,    11,     0,    12,     0,    -2,     1,
      13,     2,   191,   246,    11,     0,    12,     0,     0,     0,
     192,     3,     4,   275,     0,     0,     5,   120,     6,     7,
       0,     0,     0,     8,     9,    10,     0,     3,     0,     0,
       0,     0,     5,     0,     6,     7,     0,    11,     0,    12,
       9,    10,     2,    13,     0,    14,     0,     0,     0,     0,
       0,     0,     3,    11,     0,    12,     0,     5,     0,     6,
       7,     0,   121,     3,     0,     9,    10,     0,     5,     0,
       6,     7,     0,     0,     0,     0,     9,    10,    11,     0,
      12,     0,     0,     0,    13,     0,    14,     0,     0,    11,
       0,    12,     0,     0,     0,    13,     0,   203,   246,     0,
       0,     0,     0,     0,     0,   192
};

static const yytype_int16 yycheck[] =
{
      35,    55,    14,     0,     1,    92,    25,   172,    20,    81,
       8,     8,    45,    98,    63,    36,     3,    97,     3,    16,
      56,     3,    23,    51,    21,     3,    54,   112,    63,    26,
      23,    56,    13,    58,    59,    45,    46,    58,    36,    36,
     122,    53,    51,    16,    51,     3,    48,    48,    57,    56,
     137,    52,   134,    26,    64,    48,    81,    50,    55,    52,
      45,    97,    47,    47,     3,    47,    53,   102,    15,    47,
      55,    55,    97,    55,   161,    47,   194,    24,   165,    91,
     152,   153,   154,    55,   133,   172,   204,    45,   168,    47,
      47,   176,    93,    45,    48,    47,   261,    51,    55,    48,
      93,    50,   187,    55,   139,     0,    45,    53,    47,    10,
     122,    50,   192,   138,   107,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
      48,   166,   168,    51,   206,    51,    30,    31,    54,    48,
       3,   122,    51,   168,    29,   180,   181,    59,    33,   184,
     185,   236,    13,   134,    60,    51,   192,    18,    54,    20,
      21,    48,    47,    61,    51,    26,    27,   192,    62,    63,
      55,    52,   259,   253,   261,   194,    50,    51,    39,   191,
      41,   206,    50,    51,   269,   270,   271,   180,    43,    44,
      48,    52,    53,    51,   191,   150,   151,    48,   252,   284,
      51,   198,    48,   238,   239,    51,   203,    57,    48,    50,
     191,    51,   297,   298,    52,    48,   301,   253,    51,   304,
      47,   257,   203,   308,   309,    47,   311,   312,   253,   264,
     265,    47,   257,   268,   319,    50,    51,     3,     4,     5,
       6,     7,     8,     9,   146,   147,   148,   149,    50,    51,
      47,   286,   287,   288,    20,   252,     3,     4,     5,     6,
       7,     8,     9,    48,    11,    12,    13,    51,   303,    48,
      17,    18,    51,    20,    21,    22,    23,    50,    51,    26,
      27,    47,    29,    48,    48,    48,    33,    51,    51,    50,
      51,    38,    39,    40,    41,    42,    43,    44,    45,    56,
      47,    50,    51,    50,    57,    42,    53,    54,   144,   145,
       3,    47,    56,    48,    61,    48,    48,    56,    65,     3,
       4,     5,     6,     7,     8,     9,    50,    11,    12,    13,
      19,     1,    91,    17,    18,   133,    20,    21,    22,    23,
      85,   169,    26,    27,   198,    29,   138,   107,   141,    33,
     140,   142,     4,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,   143,    47,    -1,    -1,    50,    -1,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    65,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    45,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    65,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    50,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    65,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,    43,    44,
      45,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,     3,
       4,     5,     6,     7,     8,     9,    61,    -1,    -1,    13,
      65,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    13,
      -1,    -1,    26,    27,    18,    29,    20,    21,    -1,    33,
      -1,    -1,    26,    27,    -1,    39,    -1,    41,    -1,    43,
      44,    45,    -1,    47,    -1,    39,    50,    41,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    61,    13,    53,
      -1,    65,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    43,    44,
      45,    16,    47,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    28,    -1,    -1,    61,    32,    -1,    34,
      65,    20,    37,     3,     4,     5,     6,     7,     8,     9,
      29,    -1,    -1,    -1,    33,    -1,    -1,    52,    -1,    -1,
      20,    -1,    -1,    -1,    43,    44,    45,    -1,    47,    29,
      -1,    -1,    -1,    33,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    43,    44,    45,    65,    47,    -1,     3,
       4,     5,     6,     7,     8,     9,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    65,    20,    -1,     3,     4,
       5,     6,     7,     8,     9,    29,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    43,
      44,    45,    -1,    47,    29,    -1,    -1,    -1,    33,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    43,    44,
      45,    65,    47,    -1,    -1,    50,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    43,    44,    45,    -1,
      47,    48,    -1,    -1,    20,    -1,     3,     4,     5,     6,
       7,     8,     9,    29,    61,    -1,    -1,    33,    65,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    43,    44,    45,
      -1,    47,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    61,    43,    44,    45,    65,
      47,    -1,    -1,    50,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    20,    -1,     3,     4,     5,     6,     7,     8,     9,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    43,    44,    45,    -1,    47,    29,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    61,    43,    44,    45,    65,    47,    48,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    65,    20,    -1,     3,     4,
       5,     6,     7,     8,     9,    29,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    43,
      44,    45,    -1,    47,    29,    -1,    50,    -1,    33,     3,
       4,     5,     6,     7,     8,     9,    -1,    61,    43,    44,
      45,    65,    47,    48,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    61,    -1,    -1,    33,
      65,    -1,     3,     4,     5,     6,     7,     8,     9,    43,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    29,    -1,
      -1,    65,    33,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    43,    44,    45,    -1,    47,    48,    -1,    -1,
      20,    -1,     3,     4,     5,     6,     7,     8,     9,    29,
      61,    -1,    -1,    33,    65,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    43,    44,    45,    13,    47,    29,    -1,
      -1,    18,    33,    20,    21,    -1,    -1,    -1,     3,    26,
      27,    61,    43,    44,    45,    65,    47,    -1,    13,    -1,
      -1,    -1,    39,    18,    41,    20,    21,    -1,    13,    -1,
      61,    26,    27,    18,    65,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    39,    -1,    41,    -1,     0,     1,
      45,     3,    47,    48,    39,    -1,    41,    -1,    -1,    -1,
      55,    13,    14,    48,    -1,    -1,    18,     3,    20,    21,
      -1,    -1,    -1,    25,    26,    27,    -1,    13,    -1,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    39,    -1,    41,
      26,    27,     3,    45,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    39,    -1,    41,    -1,    18,    -1,    20,
      21,    -1,    48,    13,    -1,    26,    27,    -1,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    39,    -1,
      41,    -1,    -1,    -1,    45,    -1,    47,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    13,    14,    18,    20,    21,    25,    26,
      27,    39,    41,    45,    47,    67,    68,    69,    70,    71,
      73,    74,    78,    81,    82,    83,    68,     3,     4,     5,
       6,     7,     8,     9,    20,    47,   120,   122,     3,    53,
      67,    83,    81,     0,    69,    50,    75,    76,    81,    73,
      53,    71,    72,    73,    96,    47,    55,    82,    29,    33,
      43,    44,    45,    47,    61,    65,   101,   102,   104,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    67,    53,     3,    79,    80,    48,
      50,    51,    52,    72,    96,     3,    11,    12,    17,    20,
      22,    23,    38,    40,    42,    50,    54,    72,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    71,    96,    81,
       3,    48,    73,    84,    85,    86,    87,    56,   104,   105,
     117,   117,   117,    74,    77,    90,    48,    51,    36,    58,
      10,    59,    60,    61,    15,    24,    30,    31,    62,    63,
      43,    44,    45,    46,    64,    16,    28,    32,    34,    37,
      52,   103,   116,    29,    33,    47,    55,    79,    52,    51,
      54,    76,    53,    88,   102,    96,    57,    50,   105,    93,
      47,    47,    50,   101,    47,    47,    54,    97,    54,    93,
      50,    47,    55,    81,    83,    91,    92,    48,    51,    48,
      51,    56,    77,    47,    83,    91,    48,   102,   107,   101,
     108,   109,   110,   111,   112,   112,   113,   113,   113,   113,
     115,   115,   116,   116,   116,   102,    48,   102,   121,   101,
      54,   105,    80,    88,    89,    93,    57,    42,    50,    71,
     101,   101,    50,   101,   101,    54,    48,    84,    91,    56,
     105,    92,    47,    55,    86,     3,   116,    57,    48,    51,
      56,    51,    54,    93,    47,    50,   101,   101,    50,    48,
      48,    48,    48,    48,    56,    48,    84,    56,   105,   104,
     102,    54,    88,   101,    48,   101,    50,    50,    50,   101,
      93,    93,    93,    48,    56,    48,    93,    48,    48,   101,
     101,    48,   101,    50,    19,    50,    93,    93,    48,    48,
      93,    48,    48,   101,    93,    93,    93,    93,    93,    48,
      93
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1455 of yacc.c  */
#line 58 "AnalizadorBison.y"
    { yyerrok;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 65 "AnalizadorBison.y"
    {flag_funcion=0;;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 102 "AnalizadorBison.y"
    {if (flag_funcion==0){VARIABLE var={(yyvsp[(0) - (1)].cadena), (yyvsp[(1) - (1)].cadena)}; agregarVariable(var); };}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 103 "AnalizadorBison.y"
    {VARIABLE var={(yyvsp[(0) - (3)].cadena), (yyvsp[(1) - (3)].cadena)}; agregarVariable(var);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 131 "AnalizadorBison.y"
    {strcat((yyvsp[(0) - (4)].cadena),"*");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 132 "AnalizadorBison.y"
    {strcat((yyvsp[(0) - (3)].cadena),"*");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 133 "AnalizadorBison.y"
    {flag_funcion=1; FUNCION func = {(yyvsp[(0) - (4)].cadena), (yyvsp[(1) - (4)].cadena), parametros}; agregarFuncion(func); limpiarParametros(&parametros);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 135 "AnalizadorBison.y"
    {flag_funcion=1; FUNCION func = {(yyvsp[(0) - (3)].cadena), (yyvsp[(1) - (3)].cadena), parametros}; agregarFuncion(func); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 149 "AnalizadorBison.y"
    {agregarParametro(&parametros, (yyvsp[(1) - (2)].cadena));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 151 "AnalizadorBison.y"
    {agregarParametro(&parametros, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 268 "AnalizadorBison.y"
    { char* tipo1 = tipoParametro((yyvsp[(1) - (3)].mystruct).tipo);
                                                                          char* tipo2 = tipoParametro((yyvsp[(3) - (3)].mystruct).tipo);
                                                                          if (tipo1!="NULL" && tipo2!="NULL"){
                                                                            validarSuma(tipo1,tipo2); 
                                                                          } else {
                                                                            printf("\n%d: Error semantico, no se puede sumar esos tipos de dato", yylineno);
                                                                            aumentarErrorSemantico();
                                                                          }                                                                                                                                                                                                      
                                                                        ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 281 "AnalizadorBison.y"
    { if ((yyvsp[(3) - (3)].mystruct).valor_entero == 0 || (yyvsp[(3) - (3)].mystruct).valor_float == 0) {
                                                                            printf("\n%d: Error semantico, No se puede dividir por 0",yylineno);
                                                                            aumentarErrorSemantico();  
                                                                          }  
                                                                        ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 304 "AnalizadorBison.y"
    {validarInvocacion((yyvsp[(1) - (4)].cadena),parametros); limpiarParametros(&parametros);;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 305 "AnalizadorBison.y"
    {validarInvocacion((yyvsp[(1) - (3)].cadena),parametros); limpiarParametros(&parametros);;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 314 "AnalizadorBison.y"
    {agregarParametro(&parametros, tipoParametro((yyvsp[(1) - (1)].mystruct).tipo)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 315 "AnalizadorBison.y"
    {agregarParametro(&parametros, tipoParametro((yyvsp[(3) - (3)].mystruct).tipo)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2025 "AnalizadorBison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 325 "AnalizadorBison.y"


int main()
{
    yyin = fopen("ArchivoDeEntrada.c","r");

    yyparse();

    fclose(yyin);

    validarAnalisisLexico();
    printf("El analisis sintactico concluyo con %d errores\n",yynerrs);
    
    resultadoAnalisisSemantico();

    return 0;
}
