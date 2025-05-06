/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABSTRACTO = 258,
     AND = 259,
     ASIG = 260,
     AND_ASIG = 261,
     CADA = 262,
     CADENA = 263,
     CARACTER = 264,
     CLASE = 265,
     COMO = 266,
     CONSTANTES = 267,
     CONSTRUCTOR = 268,
     CONTINUAR = 269,
     CTC_CADENA = 270,
     CTC_CARACTER = 271,
     CTC_ENTERA = 272,
     CTC_REAL = 273,
     DE = 274,
     DEFECTO = 275,
     DESTRUCTOR = 276,
     DEVOLVER = 277,
     DIV_ASIG = 278,
     EJECUTA = 279,
     ENCAMBIO = 280,
     ENTERO = 281,
     ENUMERACION = 282,
     EQ = 283,
     EN = 284,
     ES = 285,
     ESCAPE = 286,
     ESPECIFICO = 287,
     ESTRUCTURA = 288,
     ETIQUETA = 289,
     EXCEPCION = 290,
     FD_ASIG = 291,
     FI_ASIG = 292,
     FICHERO = 293,
     FIN = 294,
     FINAL = 295,
     FLECHA_DCHA = 296,
     FLECHA_IZDA = 297,
     FUNCION = 298,
     GENERICO = 299,
     HACER = 300,
     HASH = 301,
     GE = 302,
     IDENTIFICADOR = 303,
     IMPORTAR = 304,
     INDIRECCION = 305,
     LANZA = 306,
     LE = 307,
     MIENTRAS = 308,
     MOD = 309,
     MOD_ASIG = 310,
     MULT_ASIG = 311,
     NADA = 312,
     NEQ = 313,
     OR = 314,
     OTRA = 315,
     OR_ASIG = 316,
     PARA = 317,
     POT_ASIG = 318,
     POTENCIA = 319,
     PRINCIPIO = 320,
     PRIVADO = 321,
     PROGRAMA = 322,
     PROTEGIDO = 323,
     PTOS = 324,
     PUBLICO = 325,
     REAL = 326,
     REF = 327,
     RESTA_ASIG = 328,
     SALTAR = 329,
     SI = 330,
     SINO = 331,
     SUMA_ASIG = 332,
     TAMANO = 333,
     TABLA = 334,
     TIPOS = 335,
     ULTIMA = 336,
     UNION = 337,
     VARIABLES = 338,
     XOR_ASIG = 339
   };
#endif
/* Tokens.  */
#define ABSTRACTO 258
#define AND 259
#define ASIG 260
#define AND_ASIG 261
#define CADA 262
#define CADENA 263
#define CARACTER 264
#define CLASE 265
#define COMO 266
#define CONSTANTES 267
#define CONSTRUCTOR 268
#define CONTINUAR 269
#define CTC_CADENA 270
#define CTC_CARACTER 271
#define CTC_ENTERA 272
#define CTC_REAL 273
#define DE 274
#define DEFECTO 275
#define DESTRUCTOR 276
#define DEVOLVER 277
#define DIV_ASIG 278
#define EJECUTA 279
#define ENCAMBIO 280
#define ENTERO 281
#define ENUMERACION 282
#define EQ 283
#define EN 284
#define ES 285
#define ESCAPE 286
#define ESPECIFICO 287
#define ESTRUCTURA 288
#define ETIQUETA 289
#define EXCEPCION 290
#define FD_ASIG 291
#define FI_ASIG 292
#define FICHERO 293
#define FIN 294
#define FINAL 295
#define FLECHA_DCHA 296
#define FLECHA_IZDA 297
#define FUNCION 298
#define GENERICO 299
#define HACER 300
#define HASH 301
#define GE 302
#define IDENTIFICADOR 303
#define IMPORTAR 304
#define INDIRECCION 305
#define LANZA 306
#define LE 307
#define MIENTRAS 308
#define MOD 309
#define MOD_ASIG 310
#define MULT_ASIG 311
#define NADA 312
#define NEQ 313
#define OR 314
#define OTRA 315
#define OR_ASIG 316
#define PARA 317
#define POT_ASIG 318
#define POTENCIA 319
#define PRINCIPIO 320
#define PRIVADO 321
#define PROGRAMA 322
#define PROTEGIDO 323
#define PTOS 324
#define PUBLICO 325
#define REAL 326
#define REF 327
#define RESTA_ASIG 328
#define SALTAR 329
#define SI 330
#define SINO 331
#define SUMA_ASIG 332
#define TAMANO 333
#define TABLA 334
#define TIPOS 335
#define ULTIMA 336
#define UNION 337
#define VARIABLES 338
#define XOR_ASIG 339




