/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "gram.y"

#pragma comment(lib,"QueryProcessor_simple.lib")
#pragma comment(lib,"values.lib")
#pragma comment(lib,"colinf.lib")
#pragma comment(lib,"colsinf.lib")
#pragma comment(lib,"colvalue.lib")
#pragma comment(lib,"colsvalue.lib")
#pragma comment(lib,"condition.lib")
#pragma comment(lib,"conditiontype.lib")
#include "QueryProcessor.h"
#include "values.h"
#include "colinf.h"
#include "colsinf.h"
#include "colvalue.h"
#include "colsvalue.h"
#include "condition.h"
#include "conditiontype.h"
#include "gram.tab.h"

extern int yylex(void);
void yyerror(const char* );

/* Line 371 of yacc.c  */
#line 91 "gram.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "gram.tab.h".  */
#ifndef YY_YY_GRAM_TAB_H_INCLUDED
# define YY_YY_GRAM_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CREATE = 258,
     USE = 259,
     SHOW = 260,
     DROP = 261,
     DELETE = 262,
     DATABASE = 263,
     DATABASES = 264,
     TABLE = 265,
     TABLES = 266,
     INSERT = 267,
     INTO = 268,
     VALUES = 269,
     FROM = 270,
     WHERE = 271,
     SET = 272,
     UPDATE = 273,
     SELECT = 274,
     EXIT = 275,
     NEWLINE = 276,
     CHAR = 277,
     INT = 278,
     ID = 279,
     STRING = 280,
     NUMBER = 281,
     UMINUS = 282,
     OR = 283,
     AND = 284,
     NOT = 285
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 25 "gram.y"

	/* ID,string,数字字面量的值 */
	class values* value;
	/* 单个列列元数据的值 */
	class colinf* single_colinf;
	/* 多个列的列元数据 */	
	class colsinf* colsinf;
	/* 列的值 */
	class colvalue* colval;
	/* 多个列的值 */
	class colsvalue* colsval;
	/* 算数表达式的值 */
	int calval;
	/* 条件表达式的值 */
	class condition* cond;
	/* 比较表达式左,右部分的值 */
	class conditiontype* comp;


