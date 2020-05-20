
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
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    void yyerror(char * s);
    int yylex();
    int yyparse();
    int err;
    int lineCounter;
	extern FILE* yyin;


/* Line 189 of yacc.c  */
#line 85 "parser.c"

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
     START_TAG = 258,
     CLOSE_TAG = 259,
     VOID_ELEM = 260,
     END_ELEM = 261,
     HR_BR = 262,
     HTML_TAG = 263,
     HEAD_TAG = 264,
     BODY_TAG = 265,
     HEADER_TAG = 266,
     TITLE_TAG = 267,
     LANG_ATTR = 268,
     TEXT = 269,
     DOCTYPE = 270,
     GLOBAL_ATTRIBUTE = 271,
     FORM_EVENT = 272,
     SIZE_ATTR = 273,
     AUDIO_VIDEO_ATTR = 274,
     SRC_ATTR = 275,
     TYPE_ATTR = 276,
     LINK_ATTR = 277,
     DISABLED_ATTR = 278,
     NAME_ATTR = 279,
     VALUE_ATTR = 280,
     COL_COLGROUP_ATTR = 281,
     FORM_ATTR = 282,
     REFERERPOLICY_ATTR = 283,
     SRCSET_ATTR = 284,
     IMG_INPUT_ATTR = 285,
     FOR_ATTR = 286,
     A_FORM_ATTR = 287,
     TRACK_ATTR = 288,
     LABEL_ATTR = 289,
     TABLE_ATTR = 290,
     MEDIA_ATTR = 291,
     CITE_ATTR = 292,
     SELECT_TEXTAREA_ATTR = 293,
     SELECT_INPUT_ATTR = 294,
     TEXTAREA_INPUT_ATTR = 295,
     TEXTAREA_ATTR = 296,
     OPTION_ATTR = 297,
     OL_ATTR = 298,
     AUTOCOMPLETE_ATTR = 299,
     INPUT_ATTR = 300,
     REQUIRED_ATTR = 301,
     DIALOG_ATTR = 302,
     META_ATTR = 303,
     AMN_FORM_ATTR = 304,
     A_TAG = 305,
     CANVAS_SVG_TAG = 306,
     TD_TH_TAG = 307,
     COL_TAG = 308,
     COLGROUP_TAG = 309,
     AUDIO_TAG = 310,
     BUTTON_TAG = 311,
     DIALOG_TAG = 312,
     EMBED_TAG = 313,
     FIELDSET_TAG = 314,
     FORM_TAG = 315,
     IFRAME_TAG = 316,
     IMG_TAG = 317,
     INPUT_TAG = 318,
     LABEL_TAG = 319,
     LI_TAG = 320,
     LINK_TAG = 321,
     META_TAG = 322,
     OL_TAG = 323,
     OPTGROUP_TAG = 324,
     OPTION_TAG = 325,
     Q_TAG = 326,
     SCRIPT_TAG = 327,
     SELECT_TAG = 328,
     SOURCE_TAG = 329,
     STYLE_TAG = 330,
     TEXTAREA_TAG = 331,
     TRACK_TAG = 332,
     VIDEO_TAG = 333
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "parser.c"

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
#define YYFINAL  204
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   588

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNRULES -- Number of states.  */
#define YYNSTATES  463

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    14,    18,    24,    26,    28,
      30,    32,    35,    38,    39,    42,    45,    46,    48,    50,
      52,    54,    56,    58,    60,    62,    64,    66,    68,    70,
      72,    74,    76,    78,    80,    82,    84,    86,    88,    90,
      92,    94,    96,    98,   100,   103,   107,   113,   116,   119,
     120,   122,   124,   129,   136,   143,   149,   153,   159,   162,
     165,   168,   169,   173,   179,   182,   185,   186,   190,   196,
     199,   202,   203,   207,   210,   213,   214,   218,   224,   227,
     230,   231,   235,   241,   244,   247,   250,   251,   255,   261,
     264,   267,   270,   273,   274,   278,   284,   287,   290,   291,
     295,   298,   301,   304,   307,   308,   312,   318,   321,   324,
     327,   330,   331,   335,   341,   344,   347,   350,   353,   354,
     358,   364,   367,   370,   373,   376,   379,   380,   384,   387,
     390,   393,   396,   399,   400,   404,   407,   410,   413,   416,
     419,   422,   425,   428,   431,   434,   437,   440,   443,   446,
     447,   451,   457,   460,   463,   466,   467,   471,   477,   480,
     483,   484,   488,   491,   494,   497,   498,   502,   505,   508,
     511,   512,   516,   522,   525,   527,   530,   531,   535,   541,
     544,   547,   550,   551,   555,   561,   564,   567,   570,   573,
     576,   577,   581,   587,   590,   593,   594,   598,   604,   607,
     610,   613,   614,   618,   624,   627,   630,   633,   636,   639,
     642,   643,   647,   650,   653,   656,   659,   662,   663,   667,
     673,   676,   679,   682,   683,   687,   693,   696,   699,   702,
     705,   708,   711,   714,   717,   718,   722,   725,   728,   731,
     734,   735,   739,   745,   748,   751,   754,   757,   760
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    15,    91,    -1,    84,    -1,    12,    87,
       4,    83,     6,    -1,    11,    87,     5,    -1,    11,    87,
       4,    83,     6,    -1,   140,    -1,   124,    -1,   122,    -1,
     134,    -1,    82,    83,    -1,    14,    83,    -1,    -1,    85,
      84,    -1,    14,    84,    -1,    -1,    86,    -1,    92,    -1,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,   102,    -1,
     104,    -1,   106,    -1,   108,    -1,   110,    -1,   112,    -1,
     114,    -1,   116,    -1,   118,    -1,   120,    -1,   126,    -1,
     128,    -1,   130,    -1,   132,    -1,   122,    -1,   136,    -1,
     138,    -1,   142,    -1,   144,    -1,   146,    -1,   134,    -1,
       7,     4,    -1,     3,    87,     5,    -1,     3,    87,     4,
      84,     6,    -1,    16,    87,    -1,    17,    87,    -1,    -1,
      16,    -1,    17,    -1,    10,     4,    84,     6,    -1,     9,
       4,    83,    81,    83,     6,    -1,     8,    13,     4,    90,
      89,     6,    -1,     8,     4,    90,    89,     6,    -1,    50,
      93,     5,    -1,    50,    93,     4,    84,     6,    -1,    22,
      93,    -1,    32,    93,    -1,    88,    93,    -1,    -1,    51,
      95,     5,    -1,    51,    95,     4,    84,     6,    -1,    18,
      95,    -1,    88,    95,    -1,    -1,    52,    97,     5,    -1,
      52,    97,     4,    84,     6,    -1,    35,    97,    -1,    88,
      97,    -1,    -1,    53,    99,     4,    -1,    26,    99,    -1,
      88,    99,    -1,    -1,    54,    99,     5,    -1,    54,    99,
       4,    84,     6,    -1,    26,    99,    -1,    88,    99,    -1,
      -1,    55,   101,     5,    -1,    55,   101,     4,    84,     6,
      -1,    19,   101,    -1,    20,   101,    -1,    88,   101,    -1,
      -1,    56,   103,     5,    -1,    56,   103,     4,    84,     6,
      -1,    23,   103,    -1,    24,   103,    -1,    25,   103,    -1,
      88,   103,    -1,    -1,    57,   105,     5,    -1,    57,   105,
       4,    84,     6,    -1,    47,   105,    -1,    88,   105,    -1,
      -1,    58,   107,     4,    -1,    18,   107,    -1,    20,   107,
      -1,    21,   107,    -1,    88,   107,    -1,    -1,    59,   109,
       5,    -1,    59,   109,     4,    84,     6,    -1,    23,   109,
      -1,    24,   109,    -1,    27,   109,    -1,    88,   109,    -1,
      -1,    60,   111,     5,    -1,    60,   111,     4,    84,     6,
      -1,    32,   111,    -1,    49,   111,    -1,    44,   111,    -1,
      88,   111,    -1,    -1,    61,   113,     5,    -1,    61,   113,
       4,    84,     6,    -1,    18,   113,    -1,    24,   113,    -1,
      20,   113,    -1,    28,   113,    -1,    88,   113,    -1,    -1,
      62,   115,     4,    -1,    18,   115,    -1,    20,   115,    -1,
      29,   115,    -1,    30,   115,    -1,    88,   115,    -1,    -1,
      63,   117,     4,    -1,    18,   117,    -1,    20,   117,    -1,
      21,   117,    -1,    23,   117,    -1,    24,   117,    -1,    25,
     117,    -1,    27,   117,    -1,    30,   117,    -1,    39,   117,
      -1,    40,   117,    -1,    44,   117,    -1,    45,   117,    -1,
      46,   117,    -1,    88,   117,    -1,    -1,    64,   119,     5,
      -1,    64,   119,     4,    84,     6,    -1,    27,   119,    -1,
      31,   119,    -1,    88,   119,    -1,    -1,    65,   121,     5,
      -1,    65,   121,     4,    84,     6,    -1,    25,   121,    -1,
      88,   121,    -1,    -1,    66,   123,     4,    -1,    22,   123,
      -1,    21,   123,    -1,    88,   123,    -1,    -1,    67,   125,
       4,    -1,    48,   125,    -1,    24,   125,    -1,    88,   125,
      -1,    -1,    68,   127,     5,    -1,    68,   127,     4,    84,
       6,    -1,    43,   127,    -1,    21,    -1,    88,   127,    -1,
      -1,    69,   129,     5,    -1,    69,   129,     4,    84,     6,
      -1,    23,   129,    -1,    34,   129,    -1,    88,   129,    -1,
      -1,    70,   131,     5,    -1,    70,   131,     4,    84,     6,
      -1,    23,   131,    -1,    25,   131,    -1,    34,   131,    -1,
      42,   131,    -1,    88,   131,    -1,    -1,    71,   133,     5,
      -1,    71,   133,     4,    84,     6,    -1,    37,   133,    -1,
      88,   133,    -1,    -1,    72,   135,     5,    -1,    72,   135,
       4,    84,     6,    -1,    20,   135,    -1,    21,   135,    -1,
      88,   135,    -1,    -1,    73,   137,     5,    -1,    73,   137,
       4,    84,     6,    -1,    23,   137,    -1,    24,   137,    -1,
      38,   137,    -1,    39,   137,    -1,    46,   137,    -1,    88,
     137,    -1,    -1,    74,   139,     4,    -1,    20,   139,    -1,
      21,   139,    -1,    29,   139,    -1,    36,   139,    -1,    88,
     139,    -1,    -1,    75,   141,     5,    -1,    75,   141,     4,
      84,     6,    -1,    21,   141,    -1,    36,   141,    -1,    88,
     141,    -1,    -1,    76,   143,     5,    -1,    76,   143,     4,
      84,     6,    -1,    23,   143,    -1,    24,   143,    -1,    38,
     143,    -1,    39,   143,    -1,    40,   143,    -1,    41,   143,
      -1,    46,   143,    -1,    88,   143,    -1,    -1,    77,   145,
       4,    -1,    20,   145,    -1,    33,   145,    -1,    34,   145,
      -1,    88,   145,    -1,    -1,    78,   147,     5,    -1,    78,
     147,     4,    84,     6,    -1,    18,   147,    -1,    20,   147,
      -1,    19,   147,    -1,    21,   147,    -1,    88,   147,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    27,    30,    32,    33,    34,    34,    34,
      34,    37,    38,    39,    42,    43,    44,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    51,    52,    55,    56,    57,
      59,    59,    61,    63,    65,    66,    69,    69,    70,    70,
      70,    70,    73,    73,    74,    74,    74,    77,    77,    78,
      78,    78,    81,    82,    82,    82,    85,    85,    86,    86,
      86,    89,    89,    90,    90,    90,    90,    93,    93,    94,
      94,    94,    94,    94,    97,    97,    98,    98,    98,   101,
     102,   102,   102,   102,   102,   105,   105,   106,   106,   106,
     106,   106,   109,   109,   110,   110,   110,   110,   110,   113,
     113,   114,   114,   114,   114,   114,   114,   117,   118,   118,
     118,   118,   118,   118,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     125,   125,   126,   126,   126,   126,   129,   129,   130,   130,
     130,   133,   134,   134,   134,   134,   137,   138,   138,   138,
     138,   141,   141,   142,   142,   142,   142,   145,   145,   146,
     146,   146,   146,   149,   149,   150,   150,   150,   150,   150,
     150,   153,   153,   154,   154,   154,   157,   157,   158,   158,
     158,   158,   161,   161,   162,   162,   162,   162,   162,   162,
     162,   165,   166,   166,   166,   166,   166,   166,   169,   169,
     170,   170,   170,   170,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   177,   178,   178,   178,   178,
     178,   181,   181,   182,   182,   182,   182,   182,   182
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START_TAG", "CLOSE_TAG", "VOID_ELEM",
  "END_ELEM", "HR_BR", "HTML_TAG", "HEAD_TAG", "BODY_TAG", "HEADER_TAG",
  "TITLE_TAG", "LANG_ATTR", "TEXT", "DOCTYPE", "GLOBAL_ATTRIBUTE",
  "FORM_EVENT", "SIZE_ATTR", "AUDIO_VIDEO_ATTR", "SRC_ATTR", "TYPE_ATTR",
  "LINK_ATTR", "DISABLED_ATTR", "NAME_ATTR", "VALUE_ATTR",
  "COL_COLGROUP_ATTR", "FORM_ATTR", "REFERERPOLICY_ATTR", "SRCSET_ATTR",
  "IMG_INPUT_ATTR", "FOR_ATTR", "A_FORM_ATTR", "TRACK_ATTR", "LABEL_ATTR",
  "TABLE_ATTR", "MEDIA_ATTR", "CITE_ATTR", "SELECT_TEXTAREA_ATTR",
  "SELECT_INPUT_ATTR", "TEXTAREA_INPUT_ATTR", "TEXTAREA_ATTR",
  "OPTION_ATTR", "OL_ATTR", "AUTOCOMPLETE_ATTR", "INPUT_ATTR",
  "REQUIRED_ATTR", "DIALOG_ATTR", "META_ATTR", "AMN_FORM_ATTR", "A_TAG",
  "CANVAS_SVG_TAG", "TD_TH_TAG", "COL_TAG", "COLGROUP_TAG", "AUDIO_TAG",
  "BUTTON_TAG", "DIALOG_TAG", "EMBED_TAG", "FIELDSET_TAG", "FORM_TAG",
  "IFRAME_TAG", "IMG_TAG", "INPUT_TAG", "LABEL_TAG", "LI_TAG", "LINK_TAG",
  "META_TAG", "OL_TAG", "OPTGROUP_TAG", "OPTION_TAG", "Q_TAG",
  "SCRIPT_TAG", "SELECT_TAG", "SOURCE_TAG", "STYLE_TAG", "TEXTAREA_TAG",
  "TRACK_TAG", "VIDEO_TAG", "$accept", "program", "titleElement",
  "headerElement", "headerElements", "bodyElements", "bodyElement",
  "element", "commonAttributes", "commonAttribute", "bodySection",
  "headSection", "htmlSection", "aElement", "aAttributes",
  "canvSvgElement", "canvSvgAttributes", "tdThElement", "tdThAttributes",
  "colElement", "colAttributes", "audioElement", "audioAttributes",
  "buttonElement", "buttonAttributes", "dialogElement", "dialogAttributes",
  "embedElement", "embedAttributes", "fieldsetElement",
  "fieldsetAttributes", "formElement", "formAttributes", "iframeElement",
  "iframeAttributes", "imgElement", "imgAttributes", "inputElement",
  "inputAttributes", "labelElement", "labelAttributes", "liElement",
  "liAttributes", "linkElement", "linkAttributes", "metaElement",
  "metaAttributes", "olElement", "olAttributes", "optgroupElement",
  "optgroupAttributes", "optionElement", "optionAttributes", "qElement",
  "qAttributes", "scriptElement", "scriptAttributes", "selectElement",
  "selectAttributes", "sourceElement", "sourceAttributes", "styleElement",
  "styleAttributes", "textareaElement", "textareaAttributes",
  "trackElement", "trackAttributes", "videoElement", "videoAttributes", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    81,    82,    82,    82,    82,    82,
      82,    83,    83,    83,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      88,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      93,    93,    94,    94,    95,    95,    95,    96,    96,    97,
      97,    97,    98,    99,    99,    99,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   102,   102,   103,
     103,   103,   103,   103,   104,   104,   105,   105,   105,   106,
     107,   107,   107,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   110,   110,   111,   111,   111,   111,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   114,   115,   115,
     115,   115,   115,   115,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   119,   119,   119,   120,   120,   121,   121,
     121,   122,   123,   123,   123,   123,   124,   125,   125,   125,
     125,   126,   126,   127,   127,   127,   127,   128,   128,   129,
     129,   129,   129,   130,   130,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   134,   134,   135,   135,
     135,   135,   136,   136,   137,   137,   137,   137,   137,   137,
     137,   138,   139,   139,   139,   139,   139,   139,   140,   140,
     141,   141,   141,   141,   142,   142,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   144,   145,   145,   145,   145,
     145,   146,   146,   147,   147,   147,   147,   147,   147
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     5,     3,     5,     1,     1,     1,
       1,     2,     2,     0,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     5,     2,     2,     0,
       1,     1,     4,     6,     6,     5,     3,     5,     2,     2,
       2,     0,     3,     5,     2,     2,     0,     3,     5,     2,
       2,     0,     3,     2,     2,     0,     3,     5,     2,     2,
       0,     3,     5,     2,     2,     2,     0,     3,     5,     2,
       2,     2,     2,     0,     3,     5,     2,     2,     0,     3,
       2,     2,     2,     2,     0,     3,     5,     2,     2,     2,
       2,     0,     3,     5,     2,     2,     2,     2,     0,     3,
       5,     2,     2,     2,     2,     2,     0,     3,     2,     2,
       2,     2,     2,     0,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       3,     5,     2,     2,     2,     0,     3,     5,     2,     2,
       0,     3,     2,     2,     2,     0,     3,     2,     2,     2,
       0,     3,     5,     2,     1,     2,     0,     3,     5,     2,
       2,     2,     0,     3,     5,     2,     2,     2,     2,     2,
       0,     3,     5,     2,     2,     0,     3,     5,     2,     2,
       2,     0,     3,     5,     2,     2,     2,     2,     2,     2,
       0,     3,     2,     2,     2,     2,     2,     0,     3,     5,
       2,     2,     2,     0,     3,     5,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     3,     2,     2,     2,     2,
       0,     3,     5,     2,     2,     2,     2,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      16,    49,     0,    16,     0,    61,    66,    71,    75,    75,
      86,    93,    98,   104,   111,   118,   126,   133,   149,   155,
     160,   165,   176,   182,   190,   195,   201,   210,   217,   234,
     240,   248,     0,     3,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    37,    33,    34,    35,    36,    43,    38,    39,    40,
      41,    42,    49,    49,     0,    44,    15,     0,     2,    50,
      51,    61,    61,    61,     0,    66,    66,     0,    71,    71,
       0,    75,    75,     0,     0,    86,    86,    86,     0,    93,
      93,    93,    93,     0,    98,    98,     0,   104,   104,   104,
     104,     0,   111,   111,   111,   111,     0,   118,   118,   118,
     118,     0,   126,   126,   126,   126,   126,     0,   133,   133,
     133,   133,   133,     0,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,     0,   155,
     155,   155,     0,   160,   160,     0,   165,   165,   165,     0,
     174,   176,   176,     0,   182,   182,   182,     0,   190,   190,
     190,   190,   190,     0,   195,   195,     0,   201,   201,   201,
       0,   210,   210,   210,   210,   210,   210,     0,   217,   217,
     217,   217,   217,     0,   234,   234,   234,   234,   234,   234,
     234,   234,     0,   240,   240,   240,   240,     0,   248,   248,
     248,   248,   248,     0,     1,    14,    47,    48,    16,    45,
       0,     0,    58,    59,    60,    16,    56,    64,    65,    16,
      62,    69,    70,    16,    67,    73,    74,    72,    16,    76,
      83,    84,    85,    16,    81,    89,    90,    91,    92,    16,
      87,    96,    97,    16,    94,   100,   101,   102,   103,    99,
     107,   108,   109,   110,    16,   105,   114,   116,   115,   117,
      16,   112,   121,   123,   122,   124,   125,    16,   119,   128,
     129,   130,   131,   132,   127,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   134,
     152,   153,   154,    16,   150,   158,   159,    16,   156,   163,
     162,   164,   161,   173,   175,    16,   171,   179,   180,   181,
      16,   177,   185,   186,   187,   188,   189,    16,   183,   193,
     194,    16,   191,   198,   199,   200,    16,   196,   204,   205,
     206,   207,   208,   209,    16,   202,   212,   213,   214,   215,
     216,   211,   226,   227,   228,   229,   230,   231,   232,   233,
      16,   224,   236,   237,   238,   239,   235,   243,   245,   244,
     246,   247,    16,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    13,
       0,     0,     0,    57,    63,    68,    77,    82,    88,    95,
     106,   113,   120,   151,   157,   172,   178,   184,   192,   197,
     203,   225,   242,    49,    13,   170,   223,    13,     0,     9,
       8,    10,     7,    16,    55,     0,     0,    12,   170,   170,
     170,     0,   223,   223,   223,     0,    11,    49,    13,     0,
      54,    13,     5,   168,   167,   169,   166,   220,   221,   222,
      16,   218,     0,     0,    52,     0,     0,    13,    53,     6,
     219,     0,     4
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,   438,   417,   418,    33,    34,    35,    64,   137,
     391,   366,    68,    36,    74,    37,    77,    38,    80,    39,
      83,    40,    88,    41,    93,    42,    96,    43,   101,    44,
     106,    45,   111,    46,   117,    47,   123,    48,   138,    49,
     142,    50,   145,    51,   149,   420,   431,    52,   153,    53,
     157,    54,   163,    55,   166,    56,   170,    57,   177,    58,
     183,   422,   435,    59,   192,    60,   197,    61,   203
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -382
static const yytype_int16 yypact[] =
{
     312,   183,    10,   215,    35,   279,   338,   197,   282,   282,
     486,   317,    32,   397,   236,    48,    34,   319,   421,   192,
     287,   336,   106,   221,    21,    24,   289,   210,   225,   305,
     112,   388,    45,  -382,   215,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,   183,   183,   206,  -382,  -382,    26,  -382,  -382,
    -382,   279,   279,   279,   320,   338,   338,   356,   197,   197,
     445,   282,   282,    28,   453,   486,   486,   486,   538,   317,
     317,   317,   317,   540,    32,    32,   542,   397,   397,   397,
     397,    49,   236,   236,   236,   236,   544,    48,    48,    48,
      48,   546,    34,    34,    34,    34,    34,   548,   319,   319,
     319,   319,   319,    52,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,    55,   192,
     192,   192,   550,   287,   287,   552,   336,   336,   336,    80,
    -382,   106,   106,   554,   221,   221,   221,   556,    21,    21,
      21,    21,    21,   558,    24,    24,   560,   289,   289,   289,
     562,   210,   210,   210,   210,   210,   210,   564,   225,   225,
     225,   225,   225,    85,   305,   305,   305,   305,   305,   305,
     305,   305,   566,   112,   112,   112,   112,    98,   388,   388,
     388,   388,   388,   568,  -382,  -382,  -382,  -382,   215,  -382,
     104,   103,  -382,  -382,  -382,   215,  -382,  -382,  -382,   215,
    -382,  -382,  -382,   215,  -382,  -382,  -382,  -382,   215,  -382,
    -382,  -382,  -382,   215,  -382,  -382,  -382,  -382,  -382,   215,
    -382,  -382,  -382,   215,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,   215,  -382,  -382,  -382,  -382,  -382,
     215,  -382,  -382,  -382,  -382,  -382,  -382,   215,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,   215,  -382,  -382,  -382,   215,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,   215,  -382,  -382,  -382,  -382,
     215,  -382,  -382,  -382,  -382,  -382,  -382,   215,  -382,  -382,
    -382,   215,  -382,  -382,  -382,  -382,   215,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,   215,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
     215,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,   215,  -382,   115,   120,   123,   104,   124,   132,
     135,   147,   153,   156,   160,   167,   182,   187,   209,   211,
     218,   229,   233,   237,   244,   252,   256,   276,  -382,    59,
     199,   291,   123,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,   183,    59,    18,   185,    59,   288,  -382,
    -382,  -382,  -382,   215,  -382,   307,   570,  -382,    18,    18,
      18,   316,   185,   185,   185,   572,  -382,   183,    59,   324,
    -382,    59,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
     215,  -382,   328,   332,  -382,   404,   498,    59,  -382,  -382,
    -382,   574,  -382
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -382,  -382,  -382,  -382,  -381,    -3,  -382,  -382,   -34,    -4,
     -42,    20,  -382,  -382,   350,  -382,   241,  -382,   500,  -382,
      38,  -382,   315,  -382,   418,  -382,   487,  -382,   414,  -382,
     413,  -382,   412,  -382,   340,  -382,   364,  -382,   344,  -382,
     323,  -382,   440,  -210,   381,  -382,   102,  -382,   434,  -382,
     379,  -382,   329,  -382,   423,     2,   369,  -382,   260,  -382,
     314,  -382,   107,  -382,   208,  -382,   330,  -382,   299
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      66,    73,    76,    79,    82,    82,    87,    92,    95,   100,
     105,   110,   116,   122,    65,   141,   144,   148,   152,   156,
     162,   165,   169,   176,   182,   191,   196,   202,   206,   207,
     210,   205,   227,   427,    69,    70,   436,    69,    70,   211,
      69,    70,   428,    67,   158,   204,   159,    84,    69,    70,
      69,    70,   112,   249,   113,   160,   274,   453,   114,   289,
     455,   164,   115,   161,    69,    70,   429,    73,    73,    73,
     413,    76,    76,   414,    79,    79,   461,    82,    82,    94,
     107,    87,    87,    87,   302,    92,    92,    92,    92,   341,
      95,    95,   108,   100,   100,   100,   100,   109,   105,   105,
     105,   105,   356,   110,   110,   110,   110,   367,   116,   116,
     116,   116,   116,   365,   122,   122,   122,   122,   122,   225,
     226,   388,    69,    70,   389,    21,   415,   150,    69,    70,
     393,    26,   193,   390,   416,   141,   141,   141,   394,   144,
     144,   395,   148,   148,   148,   194,   195,   152,   152,   151,
     156,   156,   156,   396,   162,   162,   162,   162,   162,   397,
     165,   165,   398,   169,   169,   169,   399,   176,   176,   176,
     176,   176,   176,   400,   182,   182,   182,   182,   182,   419,
     191,   191,   191,   191,   191,   191,   191,   191,   401,   196,
     196,   196,   196,   402,   202,   202,   202,   202,   202,    62,
      63,    69,    70,   423,   419,   364,   432,   419,    69,    70,
     208,   209,   368,    69,    70,   403,   369,   404,     1,   139,
     370,   433,     2,   140,   405,   371,    69,    70,   419,     3,
     372,   419,    78,   171,   172,   406,   373,    69,    70,   407,
     374,    69,    70,   408,   154,   178,   179,   419,   173,   174,
     409,   375,    69,    70,   180,   155,   175,   376,   410,   102,
     103,   181,   411,   104,   377,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   412,    22,    23,    24,    25,    26,    27,    28,
     378,    29,    30,    31,   379,    69,    70,   424,    69,    70,
     437,    71,   380,    69,    70,    69,    70,   381,    81,   167,
     168,    72,   143,   440,   382,     1,   217,   218,   383,     2,
     446,    69,    70,   384,   215,   216,     3,     4,   184,   185,
     454,   385,   457,    69,    70,    69,    70,   118,   458,   119,
      89,    90,    91,   186,   187,   188,   189,   386,   120,   121,
     425,   190,    69,    70,    69,    70,    75,   146,   147,   387,
     219,   220,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   426,
      22,    23,    24,    25,    26,    27,    28,   392,    29,    30,
      31,   421,   342,   343,   344,   345,   346,   347,   348,   349,
     230,   231,   232,   452,    69,    70,   198,   199,   200,   201,
     459,   430,   434,    69,    70,    97,   421,    98,    99,   421,
     439,   212,   213,   214,   430,   430,   430,     0,   434,   434,
     434,   328,   329,   330,   331,   332,   333,    69,    70,   124,
     421,   125,   126,   421,   127,   128,   129,   456,   130,   223,
     224,   131,   262,   263,   264,   265,   266,   228,   229,   421,
     132,   133,   290,   291,   292,   134,   135,   136,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   269,   270,   271,   272,   273,   312,   313,   314,
     315,   316,   336,   337,   338,   339,   340,   357,   358,   359,
     360,   361,    69,    70,   460,    85,    86,   235,   236,   237,
     238,   245,   246,   247,   248,   250,   251,   252,   253,   256,
     257,   258,   259,   352,   353,   354,   355,   299,   300,   301,
     443,   444,   445,   307,   308,   309,   323,   324,   325,   447,
     448,   449,   233,   234,   239,   240,   243,   244,   254,   255,
     260,   261,   267,   268,   293,   294,   297,   298,   305,   306,
     310,   311,   317,   318,   321,   322,   326,   327,   334,   335,
     350,   351,   362,   363,   441,   442,   450,   451,   221,   222,
     462,   241,   242,   295,   296,   303,   304,   319,   320
};

