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
#define YYLAST   1130

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNRULES -- Number of states.  */
#define YYNSTATES  406

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
       2,     2,     2,    86,     2,     2,     2,     2,    93,     2,
     102,   103,    88,    90,     2,    91,    98,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   104,    99,
      96,     2,    97,    92,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   105,     2,   106,   109,     2,     2,     2,     2,     2,
     100,     2,   101,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    87,     2,     2,     2,
       2,     2,     2,   107,    95,   108,    85,     2,     2,     2,
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
     150,   153,   155,   159,   162,   164,   168,   171,   173,   178,
     181,   183,   188,   189,   191,   193,   195,   197,   199,   201,
     202,   204,   208,   211,   213,   221,   223,   225,   227,   229,
     231,   233,   237,   241,   244,   245,   249,   253,   256,   258,
     261,   262,   266,   267,   269,   273,   276,   278,   286,   292,
     295,   297,   300,   301,   305,   307,   315,   320,   326,   330,
     333,   335,   337,   339,   344,   348,   351,   353,   355,   357,
     359,   361,   363,   365,   367,   369,   371,   373,   376,   379,
     383,   385,   387,   389,   391,   393,   395,   397,   399,   401,
     403,   405,   407,   416,   423,   426,   427,   433,   439,   447,
     457,   466,   469,   471,   475,   478,   481,   485,   489,   492,
     497,   501,   504,   506,   508,   511,   512,   515,   519,   523,
     526,   527,   531,   535,   537,   539,   541,   543,   545,   547,
     549,   551,   553,   555,   557,   559,   561,   563,   565,   571,
     578,   582,   586,   590,   594,   598,   602,   606,   610,   614,
     618,   622,   626,   630,   634,   638,   642,   646,   650,   654,
     657,   660,   663,   666,   671,   673,   677,   681,   685,   688,
     690,   694,   697,   700,   702,   704,   706
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     111,     0,    -1,   112,   117,    -1,     1,    -1,    67,    48,
      98,   113,    -1,     1,    -1,    -1,   113,   114,    -1,    49,
     115,    98,    -1,    49,   116,    11,    48,    98,    -1,     1,
      -1,   116,    -1,   115,    99,   116,    -1,    48,    -1,   116,
      69,    48,    -1,   118,   139,   151,   156,   163,    -1,    -1,
     119,    -1,     1,    -1,    80,   120,    39,    -1,   121,   120,
      -1,   121,    -1,   122,    48,    30,   123,   124,    98,    -1,
     122,    48,    30,   123,   128,    -1,    -1,    70,    -1,    68,
      -1,    66,    -1,    -1,   123,    72,    -1,   116,    -1,   125,
      -1,   126,    -1,    26,    -1,    71,    -1,     9,    -1,     8,
      -1,    38,    -1,    35,    -1,    79,    19,   127,    -1,    79,
      46,    19,   127,    -1,   123,   124,    -1,   123,   128,    -1,
      27,   100,   125,   130,   101,    -1,    33,   132,   101,    -1,
      82,   132,   101,    -1,    10,   129,   102,   115,   103,   135,
     101,    -1,    10,   129,   135,   101,    -1,    -1,    81,    -1,
     131,   130,    -1,   131,    -1,    48,     5,   187,    -1,   132,
     133,    -1,   133,    -1,   134,    30,   127,    -1,   134,    48,
      -1,    48,    -1,   118,   139,   151,   136,    -1,   137,   136,
      -1,   137,    -1,   122,   138,   158,   162,    -1,    -1,    13,
      -1,    21,    -1,    44,    -1,     3,    -1,    32,    -1,    40,
      -1,    -1,   140,    -1,    12,   141,    39,    -1,   141,   142,
      -1,   142,    -1,   122,    48,    30,   124,     5,   143,    98,
      -1,    17,    -1,    18,    -1,    16,    -1,    15,    -1,   144,
      -1,   147,    -1,   102,   149,   103,    -1,   102,   145,   103,
      -1,   145,   146,    -1,    -1,    15,    41,   143,    -1,   102,
     148,   103,    -1,   148,   150,    -1,   150,    -1,   149,   143,
      -1,    -1,    48,     5,   143,    -1,    -1,   152,    -1,    83,
     153,    39,    -1,   153,   154,    -1,   154,    -1,   122,   134,
      30,   127,     5,   155,    98,    -1,   122,   134,    30,   127,
      98,    -1,   155,   187,    -1,   187,    -1,   156,   157,    -1,
      -1,   122,   158,   162,    -1,     1,    -1,    43,    48,   102,
     159,   103,    41,   161,    -1,    43,    48,    41,   161,    -1,
     134,    30,   127,     5,   160,    -1,   134,    30,   127,    -1,
     160,   201,    -1,   201,    -1,   127,    -1,    57,    -1,   139,
     151,   156,   163,    -1,    65,   164,    39,    -1,   164,   165,
      -1,   165,    -1,   166,    -1,   169,    -1,   172,    -1,   174,
      -1,   175,    -1,   176,    -1,   177,    -1,   178,    -1,   185,
      -1,     1,    -1,   198,    98,    -1,   167,    98,    -1,   199,
     168,   187,    -1,     5,    -1,    77,    -1,    73,    -1,    56,
      -1,    23,    -1,    55,    -1,    63,    -1,    37,    -1,    36,
      -1,     6,    -1,    84,    -1,    61,    -1,    75,   102,   187,
     103,   163,   170,    76,   163,    -1,    75,   102,   187,   103,
     163,   170,    -1,   170,   171,    -1,    -1,    25,   102,   187,
     103,   163,    -1,    53,   102,   187,   103,   163,    -1,    45,
     163,    53,   102,   187,   103,    98,    -1,    62,   102,   173,
     104,   187,   104,   173,   103,   163,    -1,    62,     7,    48,
      29,   102,   187,   103,   163,    -1,   173,   167,    -1,   167,
      -1,    74,    48,    98,    -1,    14,    98,    -1,    31,    98,
      -1,    34,    48,    98,    -1,    22,   187,    98,    -1,    22,
      98,    -1,    51,    35,    48,    98,    -1,    24,   163,   179,
      -1,   180,   184,    -1,   180,    -1,   184,    -1,   181,   183,
      -1,    -1,   181,   182,    -1,    35,   116,   163,    -1,    60,
      35,   163,    -1,    20,   163,    -1,    -1,   105,   187,   106,
      -1,   107,   187,   108,    -1,   188,    -1,   189,    -1,   190,
      -1,   191,    -1,   192,    -1,   193,    -1,   194,    -1,   195,
      -1,   196,    -1,   197,    -1,   198,    -1,   199,    -1,   200,
      -1,   201,    -1,     1,    -1,   190,    75,   187,    76,   187,
      -1,   190,    62,     7,    48,    29,   187,    -1,   187,     4,
     187,    -1,   187,    59,   187,    -1,   187,    96,   187,    -1,
     187,    97,   187,    -1,   187,    52,   187,    -1,   187,    47,
     187,    -1,   187,    28,   187,    -1,   187,    58,   187,    -1,
     187,    88,   187,    -1,   187,    89,   187,    -1,   187,    54,
     187,    -1,   187,    42,   187,    -1,   187,    41,   187,    -1,
     187,    93,   187,    -1,   187,    94,   187,    -1,   187,    95,
     187,    -1,   187,    64,   187,    -1,   187,    90,   187,    -1,
     187,    91,   187,    -1,    91,   187,    -1,    85,   187,    -1,
      86,   187,    -1,    87,   187,    -1,    48,   102,   155,   103,
      -1,   200,    -1,   199,    92,   200,    -1,   199,    50,   200,
      -1,   199,    50,   186,    -1,   199,   186,    -1,   116,    -1,
     102,   187,   103,    -1,   109,   200,    -1,    72,   200,    -1,
      17,    -1,    18,    -1,    16,    -1,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    46,    47,    50,    52,    56,    57,
      58,    64,    65,    69,    70,    74,    82,    84,    85,    88,
      92,    93,    97,    98,   102,   104,   105,   106,   109,   111,
     115,   116,   117,   120,   121,   122,   123,   124,   125,   129,
     130,   134,   135,   139,   140,   141,   142,   143,   146,   148,
     151,   152,   155,   159,   160,   164,   169,   170,   175,   179,
     180,   183,   186,   188,   189,   190,   191,   192,   193,   199,
     201,   204,   207,   208,   212,   216,   217,   218,   219,   220,
     221,   225,   226,   230,   231,   234,   238,   242,   243,   246,
     247,   252,   259,   261,   264,   268,   269,   273,   274,   279,
     280,   288,   289,   292,   293,   297,   298,   302,   303,   307,
     308,   311,   312,   316,   320,   329,   330,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   346,   347,   351,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   369,   370,   374,   375,   378,   382,   383,   384,
     385,   389,   390,   394,   395,   396,   400,   404,   405,   409,
     413,   417,   418,   419,   423,   425,   427,   430,   434,   438,
     441,   451,   452,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   475,   480,
     484,   485,   489,   490,   491,   492,   493,   494,   498,   499,
     500,   505,   506,   510,   511,   512,   516,   520,   521,   526,
     527,   528,   529,   533,   538,   539,   540,   541,   542,   547,
     548,   549,   550,   553,   554,   555,   556
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
  "XOR_ASIG", "'~'", "'!'", "'tamano'", "'*'", "'/'", "'+'", "'-'", "'?'",
  "'&'", "'@'", "'|'", "'<'", "'>'", "'.'", "';'", "'de'", "'fin'", "'('",
  "')'", "':'", "'['", "']'", "'{'", "'}'", "'^'", "$accept", "programa",
  "cabecera_programa", "lista_librerias", "libreria", "nombre_lista",
  "nombre", "bloque_programa", "declaraciones_tipos_opt",
  "declaraciones_tipos", "declaraciones_tipo_lista", "declaracion_tipo",
  "visibilidad_opt", "lista_ref", "tipo_basico", "tipo_escalar",
  "tipo_tabla", "especificacion_tipo", "tipo_estructurado", "ultima_opt",
  "elemento_num_lista", "elemento_enum", "linea_campo_lista",
  "linea_campo", "identificador_lista", "componentes",
  "declaracion_metodo_lista", "declaracion_metodo", "modificador_opt",
  "declaraciones_constantes_opt", "declaraciones_constantes",
  "declaraciones_constantes_lista", "declaracion_constantes", "constante",
  "constante_tabla", "lista_elemento_hash", "elemento_hash",
  "constante_estructurada", "campo_constante_lista", "lista_constante",
  "campo_constante", "declaraciones_variables_opt",
  "declaraciones_variables", "declaracion_variables_lista",
  "declaracion_variables", "expresion_lista", "lista_declaracion_funcion",
  "declaracion_funcion", "firma_funcion", "parametros_lista",
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
  "indice", "expresion", "expresion_condicional", "expresion_para_cada",
  "expresion_logica", "expresion_comparacion", "expresion_aritmetica",
  "expresion_desplazamiento", "expresion_logica_binaria",
  "expresion_potencia", "expresion_numerica", "expresion_unaria",
  "expresion_funcional", "expresion_indexada", "expresion_basica",
  "expresion_constante", 0
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
     335,   336,   337,   338,   339,   126,    33,   116,    42,    47,
      43,    45,    63,    38,    64,   124,    60,    62,    46,    59,
     100,   102,    40,    41,    58,    91,    93,   123,   125,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   118,   118,   118,   119,
     120,   120,   121,   121,   122,   122,   122,   122,   123,   123,
     124,   124,   124,   125,   125,   125,   125,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   128,   128,   129,   129,
     130,   130,   131,   132,   132,   133,   134,   134,   135,   136,
     136,   137,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   140,   141,   141,   142,   143,   143,   143,   143,   143,
     143,   144,   144,   145,   145,   146,   147,   148,   148,   149,
     149,   150,   151,   151,   152,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   163,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   166,   167,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   169,   169,   170,   170,   171,   172,   172,   172,
     172,   173,   173,   174,   174,   174,   175,   176,   176,   177,
     178,   179,   179,   179,   180,   181,   181,   182,   183,   184,
     185,   186,   186,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   188,   189,
     190,   190,   191,   191,   191,   191,   191,   191,   192,   192,
     192,   193,   193,   194,   194,   194,   195,   196,   196,   197,
     197,   197,   197,   198,   199,   199,   199,   199,   199,   200,
     200,   200,   200,   201,   201,   201,   201
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     4,     1,     0,     2,     3,     5,
       1,     1,     3,     1,     3,     5,     0,     1,     1,     3,
       2,     1,     6,     5,     0,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     2,     2,     5,     3,     3,     7,     4,     0,     1,
       2,     1,     3,     2,     1,     3,     2,     1,     4,     2,
       1,     4,     0,     1,     1,     1,     1,     1,     1,     0,
       1,     3,     2,     1,     7,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     0,     3,     3,     2,     1,     2,
       0,     3,     0,     1,     3,     2,     1,     7,     5,     2,
       1,     2,     0,     3,     1,     7,     4,     5,     3,     2,
       1,     1,     1,     4,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     8,     6,     2,     0,     5,     5,     7,     9,
       8,     2,     1,     3,     2,     2,     3,     3,     2,     4,
       3,     2,     1,     1,     2,     0,     2,     3,     3,     2,
       0,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     4,     1,     3,     3,     3,     2,     1,
       3,     2,     2,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     0,     0,     1,    18,    24,     2,
      69,    17,     6,    27,    26,    25,     0,    21,     0,    24,
      92,    70,     0,    19,    20,     0,     0,    24,    73,    24,
     102,    93,    10,     0,     7,    28,     0,    71,    72,     0,
      24,    96,     0,    13,     0,    11,     0,     0,    57,     0,
      94,    95,   104,     0,     0,   101,    15,     8,     0,     0,
       0,    36,    35,    48,    33,     0,     0,    38,    37,    34,
      29,     0,     0,    30,     0,    31,    32,    23,     0,    28,
      56,   126,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   116,
     117,     0,   118,   119,   120,   121,   122,   123,   124,   125,
       0,     0,   214,     0,    69,    12,     0,    14,    49,     0,
       0,     0,    54,     0,    28,     0,     0,    22,     0,     0,
       0,   154,   187,   226,   225,   223,   224,     0,     0,     0,
       0,   158,     0,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   165,   155,     0,
       0,     0,     0,     0,     0,     0,   222,     0,     0,     0,
     221,   114,   115,   128,   127,   130,   139,   134,   138,   137,
       0,   135,   133,   141,   136,   132,   131,   140,     0,     0,
       0,     0,   218,     0,    92,   103,     9,     0,    69,     0,
       0,    44,    53,    28,    39,    28,    45,    78,    77,    75,
      76,    90,     0,    79,    80,    41,    42,     0,    98,   210,
     211,   212,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,     0,   160,   162,     0,   163,
     156,     0,     0,   100,     0,     0,     0,   152,     0,   153,
       0,   220,   217,   216,   215,     0,     0,   129,    28,     0,
     102,     0,    11,    92,    47,     0,     0,    51,    55,    40,
       0,     0,     0,     0,    88,    74,     0,   190,   196,   202,
     201,   195,   194,   200,   197,   191,   206,   198,   199,   207,
     208,   203,   204,   205,   192,   193,     0,     0,   169,   161,
       0,     0,   166,   164,     0,   213,    99,   159,     0,     0,
       0,   151,     0,   171,   172,   112,   111,   106,     0,     0,
       0,     0,    24,     0,    43,    50,     0,     0,    82,    83,
      86,    87,    81,    89,    97,     0,     0,     0,     0,     0,
     147,     0,     0,   145,    28,     0,   113,     0,    62,    58,
      24,    52,    91,     0,     0,   188,   167,   168,     0,     0,
       0,   143,   108,    28,    46,    66,    63,    64,    67,    68,
      65,     0,    59,    85,   189,   148,     0,     0,     0,     0,
     144,     0,   105,    69,   150,     0,     0,   142,   107,   110,
      61,   149,     0,   109,     0,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    34,    44,    97,     9,   198,    11,
      16,    17,    18,   129,    74,    75,    76,   326,    77,   119,
     276,   277,   121,   122,   123,   199,   359,   360,   381,   194,
      21,    27,    28,   212,   213,   281,   339,   214,   282,   283,
     284,    30,    31,    40,    41,   252,    42,    55,   114,   329,
     398,   327,   195,    56,    98,    99,   100,   101,   191,   102,
     371,   390,   103,   258,   104,   105,   106,   107,   108,   246,
     247,   248,   312,   313,   249,   109,   192,   253,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -349
