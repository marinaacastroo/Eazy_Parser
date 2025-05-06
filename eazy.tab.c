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
#define YYLAST   534

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  234
/* YYNRULES -- Number of states.  */
#define YYNSTATES  412

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
       2,     2,     2,   106,     2,     2,     2,     2,   100,     2,
      89,    90,   103,   101,     2,   102,    85,   104,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    86,
      96,     2,    97,   107,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    93,   108,     2,     2,     2,     2,     2,
      87,     2,    88,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,    98,    95,   105,     2,     2,     2,
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
     526,   530,   532,   538,   545,   547,   551,   553,   557,   561,
     565,   567,   571,   575,   579,   583,   585,   589,   591,   595,
     597,   601,   603,   605,   609,   613,   615,   619,   623,   625,
     629,   633,   637,   639,   643,   646,   649,   652,   655,   657,
     659,   661,   663,   665,   667,   672,   673,   675,   677,   678,
     680,   681,   685,   687,   691,   695,   699,   702,   704,   708,
     711,   714,   716,   718,   720
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     110,     0,    -1,   111,   116,    -1,     1,    -1,    67,    48,
      85,   112,    -1,     1,    -1,    -1,   112,   113,    -1,    49,
     114,    85,    -1,    49,   115,    11,    48,    85,    -1,     1,
      -1,   115,    -1,   114,    86,   115,    -1,    48,    -1,   115,
      69,    48,    -1,   117,   138,   150,   154,   161,    -1,    -1,
     118,    -1,     1,    -1,    80,   119,    39,    -1,   120,   119,
      -1,   120,    -1,   121,    48,    30,   122,   123,    85,    -1,
     121,    48,    30,   122,   127,    -1,    -1,    70,    -1,    68,
      -1,    66,    -1,    -1,   122,    72,    -1,   115,    -1,   124,
      -1,   125,    -1,    26,    -1,    71,    -1,     9,    -1,     8,
      -1,    38,    -1,    35,    -1,    79,    19,   126,    -1,    79,
      46,    19,   126,    -1,   122,   123,    -1,   122,   127,    -1,
      27,    87,   124,   129,    88,    -1,    33,   131,    88,    -1,
      82,   131,    88,    -1,    10,   128,    89,   114,    90,   134,
      88,    -1,    10,   128,   134,    88,    -1,    -1,    81,    -1,
     130,   129,    -1,   130,    -1,    48,     5,   185,    -1,   131,
     132,    -1,   132,    -1,   133,    30,   126,    -1,   133,    48,
      -1,    48,    -1,   117,   138,   150,   135,    -1,   136,   135,
      -1,   136,    -1,   121,   137,   156,   160,    -1,    -1,    13,
      -1,    21,    -1,    44,    -1,     3,    -1,    32,    -1,    40,
      -1,    -1,   140,    -1,   139,   141,    -1,   141,    -1,    12,
     139,    39,    -1,   121,    48,    30,   123,     5,   142,    85,
      -1,    17,    -1,    18,    -1,    16,    -1,    15,    -1,   143,
      -1,   146,    -1,    89,   148,    90,    -1,    89,   144,    90,
      -1,   144,   145,    -1,    -1,    15,    41,   142,    -1,    89,
     147,    90,    -1,   147,   149,    -1,   149,    -1,   148,   142,
      -1,    -1,    48,     5,   142,    -1,    -1,   151,    -1,    83,
     152,    39,    -1,   152,   153,    -1,   153,    -1,   121,   133,
      30,   126,     5,   201,    85,    -1,   121,   133,    30,   126,
      85,    -1,   154,   155,    -1,    -1,   121,   156,   160,    -1,
       1,    -1,    43,    48,    89,   157,    90,    41,   159,    -1,
      43,    48,    41,   159,    -1,   133,    30,   126,     5,   158,
      -1,   133,    30,   126,    -1,   158,   206,    -1,   206,    -1,
     126,    -1,    57,    -1,   138,   150,   154,   161,    -1,    65,
     162,    39,    -1,   162,   163,    -1,   163,    -1,   164,    -1,
     167,    -1,   170,    -1,   172,    -1,   173,    -1,   174,    -1,
     175,    -1,   176,    -1,   183,    -1,     1,    -1,   199,    85,
      -1,   165,    85,    -1,   204,   166,   185,    -1,     5,    -1,
      77,    -1,    73,    -1,    56,    -1,    23,    -1,    55,    -1,
      63,    -1,    37,    -1,    36,    -1,     6,    -1,    84,    -1,
      61,    -1,    75,    89,   185,    90,   161,   168,    76,   161,
      -1,    75,    89,   185,    90,   161,   168,    -1,   168,   169,
      -1,    -1,    25,    89,   185,    90,   161,    -1,    53,    89,
     185,    90,   161,    -1,    45,   161,    53,    89,   185,    90,
      85,    -1,    62,    89,   171,    91,   185,    91,   171,    90,
     161,    -1,    62,     7,    48,    29,    89,   185,    90,   161,
      -1,   171,   165,    -1,   165,    -1,    74,    48,    85,    -1,
      14,    85,    -1,    31,    85,    -1,    34,    48,    85,    -1,
      22,   185,    85,    -1,    22,    85,    -1,    51,    35,    48,
      85,    -1,    24,   161,   177,    -1,   178,   182,    -1,   178,
      -1,   182,    -1,   179,   181,    -1,    -1,   179,   180,    -1,
      35,   115,   161,    -1,    60,    35,   161,    -1,    20,   161,
      -1,    -1,    92,   185,    93,    -1,    94,   185,    95,    -1,
     186,    -1,   186,    75,   185,    76,   185,    -1,   186,    62,
       7,    48,    29,   185,    -1,   187,    -1,   186,    59,   187,
      -1,   188,    -1,   187,     4,   188,    -1,   189,    28,   189,
      -1,   189,    58,   189,    -1,   189,    -1,   190,    96,   190,
      -1,   190,    97,   190,    -1,   190,    52,   190,    -1,   190,
      47,   190,    -1,   190,    -1,   191,    98,   191,    -1,   191,
      -1,   192,    99,   192,    -1,   192,    -1,   193,   100,   193,
      -1,   193,    -1,   194,    -1,   193,    42,   194,    -1,   193,
      41,   194,    -1,   195,    -1,   194,   101,   195,    -1,   194,
     102,   195,    -1,   196,    -1,   195,   103,   196,    -1,   195,
     104,   196,    -1,   195,    54,   196,    -1,   197,    -1,   197,
      64,   196,    -1,   102,   198,    -1,   105,   198,    -1,   106,
     198,    -1,    78,   198,    -1,   198,    -1,   199,    -1,   204,
      -1,   205,    -1,   206,    -1,     1,    -1,    48,    89,   200,
      90,    -1,    -1,   203,    -1,   202,    -1,    -1,   203,    -1,
      -1,   203,    86,   185,    -1,   205,    -1,   204,   107,   205,
      -1,   204,    50,   205,    -1,   204,    50,   184,    -1,   204,
     184,    -1,   115,    -1,    89,   185,    90,    -1,   108,   205,
      -1,    72,   205,    -1,    17,    -1,    18,    -1,    16,    -1,
      15,    -1
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
     209,   213,   214,   218,   219,   222,   226,   230,   231,   234,
     235,   240,   247,   249,   252,   256,   257,   261,   262,   272,
     273,   276,   277,   281,   282,   286,   287,   291,   292,   295,
     296,   300,   304,   313,   314,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   330,   331,   335,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     353,   354,   358,   359,   362,   366,   367,   368,   369,   373,
     374,   378,   379,   380,   384,   388,   389,   393,   397,   401,
     402,   403,   407,   409,   411,   414,   418,   422,   425,   436,
     437,   441,   442,   443,   446,   447,   449,   450,   454,   455,
     456,   460,   461,   462,   463,   464,   468,   469,   473,   474,
     478,   479,   483,   484,   485,   488,   489,   490,   494,   495,
     496,   497,   501,   502,   506,   507,   508,   509,   510,   513,
     514,   515,   516,   517,   520,   522,   524,   527,   529,   531,
     533,   535,   538,   539,   540,   541,   542,   546,   547,   548,
     549,   552,   553,   554,   555
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
  "XOR_ASIG", "'.'", "';'", "'de'", "'fin'", "'('", "')'", "':'", "'['",
  "']'", "'{'", "'}'", "'<'", "'>'", "'|'", "'@'", "'&'", "'+'", "'-'",
  "'*'", "'/'", "'~'", "'!'", "'?'", "'^'", "$accept", "programa",
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
  "indice", "expresion", "expresion_logica_or", "expresion_logica_and",
  "expresion_igualdad", "expresion_comparacion", "expresion_or_binario",
  "expresion_xor_binario", "expresion_and_binario",
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
     335,   336,   337,   338,   339,    46,    59,   100,   102,    40,
      41,    58,    91,    93,   123,   125,    60,    62,   124,    64,
      38,    43,    45,    42,    47,   126,    33,    63,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   114,   114,   115,   115,   116,   117,   117,   117,   118,
     119,   119,   120,   120,   121,   121,   121,   121,   122,   122,
     123,   123,   123,   124,   124,   124,   124,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   128,   128,
     129,   129,   130,   131,   131,   132,   133,   133,   134,   135,
     135,   136,   137,   137,   137,   137,   137,   137,   137,   138,
     138,   139,   139,   140,   141,   142,   142,   142,   142,   142,
     142,   143,   143,   144,   144,   145,   146,   147,   147,   148,
     148,   149,   150,   150,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   161,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   164,   165,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     167,   167,   168,   168,   169,   170,   170,   170,   170,   171,
     171,   172,   172,   172,   173,   174,   174,   175,   176,   177,
     177,   177,   178,   179,   179,   180,   181,   182,   183,   184,
     184,   185,   185,   185,   186,   186,   187,   187,   188,   188,
     188,   189,   189,   189,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   193,   194,   194,   194,   195,   195,
     195,   195,   196,   196,   197,   197,   197,   197,   197,   198,
     198,   198,   198,   198,   199,   200,   200,   201,   202,   202,
     203,   203,   204,   204,   204,   204,   204,   205,   205,   205,
     205,   206,   206,   206,   206
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
       3,     1,     5,     6,     1,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     4,     0,     1,     1,     0,     1,
       0,     3,     1,     3,     3,     3,     2,     1,     3,     2,
       2,     1,     1,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,   227,     0,   114,
     115,     0,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,   222,     0,    69,    12,     0,    14,    49,     0,
       0,     0,    54,     0,    28,     0,     0,    22,     0,     0,
       0,   152,   213,   234,   233,   231,   232,     0,   156,     0,
       0,     0,     0,   171,   174,   176,   180,   185,   187,   189,
     191,   192,   195,   198,   202,   208,   209,   210,   211,   212,
     163,   153,     0,     0,   215,     0,     0,     0,     0,   230,
       0,     0,     0,   229,   112,   113,   126,   125,   128,   137,
     132,   136,   135,     0,   133,   131,   139,   134,   130,   129,
     138,     0,     0,     0,     0,   226,     0,    92,   101,     9,
       0,    69,     0,     0,    44,    53,    28,    39,    28,    45,
      78,    77,    75,    76,    90,     0,    79,    80,    41,    42,
     218,    98,   207,   204,   205,   206,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
     160,     0,   161,   154,     0,     0,   216,     0,     0,     0,
     150,     0,   151,     0,   228,   225,   224,     0,     0,   223,
     127,    28,     0,   100,     0,    11,    92,    47,     0,     0,
      51,    55,    40,     0,     0,     0,     0,    88,    74,     0,
     217,   219,   175,     0,     0,   177,   178,   179,   184,   183,
     181,   182,   186,   188,   194,   193,   190,   196,   197,   201,
     199,   200,   203,   167,   159,     0,     0,   164,   162,     0,
     214,     0,   157,     0,     0,     0,   149,     0,   169,   170,
     110,   109,   104,     0,     0,     0,     0,    24,     0,    43,
      50,     0,     0,    82,    83,    86,    87,    81,    89,    97,
       0,     0,     0,     0,     0,   221,   145,     0,     0,   143,
      28,     0,   111,     0,    62,    58,    24,    52,    91,     0,
       0,   172,   165,   166,     0,     0,     0,   141,   106,    28,
      46,    66,    63,    64,    67,    68,    65,     0,    59,    85,
     173,   146,     0,     0,     0,     0,   142,     0,   103,    69,
     148,     0,     0,   140,   105,   108,    61,   147,     0,   107,
       0,   144
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    34,    44,    97,     9,   201,    11,
      16,    17,    18,   129,    74,    75,    76,   331,    77,   119,
     279,   280,   121,   122,   123,   202,   365,   366,   387,   197,
      27,    21,    28,   215,   216,   284,   344,   217,   285,   286,
     287,    30,    31,    40,    41,    42,    55,   114,   334,   404,
     332,   198,    56,    98,    99,   100,   101,   194,   102,   377,
     396,   103,   261,   104,   105,   106,   107,   108,   249,   250,
     251,   317,   318,   252,   109,   195,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   255,   289,   290,   256,   157,   158,   159
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -273
static const yytype_int16 yypact[] =
{
      19,    31,     3,    42,   389,   -21,  -273,  -273,   -25,  -273,
      54,  -273,  -273,  -273,  -273,  -273,    33,   265,    70,   -25,
      38,  -273,   363,  -273,  -273,   105,    78,   162,  -273,   -25,
    -273,  -273,  -273,    97,  -273,  -273,   120,  -273,  -273,    99,
     230,  -273,    87,  -273,   -32,    11,   452,   257,  -273,   110,
    -273,  -273,  -273,    34,   123,  -273,  -273,  -273,    97,   108,
     138,  -273,  -273,   146,  -273,   107,    99,  -273,  -273,  -273,
    -273,     9,    99,   136,   154,  -273,  -273,  -273,   252,  -273,
    -273,  -273,   174,    76,   205,   189,   237,   205,   198,   254,
     202,     6,    96,   245,   210,   173,    96,   136,    98,  -273,
    -273,   225,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
     232,   271,  -273,   258,    54,   136,   234,  -273,  -273,   337,
     187,   -14,  -273,   129,  -273,   296,     1,  -273,    44,   452,
      22,  -273,  -273,  -273,  -273,  -273,  -273,   201,  -273,   201,
     201,   201,   283,   188,   326,  -273,     5,    67,   239,   240,
     -16,   221,    24,  -273,   279,  -273,  -273,   161,   190,  -273,
     352,  -273,   285,   321,   290,   331,   173,   341,    96,  -273,
     300,   173,   302,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,   350,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,   173,   173,    96,   173,  -273,    26,    38,  -273,  -273,
      97,    54,   305,   346,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,    35,   310,  -273,  -273,  -273,  -273,
     290,  -273,  -273,  -273,  -273,  -273,  -273,   173,   390,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   205,  -273,
     352,    -3,  -273,  -273,   307,   309,   314,   319,   318,   380,
    -273,   135,  -273,   325,  -273,  -273,  -273,   323,   316,  -273,
    -273,   361,    99,  -273,   113,   136,    38,  -273,   414,   333,
     346,  -273,  -273,   418,     0,    23,    21,  -273,  -273,   339,
    -273,   314,   326,   377,   351,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,   221,   221,   304,    24,    24,  -273,
    -273,  -273,  -273,  -273,  -273,    97,   395,  -273,  -273,   173,
    -273,   173,  -273,   205,   345,   173,  -273,   205,  -273,  -273,
    -273,  -273,  -273,   145,   347,    87,   370,   -25,   173,  -273,
    -273,    44,   394,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
     412,   173,   143,   205,   355,  -273,  -273,   173,   356,  -273,
    -273,   407,  -273,   364,   220,  -273,   168,  -273,  -273,    44,
     173,  -273,  -273,  -273,   366,   359,    96,    -6,   451,   361,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,   123,  -273,  -273,
    -273,  -273,   205,    90,   374,   205,  -273,   286,  -273,    54,
    -273,   205,   173,  -273,   286,  -273,  -273,  -273,   375,  -273,
     205,  -273
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,  -273,  -273,  -273,   264,   -29,  -273,   462,  -273,
     450,  -273,   -19,   433,   -31,   353,  -273,   -72,   342,  -273,
     194,  -273,   398,    71,   -28,   139,   111,  -273,  -273,    -1,
    -273,  -273,   449,  -272,  -273,  -273,  -273,  -273,  -273,  -273,
     195,  -173,  -273,  -273,   441,   209,  -273,   101,  -273,  -273,
     104,    85,   -81,  -273,   388,  -273,  -156,  -273,  -273,  -273,
    -273,  -273,   116,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,   241,  -273,   306,   -90,  -273,   266,   267,
     -17,   118,   259,   256,   260,   117,   124,   115,  -273,   247,
     -23,  -273,  -273,  -273,   275,   -51,   -52,  -228
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -223
static const yytype_int16 yytable[] =
{
      26,   112,   111,   160,    45,   172,   163,   130,    26,    20,
      39,    49,   260,   167,   348,   342,    78,    73,    73,   394,
       1,    39,    59,    54,   273,   239,   240,   220,   124,   115,
     110,    -3,   315,   231,    48,    81,   210,   211,   212,   213,
     169,    13,     6,    14,   173,    15,   112,   111,    82,    48,
     -84,     5,   207,    57,    58,   125,    83,   316,    84,   210,
     211,   212,   213,   232,    12,    85,    19,   271,    86,   368,
     395,   283,    23,  -168,   204,   110,   258,   132,   244,    87,
      60,   263,    88,   283,   241,    89,     2,    90,    52,   209,
     343,   133,   134,   135,   136,   168,    91,   389,   218,    81,
      73,   267,   268,   337,   270,   326,    92,   221,    93,    94,
     214,   347,    82,   345,   233,   272,   112,   111,    25,   234,
      83,    29,    84,    95,    88,   -84,    36,   245,   246,    85,
     -24,   266,    86,   214,   281,    35,   282,   174,    43,   294,
      79,   269,    96,    87,    43,    43,    88,    48,    92,    89,
      47,    90,    53,    13,   137,    14,   116,    15,    80,   206,
      91,   138,    92,   235,   236,    95,   113,   313,    92,   405,
      92,   275,    93,    94,   132,   360,   409,    80,   139,    95,
     401,   140,   141,    43,    96,    95,   117,    95,   133,   134,
     135,   136,   205,    80,   120,    61,    62,   205,    96,    58,
     276,    37,   132,   336,    96,    60,    96,    92,    53,   112,
     111,   183,    60,    64,   296,   297,   133,   134,   135,   136,
     260,    88,    67,   381,    95,    68,   325,   118,    13,   354,
      14,   355,    15,   382,    13,   358,    14,   326,    15,   127,
    -222,   383,   356,    96,   333,    92,   359,   227,   367,    88,
     228,   137,   384,   191,   362,   192,   -60,   128,    69,   131,
     385,   371,    95,   229,   386,    61,    62,   375,   193,    50,
      53,   372,   373,    92,   161,   139,   178,   179,   140,   141,
     390,    96,  -222,    64,  -222,   162,   352,   164,   378,   165,
      95,   166,    67,   170,   180,    68,    13,  -222,    14,   171,
      15,   133,   134,   135,   136,    43,   196,   181,   182,    96,
     176,   400,   408,   -24,   403,   208,    54,   177,   364,   199,
     407,   183,   242,   243,   112,   111,   184,   185,    69,   411,
     230,    13,   186,    14,   187,    15,    71,   237,     7,   238,
     -16,   112,   111,   247,   188,   239,   240,   364,   189,   -16,
     -16,   298,   299,   300,   301,   190,   304,   305,   -16,   309,
     310,   311,   312,   191,    32,   192,   307,   308,   226,   -16,
     253,     7,   248,   -16,   254,    -4,  -220,   -16,   193,   257,
     -16,   -16,   -16,   -16,   222,   262,   223,   224,   225,   259,
       7,   -16,   264,   277,   278,   288,   319,   293,    43,   320,
     321,   -16,   -16,   -16,   322,   -16,    -4,   -16,   323,   324,
     -16,   329,    33,   -16,   -16,   327,   328,     8,   330,   338,
     -16,   339,    92,   341,   349,   350,   200,   351,    -4,    -4,
     353,    -4,   -16,    -4,   357,   369,   -16,   361,   -16,    95,
     -16,   370,   191,    -4,   192,   374,    -4,   376,   379,   392,
       8,   391,   380,   -16,   -16,   -16,   397,   -16,    96,   -16,
      61,    62,    63,   402,   274,   410,    10,    24,    46,     8,
     126,   219,   -16,   203,   340,   363,    38,   388,    64,    65,
     346,    51,   335,   398,   406,    66,   175,    67,   399,   265,
      68,   314,   393,   292,   303,   291,   302,   295,     0,     0,
      43,   306,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,    70,     0,     0,     0,     0,     0,
       0,    71,     0,     0,    72
};

static const yytype_int16 yycheck[] =
{
      19,    53,    53,    84,    33,    95,    87,    79,    27,    10,
      29,    39,   168,     7,   286,    15,    47,    46,    47,    25,
       1,    40,    11,    42,   197,    41,    42,     5,    19,    58,
      53,     0,    35,    28,    48,     1,    15,    16,    17,    18,
      92,    66,     0,    68,    96,    70,    98,    98,    14,    48,
      15,    48,   124,    85,    86,    46,    22,    60,    24,    15,
      16,    17,    18,    58,    85,    31,    12,    41,    34,   341,
      76,    48,    39,    39,    88,    98,   166,     1,    54,    45,
      69,   171,    48,    48,   100,    51,    67,    53,     1,    88,
      90,    15,    16,    17,    18,    89,    62,   369,   129,     1,
     129,   191,   192,   276,   194,   261,    72,    85,    74,    75,
      89,    90,    14,    90,    47,    89,   168,   168,    48,    52,
      22,    83,    24,    89,    48,    90,    48,   103,   104,    31,
      43,   183,    34,    89,   206,    30,   208,    39,    48,   229,
      30,   193,   108,    45,    48,    48,    48,    48,    72,    51,
      30,    53,    65,    66,    78,    68,    48,    70,    48,    30,
      62,    85,    72,    96,    97,    89,    43,   248,    72,   397,
      72,   200,    74,    75,     1,    30,   404,    48,   102,    89,
      90,   105,   106,    48,   108,    89,    48,    89,    15,    16,
      17,    18,   121,    48,    87,     8,     9,   126,   108,    86,
     201,    39,     1,    90,   108,    69,   108,    72,    65,   261,
     261,    50,    69,    26,   231,   232,    15,    16,    17,    18,
     376,    48,    35,     3,    89,    38,    91,    81,    66,   319,
      68,   321,    70,    13,    66,   325,    68,   393,    70,    85,
      50,    21,   323,   108,   272,    72,   327,    59,   338,    48,
      62,    78,    32,    92,   335,    94,    88,     5,    71,    85,
      40,   351,    89,    75,    44,     8,     9,   357,   107,    39,
      65,   352,   353,    72,    85,   102,     5,     6,   105,   106,
     370,   108,    92,    26,    94,    48,   315,    89,   360,    35,
      89,    89,    35,    48,    23,    38,    66,   107,    68,    89,
      70,    15,    16,    17,    18,    48,    48,    36,    37,   108,
      85,   392,   402,    48,   395,    19,   335,    85,   337,    85,
     401,    50,   101,   102,   376,   376,    55,    56,    71,   410,
       4,    66,    61,    68,    63,    70,    79,    98,     1,    99,
       3,   393,   393,    64,    73,    41,    42,   366,    77,    12,
      13,   233,   234,   235,   236,    84,   239,   240,    21,   244,
     245,   246,   247,    92,     1,    94,   242,   243,    85,    32,
      85,     1,    20,     3,    53,    12,    86,    40,   107,    48,
      43,    44,    12,    13,   137,    85,   139,   140,   141,    48,
       1,    21,    90,    88,    48,    85,    89,     7,    48,    90,
      86,    12,    32,    66,    85,    68,    43,    70,    90,    29,
      40,    95,    49,    43,    44,    90,    93,    80,    57,     5,
      83,    88,    72,     5,    85,    48,    89,    76,    65,    66,
      35,    68,    43,    70,    89,    41,    66,    90,    68,    89,
      70,    29,    92,    80,    94,    90,    83,    91,    41,    90,
      80,    85,    88,    83,    65,    66,     5,    68,   108,    70,
       8,     9,    10,    89,   200,    90,     4,    17,    35,    80,
      72,   129,    83,   120,   280,   336,    27,   366,    26,    27,
     285,    40,   273,   379,   399,    33,    98,    35,   387,   183,
      38,   250,   376,   227,   238,   220,   237,   230,    -1,    -1,
      48,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   110,   111,    48,     0,     1,    80,   116,
     117,   118,    85,    66,    68,    70,   119,   120,   121,    12,
     138,   140,   112,    39,   119,    48,   121,   139,   141,    83,
     150,   151,     1,    49,   113,    30,    48,    39,   141,   121,
     152,   153,   154,    48,   114,   115,   122,    30,    48,   133,
      39,   153,     1,    65,   121,   155,   161,    85,    86,    11,
      69,     8,     9,    10,    26,    27,    33,    35,    38,    71,
      72,    79,    82,   115,   123,   124,   125,   127,   123,    30,
      48,     1,    14,    22,    24,    31,    34,    45,    48,    51,
      53,    62,    72,    74,    75,    89,   108,   115,   162,   163,
     164,   165,   167,   170,   172,   173,   174,   175,   176,   183,
     199,   204,   205,    43,   156,   115,    48,    48,    81,   128,
      87,   131,   132,   133,    19,    46,   131,    85,     5,   122,
     126,    85,     1,    15,    16,    17,    18,    78,    85,   102,
     105,   106,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   204,   205,   206,
     161,    85,    48,   161,    89,    35,    89,     7,    89,   205,
      48,    89,   185,   205,    39,   163,    85,    85,     5,     6,
      23,    36,    37,    50,    55,    56,    61,    63,    73,    77,
      84,    92,    94,   107,   166,   184,    48,   138,   160,    85,
      89,   117,   134,   124,    88,   132,    30,   126,    19,    88,
      15,    16,    17,    18,    89,   142,   143,   146,   123,   127,
       5,    85,   198,   198,   198,   198,    85,    59,    62,    75,
       4,    28,    58,    47,    52,    96,    97,    98,    99,    41,
      42,   100,   101,   102,    54,   103,   104,    64,    20,   177,
     178,   179,   182,    85,    53,   200,   203,    48,   185,    48,
     165,   171,    85,   185,    90,   184,   205,   185,   185,   205,
     185,    41,    89,   150,   114,   115,   138,    88,    48,   129,
     130,   126,   126,    48,   144,   147,   148,   149,    85,   201,
     202,   203,   187,     7,   185,   188,   189,   189,   190,   190,
     190,   190,   191,   192,   194,   194,   193,   195,   195,   196,
     196,   196,   196,   161,   182,    35,    60,   180,   181,    89,
      90,    86,    85,    90,    29,    91,   165,    90,    93,    95,
      57,   126,   159,   133,   157,   154,    90,   150,     5,    88,
     129,     5,    15,    90,   145,    90,   149,    90,   142,    85,
      48,    76,   115,    35,   185,   185,   161,    89,   185,   161,
      30,    90,   161,   134,   121,   135,   136,   185,   142,    41,
      29,   185,   161,   161,    90,   185,    91,   168,   126,    41,
      88,     3,    13,    21,    32,    40,    44,   137,   135,   142,
     185,    85,    90,   171,    25,    76,   169,     5,   159,   156,
     161,    90,    89,   161,   158,   206,   160,   161,   185,   206,
      90,   161
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
#line 277 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 124:
#line 327 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 213:
#line 517 "eazy.y"
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