static const yytype_int16 yycheck[] =
{
       3,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     4,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    62,    63,
       4,    34,     4,   414,    16,    17,   417,    16,    17,    13,
      16,    17,    24,     8,    23,     0,    25,     9,    16,    17,
      16,    17,    18,     4,    20,    34,     4,   438,    24,     4,
     441,    37,    28,    42,    16,    17,    48,    71,    72,    73,
      11,    75,    76,    14,    78,    79,   457,    81,    82,    47,
      32,    85,    86,    87,     4,    89,    90,    91,    92,     4,
      94,    95,    44,    97,    98,    99,   100,    49,   102,   103,
     104,   105,     4,   107,   108,   109,   110,     4,   112,   113,
     114,   115,   116,     9,   118,   119,   120,   121,   122,    81,
      82,     6,    16,    17,     4,    66,    67,    21,    16,    17,
       6,    72,    20,    10,    75,   139,   140,   141,     6,   143,
     144,     6,   146,   147,   148,    33,    34,   151,   152,    43,
     154,   155,   156,     6,   158,   159,   160,   161,   162,     6,
     164,   165,     6,   167,   168,   169,     6,   171,   172,   173,
     174,   175,   176,     6,   178,   179,   180,   181,   182,   389,
     184,   185,   186,   187,   188,   189,   190,   191,     6,   193,
     194,   195,   196,     6,   198,   199,   200,   201,   202,    16,
      17,    16,    17,     4,   414,   208,    21,   417,    16,    17,
       4,     5,   215,    16,    17,     6,   219,     6,     3,    27,
     223,    36,     7,    31,     6,   228,    16,    17,   438,    14,
     233,   441,    35,    23,    24,     6,   239,    16,    17,     6,
     243,    16,    17,     6,    23,    20,    21,   457,    38,    39,
       6,   254,    16,    17,    29,    34,    46,   260,     6,    23,
      24,    36,     6,    27,   267,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     6,    68,    69,    70,    71,    72,    73,    74,
     293,    76,    77,    78,   297,    16,    17,     6,    16,    17,
      12,    22,   305,    16,    17,    16,    17,   310,    26,    20,
      21,    32,    25,     6,   317,     3,    75,    76,   321,     7,
       4,    16,    17,   326,     4,     5,    14,    15,    23,    24,
       6,   334,     4,    16,    17,    16,    17,    18,     6,    20,
      23,    24,    25,    38,    39,    40,    41,   350,    29,    30,
     392,    46,    16,    17,    16,    17,    18,    21,    22,   362,
       4,     5,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   413,
      68,    69,    70,    71,    72,    73,    74,   367,    76,    77,
      78,   389,   184,   185,   186,   187,   188,   189,   190,   191,
      85,    86,    87,   437,    16,    17,    18,    19,    20,    21,
       6,   415,   416,    16,    17,    18,   414,    20,    21,   417,
     423,    71,    72,    73,   428,   429,   430,    -1,   432,   433,
     434,   171,   172,   173,   174,   175,   176,    16,    17,    18,
     438,    20,    21,   441,    23,    24,    25,   450,    27,     4,
       5,    30,   112,   113,   114,   115,   116,     4,     5,   457,
      39,    40,   139,   140,   141,    44,    45,    46,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   118,   119,   120,   121,   122,   158,   159,   160,
     161,   162,   178,   179,   180,   181,   182,   198,   199,   200,
     201,   202,    16,    17,     6,    19,    20,    89,    90,    91,
      92,    97,    98,    99,   100,   102,   103,   104,   105,   107,
     108,   109,   110,   193,   194,   195,   196,   146,   147,   148,
     428,   429,   430,   154,   155,   156,   167,   168,   169,   432,
     433,   434,     4,     5,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     5,     4,     5,    78,    79,
       6,    94,    95,   143,   144,   151,   152,   164,   165
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,    14,    15,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    68,    69,    70,    71,    72,    73,    74,    76,
      77,    78,    80,    84,    85,    86,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   110,   112,   114,   116,   118,
     120,   122,   126,   128,   130,   132,   134,   136,   138,   142,
     144,   146,    16,    17,    87,     4,    84,     8,    91,    16,
      17,    22,    32,    88,    93,    18,    88,    95,    35,    88,
      97,    26,    88,    99,    99,    19,    20,    88,   101,    23,
      24,    25,    88,   103,    47,    88,   105,    18,    20,    21,
      88,   107,    23,    24,    27,    88,   109,    32,    44,    49,
      88,   111,    18,    20,    24,    28,    88,   113,    18,    20,
      29,    30,    88,   115,    18,    20,    21,    23,    24,    25,
      27,    30,    39,    40,    44,    45,    46,    88,   117,    27,
      31,    88,   119,    25,    88,   121,    21,    22,    88,   123,
      21,    43,    88,   127,    23,    34,    88,   129,    23,    25,
      34,    42,    88,   131,    37,    88,   133,    20,    21,    88,
     135,    23,    24,    38,    39,    46,    88,   137,    20,    21,
      29,    36,    88,   139,    23,    24,    38,    39,    40,    41,
      46,    88,   143,    20,    33,    34,    88,   145,    18,    19,
      20,    21,    88,   147,     0,    84,    87,    87,     4,     5,
       4,    13,    93,    93,    93,     4,     5,    95,    95,     4,
       5,    97,    97,     4,     5,    99,    99,     4,     4,     5,
     101,   101,   101,     4,     5,   103,   103,   103,   103,     4,
       5,   105,   105,     4,     5,   107,   107,   107,   107,     4,
     109,   109,   109,   109,     4,     5,   111,   111,   111,   111,
       4,     5,   113,   113,   113,   113,   113,     4,     5,   115,
     115,   115,   115,   115,     4,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,     4,
     119,   119,   119,     4,     5,   121,   121,     4,     5,   123,
     123,   123,     4,   127,   127,     4,     5,   129,   129,   129,
       4,     5,   131,   131,   131,   131,   131,     4,     5,   133,
     133,     4,     5,   135,   135,   135,     4,     5,   137,   137,
     137,   137,   137,   137,     4,     5,   139,   139,   139,   139,
     139,     4,   143,   143,   143,   143,   143,   143,   143,   143,
       4,     5,   145,   145,   145,   145,     4,   147,   147,   147,
     147,   147,     4,     5,    84,     9,    90,     4,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,     6,     4,
      10,    89,    90,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,    11,    14,    67,    75,    82,    83,   122,
     124,   134,   140,     4,     6,    89,    87,    83,    24,    48,
      88,   125,    21,    36,    88,   141,    83,    12,    81,    84,
       6,     4,     5,   125,   125,   125,     4,   141,   141,   141,
       4,     5,    87,    83,     6,    83,    84,     4,     6,     6,
       6,    83,     6
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
      

/* Line 1455 of yacc.c  */
#line 1867 "parser.c"
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
#line 184 "parser.y"

 
int main(int argc, char **argv)
{
    if (argc > 1) {
        yyin = fopen(argv[1], "r");

        if (yyin == NULL) {
            printf("Cannot find file: `%s`", argv[1]);
            return 1;
        }
    } else {
        printf("Input file not provided. Type `compile file_path`.");
        return 1;
    }

    do {
		yyparse();
	} while (!feof(yyin));

    fclose(yyin);

    if (err) {
        printf("Validation failed!\n");
        return 1;
    } else {
        printf("Validation completed successfully!\n");
    }

    return 0;
}

