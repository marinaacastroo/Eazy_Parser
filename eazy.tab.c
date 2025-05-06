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
#define YYLAST   518

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  230
/* YYNRULES -- Number of states.  */
#define YYNSTATES  405

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
     102,   103,    88,    90,   109,    91,    98,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   104,    99,
      96,     2,    97,    92,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   105,     2,   106,   110,     2,     2,     2,     2,     2,
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
     202,   204,   207,   209,   213,   221,   223,   225,   227,   229,
     231,   233,   237,   241,   244,   245,   249,   253,   256,   258,
     261,   262,   266,   267,   269,   273,   276,   278,   286,   292,
     295,   296,   300,   302,   310,   315,   321,   325,   328,   330,
     332,   334,   339,   343,   346,   348,   350,   352,   354,   356,
     358,   360,   362,   364,   366,   368,   371,   374,   378,   380,
     382,   384,   386,   388,   390,   392,   394,   396,   398,   400,
     402,   411,   418,   421,   422,   428,   434,   442,   452,   461,
     464,   466,   470,   473,   476,   480,   484,   487,   492,   496,
     499,   501,   503,   506,   507,   510,   514,   518,   521,   522,
     526,   530,   532,   534,   540,   542,   546,   550,   552,   556,
     560,   564,   566,   570,   574,   578,   582,   586,   590,   592,
     596,   600,   604,   608,   610,   614,   618,   622,   624,   626,
     630,   633,   636,   639,   642,   644,   646,   648,   650,   652,
     654,   659,   660,   662,   664,   665,   667,   669,   673,   675,
     679,   683,   687,   690,   692,   696,   699,   702,   704,   706,
     708
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     112,     0,    -1,   113,   118,    -1,     1,    -1,    67,    48,
      98,   114,    -1,     1,    -1,    -1,   114,   115,    -1,    49,
     116,    98,    -1,    49,   117,    11,    48,    98,    -1,     1,
      -1,   117,    -1,   116,    99,   117,    -1,    48,    -1,   117,
      69,    48,    -1,   119,   140,   152,   156,   163,    -1,    -1,
     120,    -1,     1,    -1,    80,   121,    39,    -1,   122,   121,
      -1,   122,    -1,   123,    48,    30,   124,   125,    98,    -1,
     123,    48,    30,   124,   129,    -1,    -1,    70,    -1,    68,
      -1,    66,    -1,    -1,   124,    72,    -1,   117,    -1,   126,
      -1,   127,    -1,    26,    -1,    71,    -1,     9,    -1,     8,
      -1,    38,    -1,    35,    -1,    79,    19,   128,    -1,    79,
      46,    19,   128,    -1,   124,   125,    -1,   124,   129,    -1,
      27,   100,   126,   131,   101,    -1,    33,   133,   101,    -1,
      82,   133,   101,    -1,    10,   130,   102,   116,   103,   136,
     101,    -1,    10,   130,   136,   101,    -1,    -1,    81,    -1,
     132,   131,    -1,   132,    -1,    48,     5,   187,    -1,   133,
     134,    -1,   134,    -1,   135,    30,   128,    -1,   135,    48,
      -1,    48,    -1,   119,   140,   152,   137,    -1,   138,   137,
      -1,   138,    -1,   123,   139,   158,   162,    -1,    -1,    13,
      -1,    21,    -1,    44,    -1,     3,    -1,    32,    -1,    40,
      -1,    -1,   142,    -1,   141,   143,    -1,   143,    -1,    12,
     141,    39,    -1,   123,    48,    30,   125,     5,   144,    98,
      -1,    17,    -1,    18,    -1,    16,    -1,    15,    -1,   145,
      -1,   148,    -1,   102,   150,   103,    -1,   102,   146,   103,
      -1,   146,   147,    -1,    -1,    15,    41,   144,    -1,   102,
     149,   103,    -1,   149,   151,    -1,   151,    -1,   150,   144,
      -1,    -1,    48,     5,   144,    -1,    -1,   153,    -1,    83,
     154,    39,    -1,   154,   155,    -1,   155,    -1,   123,   135,
      30,   128,     5,   200,    98,    -1,   123,   135,    30,   128,
      98,    -1,   156,   157,    -1,    -1,   123,   158,   162,    -1,
       1,    -1,    43,    48,   102,   159,   103,    41,   161,    -1,
      43,    48,    41,   161,    -1,   135,    30,   128,     5,   160,
      -1,   135,    30,   128,    -1,   160,   205,    -1,   205,    -1,
     128,    -1,    57,    -1,   140,   152,   156,   163,    -1,    65,
     164,    39,    -1,   164,   165,    -1,   165,    -1,   166,    -1,
     169,    -1,   172,    -1,   174,    -1,   175,    -1,   176,    -1,
     177,    -1,   178,    -1,   185,    -1,     1,    -1,   198,    98,
      -1,   167,    98,    -1,   203,   168,   187,    -1,     5,    -1,
      77,    -1,    73,    -1,    56,    -1,    23,    -1,    55,    -1,
      63,    -1,    37,    -1,    36,    -1,     6,    -1,    84,    -1,
      61,    -1,    75,   102,   187,   103,   163,   170,    76,   163,
      -1,    75,   102,   187,   103,   163,   170,    -1,   170,   171,
      -1,    -1,    25,   102,   187,   103,   163,    -1,    53,   102,
     187,   103,   163,    -1,    45,   163,    53,   102,   187,   103,
      98,    -1,    62,   102,   173,   104,   187,   104,   173,   103,
     163,    -1,    62,     7,    48,    29,   102,   187,   103,   163,
      -1,   173,   167,    -1,   167,    -1,    74,    48,    98,    -1,
      14,    98,    -1,    31,    98,    -1,    34,    48,    98,    -1,
      22,   187,    98,    -1,    22,    98,    -1,    51,    35,    48,
      98,    -1,    24,   163,   179,    -1,   180,   184,    -1,   180,
      -1,   184,    -1,   181,   183,    -1,    -1,   181,   182,    -1,
      35,   117,   163,    -1,    60,    35,   163,    -1,    20,   163,
      -1,    -1,   105,   187,   106,    -1,   107,   187,   108,    -1,
     188,    -1,   189,    -1,   189,    75,   187,    76,   187,    -1,
     190,    -1,   190,     4,   189,    -1,   190,    59,   189,    -1,
     191,    -1,   191,    93,   191,    -1,   191,    94,   191,    -1,
     191,    95,   191,    -1,   192,    -1,   192,    96,   192,    -1,
     192,    97,   192,    -1,   192,    52,   192,    -1,   192,    47,
     192,    -1,   192,    28,   192,    -1,   192,    58,   192,    -1,
     193,    -1,   192,    42,   193,    -1,   192,    41,   193,    -1,
     193,    90,   194,    -1,   193,    91,   194,    -1,   194,    -1,
     194,    88,   195,    -1,   194,    89,   195,    -1,   194,    54,
     195,    -1,   195,    -1,   196,    -1,   196,    64,   195,    -1,
      91,   196,    -1,    85,   196,    -1,    86,   196,    -1,    87,
     196,    -1,   197,    -1,   198,    -1,   203,    -1,   204,    -1,
     205,    -1,     1,    -1,    48,   102,   199,   103,    -1,    -1,
     202,    -1,   201,    -1,    -1,   202,    -1,   187,    -1,   202,
     109,   187,    -1,   204,    -1,   203,    92,   204,    -1,   203,
      50,   204,    -1,   203,    50,   186,    -1,   203,   186,    -1,
     117,    -1,   102,   187,   103,    -1,   110,   204,    -1,    72,
     204,    -1,    17,    -1,    18,    -1,    16,    -1,    15,    -1
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
     201,   204,   205,   208,   213,   217,   218,   219,   220,   221,
     222,   226,   227,   231,   232,   235,   239,   243,   244,   247,
     248,   253,   260,   262,   265,   269,   270,   274,   275,   285,
     286,   289,   290,   294,   295,   299,   300,   304,   305,   308,
     309,   313,   317,   326,   327,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   343,   344,   348,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     366,   367,   371,   372,   375,   379,   380,   381,   382,   386,
     387,   391,   392,   393,   397,   401,   402,   406,   410,   414,
     415,   416,   420,   422,   424,   427,   431,   435,   438,   449,
     450,   453,   456,   457,   460,   461,   462,   465,   466,   467,
     468,   471,   472,   473,   474,   475,   476,   477,   480,   481,
     482,   486,   487,   488,   491,   492,   493,   494,   497,   498,
     501,   502,   503,   504,   505,   508,   509,   510,   511,   512,
     515,   517,   519,   522,   524,   526,   529,   530,   533,   534,
     535,   536,   537,   540,   541,   542,   543,   546,   547,   548,
     549
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
  "')'", "':'", "'['", "']'", "'{'", "'}'", "','", "'^'", "$accept",
  "programa", "cabecera_programa", "lista_librerias", "libreria",
  "nombre_lista", "nombre", "bloque_programa", "declaraciones_tipos_opt",
  "declaraciones_tipos", "declaraciones_tipo_lista", "declaracion_tipo",
  "visibilidad_opt", "lista_ref", "tipo_basico", "tipo_escalar",
  "tipo_tabla", "especificacion_tipo", "tipo_estructurado", "ultima_opt",
  "elemento_num_lista", "elemento_enum", "linea_campo_lista",
  "linea_campo", "identificador_lista", "componentes",
  "declaracion_metodo_lista", "declaracion_metodo", "modificador_opt",
  "declaraciones_constantes_opt", "declaraciones_constantes_lista",
  "declaraciones_constantes", "declaracion_constantes", "constante",
  "constante_tabla", "lista_elemento_hash", "elemento_hash",
  "constante_estructurada", "campo_constante_lista", "lista_constante",
  "campo_constante", "declaraciones_variables_opt",
  "declaraciones_variables", "declaracion_variables_lista",
  "declaracion_variables", "lista_declaracion_funcion",
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
  "indice", "expresion", "expresion_condicional", "expresion_logica",
  "expresion_logica_binaria", "expresion_comparacion",
  "expresion_desplazamiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_potencia", "expresion_unaria",
  "expresion_primitiva", "expresion_funcional", "opt_expresion_lista",
  "expresion_lista", "lista_expresiones_opt", "lista_expresiones",
  "expresion_indexada", "expresion_basica", "expresion_constante", 0
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
     100,   102,    40,    41,    58,    91,    93,   123,   125,    44,
      94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   116,   116,   117,   117,   118,   119,   119,   119,   120,
     121,   121,   122,   122,   123,   123,   123,   123,   124,   124,
     125,   125,   125,   126,   126,   126,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   132,   133,   133,   134,   135,   135,   136,   137,
     137,   138,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   141,   141,   142,   143,   144,   144,   144,   144,   144,
     144,   145,   145,   146,   146,   147,   148,   149,   149,   150,
     150,   151,   152,   152,   153,   154,   154,   155,   155,   156,
     156,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   163,   164,   164,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   166,   167,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   170,   170,   171,   172,   172,   172,   172,   173,
     173,   174,   174,   174,   175,   176,   176,   177,   178,   179,
     179,   179,   180,   181,   181,   182,   183,   184,   185,   186,
     186,   187,   188,   188,   189,   189,   189,   190,   190,   190,
     190,   191,   191,   191,   191,   191,   191,   191,   192,   192,
     192,   193,   193,   193,   194,   194,   194,   194,   195,   195,
     196,   196,   196,   196,   196,   197,   197,   197,   197,   197,
     198,   199,   199,   200,   201,   201,   202,   202,   203,   203,
     203,   203,   203,   204,   204,   204,   204,   205,   205,   205,
     205
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
       1,     2,     1,     3,     7,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     0,     3,     3,     2,     1,     2,
       0,     3,     0,     1,     3,     2,     1,     7,     5,     2,
       0,     3,     1,     7,     4,     5,     3,     2,     1,     1,
       1,     4,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       8,     6,     2,     0,     5,     5,     7,     9,     8,     2,
       1,     3,     2,     2,     3,     3,     2,     4,     3,     2,
       1,     1,     2,     0,     2,     3,     3,     2,     0,     3,
       3,     1,     1,     5,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     1,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       4,     0,     1,     1,     0,     1,     1,     3,     1,     3,
       3,     3,     2,     1,     3,     2,     2,     1,     1,     1,
       1
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
      56,   124,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,   114,
     115,     0,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,   218,     0,    69,    12,     0,    14,    49,     0,
       0,     0,    54,     0,    28,     0,     0,    22,     0,     0,
       0,   152,   209,   230,   229,   227,   228,     0,     0,     0,
       0,   156,     0,   171,   172,   174,   177,   181,   188,   193,
     197,   198,   204,   205,   206,   207,   208,   163,   153,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,     0,
     225,   112,   113,   126,   125,   128,   137,   132,   136,   135,
       0,   133,   131,   139,   134,   130,   129,   138,     0,     0,
       0,     0,   222,     0,    92,   101,     9,     0,    69,     0,
       0,    44,    53,    28,    39,    28,    45,    78,    77,    75,
      76,    90,     0,    79,    80,    41,    42,     0,    98,   201,
     202,   203,   200,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,   160,     0,   161,   154,
       0,   216,     0,   212,     0,     0,     0,   150,     0,   151,
       0,   224,   221,   220,   219,     0,     0,   127,    28,     0,
     100,     0,    11,    92,    47,     0,     0,    51,    55,    40,
       0,     0,     0,     0,    88,    74,     0,   213,   215,     0,
     175,   176,   178,   179,   180,   186,   190,   189,   185,   184,
     187,   182,   183,   191,   192,   196,   194,   195,   199,   167,
     159,     0,     0,   164,   162,     0,   210,     0,   157,     0,
       0,     0,   149,     0,   169,   170,   110,   109,   104,     0,
       0,     0,     0,    24,     0,    43,    50,     0,     0,    82,
      83,    86,    87,    81,    89,    97,     0,     0,     0,     0,
     217,   145,     0,     0,   143,    28,     0,   111,     0,    62,
      58,    24,    52,    91,     0,   173,   165,   166,     0,     0,
       0,   141,   106,    28,    46,    66,    63,    64,    67,    68,
      65,     0,    59,    85,   146,     0,     0,     0,     0,   142,
       0,   103,    69,   148,     0,     0,   140,   105,   108,    61,
     147,     0,   107,     0,   144
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    34,    44,    97,     9,   198,    11,
      16,    17,    18,   129,    74,    75,    76,   327,    77,   119,
     276,   277,   121,   122,   123,   199,   360,   361,   381,   194,
      27,    21,    28,   212,   213,   281,   340,   214,   282,   283,
     284,    30,    31,    40,    41,    42,    55,   114,   330,   397,
     328,   195,    56,    98,    99,   100,   101,   191,   102,   371,
     389,   103,   258,   104,   105,   106,   107,   108,   245,   246,
     247,   313,   314,   248,   109,   192,   251,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   252,   286,
     287,   253,   154,   155,   156
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -301
static const yytype_int16 yypact[] =
{
      11,    66,     1,    74,   143,   -46,  -301,  -301,   317,  -301,
      43,  -301,  -301,  -301,  -301,  -301,    56,   327,    64,   317,
      60,  -301,   178,  -301,  -301,    99,    98,   133,  -301,   317,
    -301,  -301,  -301,   101,  -301,  -301,   130,  -301,  -301,   125,
     299,  -301,   393,  -301,    28,    15,   394,   282,  -301,    13,
    -301,  -301,  -301,    14,   141,  -301,  -301,  -301,   101,   145,
     166,  -301,  -301,   110,  -301,   124,   125,  -301,  -301,  -301,
    -301,    35,   125,   180,   121,  -301,  -301,  -301,   249,  -301,
    -301,  -301,   158,    90,   192,   161,   215,   192,   171,   230,
     187,     9,   123,   220,   193,   214,   123,   180,   108,  -301,
    -301,   182,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
     190,   323,  -301,   258,    43,   180,   199,  -301,  -301,   369,
     328,    -9,  -301,    21,  -301,   291,    -7,  -301,    16,   394,
      12,  -301,  -301,  -301,  -301,  -301,  -301,   214,   214,   214,
     214,  -301,   213,  -301,   240,    18,   238,   251,   -27,   186,
    -301,   257,  -301,  -301,    10,   189,  -301,   303,  -301,   229,
     290,   150,   296,   214,   307,   123,  -301,   259,   214,   255,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
     375,  -301,  -301,  -301,  -301,  -301,  -301,  -301,   123,   214,
     214,   214,  -301,   -17,    60,  -301,  -301,   101,    43,   261,
     320,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,    20,   273,  -301,  -301,  -301,  -301,   254,  -301,  -301,
    -301,  -301,  -301,  -301,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   192,  -301,   303,    23,  -301,  -301,
     272,  -301,   274,   267,   293,   277,   359,  -301,    92,  -301,
     286,  -301,  -301,  -301,  -301,   292,   284,  -301,   348,   125,
    -301,    49,   180,    60,  -301,   401,   309,   320,  -301,  -301,
     403,    22,   -21,    55,  -301,  -301,   313,  -301,   267,   341,
    -301,  -301,  -301,  -301,  -301,   163,   -27,   -27,   163,   163,
     163,   163,   163,   186,   186,  -301,  -301,  -301,  -301,  -301,
    -301,   101,   383,  -301,  -301,   214,  -301,   214,  -301,   192,
     322,   214,  -301,   192,  -301,  -301,  -301,  -301,  -301,    27,
     316,   393,   413,   317,   214,  -301,  -301,    16,   381,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,   214,   109,   192,   335,
    -301,  -301,   214,   336,  -301,  -301,   390,  -301,   340,   430,
    -301,   119,  -301,  -301,    16,  -301,  -301,  -301,   346,   343,
     123,     4,   443,   348,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,   141,  -301,  -301,  -301,   192,    31,   352,   192,  -301,
     471,  -301,    43,  -301,   192,   214,  -301,   471,  -301,  -301,
    -301,   347,  -301,   192,  -301
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -301,  -301,  -301,  -301,  -301,   263,   -28,  -301,   451,  -301,
     447,  -301,   -19,   432,   -33,   349,  -301,   -68,   339,  -301,
     195,  -301,   406,    24,   -35,   152,   114,  -301,  -301,    -1,
    -301,  -301,   463,  -233,  -301,  -301,  -301,  -301,  -301,  -301,
     209,  -174,  -301,  -301,   452,   225,  -301,   131,  -301,  -301,
     138,   126,   -81,  -301,   408,  -301,  -158,  -301,  -301,  -301,
    -301,  -301,   144,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,   269,  -301,   333,   -70,  -301,    52,  -301,
     122,   264,   -15,    46,   262,   370,  -301,   -11,  -301,  -301,
    -301,   300,   -51,   -52,  -300
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -219
static const yytype_int16 yytable[] =
{
      26,   112,   111,   157,    49,    45,   160,   257,    26,    20,
      39,   130,     1,   142,    78,    81,   164,   217,    73,    73,
     270,    39,   225,    54,   268,   169,    59,   280,    82,   387,
     115,   207,   208,   209,   210,   -84,    83,   338,    84,    48,
     166,    48,   110,    79,   170,    85,   112,   111,    86,     5,
     344,   203,    12,  -168,   124,    19,   204,   355,   311,    87,
     180,    80,    88,   238,   239,    89,    -3,    90,   280,    80,
     207,   208,   209,   210,     6,    80,    91,   226,     2,    43,
     388,   125,   341,   312,    60,   269,    92,   110,    93,    94,
     398,   132,   201,   255,   206,    23,   215,   402,   260,   333,
     322,    73,   188,    92,   363,   133,   134,   135,   136,    81,
     218,   165,    25,   112,   111,   189,    95,   190,   211,   265,
     266,   267,    82,   -84,    96,   339,    57,    58,   263,    35,
      83,   383,    84,    95,   394,   278,   264,   279,    88,    85,
      43,    96,    86,    29,     7,   202,    36,   171,    58,    43,
     202,   132,   332,    87,   289,   -16,    88,   211,   343,    89,
      47,    90,    92,   309,    92,   133,   134,   135,   136,   272,
      91,    43,    37,    48,    53,   137,   138,   139,    60,    32,
      92,   140,    93,    94,   113,    13,   -16,    14,   141,    15,
      -4,   118,    95,   116,    95,    92,   321,   273,    88,    13,
      96,    14,    96,    15,   231,   232,   112,   111,   -16,   -16,
      95,   -16,   257,   -16,   117,   132,   296,   297,    96,   127,
     -60,    -4,    92,     8,   120,    95,   -16,    33,   322,   133,
     134,   135,   136,    96,   329,   137,   138,   139,   351,  -218,
     240,   140,   354,    -4,    -4,   349,    -4,   350,    -4,    60,
     357,   353,    95,  -211,   128,   132,   131,    53,    -4,   158,
      96,    -4,    88,   159,   362,   162,   366,   367,   167,   133,
     134,   135,   136,   161,   241,   242,   365,   290,   291,   230,
     173,  -218,   369,   347,   303,   304,    92,   372,   174,   163,
      61,    62,   231,   232,  -218,   168,  -218,   196,   233,   137,
     138,   139,    88,   234,   393,   140,   193,   396,    64,   235,
     205,   223,    54,   400,   359,   224,    95,    67,   112,   111,
      68,   243,   404,   244,    96,   401,    92,   249,   175,   176,
      43,   227,   228,   229,   112,   111,    61,    62,    50,   137,
     138,   139,   359,   250,   254,   140,   177,   236,   237,   292,
     293,   294,  -214,    69,    64,   256,    95,   259,   261,   178,
     179,    71,   274,    67,    96,    13,    68,    14,   275,    15,
       7,   285,   -16,   180,   315,   -24,   317,   316,   181,   182,
     319,   -16,   -16,    13,   183,    14,   184,    15,   320,   323,
     -16,   318,   325,    13,    52,    14,   185,    15,   324,    69,
     186,   -16,    61,    62,    63,   326,   334,   187,   337,   -16,
     335,   345,   -16,   -16,     7,   188,   -16,   346,   348,   356,
      64,    65,   364,    43,   352,   -16,   -16,    66,   189,    67,
     190,   373,    68,   375,   -16,   -16,   -24,   -16,   368,   -16,
     370,   374,    43,   376,   384,   -16,   385,    92,   390,     8,
     403,   377,   -16,   -16,   395,    10,   -16,   -16,    53,    13,
     271,    14,   378,    15,    24,    69,    70,    46,   216,   200,
     379,   197,   336,    71,   380,   382,    72,    95,   126,   -16,
     189,   -16,   190,   -16,   358,    96,   133,   134,   135,   136,
      38,   342,    51,     8,   295,   331,   -16,   298,   299,   300,
     301,   302,   305,   306,   307,   308,   172,   219,   220,   221,
     222,   391,   392,   262,   386,   310,     0,   288,   399
};

static const yytype_int16 yycheck[] =
{
      19,    53,    53,    84,    39,    33,    87,   165,    27,    10,
      29,    79,     1,    83,    47,     1,     7,     5,    46,    47,
     194,    40,     4,    42,    41,    95,    11,    48,    14,    25,
      58,    15,    16,    17,    18,    15,    22,    15,    24,    48,
      92,    48,    53,    30,    96,    31,    98,    98,    34,    48,
     283,    30,    98,    39,    19,    12,   124,    30,    35,    45,
      50,    48,    48,    90,    91,    51,     0,    53,    48,    48,
      15,    16,    17,    18,     0,    48,    62,    59,    67,    48,
      76,    46,   103,    60,    69,   102,    72,    98,    74,    75,
     390,     1,   101,   163,   101,    39,   129,   397,   168,   273,
     258,   129,    92,    72,   337,    15,    16,    17,    18,     1,
      98,   102,    48,   165,   165,   105,   102,   107,   102,   189,
     190,   191,    14,   103,   110,   103,    98,    99,   180,    30,
      22,   364,    24,   102,   103,   203,   188,   205,    48,    31,
      48,   110,    34,    83,     1,   121,    48,    39,    99,    48,
     126,     1,   103,    45,   224,    12,    48,   102,   103,    51,
      30,    53,    72,   244,    72,    15,    16,    17,    18,   197,
      62,    48,    39,    48,    65,    85,    86,    87,    69,     1,
      72,    91,    74,    75,    43,    66,    43,    68,    98,    70,
      12,    81,   102,    48,   102,    72,   104,   198,    48,    66,
     110,    68,   110,    70,    41,    42,   258,   258,    65,    66,
     102,    68,   370,    70,    48,     1,   231,   232,   110,    98,
     101,    43,    72,    80,   100,   102,    83,    49,   386,    15,
      16,    17,    18,   110,   269,    85,    86,    87,   319,    50,
      54,    91,   323,    65,    66,   315,    68,   317,    70,    69,
     331,   321,   102,   103,     5,     1,    98,    65,    80,    98,
     110,    83,    48,    48,   334,    35,   347,   348,    48,    15,
      16,    17,    18,   102,    88,    89,   346,   225,   226,    28,
      98,    92,   352,   311,   238,   239,    72,   355,    98,   102,
       8,     9,    41,    42,   105,   102,   107,    98,    47,    85,
      86,    87,    48,    52,   385,    91,    48,   388,    26,    58,
      19,    98,   331,   394,   333,    75,   102,    35,   370,   370,
      38,    64,   403,    20,   110,   395,    72,    98,     5,     6,
      48,    93,    94,    95,   386,   386,     8,     9,    39,    85,
      86,    87,   361,    53,    48,    91,    23,    96,    97,   227,
     228,   229,    98,    71,    26,    48,   102,    98,   103,    36,
      37,    79,   101,    35,   110,    66,    38,    68,    48,    70,
       1,    98,     3,    50,   102,    48,   109,   103,    55,    56,
     103,    12,    13,    66,    61,    68,    63,    70,    29,   103,
      21,    98,   108,    66,     1,    68,    73,    70,   106,    71,
      77,    32,     8,     9,    10,    57,     5,    84,     5,    40,
     101,    98,    43,    44,     1,    92,     3,    76,    35,   103,
      26,    27,    41,    48,   102,    12,    13,    33,   105,    35,
     107,    41,    38,     3,    21,    66,    43,    68,   103,    70,
     104,   101,    48,    13,    98,    32,   103,    72,     5,    80,
     103,    21,    83,    40,   102,     4,    43,    44,    65,    66,
     197,    68,    32,    70,    17,    71,    72,    35,   129,   120,
      40,   102,   277,    79,    44,   361,    82,   102,    72,    66,
     105,    68,   107,    70,   332,   110,    15,    16,    17,    18,
      27,   282,    40,    80,   230,   270,    83,   233,   234,   235,
     236,   237,   240,   241,   242,   243,    98,   137,   138,   139,
     140,   373,   381,   180,   370,   246,    -1,   217,   392
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   112,   113,    48,     0,     1,    80,   118,
     119,   120,    98,    66,    68,    70,   121,   122,   123,    12,
     140,   142,   114,    39,   121,    48,   123,   141,   143,    83,
     152,   153,     1,    49,   115,    30,    48,    39,   143,   123,
     154,   155,   156,    48,   116,   117,   124,    30,    48,   135,
      39,   155,     1,    65,   123,   157,   163,    98,    99,    11,
      69,     8,     9,    10,    26,    27,    33,    35,    38,    71,
      72,    79,    82,   117,   125,   126,   127,   129,   125,    30,
      48,     1,    14,    22,    24,    31,    34,    45,    48,    51,
      53,    62,    72,    74,    75,   102,   110,   117,   164,   165,
     166,   167,   169,   172,   174,   175,   176,   177,   178,   185,
     198,   203,   204,    43,   158,   117,    48,    48,    81,   130,
     100,   133,   134,   135,    19,    46,   133,    98,     5,   124,
     128,    98,     1,    15,    16,    17,    18,    85,    86,    87,
      91,    98,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   203,   204,   205,   163,    98,    48,
     163,   102,    35,   102,     7,   102,   204,    48,   102,   187,
     204,    39,   165,    98,    98,     5,     6,    23,    36,    37,
      50,    55,    56,    61,    63,    73,    77,    84,    92,   105,
     107,   168,   186,    48,   140,   162,    98,   102,   119,   136,
     126,   101,   134,    30,   128,    19,   101,    15,    16,    17,
      18,   102,   144,   145,   148,   125,   129,     5,    98,   196,
     196,   196,   196,    98,    75,     4,    59,    93,    94,    95,
      28,    41,    42,    47,    52,    58,    96,    97,    90,    91,
      54,    88,    89,    64,    20,   179,   180,   181,   184,    98,
      53,   187,   199,   202,    48,   187,    48,   167,   173,    98,
     187,   103,   186,   204,   204,   187,   187,   187,    41,   102,
     152,   116,   117,   140,   101,    48,   131,   132,   128,   128,
      48,   146,   149,   150,   151,    98,   200,   201,   202,   187,
     189,   189,   191,   191,   191,   192,   193,   193,   192,   192,
     192,   192,   192,   194,   194,   195,   195,   195,   195,   163,
     184,    35,    60,   182,   183,   102,   103,   109,    98,   103,
      29,   104,   167,   103,   106,   108,    57,   128,   161,   135,
     159,   156,   103,   152,     5,   101,   131,     5,    15,   103,
     147,   103,   151,   103,   144,    98,    76,   117,    35,   187,
     187,   163,   102,   187,   163,    30,   103,   163,   136,   123,
     137,   138,   187,   144,    41,   187,   163,   163,   103,   187,
     104,   170,   128,    41,   101,     3,    13,    21,    32,    40,
      44,   139,   137,   144,    98,   103,   173,    25,    76,   171,
       5,   161,   158,   163,   103,   102,   163,   160,   205,   162,
     163,   187,   205,   103,   163
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

  case 102:
#line 290 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 124:
#line 340 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 209:
#line 512 "eazy.y"
    { printf("ERROR: expresión_primitiva -> error\n"); yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2015 "eazy.tab.c"
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


#line 554 "eazy.y"


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