static const yytype_int16 yypact[] =
{
      26,    35,     1,    51,  1002,   -72,  -349,  -349,   212,  -349,
      45,  -349,  -349,  -349,  -349,  -349,    49,    82,    67,   212,
      60,  -349,   343,  -349,  -349,   104,    98,   361,  -349,   212,
    -349,  -349,  -349,   101,  -349,  -349,   127,  -349,  -349,   110,
     406,  -349,    21,  -349,    28,    31,  1048,   194,  -349,    81,
    -349,  -349,  -349,   250,   117,  -349,  -349,  -349,   101,   151,
     152,  -349,  -349,   137,  -349,   108,   110,  -349,  -349,  -349,
    -349,    29,   110,   156,   123,  -349,  -349,  -349,   226,  -349,
    -349,  -349,   141,    53,   178,   146,   199,   178,   153,   223,
     158,     2,   297,   213,   161,   364,   297,   156,   315,  -349,
    -349,   172,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
     181,   524,  -349,   220,    45,   156,   187,  -349,  -349,   556,
     188,   -16,  -349,   111,  -349,   272,     7,  -349,    43,  1048,
       8,  -349,  -349,  -349,  -349,  -349,  -349,   364,   364,   364,
     364,  -349,   838,  -349,  -349,   -34,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,   106,   143,  -349,   276,  -349,   204,
     251,   364,   259,   364,   261,   297,  -349,   217,   364,   607,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
     185,  -349,  -349,  -349,  -349,  -349,  -349,  -349,   297,   364,
     364,   364,  -349,    -5,    60,  -349,  -349,   101,    45,   209,
     273,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
    -349,     4,   222,  -349,  -349,  -349,  -349,   364,  -349,   916,
     916,   916,    25,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,  -349,   319,   364,   178,  -349,   276,     3,  -349,
    -349,   225,   316,   916,   230,   664,   301,  -349,   115,  -349,
     684,  -349,  -349,  -349,  -349,   449,   428,   916,   283,   110,
    -349,   -25,   156,    60,  -349,   337,   242,   273,  -349,  -349,
     342,     9,    -9,     0,  -349,  -349,   356,   289,    58,    95,
      95,   241,   241,   936,    58,  -349,   916,   936,   936,    25,
      25,   523,   157,   363,   241,   241,   302,   896,  -349,  -349,
     101,   318,  -349,  -349,   364,  -349,   916,  -349,   178,   249,
     364,  -349,   178,  -349,  -349,  -349,  -349,  -349,   182,   253,
      21,  1022,   212,   364,  -349,  -349,    43,   317,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,   332,   364,   136,   178,   741,
    -349,   364,   586,  -349,  -349,   321,  -349,   269,   551,  -349,
     170,   916,  -349,    43,   364,  -349,  -349,  -349,   277,   761,
     297,    48,   371,   283,  -349,  -349,  -349,  -349,  -349,  -349,
    -349,   117,  -349,  -349,   916,  -349,   178,   174,   281,   178,
    -349,   378,  -349,    45,  -349,   178,   364,  -349,   378,  -349,
    -349,  -349,   818,  -349,   178,  -349
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -349,  -349,  -349,  -349,  -349,   200,   -13,  -349,   374,  -349,
     367,  -349,   -19,   350,   -33,   278,  -349,   -68,   285,  -349,
     128,  -349,   344,   -31,   -35,    89,    70,  -349,  -349,    -3,
    -349,  -349,   407,  -271,  -349,  -349,  -349,  -349,  -349,  -349,
     155,  -164,  -349,  -349,   393,   218,   168,  -349,    59,  -349,
    -349,    66,    55,   -81,  -349,   346,  -349,  -160,  -349,  -349,
    -349,  -349,  -349,    76,  -349,  -349,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,   205,  -349,   282,   -58,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,   -22,   -51,
     -52,  -348
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -215
static const yytype_int16 yytable[] =
{
      26,   112,   111,   157,    49,   257,   160,    20,    26,   164,
      39,   130,   343,   217,    78,   207,   208,   209,   210,   -84,
      45,    39,    52,    54,   337,   142,    12,     1,   243,   223,
     270,   110,    48,    73,    73,    -3,   268,   169,   310,   280,
     166,   244,    59,   399,   170,   115,   112,   111,   124,     5,
     403,     6,   280,   224,   132,    48,   204,    19,   207,   208,
     209,   210,   223,   311,   -24,   362,   225,   226,   133,   134,
     135,   136,   227,   388,    58,   125,   110,   228,   331,   219,
     220,   221,   222,   230,   231,   201,    53,    13,    23,    14,
     202,    15,   383,     2,   340,   202,   215,   269,   321,   223,
      60,    88,   211,   342,   165,   255,   218,   -84,   206,   332,
     260,    79,   338,   112,   111,    25,    73,   231,   237,   238,
     239,   240,   241,   224,   389,    92,    57,    58,   263,    80,
     -24,   265,   266,   267,    35,   278,   264,   279,   137,   138,
     139,   203,   227,    29,   140,   211,    36,   228,    13,    43,
      14,   141,    15,   230,   231,    95,   180,    47,    48,    80,
     113,   223,    96,    43,   308,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   272,   224,   307,    92,   237,   238,
     239,   240,   241,  -214,   316,   273,    61,    62,   188,   116,
     117,    53,    61,    62,   227,    60,   112,   111,   120,   228,
     257,   189,   354,   190,    64,   230,   231,    95,   118,   320,
      64,   127,    43,    67,    96,    60,    68,   321,   316,    67,
      80,   128,    68,    43,   328,  -214,    13,   350,    14,   131,
      15,   353,    43,    53,   158,   223,    92,   159,  -214,   356,
    -214,    81,   239,   240,   241,   161,   349,    92,   162,    69,
     163,   167,   352,   168,    82,    69,   366,   367,   193,   224,
     173,   -60,    83,    71,    84,   361,    95,   395,    13,   174,
      14,    85,    15,    96,    86,   196,   372,    95,   365,  -170,
     189,   205,   190,   369,    96,    87,   245,   347,    88,   230,
     231,    89,   250,    90,   251,   394,   384,   254,   397,   256,
     274,    54,    91,   358,   401,   259,    81,   132,   112,   111,
     285,   275,    92,   405,    93,    94,   306,   314,   317,    82,
     319,   133,   134,   135,   136,   112,   111,    83,   402,    84,
     325,   358,   333,   334,    32,    43,    85,   336,   231,    86,
     345,   351,    95,   348,   171,    -4,   355,   132,   363,    96,
      87,   364,   373,    88,    88,   132,    89,   223,    90,    92,
     374,   133,   134,   135,   136,   385,   391,    91,    10,   133,
     134,   135,   136,   396,    24,    46,    -4,    92,    92,    93,
      94,   224,    33,   133,   134,   135,   136,   271,   200,    95,
      37,   137,   138,   139,    88,   335,    96,   140,    -4,    -4,
     227,    -4,    88,    -4,   216,   228,   126,    95,    95,   315,
     357,   230,   231,    -4,    96,    96,    -4,    13,    92,    14,
     382,    15,   223,    51,    38,   286,    92,   341,   330,   392,
     393,   137,   138,   139,   172,    50,   387,   140,   400,   137,
     138,   139,   309,   223,   344,   140,   224,     0,    95,   240,
     241,     0,   262,     0,     0,    96,    95,     0,     0,   225,
     226,     0,    13,    96,    14,   227,    15,   224,     0,     0,
     228,     0,   229,     0,     0,     0,   230,   231,     0,     0,
     225,   226,   232,     0,     0,     0,   227,     0,     0,     0,
       0,   228,     0,   229,     0,     0,     0,   230,   231,     0,
       0,     0,     0,   232,     0,     0,   233,   234,   235,   236,
       0,   237,   238,   239,   240,   241,     0,   223,     0,   175,
     176,     0,     0,     0,     0,     0,   324,   233,   234,   235,
     236,     0,   237,   238,   239,   240,   241,   177,     0,     0,
       0,   224,     0,     0,   375,   323,     0,     7,     0,   -16,
     178,   179,     0,     0,   376,     0,     0,     0,   -16,   -16,
     227,     0,   377,     0,   180,   228,     0,   -16,     0,   181,
     182,   230,   231,   378,     0,   183,     0,   184,   -16,     0,
     223,   379,     0,     0,     0,   380,   -16,   185,     0,   -16,
     -16,   186,     0,     0,     0,     0,     0,     0,   187,     0,
       0,   223,     0,     0,   224,     0,   188,   238,   239,   240,
     241,     0,   -16,     0,   -16,     0,   -16,   225,   226,   189,
       0,   190,     0,   227,     0,   224,     8,     0,   228,   -16,
     229,     0,     0,     0,   230,   231,     0,     0,   225,   226,
     232,     0,     0,     0,   227,     0,     0,     0,   197,   228,
       0,   229,     0,     0,     0,   230,   231,     0,   223,     0,
       0,   232,     0,     0,   233,   234,   235,   236,     0,   237,
     238,   239,   240,   241,     0,     0,     0,     0,   223,     0,
     370,     0,   224,     0,     0,   233,   234,   235,   236,     0,
     237,   238,   239,   240,   241,   225,   226,     0,     0,     0,
     261,   227,   224,     0,     0,     0,   228,     0,   229,     0,
       0,     0,   230,   231,     0,   225,   226,     0,   232,     0,
       0,   227,     0,     0,     0,     0,   228,     0,   229,     0,
       0,     0,   230,   231,     0,   223,     0,     0,   232,     0,
       0,     0,   233,   234,   235,   236,     0,   237,   238,   239,
     240,   241,     0,     0,     0,   223,     0,   318,     0,   224,
       0,     0,   233,   234,   235,   236,     0,   237,   238,   239,
     240,   241,   225,   226,     0,     0,     0,   322,   227,   224,
       0,     0,     0,   228,     0,   229,     0,     0,     0,   230,
     231,     0,   225,   226,     0,   232,     0,     0,   227,     0,
       0,     0,     0,   228,     0,   229,     0,     0,     0,   230,
     231,     0,   223,     0,     0,   232,     0,     0,     0,   233,
     234,   235,   236,     0,   237,   238,   239,   240,   241,     0,
       0,     0,   223,     0,   368,     0,   224,     0,     0,   233,
     234,   235,   236,     0,   237,   238,   239,   240,   241,   225,
     226,     0,     0,     0,   386,   227,   224,     0,     0,     0,
     228,     0,   229,     0,     0,     0,   230,   231,     0,   225,
     226,     0,   232,     0,     0,   227,     0,     0,     0,     0,
     228,     0,   229,     0,     0,     0,   230,   231,     0,     0,
     223,     0,   232,     0,     0,     0,   233,   234,   235,   236,
       0,   237,   238,   239,   240,   241,     0,     0,     0,     0,
     223,   404,     0,     0,   224,     0,   233,   234,   235,   236,
       0,   237,   238,   239,   240,   241,   242,   225,   226,     0,
     223,     0,     0,   227,   224,     0,     0,     0,   228,     0,
     229,     0,     0,     0,   230,   231,     0,   225,   226,     0,
     232,     0,     0,   227,   224,     0,     0,     0,   228,     0,
     229,     0,   346,     0,   230,   231,     0,   225,   226,     0,
     232,     0,     0,   227,   233,   234,   235,   236,   228,   237,
     238,   239,   240,   241,   230,   231,     0,     0,     0,     0,
       0,     0,     0,     7,   233,   234,   235,   236,     0,   237,
     238,   239,   240,   241,   -16,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,   -16,   235,   236,     0,   237,
     238,   239,   240,   241,   -16,   -16,     0,     0,     0,     0,
       0,     0,     0,   -16,     0,   -16,     0,     0,     0,     0,
       0,     0,     0,     0,   -16,     0,    61,    62,    63,     0,
       0,     0,   -16,     0,     0,   -16,   -16,   -16,   -16,     0,
     -16,     0,   -16,     0,    64,    65,     0,     0,     0,     0,
       0,    66,     8,    67,     0,   -16,    68,     0,   -16,     0,
     -16,     0,   -16,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     8,     0,     0,   -16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      70,     0,     0,     0,     0,     0,     0,    71,     0,     0,
      72
};

static const yytype_int16 yycheck[] =
{
      19,    53,    53,    84,    39,   165,    87,    10,    27,     7,
      29,    79,   283,     5,    47,    15,    16,    17,    18,    15,
      33,    40,     1,    42,    15,    83,    98,     1,    62,     4,
     194,    53,    48,    46,    47,     0,    41,    95,    35,    48,
      92,    75,    11,   391,    96,    58,    98,    98,    19,    48,
     398,     0,    48,    28,     1,    48,   124,    12,    15,    16,
      17,    18,     4,    60,    43,   336,    41,    42,    15,    16,
      17,    18,    47,    25,    99,    46,    98,    52,   103,   137,
     138,   139,   140,    58,    59,   101,    65,    66,    39,    68,
     121,    70,   363,    67,   103,   126,   129,   102,   258,     4,
      69,    48,   102,   103,   102,   163,    98,   103,   101,   273,
     168,    30,   103,   165,   165,    48,   129,    59,    93,    94,
      95,    96,    97,    28,    76,    72,    98,    99,   180,    48,
      48,   189,   190,   191,    30,   203,   188,   205,    85,    86,
      87,    30,    47,    83,    91,   102,    48,    52,    66,    48,
      68,    98,    70,    58,    59,   102,    50,    30,    48,    48,
      43,     4,   109,    48,   245,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   197,    28,   244,    72,    93,    94,
      95,    96,    97,    50,   252,   198,     8,     9,    92,    48,
      48,    65,     8,     9,    47,    69,   258,   258,   100,    52,
     370,   105,    30,   107,    26,    58,    59,   102,    81,   104,
      26,    98,    48,    35,   109,    69,    38,   387,   286,    35,
      48,     5,    38,    48,   269,    92,    66,   318,    68,    98,
      70,   322,    48,    65,    98,     4,    72,    48,   105,   330,
     107,     1,    95,    96,    97,   102,   314,    72,    35,    71,
     102,    48,   320,   102,    14,    71,   347,   348,    48,    28,
      98,   101,    22,    79,    24,   333,   102,   103,    66,    98,
      68,    31,    70,   109,    34,    98,   354,   102,   346,    39,
     105,    19,   107,   351,   109,    45,    20,   310,    48,    58,
      59,    51,    98,    53,    53,   386,   364,    48,   389,    48,
     101,   330,    62,   332,   395,    98,     1,     1,   370,   370,
      98,    48,    72,   404,    74,    75,     7,   102,    98,    14,
      29,    15,    16,    17,    18,   387,   387,    22,   396,    24,
      57,   360,     5,   101,     1,    48,    31,     5,    59,    34,
      48,   102,   102,    35,    39,    12,   103,     1,    41,   109,
      45,    29,    41,    48,    48,     1,    51,     4,    53,    72,
     101,    15,    16,    17,    18,    98,     5,    62,     4,    15,
      16,    17,    18,   102,    17,    35,    43,    72,    72,    74,
      75,    28,    49,    15,    16,    17,    18,   197,   120,   102,
      39,    85,    86,    87,    48,   277,   109,    91,    65,    66,
      47,    68,    48,    70,   129,    52,    72,   102,   102,   103,
     331,    58,    59,    80,   109,   109,    83,    66,    72,    68,
     360,    70,     4,    40,    27,   217,    72,   282,   270,   373,
     381,    85,    86,    87,    98,    39,   370,    91,   393,    85,
      86,    87,   247,     4,    98,    91,    28,    -1,   102,    96,
      97,    -1,   180,    -1,    -1,   109,   102,    -1,    -1,    41,
      42,    -1,    66,   109,    68,    47,    70,    28,    -1,    -1,
      52,    -1,    54,    -1,    -1,    -1,    58,    59,    -1,    -1,
      41,    42,    64,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    -1,     4,    -1,     5,
       6,    -1,    -1,    -1,    -1,    -1,   108,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    23,    -1,    -1,
      -1,    28,    -1,    -1,     3,   106,    -1,     1,    -1,     3,
      36,    37,    -1,    -1,    13,    -1,    -1,    -1,    12,    13,
      47,    -1,    21,    -1,    50,    52,    -1,    21,    -1,    55,
      56,    58,    59,    32,    -1,    61,    -1,    63,    32,    -1,
       4,    40,    -1,    -1,    -1,    44,    40,    73,    -1,    43,
      44,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,     4,    -1,    -1,    28,    -1,    92,    94,    95,    96,
      97,    -1,    66,    -1,    68,    -1,    70,    41,    42,   105,
      -1,   107,    -1,    47,    -1,    28,    80,    -1,    52,    83,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    41,    42,
      64,    -1,    -1,    -1,    47,    -1,    -1,    -1,   102,    52,
      -1,    54,    -1,    -1,    -1,    58,    59,    -1,     4,    -1,
      -1,    64,    -1,    -1,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,     4,    -1,
     104,    -1,    28,    -1,    -1,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    41,    42,    -1,    -1,    -1,
     103,    47,    28,    -1,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    58,    59,    -1,    41,    42,    -1,    64,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    58,    59,    -1,     4,    -1,    -1,    64,    -1,
      -1,    -1,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    -1,    -1,    -1,     4,    -1,   103,    -1,    28,
      -1,    -1,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    41,    42,    -1,    -1,    -1,   103,    47,    28,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    58,
      59,    -1,    41,    42,    -1,    64,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    58,
      59,    -1,     4,    -1,    -1,    64,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    -1,
      -1,    -1,     4,    -1,   103,    -1,    28,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    41,
      42,    -1,    -1,    -1,   103,    47,    28,    -1,    -1,    -1,
      52,    -1,    54,    -1,    -1,    -1,    58,    59,    -1,    41,
      42,    -1,    64,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    -1,    -1,    -1,    58,    59,    -1,    -1,
       4,    -1,    64,    -1,    -1,    -1,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
       4,   103,    -1,    -1,    28,    -1,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    41,    42,    -1,
       4,    -1,    -1,    47,    28,    -1,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    41,    42,    -1,
      64,    -1,    -1,    47,    28,    -1,    -1,    -1,    52,    -1,
      54,    -1,    76,    -1,    58,    59,    -1,    41,    42,    -1,
      64,    -1,    -1,    47,    88,    89,    90,    91,    52,    93,
      94,    95,    96,    97,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    90,    91,    -1,    93,
      94,    95,    96,    97,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,     8,     9,    10,    -1,
      -1,    -1,    40,    -1,    -1,    43,    44,    65,    66,    -1,
      68,    -1,    70,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    80,    35,    -1,    83,    38,    -1,    66,    -1,
      68,    -1,    70,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   111,   112,    48,     0,     1,    80,   117,
     118,   119,    98,    66,    68,    70,   120,   121,   122,    12,
     139,   140,   113,    39,   120,    48,   122,   141,   142,    83,
     151,   152,     1,    49,   114,    30,    48,    39,   142,   122,
     153,   154,   156,    48,   115,   116,   123,    30,    48,   134,
      39,   154,     1,    65,   122,   157,   163,    98,    99,    11,
      69,     8,     9,    10,    26,    27,    33,    35,    38,    71,
      72,    79,    82,   116,   124,   125,   126,   128,   124,    30,
      48,     1,    14,    22,    24,    31,    34,    45,    48,    51,
      53,    62,    72,    74,    75,   102,   109,   116,   164,   165,
     166,   167,   169,   172,   174,   175,   176,   177,   178,   185,
     198,   199,   200,    43,   158,   116,    48,    48,    81,   129,
     100,   132,   133,   134,    19,    46,   132,    98,     5,   123,
     127,    98,     1,    15,    16,    17,    18,    85,    86,    87,
      91,    98,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   163,    98,    48,
     163,   102,    35,   102,     7,   102,   200,    48,   102,   187,
     200,    39,   165,    98,    98,     5,     6,    23,    36,    37,
      50,    55,    56,    61,    63,    73,    77,    84,    92,   105,
     107,   168,   186,    48,   139,   162,    98,   102,   118,   135,
     125,   101,   133,    30,   127,    19,   101,    15,    16,    17,
      18,   102,   143,   144,   147,   124,   128,     5,    98,   187,
     187,   187,   187,     4,    28,    41,    42,    47,    52,    54,
      58,    59,    64,    88,    89,    90,    91,    93,    94,    95,
      96,    97,    98,    62,    75,    20,   179,   180,   181,   184,
      98,    53,   155,   187,    48,   187,    48,   167,   173,    98,
     187,   103,   186,   200,   200,   187,   187,   187,    41,   102,
     151,   115,   116,   139,   101,    48,   130,   131,   127,   127,
      48,   145,   148,   149,   150,    98,   155,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,     7,   187,   163,   184,
      35,    60,   182,   183,   102,   103,   187,    98,   103,    29,
     104,   167,   103,   106,   108,    57,   127,   161,   134,   159,
     156,   103,   151,     5,   101,   130,     5,    15,   103,   146,
     103,   150,   103,   143,    98,    48,    76,   116,    35,   187,
     163,   102,   187,   163,    30,   103,   163,   135,   122,   136,
     137,   187,   143,    41,    29,   187,   163,   163,   103,   187,
     104,   170,   127,    41,   101,     3,    13,    21,    32,    40,
      44,   138,   136,   143,   187,    98,   103,   173,    25,    76,
     171,     5,   161,   158,   163,   103,   102,   163,   160,   201,
     162,   163,   187,   201,   103,   163
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
#line 40 "eazy.y"
    { printf("  ÉXITO: programa -> cabecera_programa bloque_programa\n"); ;}
    break;

  case 3:
#line 41 "eazy.y"
    { printf("  ERROR: programa -> error\n");yyerrok; ;}
    break;

  case 4:
#line 46 "eazy.y"
    { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); ;}
    break;

  case 5:
#line 47 "eazy.y"
    { printf("  ERROR: cabecera_programa -> error\n");yyerrok; ;}
    break;

  case 7:
#line 52 "eazy.y"
    { printf("  lista_librerias -> lista_librerias libreria\n"); ;}
    break;

  case 8:
#line 56 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre_lista .\n"); ;}
    break;

  case 9:
#line 57 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); ;}
    break;

  case 10:
#line 58 "eazy.y"
    { printf("  ERROR: libreria -> error\n");yyerrok; ;}
    break;

  case 11:
#line 64 "eazy.y"
    { printf("  lista_nombres -> nombre\n"); ;}
    break;

  case 12:
#line 65 "eazy.y"
    { printf("  lista_nombres -> lista_nombres ; nombre\n"); ;}
    break;

  case 13:
#line 69 "eazy.y"
    { printf("  nombre -> IDENTIFICADOR\n"); ;}
    break;

  case 14:
#line 70 "eazy.y"
    { printf("  nombre -> nombre PTOS IDENTIFICADOR\n"); ;}
    break;

  case 15:
#line 74 "eazy.y"
    { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); ;}
    break;

  case 18:
#line 85 "eazy.y"
    { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; ;}
    break;

  case 104:
#line 293 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 126:
#line 343 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 187:
#line 471 "eazy.y"
    { printf("  ERROR: expresion -> error\n"); yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2133 "eazy.tab.c"
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


#line 560 "eazy.y"


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
