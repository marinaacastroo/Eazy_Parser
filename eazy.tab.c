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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   545

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNRULES -- Number of states.  */
#define YYNSTATES  434

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      85,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   105,     2,     2,     2,     2,    99,     2,
      88,    89,   102,   100,     2,   101,    86,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    87,
      95,     2,    96,   106,    98,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    92,   107,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    93,    97,    94,   104,     2,     2,     2,
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
       0,     0,     3,     6,     9,    14,    17,    18,    21,    25,
      31,    34,    36,    40,    42,    46,    52,    53,    55,    58,
      62,    65,    67,    74,    80,    81,    83,    85,    87,    88,
      91,    93,    95,    97,    99,   101,   103,   105,   107,   109,
     113,   118,   121,   124,   130,   134,   138,   146,   151,   152,
     154,   158,   160,   164,   168,   170,   174,   178,   180,   185,
     188,   190,   195,   196,   198,   200,   202,   204,   206,   208,
     209,   211,   214,   216,   220,   228,   230,   232,   234,   236,
     238,   240,   244,   248,   249,   253,   257,   259,   260,   264,
     268,   272,   274,   278,   279,   281,   285,   288,   290,   298,
     304,   307,   308,   312,   315,   323,   328,   332,   334,   340,
     344,   346,   350,   352,   354,   359,   363,   366,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   389,   392,
     395,   399,   401,   403,   405,   407,   409,   411,   413,   415,
     417,   419,   421,   423,   432,   439,   442,   443,   449,   455,
     463,   473,   482,   486,   488,   492,   495,   498,   502,   506,
     509,   514,   518,   521,   523,   525,   528,   529,   532,   536,
     540,   543,   544,   548,   552,   554,   560,   567,   569,   573,
     575,   579,   583,   587,   589,   593,   597,   601,   605,   607,
     611,   613,   617,   619,   623,   625,   627,   631,   635,   637,
     641,   645,   647,   651,   655,   659,   661,   665,   668,   671,
     674,   677,   679,   681,   683,   685,   687,   690,   695,   696,
     698,   702,   704,   705,   709,   711,   715,   719,   723,   726,
     728,   732,   735,   738,   740,   742,   744
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     109,     0,    -1,   110,   115,    -1,     1,    85,    -1,    67,
      48,    86,   111,    -1,     1,    85,    -1,    -1,   111,   112,
      -1,    49,   113,    86,    -1,    49,   114,    11,    48,    86,
      -1,     1,    85,    -1,   114,    -1,   113,    87,   114,    -1,
      48,    -1,   114,    69,    48,    -1,   116,   137,   149,   153,
     161,    -1,    -1,   117,    -1,     1,    85,    -1,    80,   118,
      39,    -1,   119,   118,    -1,   119,    -1,   120,    48,    30,
     121,   122,    86,    -1,   120,    48,    30,   121,   126,    -1,
      -1,    70,    -1,    68,    -1,    66,    -1,    -1,   121,    72,
      -1,   114,    -1,   123,    -1,   124,    -1,    26,    -1,    71,
      -1,     9,    -1,     8,    -1,    38,    -1,    35,    -1,    79,
      19,   125,    -1,    79,    46,    19,   125,    -1,   121,   122,
      -1,   121,   126,    -1,    27,    19,   123,   128,    39,    -1,
      33,   130,    39,    -1,    82,   130,    39,    -1,    10,   127,
      88,   113,    89,   133,    39,    -1,    10,   127,   133,    39,
      -1,    -1,    81,    -1,   129,    87,   128,    -1,   129,    -1,
      48,     5,   185,    -1,   131,    87,   130,    -1,   131,    -1,
     132,    30,   125,    -1,   132,    87,    48,    -1,    48,    -1,
     116,   137,   149,   134,    -1,   135,   134,    -1,   135,    -1,
     120,   136,   155,   160,    -1,    -1,    13,    -1,    21,    -1,
      44,    -1,     3,    -1,    32,    -1,    40,    -1,    -1,   139,
      -1,   138,   140,    -1,   140,    -1,    12,   138,    39,    -1,
     120,    48,    30,   122,     5,   141,    86,    -1,    17,    -1,
      18,    -1,    16,    -1,    15,    -1,   142,    -1,   146,    -1,
      88,   143,    89,    -1,    88,   144,    89,    -1,    -1,   141,
      87,   143,    -1,   145,    87,   144,    -1,   145,    -1,    -1,
      15,    41,   141,    -1,    88,   147,    89,    -1,   147,    87,
     148,    -1,   148,    -1,    48,     5,   141,    -1,    -1,   150,
      -1,    83,   151,    39,    -1,   151,   152,    -1,   152,    -1,
     120,   132,    30,   125,     5,   201,    86,    -1,   120,   132,
      30,   125,    86,    -1,   153,   154,    -1,    -1,   120,   155,
     160,    -1,     1,    85,    -1,    43,    48,    88,   156,    89,
      41,   159,    -1,    43,    48,    41,   159,    -1,   156,    87,
     157,    -1,   157,    -1,   132,    30,   125,     5,   158,    -1,
     132,    30,   125,    -1,   205,    -1,   205,    87,   158,    -1,
     125,    -1,    57,    -1,   137,   149,   153,   161,    -1,    65,
     162,    39,    -1,   162,   163,    -1,   163,    -1,   164,    -1,
     167,    -1,   170,    -1,   172,    -1,   173,    -1,   174,    -1,
     175,    -1,   176,    -1,   183,    -1,     1,    85,    -1,   199,
      86,    -1,   165,    86,    -1,   203,   166,   185,    -1,     5,
      -1,    77,    -1,    73,    -1,    56,    -1,    23,    -1,    55,
      -1,    63,    -1,    37,    -1,    36,    -1,     6,    -1,    84,
      -1,    61,    -1,    75,    88,   185,    89,   161,   168,    76,
     161,    -1,    75,    88,   185,    89,   161,   168,    -1,   168,
     169,    -1,    -1,    25,    88,   185,    89,   161,    -1,    53,
      88,   185,    89,   161,    -1,    45,   161,    53,    88,   185,
      89,    86,    -1,    62,    88,   171,    90,   185,    90,   171,
      89,   161,    -1,    62,     7,    48,    29,    88,   185,    89,
     161,    -1,   171,    87,   165,    -1,   165,    -1,    74,    48,
      86,    -1,    14,    86,    -1,    31,    86,    -1,    34,    48,
      86,    -1,    22,   185,    86,    -1,    22,    86,    -1,    51,
      35,    48,    86,    -1,    24,   161,   177,    -1,   178,   182,
      -1,   178,    -1,   182,    -1,   179,   181,    -1,    -1,   179,
     180,    -1,    35,   114,   161,    -1,    60,    35,   161,    -1,
      20,   161,    -1,    -1,    91,   185,    92,    -1,    93,   185,
      94,    -1,   186,    -1,   186,    75,   185,    76,   185,    -1,
     186,    62,     7,    48,    29,   185,    -1,   187,    -1,   186,
      59,   187,    -1,   188,    -1,   187,     4,   188,    -1,   189,
      28,   189,    -1,   189,    58,   189,    -1,   189,    -1,   190,
      95,   190,    -1,   190,    96,   190,    -1,   190,    52,   190,
      -1,   190,    47,   190,    -1,   190,    -1,   191,    97,   191,
      -1,   191,    -1,   192,    98,   192,    -1,   192,    -1,   193,
      99,   193,    -1,   193,    -1,   194,    -1,   193,    42,   194,
      -1,   193,    41,   194,    -1,   195,    -1,   194,   100,   195,
      -1,   194,   101,   195,    -1,   196,    -1,   195,   102,   196,
      -1,   195,   103,   196,    -1,   195,    54,   196,    -1,   197,
      -1,   197,    64,   196,    -1,   101,   198,    -1,   104,   198,
      -1,   105,   198,    -1,    78,   198,    -1,   198,    -1,   199,
      -1,   203,    -1,   204,    -1,   205,    -1,     1,    85,    -1,
      48,    88,   200,    89,    -1,    -1,   202,    -1,   202,    87,
     185,    -1,   185,    -1,    -1,   202,    87,   185,    -1,   204,
      -1,   203,   106,   204,    -1,   203,    50,   204,    -1,   203,
      50,   184,    -1,   203,   184,    -1,   114,    -1,    88,   185,
      89,    -1,   107,   204,    -1,    72,   204,    -1,    17,    -1,
      18,    -1,    16,    -1,    15,    -1
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
     209,   213,   214,   217,   219,   224,   225,   227,   229,   233,
     237,   238,   242,   249,   251,   254,   258,   259,   263,   264,
     274,   275,   278,   279,   283,   284,   288,   289,   293,   294,
     298,   299,   303,   304,   308,   312,   321,   322,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   338,   339,
     343,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   361,   362,   366,   367,   370,   374,   375,
     376,   377,   381,   382,   386,   387,   388,   392,   396,   397,
     401,   405,   409,   410,   411,   415,   417,   419,   422,   426,
     430,   433,   444,   445,   449,   450,   451,   454,   455,   457,
     458,   462,   463,   464,   468,   469,   470,   471,   472,   476,
     477,   481,   482,   486,   487,   491,   492,   493,   496,   497,
     498,   502,   503,   504,   505,   509,   510,   514,   515,   516,
     517,   518,   521,   522,   523,   524,   525,   528,   530,   532,
     535,   536,   539,   541,   544,   545,   546,   547,   548,   552,
     553,   554,   555,   558,   559,   560,   561
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
  "XOR_ASIG", "'\\n'", "'.'", "';'", "'('", "')'", "':'", "'['", "']'",
  "'{'", "'}'", "'<'", "'>'", "'|'", "'@'", "'&'", "'+'", "'-'", "'*'",
  "'/'", "'~'", "'!'", "'?'", "'^'", "$accept", "programa",
  "cabecera_programa", "lista_librerias", "libreria", "nombre_lista",
  "nombre", "bloque_programa", "declaraciones_tipos_opt",
  "declaraciones_tipos", "declaraciones_tipo_lista", "declaracion_tipo",
  "visibilidad_opt", "lista_ref", "tipo_basico", "tipo_escalar",
  "tipo_tabla", "especificacion_tipo", "tipo_estructurado", "ultima_opt",
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
     335,   336,   337,   338,   339,    10,    46,    59,    40,    41,
      58,    91,    93,   123,   125,    60,    62,   124,    64,    38,
      43,    45,    42,    47,   126,    33,    63,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   113,   113,   114,   114,   115,   116,   116,   116,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   121,   121,
     122,   122,   122,   123,   123,   123,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   127,   127,
     128,   128,   129,   130,   130,   131,   132,   132,   133,   134,
     134,   135,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   140,   141,   141,   141,   141,   141,
     141,   142,   142,   143,   143,   144,   144,   145,   145,   146,
     147,   147,   148,   149,   149,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   161,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   164,
     165,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   167,   168,   168,   169,   170,   170,
     170,   170,   171,   171,   172,   172,   172,   173,   174,   174,
     175,   176,   177,   177,   177,   178,   179,   179,   180,   181,
     182,   183,   184,   184,   185,   185,   185,   186,   186,   187,
     187,   188,   188,   188,   189,   189,   189,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   193,   194,   194,
     194,   195,   195,   195,   195,   196,   196,   197,   197,   197,
     197,   197,   198,   198,   198,   198,   198,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   203,   203,   203,   204,
     204,   204,   204,   205,   205,   205,   205
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     4,     2,     0,     2,     3,     5,
       2,     1,     3,     1,     3,     5,     0,     1,     2,     3,
       2,     1,     6,     5,     0,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     2,     2,     5,     3,     3,     7,     4,     0,     1,
       3,     1,     3,     3,     1,     3,     3,     1,     4,     2,
       1,     4,     0,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     1,     3,     7,     1,     1,     1,     1,     1,
       1,     3,     3,     0,     3,     3,     1,     0,     3,     3,
       3,     1,     3,     0,     1,     3,     2,     1,     7,     5,
       2,     0,     3,     2,     7,     4,     3,     1,     5,     3,
       1,     3,     1,     1,     4,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     6,     2,     0,     5,     5,     7,
       9,     8,     3,     1,     3,     2,     2,     3,     3,     2,
       4,     3,     2,     1,     1,     2,     0,     2,     3,     3,
       2,     0,     3,     3,     1,     5,     6,     1,     3,     1,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     4,     0,     1,
       3,     1,     0,     3,     1,     3,     3,     3,     2,     1,
       3,     2,     2,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     5,     0,     1,     0,    24,
       2,    69,    17,     6,    18,    27,    26,    25,     0,    21,
       0,    24,    93,    70,     0,    19,    20,     0,     0,    24,
      72,    24,   101,    94,     0,     0,     7,    28,     0,    73,
      71,     0,    24,    97,     0,    10,    13,     0,    11,     0,
       0,    57,     0,    95,    96,     0,     0,     0,   100,    15,
       8,     0,     0,     0,    36,    35,    48,    33,     0,     0,
      38,    37,    34,    29,     0,     0,    30,     0,    31,    32,
      23,     0,    28,     0,   103,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,   229,     0,   117,   118,     0,   119,   120,   121,   122,
     123,   124,   125,   126,     0,     0,   224,     0,    69,    12,
       0,    14,    49,     0,     0,     0,    54,     0,    28,     0,
       0,    22,     0,     0,     0,    56,   127,   155,     0,   236,
     235,   233,   234,     0,   159,     0,     0,     0,     0,   174,
     177,   179,   183,   188,   190,   192,   194,   195,   198,   201,
     205,   211,   212,   213,   214,   215,   166,   156,     0,     0,
     218,     0,     0,     0,     0,   232,     0,     0,     0,   231,
     115,   116,   129,   128,   131,   140,   135,   139,   138,     0,
     136,   134,   142,   137,   133,   132,   141,     0,     0,     0,
       0,   228,     0,    93,   102,     9,     0,    69,     0,     0,
      44,     0,    28,    39,    28,    45,    78,    77,    75,    76,
      83,     0,    79,    80,    41,    42,     0,    99,   216,   210,
     207,   208,   209,   158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   163,     0,   164,
     157,     0,     0,   219,     0,     0,     0,   153,     0,   154,
       0,   230,   227,   226,     0,     0,   225,   130,    28,     0,
     101,     0,    11,    93,    47,     0,     0,    51,    53,    55,
      40,    78,     0,     0,     0,     0,    86,     0,    91,    74,
     221,     0,     0,   178,     0,     0,   180,   181,   182,   187,
     186,   184,   185,   189,   191,   197,   196,   193,   199,   200,
     204,   202,   203,   206,   170,   162,     0,     0,   167,   165,
       0,   217,     0,   160,     0,     0,     0,     0,     0,   172,
     173,   113,   112,   105,     0,     0,   107,     0,     0,    24,
       0,    43,     0,     0,     0,    83,    81,    82,    87,     0,
      89,    98,     0,     0,     0,     0,     0,     0,   223,   148,
       0,   152,     0,   146,    28,     0,     0,   114,     0,    62,
      58,    24,    52,    50,    88,    92,    84,     0,    85,    90,
     220,     0,   175,   168,   169,     0,     0,     0,   144,   109,
     106,    28,    46,    66,    63,    64,    67,    68,    65,     0,
      59,   176,   149,     0,     0,     0,     0,   145,     0,   104,
      69,   151,     0,     0,   143,   108,   110,    61,   150,     0,
       0,     0,   111,   147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    24,    36,    47,   101,    10,   207,    12,
      18,    19,    20,   133,    77,    78,    79,   342,    80,   123,
     286,   287,   125,   126,   127,   208,   380,   381,   409,   203,
      29,    23,    30,   293,   222,   294,   295,   296,   223,   297,
     298,    32,    33,    42,    43,    44,    58,   118,   345,   346,
     425,   343,   204,    59,   102,   103,   104,   105,   200,   106,
     398,   417,   107,   268,   108,   109,   110,   111,   112,   256,
     257,   258,   328,   329,   259,   113,   201,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   262,   301,   263,   163,   164,   165
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -288
static const yytype_int16 yypact[] =
{
      45,   -56,    20,    82,   385,    92,    31,  -288,    43,   220,
    -288,   135,  -288,  -288,  -288,  -288,  -288,  -288,   114,   118,
     110,   220,    85,  -288,   129,  -288,  -288,   161,   117,   200,
    -288,   220,  -288,  -288,   113,   165,  -288,  -288,   196,  -288,
    -288,   171,   273,  -288,    50,  -288,  -288,   119,    70,   463,
     166,  -288,    61,  -288,  -288,   153,    26,   198,  -288,  -288,
    -288,   165,   199,   202,  -288,  -288,   175,  -288,   241,   171,
    -288,  -288,  -288,  -288,    86,   171,   195,   211,  -288,  -288,
    -288,   277,  -288,   251,  -288,   224,   228,   139,   250,   243,
     283,   250,   244,   300,   249,     7,    39,   292,   258,   302,
      39,   195,   128,  -288,  -288,   261,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,   263,   328,  -288,   305,   135,   195,
     269,  -288,  -288,   356,    35,   319,   274,    77,  -288,   343,
     324,  -288,     2,   463,    10,  -288,  -288,  -288,   281,  -288,
    -288,  -288,  -288,    38,  -288,    38,    38,    38,   289,   121,
     363,  -288,    14,   163,   279,   284,    25,   -38,   -18,  -288,
     315,  -288,  -288,   127,   143,  -288,   361,  -288,   299,   334,
     311,   354,   302,   360,    39,  -288,   318,   302,   321,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,   -13,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,   302,   302,    39,
     302,  -288,   -19,    85,  -288,  -288,   165,   135,   372,   365,
    -288,   171,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
      16,   329,  -288,  -288,  -288,  -288,   206,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,   302,   407,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   250,  -288,   361,    23,  -288,
    -288,   335,   327,   330,   339,   338,   402,  -288,    73,  -288,
     344,  -288,  -288,  -288,   340,   341,  -288,  -288,   380,   171,
    -288,    48,   195,    85,  -288,   435,   403,   358,  -288,  -288,
    -288,   400,   438,   359,   367,   369,   375,   164,  -288,  -288,
    -288,   362,   376,   363,   399,   378,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,   -38,   -38,   189,   -18,   -18,
    -288,  -288,  -288,  -288,  -288,  -288,   165,   424,  -288,  -288,
     302,  -288,   302,  -288,   250,   364,    39,   302,   250,  -288,
    -288,  -288,  -288,  -288,    83,   176,  -288,    50,   417,   220,
     302,  -288,   365,     2,     2,     2,  -288,  -288,   449,   418,
    -288,  -288,   302,   440,   302,   120,   250,   381,  -288,  -288,
     302,  -288,   377,  -288,  -288,   171,   433,  -288,   436,   264,
    -288,   286,  -288,  -288,  -288,  -288,  -288,   400,  -288,  -288,
     389,   302,  -288,  -288,  -288,   391,   390,    39,    13,   473,
    -288,   380,  -288,  -288,  -288,  -288,  -288,  -288,  -288,   198,
    -288,  -288,  -288,   250,   187,   392,   250,  -288,   306,  -288,
     135,  -288,   250,   302,  -288,  -288,   394,  -288,  -288,   393,
     306,   250,  -288,  -288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,  -288,  -288,  -288,   278,   -24,  -288,   482,  -288,
     469,  -288,   -21,   454,   -34,   368,  -288,   -76,   366,  -288,
     142,  -288,   -62,  -288,   -37,   145,   122,  -288,  -288,     1,
    -288,  -288,   466,  -125,  -288,   147,   146,  -288,  -288,  -288,
     148,  -175,  -288,  -288,   464,   225,  -288,    99,  -288,   134,
      80,   111,    93,   -86,  -288,   412,  -288,  -165,  -288,  -288,
    -288,  -288,  -288,   123,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,   259,  -288,   326,   -75,  -288,   285,
     280,    53,   130,   282,   276,   270,    54,    56,   141,  -288,
     126,   -26,  -288,  -288,   296,   -53,   -55,  -287
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -225
static const yytype_int16 yytable[] =
{
      28,   116,   166,   115,    52,   169,   134,   221,    28,   267,
      41,    48,    22,   130,   173,   226,    81,   216,   217,   218,
     219,    41,   278,    57,   178,    76,    76,    85,   280,     5,
     114,   291,   217,   218,   219,    46,   251,   119,   415,   138,
      86,   175,   238,    64,    65,   179,     1,   116,    87,   115,
      88,    55,   213,   139,   140,   141,   142,    89,   326,    96,
      90,    67,   249,   250,   292,  -171,   246,   247,     6,   279,
      70,    91,   239,    71,    92,    99,   114,    93,   197,    94,
     198,    62,     7,   327,   252,   253,    92,    46,    95,   416,
     220,    82,    -3,   -24,   100,   174,   227,   265,    96,   224,
      97,    98,   270,   -87,   220,   128,    72,   212,   349,    76,
      96,    96,     2,   374,    99,    56,    15,    13,    16,   116,
      17,   115,   274,   275,   248,   277,    99,    99,    14,    85,
      34,   426,   129,   100,   273,    61,   289,   348,   290,    63,
     138,    -4,    86,   426,   276,   100,   100,    21,    83,   288,
      87,   300,    88,    25,   139,   140,   141,   142,    27,    89,
     336,   305,    90,   337,    83,    38,   -24,   180,    31,   324,
      83,   371,    -4,    91,    64,    65,    92,   189,    35,    93,
     234,    94,   282,   235,    15,    56,    16,    92,    17,    63,
      95,    37,    67,  -224,    -4,    -4,   236,    -4,    45,    -4,
      96,    70,    97,    98,    71,    60,    61,   138,   283,    -4,
     240,    96,    -4,    46,    46,   241,    99,   143,   197,    51,
     198,   139,   140,   141,   142,   144,    50,    99,   384,   385,
     246,   247,   267,   199,  -224,   100,  -224,    72,    84,    39,
     145,   117,   344,   146,   147,    74,   100,   120,   369,  -224,
     121,   359,   373,   360,    92,   367,   122,   368,   242,   243,
     124,   377,   372,   375,    63,   376,    15,   403,    16,   229,
      17,   230,   231,   232,   336,   382,   422,   404,    96,   393,
     394,   116,   132,   115,   143,   405,    15,   390,    16,   392,
      17,   307,   308,  -222,    99,   396,   406,   131,   399,   135,
     315,   316,   365,   138,   407,   318,   319,   145,   408,   136,
     146,   147,    53,   100,   137,    56,   411,   139,   140,   141,
     142,   139,   140,   141,   142,   -60,    57,   421,   379,   167,
     424,   168,   170,   184,   185,   171,   428,   172,   344,    15,
     176,    16,   116,    17,   115,   433,   177,   182,   429,   183,
      92,   186,    15,   202,    16,   205,    17,     8,   210,   -16,
     379,   211,   214,   215,   187,   188,   228,   237,   -16,   -16,
     309,   310,   311,   312,    96,   233,   244,   -16,   189,   254,
     143,   255,   245,   190,   191,   260,     8,   261,   -16,   192,
      99,   193,   320,   321,   322,   323,   -16,   -16,  -222,   -16,
     -16,   194,   264,   145,   269,   195,   146,   147,   266,   100,
     271,   284,   196,   285,   304,   299,   331,   332,     8,   197,
     -16,   198,   -16,   330,   -16,   333,   -16,   334,   -16,   -16,
     -16,   335,   339,   338,   199,   340,     9,   341,   -16,   -16,
     350,   353,   351,   354,   206,   352,   355,   363,   361,   -16,
     -16,   -16,   370,   -16,   364,   -16,   356,   -16,   357,   366,
     -16,   -16,   358,   362,   387,     9,   292,   397,   -16,   391,
     395,    64,    65,    66,   401,   402,  -223,   412,   418,   413,
     423,   430,   431,   -16,   281,   -16,    11,   -16,    26,    67,
      68,    49,   209,   378,   383,    40,    69,     9,    70,   225,
     -16,    71,   386,   410,   388,   347,    54,   389,   420,   400,
     432,    46,   419,   427,   181,   272,   325,   306,   317,   303,
     414,   314,   302,     0,     0,     0,   313,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,     0,     0,
       0,     0,    74,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
      21,    56,    88,    56,    41,    91,    82,   132,    29,   174,
      31,    35,    11,    75,     7,     5,    50,    15,    16,    17,
      18,    42,    41,    44,    99,    49,    50,     1,   203,    85,
      56,    15,    16,    17,    18,    48,    54,    61,    25,     1,
      14,    96,    28,     8,     9,   100,     1,   102,    22,   102,
      24,     1,   128,    15,    16,    17,    18,    31,    35,    72,
      34,    26,   100,   101,    48,    39,    41,    42,    48,    88,
      35,    45,    58,    38,    48,    88,   102,    51,    91,    53,
      93,    11,     0,    60,   102,   103,    48,    48,    62,    76,
      88,    30,     0,    43,   107,    88,    86,   172,    72,   133,
      74,    75,   177,    87,    88,    19,    71,    30,   283,   133,
      72,    72,    67,    30,    88,    65,    66,    86,    68,   174,
      70,   174,   197,   198,    99,   200,    88,    88,    85,     1,
       1,   418,    46,   107,   189,    87,   212,    89,   214,    69,
       1,    12,    14,   430,   199,   107,   107,    12,    87,   211,
      22,   226,    24,    39,    15,    16,    17,    18,    48,    31,
      87,   236,    34,    90,    87,    48,    48,    39,    83,   255,
      87,   336,    43,    45,     8,     9,    48,    50,    49,    51,
      59,    53,   206,    62,    66,    65,    68,    48,    70,    69,
      62,    30,    26,    50,    65,    66,    75,    68,    85,    70,
      72,    35,    74,    75,    38,    86,    87,     1,   207,    80,
      47,    72,    83,    48,    48,    52,    88,    78,    91,    48,
      93,    15,    16,    17,    18,    86,    30,    88,   353,   354,
      41,    42,   397,   106,    91,   107,    93,    71,    85,    39,
     101,    43,   279,   104,   105,    79,   107,    48,   334,   106,
      48,    87,   338,    89,    48,   330,    81,   332,    95,    96,
      19,   347,   337,    87,    69,    89,    66,     3,    68,   143,
      70,   145,   146,   147,    87,   350,    89,    13,    72,   365,
     366,   336,     5,   336,    78,    21,    66,   362,    68,   364,
      70,   238,   239,    87,    88,   370,    32,    86,   374,    48,
     246,   247,   326,     1,    40,   249,   250,   101,    44,    85,
     104,   105,    39,   107,    86,    65,   391,    15,    16,    17,
      18,    15,    16,    17,    18,    39,   347,   413,   349,    86,
     416,    48,    88,     5,     6,    35,   422,    88,   375,    66,
      48,    68,   397,    70,   397,   431,    88,    86,   423,    86,
      48,    23,    66,    48,    68,    86,    70,     1,    39,     3,
     381,    87,    19,    39,    36,    37,    85,     4,    12,    13,
     240,   241,   242,   243,    72,    86,    97,    21,    50,    64,
      78,    20,    98,    55,    56,    86,     1,    53,    32,    61,
      88,    63,   251,   252,   253,   254,    40,    12,    87,    43,
      44,    73,    48,   101,    86,    77,   104,   105,    48,   107,
      89,    39,    84,    48,     7,    86,    89,    87,     1,    91,
       3,    93,    66,    88,    68,    86,    70,    89,    43,    12,
      13,    29,    92,    89,   106,    94,    80,    57,    21,    83,
       5,    41,    39,     5,    88,    87,    87,    48,    86,    32,
      65,    66,    88,    68,    76,    70,    89,    40,    89,    35,
      43,    44,    87,    87,    15,    80,    48,    90,    83,    29,
      89,     8,     9,    10,    41,    39,    87,    86,     5,    89,
      88,    87,    89,    66,   206,    68,     4,    70,    19,    26,
      27,    37,   124,   348,   352,    29,    33,    80,    35,   133,
      83,    38,   355,   381,   358,   280,    42,   359,   409,   375,
     430,    48,   401,   420,   102,   189,   257,   237,   248,   234,
     397,   245,   226,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   109,   110,    85,    48,     0,     1,    80,
     115,   116,   117,    86,    85,    66,    68,    70,   118,   119,
     120,    12,   137,   139,   111,    39,   118,    48,   120,   138,
     140,    83,   149,   150,     1,    49,   112,    30,    48,    39,
     140,   120,   151,   152,   153,    85,    48,   113,   114,   121,
      30,    48,   132,    39,   152,     1,    65,   120,   154,   161,
      86,    87,    11,    69,     8,     9,    10,    26,    27,    33,
      35,    38,    71,    72,    79,    82,   114,   122,   123,   124,
     126,   122,    30,    87,    85,     1,    14,    22,    24,    31,
      34,    45,    48,    51,    53,    62,    72,    74,    75,    88,
     107,   114,   162,   163,   164,   165,   167,   170,   172,   173,
     174,   175,   176,   183,   199,   203,   204,    43,   155,   114,
      48,    48,    81,   127,    19,   130,   131,   132,    19,    46,
     130,    86,     5,   121,   125,    48,    85,    86,     1,    15,
      16,    17,    18,    78,    86,   101,   104,   105,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   203,   204,   205,   161,    86,    48,   161,
      88,    35,    88,     7,    88,   204,    48,    88,   185,   204,
      39,   163,    86,    86,     5,     6,    23,    36,    37,    50,
      55,    56,    61,    63,    73,    77,    84,    91,    93,   106,
     166,   184,    48,   137,   160,    86,    88,   116,   133,   123,
      39,    87,    30,   125,    19,    39,    15,    16,    17,    18,
      88,   141,   142,   146,   122,   126,     5,    86,    85,   198,
     198,   198,   198,    86,    59,    62,    75,     4,    28,    58,
      47,    52,    95,    96,    97,    98,    41,    42,    99,   100,
     101,    54,   102,   103,    64,    20,   177,   178,   179,   182,
      86,    53,   200,   202,    48,   185,    48,   165,   171,    86,
     185,    89,   184,   204,   185,   185,   204,   185,    41,    88,
     149,   113,   114,   137,    39,    48,   128,   129,   130,   125,
     125,    15,    48,   141,   143,   144,   145,   147,   148,    86,
     185,   201,   202,   187,     7,   185,   188,   189,   189,   190,
     190,   190,   190,   191,   192,   194,   194,   193,   195,   195,
     196,   196,   196,   196,   161,   182,    35,    60,   180,   181,
      88,    89,    87,    86,    89,    29,    87,    90,    89,    92,
      94,    57,   125,   159,   132,   156,   157,   153,    89,   149,
       5,    39,    87,    41,     5,    87,    89,    89,    87,    87,
      89,    86,    87,    48,    76,   114,    35,   185,   185,   161,
      88,   165,   185,   161,    30,    87,    89,   161,   133,   120,
     134,   135,   185,   128,   141,   141,   143,    15,   144,   148,
     185,    29,   185,   161,   161,    89,   185,    90,   168,   125,
     157,    41,    39,     3,    13,    21,    32,    40,    44,   136,
     134,   185,    86,    89,   171,    25,    76,   169,     5,   159,
     155,   161,    89,    88,   161,   158,   205,   160,   161,   185,
      87,    89,   158,   161
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

  case 17:
#line 71 "eazy.y"
    { printf("  declaraciones_tipos_opt -> declaraciones_tipos\n");yyerrok; ;}
    break;

  case 18:
#line 72 "eazy.y"
    { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; ;}
    break;

  case 19:
#line 75 "eazy.y"
    { printf("  declaraciones_tipos -> TIPOS declaraciones_tipo_lista FIN\n");yyerrok; ;}
    break;

  case 20:
#line 79 "eazy.y"
    { printf("  declaraciones_tipo_lista -> declaracion_tipo declaraciones_tipo_lista\n"); ;}
    break;

  case 21:
#line 80 "eazy.y"
    { printf("  declaraciones_tipo_lista -> declaracion_tipo\n"); ;}
    break;

  case 22:
#line 84 "eazy.y"
    { printf("  declaracion_tipo -> visibilidad_opt IDENTIFICADOR ES lista_ref tipo_basico .\n"); ;}
    break;

  case 23:
#line 85 "eazy.y"
    { printf("  declaracion_tipo -> visibilidad_opt IDENTIFICADOR ES lista_ref tipo_estructurado\n"); ;}
    break;

  case 25:
#line 91 "eazy.y"
    { printf("  visibilidad_opt -> PUBLICO\n"); ;}
    break;

  case 26:
#line 92 "eazy.y"
    { printf("  visibilidad_opt -> PROTEGIDO\n"); ;}
    break;

  case 27:
#line 93 "eazy.y"
    { printf("  visibilidad_opt -> PRIVADO\n"); ;}
    break;

  case 29:
#line 98 "eazy.y"
    { printf("  lista_ref -> lista_ref REF\n"); ;}
    break;

  case 30:
#line 102 "eazy.y"
    { printf("  tipo_basico -> nombre\n"); ;}
    break;

  case 31:
#line 103 "eazy.y"
    { printf("  tipo_basico -> tipo_escalar\n"); ;}
    break;

  case 32:
#line 104 "eazy.y"
    { printf("  tipo_basico -> tipo_tabla\n"); ;}
    break;

  case 33:
#line 107 "eazy.y"
    { printf("  tipo_escalar -> ENTERO\n"); ;}
    break;

  case 34:
#line 108 "eazy.y"
    { printf("  tipo_escalar -> REAL\n"); ;}
    break;

  case 35:
#line 109 "eazy.y"
    { printf("  tipo_escalar -> CARACTER\n"); ;}
    break;

  case 36:
#line 110 "eazy.y"
    { printf("  tipo_escalar -> CADENA\n"); ;}
    break;

  case 37:
#line 111 "eazy.y"
    { printf("  tipo_escalar -> FICHERO\n"); ;}
    break;

  case 38:
#line 112 "eazy.y"
    { printf("  tipo_escalar -> EXCEPCION\n"); ;}
    break;

  case 39:
#line 116 "eazy.y"
    { printf("  tipo_tabla -> TABLA DE especificacion_tipo\n"); ;}
    break;

  case 40:
#line 117 "eazy.y"
    { printf("  tipo_tabla -> TABLA HASH DE especificacion_tipo\n"); ;}
    break;

  case 41:
#line 121 "eazy.y"
    { printf("  especificacion_tipo -> lista_ref tipo_basico\n"); ;}
    break;

  case 42:
#line 122 "eazy.y"
    { printf("  especificacion_tipo -> lista_ref tipo_estructurado\n"); ;}
    break;

  case 43:
#line 126 "eazy.y"
    { printf("  tipo_estructurado -> ENUMERACION DE tipo_escalar elemento_num_lista FIN\n"); ;}
    break;

  case 44:
#line 127 "eazy.y"
    { printf("  tipo_estructurado -> ESTRUCTURA linea_campo_lista FIN\n"); ;}
    break;

  case 45:
#line 128 "eazy.y"
    { printf("  tipo_estructurado -> UNION linea_campo_lista FIN\n"); ;}
    break;

  case 46:
#line 129 "eazy.y"
    { printf("  tipo_estructurado -> CLASE ultima_opt '(' nombre_lista ')' componentes FIN\n"); ;}
    break;

  case 47:
#line 130 "eazy.y"
    { printf("  tipo_estructurado -> CLASE ultima_opt componentes FIN\n"); ;}
    break;

  case 49:
#line 135 "eazy.y"
    { printf("  ultima_opt -> ULTIMA\n"); ;}
    break;

  case 50:
#line 138 "eazy.y"
    { printf("  elemento_num_lista -> elemento_enum ; elemento_num_lista\n"); ;}
    break;

  case 51:
#line 139 "eazy.y"
    { printf("  elemento_num_lista -> elemento_enum\n"); ;}
    break;

  case 52:
#line 142 "eazy.y"
    { printf("  elemento_enum -> IDENTIFICADOR ASIG expresion\n"); ;}
    break;

  case 53:
#line 146 "eazy.y"
    { printf("  linea_campo_lista -> linea_campo ; linea_campo_lista\n"); ;}
    break;

  case 54:
#line 147 "eazy.y"
    { printf("  linea_campo_lista -> linea_campo\n"); ;}
    break;

  case 55:
#line 151 "eazy.y"
    { printf("  linea_campo -> identificador_lista ES especificacion_tipo\n"); ;}
    break;

  case 56:
#line 156 "eazy.y"
    { printf("  identificador_lista -> identificador_lista ; IDENTIFICADOR\n"); ;}
    break;

  case 57:
#line 157 "eazy.y"
    { printf("  identificador_lista -> IDENTIFICADOR\n"); ;}
    break;

  case 58:
#line 162 "eazy.y"
    { printf("  componentes -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt declaracion_metodo_lista\n"); ;}
    break;

  case 59:
#line 166 "eazy.y"
    { printf("  declaracion_metodo_lista -> declaracion_metodo declaracion_metodo_lista\n"); ;}
    break;

  case 60:
#line 167 "eazy.y"
    { printf("  declaracion_metodo_lista -> declaracion_metodo\n"); ;}
    break;

  case 61:
#line 170 "eazy.y"
    { printf("  declaracion_metodo -> visibilidad_opt modificador_opt firma_funcion cuerpo_funcion\n"); ;}
    break;

  case 63:
#line 175 "eazy.y"
    { printf("  modificador_opt -> CONSTRUCTOR\n"); ;}
    break;

  case 64:
#line 176 "eazy.y"
    { printf("  modificador_opt -> DESTRUCTOR\n"); ;}
    break;

  case 65:
#line 177 "eazy.y"
    { printf("  modificador_opt -> GENERICO\n"); ;}
    break;

  case 66:
#line 178 "eazy.y"
    { printf("  modificador_opt -> ABSTRACTO\n"); ;}
    break;

  case 67:
#line 179 "eazy.y"
    { printf("  modificador_opt -> ESPECIFICO\n"); ;}
    break;

  case 68:
#line 180 "eazy.y"
    { printf("  modificador_opt -> FINAL\n"); ;}
    break;

  case 70:
#line 188 "eazy.y"
    { printf("  declaraciones_constantes_opt -> declaraciones_constantes\n"); ;}
    break;

  case 71:
#line 191 "eazy.y"
    { printf("  declaraciones_constantes_lista -> declaraciones_constantes_lista declaracion_constantes\n"); ;}
    break;

  case 72:
#line 192 "eazy.y"
    { printf("  declaraciones_constantes_lista -> declaracion_constantes\n"); ;}
    break;

  case 73:
#line 195 "eazy.y"
    { printf("  declaraciones_constantes -> CONSTANTES declaraciones_constantes_lista FIN\n"); ;}
    break;

  case 74:
#line 200 "eazy.y"
    { printf("  declaracion_constantes -> visibilidad_opt IDENTIFICADOR ES tipo_basico ASIG constante .\n"); ;}
    break;

  case 103:
#line 279 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 127:
#line 335 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 216:
#line 525 "eazy.y"
    { printf("ERROR: expresión_primitiva -> error\n"); yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2294 "eazy.tab.c"
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