/* Line 387 of yacc.c  */
#line 184 "gram.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 212 "gram.tab.cpp"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   176

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,     2,     2,     2,
      38,    39,    32,    30,    27,    31,    29,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
      40,    42,    41,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    34,    35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      44,    49,    53,    58,    60,    68,    70,    72,    76,    79,
      81,    83,    88,    93,    97,   106,   118,   120,   124,   126,
     130,   132,   134,   138,   142,   146,   150,   154,   157,   159,
     163,   167,   170,   172,   176,   180,   182,   184,   186,   188,
     190,   193,   196,   198,   201,   205,   207,   212,   219,   225,
     233,   235,   239,   243,   247,   249,   253,   259,   267,   269,
     271,   273
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    45,    46,    -1,    21,    -1,
      47,    21,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    54,    -1,    60,    -1,    61,    -1,    62,    -1,    72,
      -1,    73,    -1,    77,    -1,    48,    -1,    20,    -1,     3,
       8,    53,    28,    -1,     4,     8,    53,    28,    -1,     5,
       9,    28,    -1,     6,     8,    53,    28,    -1,    24,    -1,
       3,    10,    55,    38,    56,    39,    28,    -1,    24,    -1,
      57,    -1,    56,    27,    57,    -1,    58,    59,    -1,    24,
      -1,    23,    -1,    22,    38,    26,    39,    -1,     6,    10,
      55,    28,    -1,     5,    11,    28,    -1,    12,    13,    55,
      14,    38,    64,    39,    28,    -1,    12,    13,    55,    38,
      63,    39,    14,    38,    64,    39,    28,    -1,    58,    -1,
      63,    27,    58,    -1,    65,    -1,    64,    27,    65,    -1,
      66,    -1,    25,    -1,    66,    30,    66,    -1,    66,    31,
      66,    -1,    66,    32,    66,    -1,    66,    33,    66,    -1,
      38,    66,    39,    -1,    31,    66,    -1,    26,    -1,    67,
      36,    67,    -1,    67,    35,    67,    -1,    37,    67,    -1,
      68,    -1,    38,    67,    39,    -1,    69,    70,    69,    -1,
      66,    -1,    25,    -1,    71,    -1,    40,    -1,    41,    -1,
      40,    42,    -1,    41,    42,    -1,    42,    -1,    43,    42,
      -1,    55,    29,    58,    -1,    58,    -1,     7,    15,    55,
      28,    -1,     7,    15,    55,    16,    67,    28,    -1,    18,
      55,    17,    74,    28,    -1,    18,    55,    17,    74,    16,
      67,    28,    -1,    75,    -1,    74,    27,    75,    -1,    71,
      42,    25,    -1,    71,    42,    66,    -1,    71,    -1,    76,
      27,    71,    -1,    19,    78,    15,    79,    28,    -1,    19,
      78,    15,    79,    16,    67,    28,    -1,    32,    -1,    76,
      -1,    55,    -1,    79,    27,    55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    78,    80,    81,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    98,   102,
     109,   116,   123,   129,   136,   142,   145,   149,   155,   161,
     164,   169,   177,   184,   193,   197,   210,   217,   225,   229,
     235,   240,   248,   249,   250,   251,   252,   253,   254,   259,
     272,   286,   302,   303,   307,   316,   321,   326,   331,   332,
     333,   334,   335,   336,   340,   347,   360,   364,   372,   376,
     383,   387,   393,   397,   404,   408,   419,   423,   429,   433,
     438,   444
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CREATE", "USE", "SHOW", "DROP",
  "DELETE", "DATABASE", "DATABASES", "TABLE", "TABLES", "INSERT", "INTO",
  "VALUES", "FROM", "WHERE", "SET", "UPDATE", "SELECT", "EXIT", "NEWLINE",
  "CHAR", "INT", "ID", "STRING", "NUMBER", "','", "';'", "'.'", "'+'",
  "'-'", "'*'", "'/'", "UMINUS", "OR", "AND", "NOT", "'('", "')'", "'<'",
  "'>'", "'='", "'!'", "$accept", "start", "line", "statement", "exit",
  "createdb", "usedb", "showdb", "dropdb", "dbname", "createsql",
  "tablename", "cols", "col", "colname", "coltype", "droptable",
  "showtables", "inserttable", "colsname", "colsvalue", "colvalue", "cal",
  "conditions", "condition", "comparator", "comp_op", "tablecol",
  "deletetable", "updatetable", "setconfs", "setconf", "tablecols",
  "selecttable", "tablecolconf", "tables", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    44,    59,    46,
      43,    45,    42,    47,   282,   283,   284,   285,    40,    41,
      60,    62,    61,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    56,    57,    58,
      59,    59,    60,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    67,    68,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    78,
      79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     3,     4,     1,     7,     1,     1,     3,     2,     1,
       1,     4,     4,     3,     8,    11,     1,     3,     1,     3,
       1,     1,     3,     3,     3,     3,     3,     2,     1,     3,
       3,     2,     1,     3,     3,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     3,     1,     4,     6,     5,     7,
       1,     3,     3,     3,     1,     3,     5,     7,     1,     1,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       4,     0,     2,     0,    17,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    29,    78,     0,
      65,    74,    79,     0,     1,     3,     5,    23,     0,     0,
       0,    21,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,    20,    22,    32,     0,    66,     0,     0,
       0,     0,    70,    29,    64,    75,    80,     0,     0,    26,
       0,    56,    48,     0,     0,     0,    55,     0,    52,     0,
      57,     0,    36,     0,     0,     0,     0,    68,     0,     0,
      76,     0,     0,     0,    30,    28,     0,    47,    51,    55,
       0,     0,     0,     0,     0,    67,     0,     0,    58,    59,
      62,     0,     0,    41,     0,    38,    40,     0,     0,    72,
      73,     0,    71,     0,    81,    27,    24,     0,     0,    46,
      53,    42,    43,    44,    45,    50,    49,    60,    61,    63,
      54,     0,     0,    37,     0,    69,    77,     0,    39,    34,
       0,    31,     0,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    48,
      19,    39,    78,    79,    40,   105,    20,    21,    22,    93,
     124,   125,    86,    87,    88,    89,   122,    90,    23,    24,
      71,    72,    42,    25,    43,    77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -79