/* Copy the first part of user declarations.  */
#line 1 "eazy.y"

    #include <stdio.h>
    extern FILE *yyin;
    extern int yylex();
    int yyerror (char *s);

    #define YYDEBUG 1        


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 283 "eazy.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   517

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNRULES -- Number of states.  */
#define YYNSTATES  425

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   104,     2,     2,     2,     2,    98,     2,
      87,    88,   101,    99,     2,   100,    85,   102,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    86,
      94,     2,    95,   105,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    91,   106,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,    96,    93,   103,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    13,    15,    16,    19,    23,
      29,    31,    33,    37,    39,    43,    49,    50,    52,    54,
      58,    61,    63,    70,    76,    77,    79,    81,    83,    84,
      87,    89,    91,    93,    95,    97,    99,   101,   103,   105,
     109,   114,   117,   120,   126,   130,   134,   142,   147,   148,
     150,   154,   156,   160,   164,   166,   170,   174,   176,   181,
     184,   186,   191,   192,   194,   196,   198,   200,   202,   204,
     205,   207,   210,   212,   216,   224,   226,   228,   230,   232,
     234,   236,   240,   244,   245,   249,   253,   254,   258,   262,
     266,   268,   272,   273,   275,   279,   282,   284,   292,   298,
     301,   302,   306,   308,   316,   321,   325,   327,   333,   337,
     341,   343,   345,   347,   352,   356,   359,   361,   363,   365,
     367,   369,   371,   373,   375,   377,   379,   381,   384,   387,
     391,   393,   395,   397,   399,   401,   403,   405,   407,   409,
     411,   413,   415,   424,   431,   434,   435,   441,   447,   455,
     465,   474,   478,   480,   484,   487,   490,   494,   498,   501,
     506,   510,   513,   515,   517,   520,   521,   524,   528,   532,
     535,   536,   540,   544,   546,   552,   559,   561,   565,   567,
     571,   575,   579,   581,   585,   589,   593,   597,   599,   603,
     605,   609,   611,   615,   617,   619,   623,   627,   629,   633,
     637,   639,   643,   647,   651,   653,   657,   660,   663,   666,
     669,   671,   673,   675,   677,   679,   681,   686,   687,   689,
     693,   695,   696,   700,   702,   706,   710,   714,   717,   719,
     723,   726,   729,   731,   733,   735
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   109,   114,    -1,     1,    -1,    67,    48,
      85,   110,    -1,     1,    -1,    -1,   110,   111,    -1,    49,
     112,    85,    -1,    49,   113,    11,    48,    85,    -1,     1,
      -1,   113,    -1,   112,    86,   113,    -1,    48,    -1,   113,
      69,    48,    -1,   115,   136,   148,   152,   160,    -1,    -1,
     116,    -1,     1,    -1,    80,   117,    39,    -1,   118,   117,
      -1,   118,    -1,   119,    48,    30,   120,   121,    85,    -1,
     119,    48,    30,   120,   125,    -1,    -1,    70,    -1,    68,
      -1,    66,    -1,    -1,   120,    72,    -1,   113,    -1,   122,
      -1,   123,    -1,    26,    -1,    71,    -1,     9,    -1,     8,
      -1,    38,    -1,    35,    -1,    79,    19,   124,    -1,    79,
      46,    19,   124,    -1,   120,   121,    -1,   120,   125,    -1,
      27,    19,   122,   127,    39,    -1,    33,   129,    39,    -1,
      82,   129,    39,    -1,    10,   126,    87,   112,    88,   132,
      39,    -1,    10,   126,   132,    39,    -1,    -1,    81,    -1,
     128,    86,   127,    -1,   128,    -1,    48,     5,   184,    -1,
     129,    86,   130,    -1,   130,    -1,   131,    30,   124,    -1,
     131,    86,    48,    -1,    48,    -1,   115,   136,   148,   133,
      -1,   134,   133,    -1,   134,    -1,   119,   135,   154,   159,
      -1,    -1,    13,    -1,    21,    -1,    44,    -1,     3,    -1,
      32,    -1,    40,    -1,    -1,   138,    -1,   137,   139,    -1,
     139,    -1,    12,   137,    39,    -1,   119,    48,    30,   121,
       5,   140,    85,    -1,    17,    -1,    18,    -1,    16,    -1,
      15,    -1,   141,    -1,   145,    -1,    87,   142,    88,    -1,
      87,   143,    88,    -1,    -1,   142,    86,   140,    -1,   143,
      86,   144,    -1,    -1,    15,    41,   140,    -1,    87,   146,
      88,    -1,   146,    86,   147,    -1,   147,    -1,    48,     5,
     140,    -1,    -1,   149,    -1,    83,   150,    39,    -1,   150,
     151,    -1,   151,    -1,   119,   131,    30,   124,     5,   200,
      85,    -1,   119,   131,    30,   124,    85,    -1,   152,   153,
      -1,    -1,   119,   154,   159,    -1,     1,    -1,    43,    48,
      87,   155,    88,    41,   158,    -1,    43,    48,    41,   158,
      -1,   155,    86,   156,    -1,   156,    -1,   131,    30,   124,
       5,   157,    -1,   131,    30,   124,    -1,   157,    86,   204,
      -1,   204,    -1,   124,    -1,    57,    -1,   136,   148,   152,
     160,    -1,    65,   161,    39,    -1,   161,   162,    -1,   162,
      -1,   163,    -1,   166,    -1,   169,    -1,   171,    -1,   172,
      -1,   173,    -1,   174,    -1,   175,    -1,   182,    -1,     1,
      -1,   198,    85,    -1,   164,    85,    -1,   202,   165,   184,
      -1,     5,    -1,    77,    -1,    73,    -1,    56,    -1,    23,
      -1,    55,    -1,    63,    -1,    37,    -1,    36,    -1,     6,
      -1,    84,    -1,    61,    -1,    75,    87,   184,    88,   160,
     167,    76,   160,    -1,    75,    87,   184,    88,   160,   167,
      -1,   167,   168,    -1,    -1,    25,    87,   184,    88,   160,
      -1,    53,    87,   184,    88,   160,    -1,    45,   160,    53,
      87,   184,    88,    85,    -1,    62,    87,   170,    89,   184,
      89,   170,    88,   160,    -1,    62,     7,    48,    29,    87,
     184,    88,   160,    -1,   170,    86,   164,    -1,   164,    -1,
      74,    48,    85,    -1,    14,    85,    -1,    31,    85,    -1,
      34,    48,    85,    -1,    22,   184,    85,    -1,    22,    85,
      -1,    51,    35,    48,    85,    -1,    24,   160,   176,    -1,
     177,   181,    -1,   177,    -1,   181,    -1,   178,   180,    -1,
      -1,   178,   179,    -1,    35,   113,   160,    -1,    60,    35,
     160,    -1,    20,   160,    -1,    -1,    90,   184,    91,    -1,
      92,   184,    93,    -1,   185,    -1,   185,    75,   184,    76,
     184,    -1,   185,    62,     7,    48,    29,   184,    -1,   186,
      -1,   185,    59,   186,    -1,   187,    -1,   186,     4,   187,
      -1,   188,    28,   188,    -1,   188,    58,   188,    -1,   188,
      -1,   189,    94,   189,    -1,   189,    95,   189,    -1,   189,
      52,   189,    -1,   189,    47,   189,    -1,   189,    -1,   190,
      96,   190,    -1,   190,    -1,   191,    97,   191,    -1,   191,
      -1,   192,    98,   192,    -1,   192,    -1,   193,    -1,   192,
      42,   193,    -1,   192,    41,   193,    -1,   194,    -1,   193,
      99,   194,    -1,   193,   100,   194,    -1,   195,    -1,   194,
     101,   195,    -1,   194,   102,   195,    -1,   194,    54,   195,
      -1,   196,    -1,   196,    64,   195,    -1,   100,   197,    -1,
     103,   197,    -1,   104,   197,    -1,    78,   197,    -1,   197,
      -1,   198,    -1,   202,    -1,   203,    -1,   204,    -1,     1,
      -1,    48,    87,   199,    88,    -1,    -1,   201,    -1,   201,
      86,   184,    -1,   184,    -1,    -1,   201,    86,   184,    -1,
     203,    -1,   202,   105,   203,    -1,   202,    50,   203,    -1,
     202,    50,   183,    -1,   202,   183,    -1,   113,    -1,    87,
     184,    88,    -1,   106,   203,    -1,    72,   203,    -1,    17,
      -1,    18,    -1,    16,    -1,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    28,    33,    34,    37,    39,    43,    44,
      45,    51,    52,    56,    57,    61,    69,    71,    72,    75,
      79,    80,    84,    85,    89,    91,    92,    93,    96,    98,
     102,   103,   104,   107,   108,   109,   110,   111,   112,   116,
     117,   121,   122,   126,   127,   128,   129,   130,   133,   135,
     138,   139,   142,   146,   147,   151,   156,   157,   162,   166,
     167,   170,   173,   175,   176,   177,   178,   179,   180,   186,
     188,   191,   192,   195,   200,   204,   205,   206,   207,   208,
     209,   213,   214,   217,   219,   224,   225,   228,   232,   236,
     237,   243,   250,   252,   255,   259,   260,   264,   265,   275,
     276,   279,   280,   284,   285,   289,   290,   294,   295,   299,
     300,   303,   304,   308,   312,   321,   322,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   338,   339,   343,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   361,   362,   366,   367,   370,   374,   375,   376,
     377,   381,   382,   386,   387,   388,   392,   396,   397,   401,
     405,   409,   410,   411,   415,   417,   419,   422,   426,   430,
     433,   444,   445,   449,   450,   451,   454,   455,   457,   458,
     462,   463,   464,   468,   469,   470,   471,   472,   476,   477,
     481,   482,   486,   487,   491,   492,   493,   496,   497,   498,
     502,   503,   504,   505,   509,   510,   514,   515,   516,   517,
     518,   521,   522,   523,   524,   525,   528,   530,   532,   535,
     536,   539,   541,   544,   545,   546,   547,   548,   552,   553,
     554,   555,   558,   559,   560,   561
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACTO", "AND", "ASIG", "AND_ASIG",
  "CADA", "CADENA", "CARACTER", "CLASE", "COMO", "CONSTANTES",
  "CONSTRUCTOR", "CONTINUAR", "CTC_CADENA", "CTC_CARACTER", "CTC_ENTERA",
  "CTC_REAL", "DE", "DEFECTO", "DESTRUCTOR", "DEVOLVER", "DIV_ASIG",
  "EJECUTA", "ENCAMBIO", "ENTERO", "ENUMERACION", "EQ", "EN", "ES",
  "ESCAPE", "ESPECIFICO", "ESTRUCTURA", "ETIQUETA", "EXCEPCION", "FD_ASIG",
  "FI_ASIG", "FICHERO", "FIN", "FINAL", "FLECHA_DCHA", "FLECHA_IZDA",
  "FUNCION", "GENERICO", "HACER", "HASH", "GE", "IDENTIFICADOR",
  "IMPORTAR", "INDIRECCION", "LANZA", "LE", "MIENTRAS", "MOD", "MOD_ASIG",
  "MULT_ASIG", "NADA", "NEQ", "OR", "OTRA", "OR_ASIG", "PARA", "POT_ASIG",
  "POTENCIA", "PRINCIPIO", "PRIVADO", "PROGRAMA", "PROTEGIDO", "PTOS",
  "PUBLICO", "REAL", "REF", "RESTA_ASIG", "SALTAR", "SI", "SINO",
  "SUMA_ASIG", "TAMANO", "TABLA", "TIPOS", "ULTIMA", "UNION", "VARIABLES",
  "XOR_ASIG", "'.'", "';'", "'('", "')'", "':'", "'['", "']'", "'{'",
  "'}'", "'<'", "'>'", "'|'", "'@'", "'&'", "'+'", "'-'", "'*'", "'/'",
  "'~'", "'!'", "'?'", "'^'", "$accept", "programa", "cabecera_programa",
  "lista_librerias", "libreria", "nombre_lista", "nombre",
  "bloque_programa", "declaraciones_tipos_opt", "declaraciones_tipos",
  "declaraciones_tipo_lista", "declaracion_tipo", "visibilidad_opt",
  "lista_ref", "tipo_basico", "tipo_escalar", "tipo_tabla",
  "especificacion_tipo", "tipo_estructurado", "ultima_opt",
  "elemento_num_lista", "elemento_enum", "linea_campo_lista",
  "linea_campo", "identificador_lista", "componentes",
  "declaracion_metodo_lista", "declaracion_metodo", "modificador_opt",
  "declaraciones_constantes_opt", "declaraciones_constantes_lista",
  "declaraciones_constantes", "declaracion_constantes", "constante",
  "constante_tabla", "lista_constante", "lista_elemento_hash",
  "elemento_hash", "constante_estructurada", "campo_constante_lista",
  "campo_constante", "declaraciones_variables_opt",
  "declaraciones_variables", "declaracion_variables_lista",
  "declaracion_variables", "lista_declaracion_funcion",
  "declaracion_funcion", "firma_funcion", "parametros_lista", "parametros",
  "expresion_constante_lista", "tipo_salida", "cuerpo_funcion",
  "bloque_instrucciones", "instruccion_lista", "instruccion",
  "instruccion_expresion", "asignacion", "operador_asignacion",
  "instruccion_bifurcacion", "lista_otro_caso", "otro_caso",
  "instruccion_bucle", "asignacion_lista", "instruccion_salto",
  "instruccion_destino_salto", "instruccion_devolver",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "clausulas", "clausulas_excepcion",
  "lista_clausula_excepcion_especifica", "clausula_excepcion_especifica",
  "clausula_excepcion_general", "clausula_defecto", "instruccion_vacia",
  "indice", "expresion", "expresion_logica_or", "expresion_logica_and",
  "expresion_igualdad", "expresion_comparacion", "expresion_or_binario",
  "expresion_xor_binario", "expresion_and_binario",
  "expresion_desplazamiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_potencia", "expresion_unaria",
  "expresion_primitiva", "expresion_funcional", "opt_expresion_lista",
  "expresion_lista", "lista_expresiones", "expresion_indexada",
  "expresion_basica", "expresion_constante", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,    46,    59,    40,    41,    58,
      91,    93,   123,   125,    60,    62,   124,    64,    38,    43,
      45,    42,    47,   126,    33,    63,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   112,   112,   113,   113,   114,   115,   115,   115,   116,
     117,   117,   118,   118,   119,   119,   119,   119,   120,   120,
     121,   121,   121,   122,   122,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   129,   129,   130,   131,   131,   132,   133,
     133,   134,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   138,   139,   140,   140,   140,   140,   140,
     140,   141,   141,   142,   142,   143,   143,   144,   145,   146,
     146,   147,   148,   148,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     157,   158,   158,   159,   160,   161,   161,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   163,   164,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   166,   167,   167,   168,   169,   169,   169,
     169,   170,   170,   171,   171,   171,   172,   173,   173,   174,
     175,   176,   176,   176,   177,   178,   178,   179,   180,   181,
     182,   183,   183,   184,   184,   184,   185,   185,   186,   186,
     187,   187,   187,   188,   188,   188,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   192,   193,   193,   193,
     194,   194,   194,   194,   195,   195,   196,   196,   196,   196,
     196,   197,   197,   197,   197,   197,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   202,   202,   202,   203,   203,
     203,   203,   204,   204,   204,   204
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     4,     1,     0,     2,     3,     5,
       1,     1,     3,     1,     3,     5,     0,     1,     1,     3,
       2,     1,     6,     5,     0,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     2,     2,     5,     3,     3,     7,     4,     0,     1,
       3,     1,     3,     3,     1,     3,     3,     1,     4,     2,
       1,     4,     0,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     1,     3,     7,     1,     1,     1,     1,     1,
       1,     3,     3,     0,     3,     3,     0,     3,     3,     3,
       1,     3,     0,     1,     3,     2,     1,     7,     5,     2,
       0,     3,     1,     7,     4,     3,     1,     5,     3,     3,
       1,     1,     1,     4,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     8,     6,     2,     0,     5,     5,     7,     9,
       8,     3,     1,     3,     2,     2,     3,     3,     2,     4,
       3,     2,     1,     1,     2,     0,     2,     3,     3,     2,
       0,     3,     3,     1,     5,     6,     1,     3,     1,     3,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     4,     0,     1,     3,
       1,     0,     3,     1,     3,     3,     3,     2,     1,     3,
       2,     2,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     0,     0,     1,    18,    24,     2,
      69,    17,     6,    27,    26,    25,     0,    21,     0,    24,
      92,    70,     0,    19,    20,     0,     0,    24,    72,    24,
     100,    93,    10,     0,     7,    28,     0,    73,    71,     0,
      24,    96,     0,    13,     0,    11,     0,     0,    57,     0,
      94,    95,   102,     0,     0,    99,    15,     8,     0,     0,
       0,    36,    35,    48,    33,     0,     0,    38,    37,    34,
      29,     0,     0,    30,     0,    31,    32,    23,     0,    28,
       0,   126,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,   228,     0,   116,
     117,     0,   118,   119,   120,   121,   122,   123,   124,   125,
       0,     0,   223,     0,    69,    12,     0,    14,    49,     0,
       0,     0,    54,     0,    28,     0,     0,    22,     0,     0,
       0,    56,   154,   215,   235,   234,   232,   233,     0,   158,
       0,     0,     0,     0,   173,   176,   178,   182,   187,   189,
     191,   193,   194,   197,   200,   204,   210,   211,   212,   213,
     214,   165,   155,     0,     0,   217,     0,     0,     0,     0,
     231,     0,     0,     0,   230,   114,   115,   128,   127,   130,
     139,   134,   138,   137,     0,   135,   133,   141,   136,   132,
     131,   140,     0,     0,     0,     0,   227,     0,    92,   101,
       9,     0,    69,     0,     0,    44,     0,    28,    39,    28,
      45,    78,    77,    75,    76,    83,     0,    79,    80,    41,
      42,     0,    98,   209,   206,   207,   208,   157,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,   162,     0,   163,   156,     0,     0,   218,     0,     0,
       0,   152,     0,   153,     0,   229,   226,   225,     0,     0,
     224,   129,    28,     0,   100,     0,    11,    92,    47,     0,
       0,    51,    53,    55,    40,     0,     0,     0,     0,    90,
      74,   220,     0,     0,   177,     0,     0,   179,   180,   181,
     186,   185,   183,   184,   188,   190,   196,   195,   192,   198,
     199,   203,   201,   202,   205,   169,   161,     0,     0,   166,
     164,     0,   216,     0,   159,     0,     0,     0,     0,     0,
     171,   172,   112,   111,   104,     0,     0,   106,     0,     0,
      24,     0,    43,     0,     0,     0,    81,     0,    82,     0,
      88,    97,     0,     0,     0,     0,     0,     0,   222,   147,
       0,   151,     0,   145,    28,     0,     0,   113,     0,    62,
      58,    24,    52,    50,    91,    84,     0,    85,    89,   219,
       0,   174,   167,   168,     0,     0,     0,   143,   108,   105,
      28,    46,    66,    63,    64,    67,    68,    65,     0,    59,
       0,   175,   148,     0,     0,     0,     0,   144,     0,   103,
      69,    87,   150,     0,     0,   142,   107,   110,    61,   149,
       0,     0,     0,   109,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    34,    44,    97,     9,   202,    11,
      16,    17,    18,   129,    74,    75,    76,   333,    77,   119,
     280,   281,   121,   122,   123,   203,   370,   371,   398,   198,
      27,    21,    28,   216,   217,   286,   287,   377,   218,   288,
     289,    30,    31,    40,    41,    42,    55,   114,   336,   337,
     416,   334,   199,    56,    98,    99,   100,   101,   195,   102,
     387,   407,   103,   262,   104,   105,   106,   107,   108,   250,
     251,   252,   319,   320,   253,   109,   196,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   256,   292,   257,   158,   159,   160
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -292
static const yytype_int16 yypact[] =
{
      15,    85,    55,   131,   367,    50,  -292,  -292,   212,  -292,
     129,  -292,  -292,  -292,  -292,  -292,   132,   242,   137,   212,
      94,  -292,    62,  -292,  -292,   178,   179,   113,  -292,   212,
    -292,  -292,  -292,   182,  -292,  -292,   188,  -292,  -292,   186,
     118,  -292,   146,  -292,    -6,     6,   435,   369,  -292,    16,
    -292,  -292,  -292,    38,   204,  -292,  -292,  -292,   182,   205,
     217,  -292,  -292,   140,  -292,   260,   186,  -292,  -292,  -292,
    -292,    19,   186,   224,   209,  -292,  -292,  -292,   290,  -292,
     251,  -292,   215,   122,   237,   228,   267,   237,   227,   294,
     245,     7,   -28,   285,   253,   270,   -28,   224,    42,  -292,
    -292,   256,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
     262,   261,  -292,   301,   129,   224,   265,  -292,  -292,   343,
     266,    29,  -292,    20,  -292,   335,    68,  -292,    12,   435,
      13,  -292,  -292,  -292,  -292,  -292,  -292,  -292,   157,  -292,
     157,   157,   157,   273,    -4,   355,  -292,    -9,   104,   269,
     264,   -10,   -65,    66,  -292,   299,  -292,  -292,   105,   114,
    -292,   347,  -292,   284,   328,   296,   336,   270,   337,   -28,
    -292,   303,   270,   302,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,   148,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,   270,   270,   -28,   270,  -292,   -30,    94,  -292,
    -292,   182,   129,   350,   344,  -292,   186,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,   345,   309,  -292,  -292,  -292,
    -292,   145,  -292,  -292,  -292,  -292,  -292,  -292,   270,   389,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   237,
    -292,   347,     1,  -292,  -292,   311,   312,   315,   320,   318,
     368,  -292,   101,  -292,   324,  -292,  -292,  -292,   317,   321,
    -292,  -292,   358,   186,  -292,   -46,   224,    94,  -292,   411,
     383,   338,  -292,  -292,  -292,   426,    90,   127,   155,  -292,
    -292,  -292,   349,   363,   355,   388,   365,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,   -65,   -65,   150,    66,
      66,  -292,  -292,  -292,  -292,  -292,  -292,   182,   420,  -292,
    -292,   270,  -292,   270,  -292,   237,   371,   -28,   270,   237,
    -292,  -292,  -292,  -292,  -292,    40,   170,  -292,   146,   359,
     212,   270,  -292,   344,    12,    12,  -292,   441,  -292,   345,
    -292,  -292,   270,   430,   270,    84,   237,   372,  -292,  -292,
     270,  -292,   374,  -292,  -292,   186,   423,  -292,   427,   425,
    -292,   194,  -292,  -292,  -292,  -292,   431,  -292,  -292,   381,
     270,  -292,  -292,  -292,   386,   387,   -28,     8,   469,  -292,
     358,  -292,  -292,  -292,  -292,  -292,  -292,  -292,   204,  -292,
      12,  -292,  -292,   237,   173,   390,   237,  -292,   310,  -292,
     129,  -292,  -292,   237,   270,  -292,   392,  -292,  -292,  -292,
     391,   310,   237,  -292,  -292
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,  -292,  -292,  -292,  -292,   275,   -21,  -292,   476,  -292,
     464,  -292,   -19,   447,   -32,   364,  -292,   -73,   356,  -292,
     143,  -292,   415,   282,   -34,   151,   120,  -292,  -292,    -1,
    -292,  -292,   462,  -291,  -292,  -292,  -292,  -292,  -292,  -292,
     144,  -185,  -292,  -292,   452,   220,  -292,    97,  -292,   133,
    -292,   106,    87,   -83,  -292,   401,  -292,  -162,  -292,  -292,
    -292,  -292,  -292,   115,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,   249,  -292,   319,   -71,  -292,   274,
     277,     4,   184,   271,   272,   263,   -38,    25,   206,  -292,
     165,   -31,  -292,  -292,   283,   -50,   -51,  -239
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -224
static const yytype_int16 yytable[] =
{
      26,   161,   112,   111,   164,    49,   130,   261,    26,    20,
      39,   272,    45,   274,   168,    78,     1,    59,   221,   232,
      43,    39,   110,    54,   173,    73,    73,   211,   212,   213,
     214,   240,   241,   405,   243,   244,   317,   115,   124,    81,
      58,   170,   339,    81,    92,   174,    79,   112,   111,   233,
     207,   208,    82,   374,   375,   228,    82,   273,   229,    95,
      83,   318,    84,    32,    83,   125,    84,   110,   205,    85,
     364,   230,    86,    85,    -4,    60,    86,  -170,    96,    57,
      58,   175,     2,    87,   406,    -3,    88,    87,   242,    89,
      88,    90,   340,    89,   169,    90,   259,   219,   222,   215,
      91,   264,    80,     5,    91,    -4,    80,   210,    73,   411,
      92,    33,    93,    94,    92,   206,    93,    94,   112,   111,
     245,   268,   269,   133,   271,    95,    80,    -4,    -4,    95,
      -4,     6,    -4,   267,   283,    12,   284,   134,   135,   136,
     137,    19,    -4,   270,    96,    -4,   133,    52,    96,    53,
     291,   234,    37,    60,   206,   184,   235,    50,   133,   296,
     134,   135,   136,   137,  -223,   361,   315,   246,   247,   417,
      88,    23,   134,   135,   136,   137,   345,    29,   346,    13,
     276,    14,   423,    15,    13,    25,    14,   327,    15,   -24,
     328,   240,   241,    88,    92,   192,    43,   193,   236,   237,
     138,   277,   306,   307,  -223,    88,  -223,   139,    35,    95,
     194,    53,    13,   347,    14,   348,    15,    92,    47,  -223,
      92,   118,   140,   138,   261,   141,   142,    36,    96,    92,
      43,  -221,    95,   -60,    48,    95,   298,   299,   192,   335,
     193,   349,   359,   350,    95,   140,   363,   113,   141,   142,
     357,    96,   358,   116,    96,   367,   365,   362,   366,   327,
      13,   413,    14,    96,    15,   117,   179,   180,   309,   310,
     372,   133,   382,   383,    61,    62,   112,   111,    13,   120,
      14,   379,    15,   381,   181,   134,   135,   136,   137,   385,
     -24,   388,    64,    60,   127,   128,   355,   182,   183,   131,
     132,    67,    53,   223,    68,   224,   225,   226,    13,   401,
      14,   184,    15,   162,   165,   163,   185,   186,    88,    54,
     412,   369,   187,   415,   188,   134,   135,   136,   137,   166,
     419,   335,   167,   171,   189,   112,   111,    69,   190,   424,
     172,   177,    92,   420,     7,   191,   -16,   178,   138,   197,
     200,   192,   369,   193,   209,   -16,   -16,    95,   227,   231,
       7,   239,   -16,   248,   -16,   238,   194,   249,     7,   254,
     140,   -16,   -16,   141,   142,   -16,    96,    61,    62,   -16,
     -16,   255,  -221,   -16,   258,   260,   -16,   -16,   263,   278,
     265,   -16,   279,   285,   290,    64,   295,   326,   321,   -16,
     322,   323,   -16,   -16,    67,   324,   325,    68,   330,   -16,
     -16,   -16,   329,   -16,   331,   332,   341,    43,   300,   301,
     302,   303,   342,     8,   343,   -16,   -16,   -16,   392,   -16,
     201,   344,   -16,   -16,   351,   -16,   353,   -16,   393,     8,
      69,   354,   -16,    61,    62,    63,   394,     8,    71,   352,
     -16,   311,   312,   313,   314,   356,   376,   395,   360,   380,
     384,    64,    65,   386,   390,   396,   391,  -222,    66,   397,
      67,   402,   400,    68,   408,   403,   275,   414,   421,   422,
      10,    24,    46,    43,   204,   220,   373,   126,   282,    38,
     368,   399,    51,   378,   338,   410,   409,   418,   389,   176,
     316,   404,   294,   266,   293,   308,    69,    70,   297,   304,
       0,   305,     0,     0,    71,     0,     0,    72
};

static const yytype_int16 yycheck[] =
{
      19,    84,    53,    53,    87,    39,    79,   169,    27,    10,
      29,    41,    33,   198,     7,    47,     1,    11,     5,    28,
      48,    40,    53,    42,    95,    46,    47,    15,    16,    17,
      18,    41,    42,    25,    99,   100,    35,    58,    19,     1,
      86,    92,    88,     1,    72,    96,    30,    98,    98,    58,
      30,   124,    14,   344,   345,    59,    14,    87,    62,    87,
      22,    60,    24,     1,    22,    46,    24,    98,    39,    31,
      30,    75,    34,    31,    12,    69,    34,    39,   106,    85,
      86,    39,    67,    45,    76,     0,    48,    45,    98,    51,
      48,    53,   277,    51,    87,    53,   167,   129,    85,    87,
      62,   172,    86,    48,    62,    43,    86,    39,   129,   400,
      72,    49,    74,    75,    72,    86,    74,    75,   169,   169,
      54,   192,   193,     1,   195,    87,    86,    65,    66,    87,
      68,     0,    70,   184,   207,    85,   209,    15,    16,    17,
      18,    12,    80,   194,   106,    83,     1,     1,   106,    65,
     221,    47,    39,    69,    86,    50,    52,    39,     1,   230,
      15,    16,    17,    18,    50,   327,   249,   101,   102,   408,
      48,    39,    15,    16,    17,    18,    86,    83,    88,    66,
     201,    68,   421,    70,    66,    48,    68,    86,    70,    43,
      89,    41,    42,    48,    72,    90,    48,    92,    94,    95,
      78,   202,   240,   241,    90,    48,    92,    85,    30,    87,
     105,    65,    66,    86,    68,    88,    70,    72,    30,   105,
      72,    81,   100,    78,   386,   103,   104,    48,   106,    72,
      48,    86,    87,    39,    48,    87,   232,   233,    90,   273,
      92,    86,   325,    88,    87,   100,   329,    43,   103,   104,
     321,   106,   323,    48,   106,   338,    86,   328,    88,    86,
      66,    88,    68,   106,    70,    48,     5,     6,   243,   244,
     341,     1,   355,   356,     8,     9,   327,   327,    66,    19,
      68,   352,    70,   354,    23,    15,    16,    17,    18,   360,
      48,   364,    26,    69,    85,     5,   317,    36,    37,    48,
      85,    35,    65,   138,    38,   140,   141,   142,    66,   380,
      68,    50,    70,    85,    87,    48,    55,    56,    48,   338,
     403,   340,    61,   406,    63,    15,    16,    17,    18,    35,
     413,   365,    87,    48,    73,   386,   386,    71,    77,   422,
      87,    85,    72,   414,     1,    84,     3,    85,    78,    48,
      85,    90,   371,    92,    19,    12,    13,    87,    85,     4,
       1,    97,     3,    64,    21,    96,   105,    20,     1,    85,
     100,    12,    13,   103,   104,    32,   106,     8,     9,    12,
      21,    53,    86,    40,    48,    48,    43,    44,    85,    39,
      88,    32,    48,    48,    85,    26,     7,    29,    87,    40,
      88,    86,    43,    44,    35,    85,    88,    38,    91,    66,
      43,    68,    88,    70,    93,    57,     5,    48,   234,   235,
     236,   237,    39,    80,    86,    66,    83,    68,     3,    70,
      87,     5,    65,    66,    85,    68,    48,    70,    13,    80,
      71,    76,    83,     8,     9,    10,    21,    80,    79,    86,
      83,   245,   246,   247,   248,    35,    15,    32,    87,    29,
      88,    26,    27,    89,    41,    40,    39,    86,    33,    44,
      35,    85,    41,    38,     5,    88,   201,    87,    86,    88,
       4,    17,    35,    48,   120,   129,   343,    72,   206,    27,
     339,   371,    40,   349,   274,   398,   390,   410,   365,    98,
     251,   386,   228,   184,   221,   242,    71,    72,   231,   238,
      -1,   239,    -1,    -1,    79,    -1,    -1,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   108,   109,    48,     0,     1,    80,   114,
     115,   116,    85,    66,    68,    70,   117,   118,   119,    12,
     136,   138,   110,    39,   117,    48,   119,   137,   139,    83,
     148,   149,     1,    49,   111,    30,    48,    39,   139,   119,
     150,   151,   152,    48,   112,   113,   120,    30,    48,   131,
      39,   151,     1,    65,   119,   153,   160,    85,    86,    11,
      69,     8,     9,    10,    26,    27,    33,    35,    38,    71,
      72,    79,    82,   113,   121,   122,   123,   125,   121,    30,
      86,     1,    14,    22,    24,    31,    34,    45,    48,    51,
      53,    62,    72,    74,    75,    87,   106,   113,   161,   162,
     163,   164,   166,   169,   171,   172,   173,   174,   175,   182,
     198,   202,   203,    43,   154,   113,    48,    48,    81,   126,
      19,   129,   130,   131,    19,    46,   129,    85,     5,   120,
     124,    48,    85,     1,    15,    16,    17,    18,    78,    85,
     100,   103,   104,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   202,   203,
     204,   160,    85,    48,   160,    87,    35,    87,     7,    87,
     203,    48,    87,   184,   203,    39,   162,    85,    85,     5,
       6,    23,    36,    37,    50,    55,    56,    61,    63,    73,
      77,    84,    90,    92,   105,   165,   183,    48,   136,   159,
      85,    87,   115,   132,   122,    39,    86,    30,   124,    19,
      39,    15,    16,    17,    18,    87,   140,   141,   145,   121,
     125,     5,    85,   197,   197,   197,   197,    85,    59,    62,
      75,     4,    28,    58,    47,    52,    94,    95,    96,    97,
      41,    42,    98,    99,   100,    54,   101,   102,    64,    20,
     176,   177,   178,   181,    85,    53,   199,   201,    48,   184,
      48,   164,   170,    85,   184,    88,   183,   203,   184,   184,
     203,   184,    41,    87,   148,   112,   113,   136,    39,    48,
     127,   128,   130,   124,   124,    48,   142,   143,   146,   147,
      85,   184,   200,   201,   186,     7,   184,   187,   188,   188,
     189,   189,   189,   189,   190,   191,   193,   193,   192,   194,
     194,   195,   195,   195,   195,   160,   181,    35,    60,   179,
     180,    87,    88,    86,    85,    88,    29,    86,    89,    88,
      91,    93,    57,   124,   158,   131,   155,   156,   152,    88,
     148,     5,    39,    86,     5,    86,    88,    86,    88,    86,
      88,    85,    86,    48,    76,   113,    35,   184,   184,   160,
      87,   164,   184,   160,    30,    86,    88,   160,   132,   119,
     133,   134,   184,   127,   140,   140,    15,   144,   147,   184,
      29,   184,   160,   160,    88,   184,    89,   167,   124,   156,
      41,    39,     3,    13,    21,    32,    40,    44,   135,   133,
      41,   184,    85,    88,   170,    25,    76,   168,     5,   158,
     154,   140,   160,    88,    87,   160,   157,   204,   159,   160,
     184,    86,    88,   204,   160
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 2:
#line 27 "eazy.y"
    { printf("  ÉXITO: programa -> cabecera_programa bloque_programa\n"); ;}
    break;

  case 3:
#line 28 "eazy.y"
    { printf("  ERROR: programa -> error\n");yyerrok; ;}
    break;

  case 4:
#line 33 "eazy.y"
    { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); ;}
    break;

  case 5:
#line 34 "eazy.y"
    { printf("  ERROR: cabecera_programa -> error\n");yyerrok; ;}
    break;

  case 7:
#line 39 "eazy.y"
    { printf("  lista_librerias -> lista_librerias libreria\n"); ;}
    break;

  case 8:
#line 43 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre_lista .\n"); ;}
    break;

  case 9:
#line 44 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); ;}
    break;

  case 10:
#line 45 "eazy.y"
    { printf("  ERROR: libreria -> error\n");yyerrok; ;}
    break;

  case 11:
#line 51 "eazy.y"
    { printf("  lista_nombres -> nombre\n"); ;}
    break;

  case 12:
#line 52 "eazy.y"
    { printf("  lista_nombres -> lista_nombres ; nombre\n"); ;}
    break;

  case 13:
#line 56 "eazy.y"
    { printf("  nombre -> IDENTIFICADOR\n"); ;}
    break;

  case 14:
#line 57 "eazy.y"
    { printf("  nombre -> nombre PTOS IDENTIFICADOR\n"); ;}
    break;

  case 15:
#line 61 "eazy.y"
    { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); ;}
    break;

  case 18:
#line 72 "eazy.y"
    { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; ;}
    break;

  case 102:
#line 280 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 126:
#line 335 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 215:
#line 525 "eazy.y"
    { printf("ERROR: expresión_primitiva -> error\n"); yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2024 "eazy.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 566 "eazy.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("Error sintáctico: %s\n", s);
  return 0;
}

int yywrap() {
  return 1;
}

int main(int argc, char *argv[]) {
  yydebug = 1;

  if (argc < 2) {
    printf("Uso: ./eazy NombreArchivo\n");
  } else {
    yyin = fopen(argv[1], "r");
    if (!yyin) {
      perror(argv[1]);
      return 1;
    }
    yyparse();
  }

  return 0;
}