static const yytype_int16 yypact[] =
{
      58,   118,    -6,    98,   139,     6,    -2,    -9,   101,   -79,
     -79,    39,   -79,    16,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,    23,    -9,    23,    22,
      38,    23,    -9,    -9,    -9,   -79,    54,    57,   -79,    60,
     -79,   -79,    45,   108,   -79,   -79,   -79,   -79,    85,   110,
     122,   -79,   -79,   123,   124,    82,     0,   112,   113,   112,
      -9,   -79,   113,   -79,   -79,   -79,    43,   -79,   115,   113,
     114,    -4,   -79,   -79,   -79,   -79,   -79,     2,    75,   -79,
       9,   -79,   -79,    68,    43,    43,   109,    20,   -79,   103,
     -79,    62,   -79,    76,    70,    43,   112,   -79,    43,    -9,
     -79,   113,   126,   117,   -79,   -79,    68,   -79,   -79,    88,
      99,    68,    68,    68,    68,   -79,    43,    43,   116,   119,
     -79,   120,    59,   -79,    77,   -79,   109,   113,   143,   -79,
     109,    94,   -79,    96,   -79,   -79,   -79,   133,    88,   -79,
     -79,    79,    79,   -79,   -79,   127,   -79,   -79,   -79,   -79,
     -79,    62,   132,   -79,   128,   -79,   -79,   125,   -79,   -79,
      62,   -79,    78,   137,   -79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   156,   -79,   -79,   -79,   -79,   -79,   -79,   -27,
     -79,    -7,   -79,    67,   -52,   -79,   -79,   -79,   -79,   -79,
      10,    18,   -78,   -76,   -79,    49,   -79,    -5,   -79,   -79,
     -79,    80,   -79,   -79,   -79,   -79
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -26
static const yytype_int16 yytable[] =
{
      36,    50,    28,    41,    53,   107,    74,   109,   108,   110,
      80,    34,    95,   126,    68,    35,   130,    92,    98,   131,
      49,    33,   133,    96,    97,    54,    55,    56,   138,    99,
     100,   103,   104,   141,   142,   143,   144,    46,    69,    44,
     145,   146,     1,     2,     3,     4,     5,    47,   115,    80,
      51,     6,    70,    76,    75,   116,   117,     7,     8,     9,
      10,     1,     2,     3,     4,     5,    52,    37,    81,    82,
       6,    57,    59,   126,    83,   153,     7,     8,     9,    10,
      84,    85,   126,    37,    81,    82,   -25,   123,    82,    58,
      83,    70,   134,    83,    82,   129,    82,   106,    66,    83,
     106,    83,   101,   127,   151,   151,   106,    29,   106,    30,
      67,   113,   114,    61,   102,   128,   152,   163,   111,   112,
     113,   114,   155,    60,   156,    37,    26,   139,    27,   116,
     117,   116,   117,    38,   116,   117,    37,    73,   140,   111,
     112,   113,   114,   118,   119,   120,   121,    31,    62,    32,
      63,    64,    65,    91,   136,   137,    94,   154,   147,   157,
     159,   148,   149,   117,   161,   164,   160,    45,   135,   158,
     162,   150,     0,     0,     0,     0,   132
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-79)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    28,     8,     8,    31,    83,    58,    85,    84,    85,
      62,    13,    16,    91,    14,    24,    94,    69,    16,    95,
      27,    15,    98,    27,    28,    32,    33,    34,   106,    27,
      28,    22,    23,   111,   112,   113,   114,    21,    38,     0,
     116,   117,     3,     4,     5,     6,     7,    24,    28,   101,
      28,    12,    57,    60,    59,    35,    36,    18,    19,    20,
      21,     3,     4,     5,     6,     7,    28,    24,    25,    26,
      12,    17,    27,   151,    31,   127,    18,    19,    20,    21,
      37,    38,   160,    24,    25,    26,    29,    25,    26,    29,
      31,    96,    99,    31,    26,    25,    26,    38,    16,    31,
      38,    31,    27,    27,    27,    27,    38,     9,    38,    11,
      28,    32,    33,    28,    39,    39,    39,    39,    30,    31,
      32,    33,    28,    15,    28,    24,     8,    39,    10,    35,
      36,    35,    36,    32,    35,    36,    24,    24,    39,    30,
      31,    32,    33,    40,    41,    42,    43,     8,    38,    10,
      28,    28,    28,    38,    28,    38,    42,    14,    42,    26,
      28,    42,    42,    36,    39,    28,    38,    11,   101,   151,
     160,   122,    -1,    -1,    -1,    -1,    96
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    12,    18,    19,    20,
      21,    45,    46,    47,    48,    49,    50,    51,    52,    54,
      60,    61,    62,    72,    73,    77,     8,    10,     8,     9,
      11,     8,    10,    15,    13,    24,    55,    24,    32,    55,
      58,    71,    76,    78,     0,    46,    21,    24,    53,    55,
      53,    28,    28,    53,    55,    55,    55,    17,    29,    27,
      15,    28,    38,    28,    28,    28,    16,    28,    14,    38,
      71,    74,    75,    24,    58,    71,    55,    79,    56,    57,
      58,    25,    26,    31,    37,    38,    66,    67,    68,    69,
      71,    38,    58,    63,    42,    16,    27,    28,    16,    27,
      28,    27,    39,    22,    23,    59,    38,    66,    67,    66,
      67,    30,    31,    32,    33,    28,    35,    36,    40,    41,
      42,    43,    70,    25,    64,    65,    66,    27,    39,    25,
      66,    67,    75,    67,    55,    57,    28,    38,    66,    39,
      39,    66,    66,    66,    66,    67,    67,    42,    42,    42,
      69,    27,    39,    58,    14,    28,    28,    26,    65,    28,
      38,    39,    64,    39,    28
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
        case 2:
/* Line 1792 of yacc.c  */
#line 77 "gram.y"
    {}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 78 "gram.y"
    {}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 80 "gram.y"
    {cout<<endl<<"SQL>>";}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 81 "gram.y"
    {cout<<endl<<"SQL>>";}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 84 "gram.y"
    {}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 85 "gram.y"
    {}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 86 "gram.y"
    {}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 87 "gram.y"
    {}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 88 "gram.y"
    {}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 89 "gram.y"
    {}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 90 "gram.y"
    {}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 91 "gram.y"
    {}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 92 "gram.y"
    {}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 93 "gram.y"
    {}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 94 "gram.y"
    {}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 95 "gram.y"
    {}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 98 "gram.y"
    { return 0;}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 102 "gram.y"
    {
															QueryProcessor qp;
															qp.createDB((yyvsp[(3) - (4)].value)->getStringValue());
														}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 109 "gram.y"
    {
															QueryProcessor qp;
															qp.useDB((yyvsp[(3) - (4)].value)->getStringValue());
														}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 116 "gram.y"
    {
															QueryProcessor qp;
															qp.showDB();
														}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 123 "gram.y"
    {
															QueryProcessor qp;
															qp.dropDB((yyvsp[(3) - (4)].value)->getStringValue());
														}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 129 "gram.y"
    {	(yyval.value)=(yyvsp[(1) - (1)].value);	}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 136 "gram.y"
    {
															QueryProcessor qp;
															qp.createTable((yyvsp[(3) - (7)].value)->getStringValue(),(yyvsp[(5) - (7)].colsinf)->vec);
														}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 142 "gram.y"
    {	(yyval.value)=(yyvsp[(1) - (1)].value);	}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 145 "gram.y"
    {
															(yyval.colsinf)=new colsinf();
															((yyval.colsinf)->vec).push_back((yyvsp[(1) - (1)].single_colinf));
														}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 149 "gram.y"
    {
															(yyval.colsinf)=(yyvsp[(1) - (3)].colsinf);
															((yyval.colsinf)->vec).push_back((yyvsp[(3) - (3)].single_colinf));
														}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 155 "gram.y"
    {
															(yyval.single_colinf)=(yyvsp[(2) - (2)].single_colinf);
															(yyval.single_colinf)->setColName((yyvsp[(1) - (2)].value)->getStringValue());
														}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 161 "gram.y"
    {	(yyval.value)=(yyvsp[(1) - (1)].value);	}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 164 "gram.y"
    {
															(yyval.single_colinf)=new colinf();
															(yyval.single_colinf)->setColType(3);
															(yyval.single_colinf)->setColLength(4);
														}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 169 "gram.y"
    {
															(yyval.single_colinf)=new colinf();
															(yyval.single_colinf)->setColType(2);
															(yyval.single_colinf)->setColLength((yyvsp[(3) - (4)].value)->getDigitsValue());
														}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 177 "gram.y"
    {
															QueryProcessor qp;
															qp.dropTable((yyvsp[(3) - (4)].value)->getStringValue());
														}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 184 "gram.y"
    {
															QueryProcessor qp;
															qp.showTable();
														}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 193 "gram.y"
    {
																						QueryProcessor qp;
																						qp.insertTable((yyvsp[(3) - (8)].value)->getStringValue(), *(yyvsp[(6) - (8)].colsval), 1);
																					}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 197 "gram.y"
    {
																						/* 先将colsname中的表名依次加入colsname的容器中 */
																						for(int i=0;i<(yyvsp[(9) - (11)].colsval)->vec.size();i++){
																							(yyvsp[(9) - (11)].colsval)->vec[i]->setColName((yyvsp[(5) - (11)].colsval)->vec[i]->getColName());
																						}
																						/* 释放colsname的内存 */
																						delete (yyvsp[(5) - (11)].colsval);

																						QueryProcessor qp;	
																						qp.insertTable((yyvsp[(3) - (11)].value)->getStringValue(), *(yyvsp[(9) - (11)].colsval), 2);
																					}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 210 "gram.y"
    {
																						(yyval.colsval)=new colsvalue();
																						string str=(yyvsp[(1) - (1)].value)->getStringValue();
																						colvalue* cv=new colvalue();
																						cv->setColName(str);
																						((yyval.colsval)->vec).push_back(cv);
																					}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 217 "gram.y"
    {
																						string str=(yyvsp[(3) - (3)].value)->getStringValue();
																						colvalue* cv=new colvalue();
																						cv->setColName(str);
																						(yyval.colsval)=(yyvsp[(1) - (3)].colsval);
																						((yyval.colsval)->vec).push_back(cv);
																					}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 225 "gram.y"
    {
																						(yyval.colsval)=new colsvalue();
																						((yyval.colsval)->vec).push_back((yyvsp[(1) - (1)].colval));
																					}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 229 "gram.y"
    {
																						(yyval.colsval)=(yyvsp[(1) - (3)].colsval);
																						((yyval.colsval)->vec).push_back((yyvsp[(3) - (3)].colval));   
																					}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 235 "gram.y"
    {
																						(yyval.colval)=new colvalue();
																						(yyval.colval)->setColType(3);
																						(yyval.colval)->setDigitsValue((yyvsp[(1) - (1)].calval));
																					}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 240 "gram.y"
    {
																						(yyval.colval)=new colvalue();
																						(yyval.colval)->setColType(2);
																						(yyval.colval)->setStringValue((yyvsp[(1) - (1)].value)->getStringValue());
																					}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 248 "gram.y"
    {	(yyval.calval)=(yyvsp[(1) - (3)].calval)*(yyvsp[(3) - (3)].calval);	}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 249 "gram.y"
    {	(yyval.calval)=(yyvsp[(1) - (3)].calval)-(yyvsp[(3) - (3)].calval);	}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 250 "gram.y"
    {	(yyval.calval)=(yyvsp[(1) - (3)].calval)*(yyvsp[(3) - (3)].calval);	}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 251 "gram.y"
    {	(yyval.calval)=(yyvsp[(1) - (3)].calval)/(yyvsp[(3) - (3)].calval);	}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 252 "gram.y"
    {	(yyval.calval)=(yyvsp[(2) - (3)].calval);		}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 253 "gram.y"
    {	(yyval.calval)=-(yyvsp[(2) - (2)].calval);		}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 254 "gram.y"
    {	(yyval.calval)=(yyvsp[(1) - (1)].value)->getDigitsValue();}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 259 "gram.y"
    {	
																						/* 创建一个新的condition节点作为生成树的根节点 */
																						(yyval.cond)=new condition();

																						/* 设置根节点的iscond等成员变量 */
																						(yyval.cond)->iscond=true;
																						(yyval.cond)->comp_cond=1;
																						/* 将AND左右的两个表达式作为子女节点加入生成树 */
																						(yyval.cond)->left.type=4;
																						(yyval.cond)->right.type=4;
																						(yyval.cond)->left.cond=(yyvsp[(1) - (3)].cond);
																						(yyval.cond)->right.cond=(yyvsp[(3) - (3)].cond);
																					}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 272 "gram.y"
    {	
																						/* 创建一个新的condition节点作为生成树的根节点 */
																						(yyval.cond)=new condition();

																						/* 设置根节点的iscond等成员变量 */
																						(yyval.cond)->iscond=true;
																						(yyval.cond)->comp_cond=2;

																						/* 将AND左右的两个表达式作为子女节点加入生成树 */
																						(yyval.cond)->left.type=4;
																						(yyval.cond)->right.type=4;
																						(yyval.cond)->left.cond=(yyvsp[(1) - (3)].cond);
																						(yyval.cond)->right.cond=(yyvsp[(3) - (3)].cond);
																					}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 286 "gram.y"
    {	
																						/* 创建一个新的condition节点作为生成树的根节点 */
																						(yyval.cond)=new condition();

																						/* 设置根节点的iscond等成员变量 */
																						(yyval.cond)->iscond=true;
																						(yyval.cond)->comp_cond=3;

																						/* 将AND左右的两个表达式作为子女节点加入生成树 */
																						(yyval.cond)->left.type=4;
																						(yyval.cond)->right.type=4;

																						/* 对于产生式右部为NOT conditions的情况，生成树的根节点的左子女节点为空 */
																						(yyval.cond)->left.cond=NULL;
																						(yyval.cond)->right.cond=(yyvsp[(2) - (2)].cond);
																					}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 302 "gram.y"
    {	(yyval.cond)=(yyvsp[(1) - (1)].cond);	}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 303 "gram.y"
    {	(yyval.cond)=(yyvsp[(2) - (3)].cond);	}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 307 "gram.y"
    {
																						(yyval.cond)=new condition();
																						(yyval.cond)->iscond=false;
																						(yyval.cond)->comp_op=(yyvsp[(2) - (3)].calval);
																						(yyval.cond)->left =*(yyvsp[(1) - (3)].comp);
																						(yyval.cond)->right =*(yyvsp[(3) - (3)].comp);
																					}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 316 "gram.y"
    {	
																						(yyval.comp)=new conditiontype();
																						(yyval.comp)->type=3;
																						(yyval.comp)->digits=(yyvsp[(1) - (1)].calval);
																					}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 321 "gram.y"
    {		
																						(yyval.comp)=new conditiontype();
																						(yyval.comp)->type=2;
																						(yyval.comp)->str=(yyvsp[(1) - (1)].value)->getStringValue();
																					}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 326 "gram.y"
    {
																						(yyval.comp)=(yyvsp[(1) - (1)].comp);
																					}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 331 "gram.y"
    {	(yyval.calval)=1;	}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 332 "gram.y"
    {	(yyval.calval)=2;	}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 333 "gram.y"
    {	(yyval.calval)=3;	}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 334 "gram.y"
    {	(yyval.calval)=4;	}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 335 "gram.y"
    {	(yyval.calval)=5;	}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 336 "gram.y"
    {	(yyval.calval)=6;	}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 340 "gram.y"
    {	
																						(yyval.comp)=new conditiontype();
																						(yyval.comp)->type=1;
																						(yyval.comp)->col=new colvalue();
																						(yyval.comp)->col->setColName((yyvsp[(3) - (3)].value)->getStringValue());
																						(yyval.comp)->col->setTableName((yyvsp[(1) - (3)].value)->getStringValue());
																					}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 347 "gram.y"
    {	
																						(yyval.comp)=new conditiontype();
																						(yyval.comp)->type=1;
																						(yyval.comp)->col=new colvalue();
																						(yyval.comp)->col->setColName((yyvsp[(1) - (1)].value)->getStringValue());
																					}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 360 "gram.y"
    {
																				QueryProcessor qp;
																				qp.deleteTable((yyvsp[(3) - (4)].value)->getStringValue(),NULL);
																			}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 364 "gram.y"
    {
																				QueryProcessor qp;
																				qp.deleteTable((yyvsp[(3) - (6)].value)->getStringValue(),(yyvsp[(5) - (6)].cond));
																			}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 372 "gram.y"
    {
																				QueryProcessor qp;
																				qp.updateTable((yyvsp[(2) - (5)].value)->getStringValue(),*(yyvsp[(4) - (5)].colsval),NULL);
																			}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 376 "gram.y"
    {
																				QueryProcessor qp;		
																				qp.updateTable((yyvsp[(2) - (7)].value)->getStringValue(),*(yyvsp[(4) - (7)].colsval),(yyvsp[(6) - (7)].cond));
																			}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 383 "gram.y"
    {
																				(yyval.colsval)=new colsvalue();
																				((yyval.colsval)->vec).push_back((yyvsp[(1) - (1)].colval));
																			}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 387 "gram.y"
    {
																				(yyval.colsval)=(yyvsp[(1) - (3)].colsval);
																				((yyval.colsval)->vec).push_back((yyvsp[(3) - (3)].colval));	 
																			}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 393 "gram.y"
    {
																				(yyval.colval)=(yyvsp[(1) - (3)].comp)->col;
																				(yyval.colval)->setStringValue((yyvsp[(3) - (3)].value)->getStringValue());
																			}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 397 "gram.y"
    {
																				(yyval.colval)=(yyvsp[(1) - (3)].comp)->col;
																				(yyval.colval)->setDigitsValue((yyvsp[(3) - (3)].calval));
																			}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 404 "gram.y"
    {
																				(yyval.colsval)=new colsvalue();
																				((yyval.colsval)->vec).push_back((yyvsp[(1) - (1)].comp)->col);
																			}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 408 "gram.y"
    {
																				(yyval.colsval)=(yyvsp[(1) - (3)].colsval);
																				((yyval.colsval)->vec).push_back((yyvsp[(3) - (3)].comp)->col);	  
																			}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 419 "gram.y"
    {
																				QueryProcessor qp;
																				qp.selectTable(*(yyvsp[(4) - (5)].colsval),*(yyvsp[(2) - (5)].colsval),NULL);
																			}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 423 "gram.y"
    {
																				QueryProcessor qp;
																				qp.selectTable(*(yyvsp[(4) - (7)].colsval),*(yyvsp[(2) - (7)].colsval),(yyvsp[(6) - (7)].cond));		
																			}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 429 "gram.y"
    {
																				(yyval.colsval)=new colsvalue();
																				(yyval.colsval)->isALL=true;
																			}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 433 "gram.y"
    {
																				(yyval.colsval)=(yyvsp[(1) - (1)].colsval);				
																			}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 438 "gram.y"
    {
																				(yyval.colsval)=new colsvalue();
																				colvalue* cv=new colvalue();
																				cv->setTableName((yyvsp[(1) - (1)].value)->getStringValue());
																				((yyval.colsval)->vec).push_back(cv);
																			}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 444 "gram.y"
    {
																				(yyval.colsval)=(yyvsp[(1) - (3)].colsval);
																				colvalue* cv=new colvalue();
																				cv->setTableName((yyvsp[(3) - (3)].value)->getStringValue());
																				((yyval.colsval)->vec).push_back(cv);
																			}
    break;


/* Line 1792 of yacc.c  */
#line 2226 "gram.tab.cpp"
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


/* Line 2055 of yacc.c  */
#line 454 "gram.y"





void yyerror(const char* str){
	cout<<std::string(str)<<endl;
}