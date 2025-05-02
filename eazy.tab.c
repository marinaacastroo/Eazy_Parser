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
#define YYLAST   1120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNRULES -- Number of states.  */
#define YYNSTATES  400

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
       2,     2,     2,   108,     2,     2,     2,     2,    91,     2,
      98,    99,    87,    85,     2,    86,    94,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   100,    95,
      89,     2,    90,   101,    92,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,     2,   104,   102,     2,     2,     2,     2,     2,
      96,     2,    97,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   109,     2,     2,     2,
       2,     2,     2,   105,    93,   106,   107,     2,     2,     2,
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
     526,   527,   529,   531,   533,   535,   537,   541,   545,   549,
     552,   554,   558,   561,   564,   568,   572,   577,   583,   585,
     592,   594,   596,   598,   600,   602,   604,   606,   608,   610,
     613,   616,   619,   622,   626,   630,   634,   638,   642,   646,
     650,   654,   658,   662,   666,   670,   674,   678,   682,   686,
     690,   694
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     111,     0,    -1,   112,   117,    -1,     1,    -1,    67,    48,
      94,   113,    -1,     1,    -1,    -1,   113,   114,    -1,    49,
     115,    94,    -1,    49,   116,    11,    48,    94,    -1,     1,
      -1,   116,    -1,   115,    95,   116,    -1,    48,    -1,   116,
      69,    48,    -1,   118,   139,   151,   156,   163,    -1,    -1,
     119,    -1,     1,    -1,    80,   120,    39,    -1,   121,   120,
      -1,   121,    -1,   122,    48,    30,   123,   124,    94,    -1,
     122,    48,    30,   123,   128,    -1,    -1,    70,    -1,    68,
      -1,    66,    -1,    -1,   123,    72,    -1,   116,    -1,   125,
      -1,   126,    -1,    26,    -1,    71,    -1,     9,    -1,     8,
      -1,    38,    -1,    35,    -1,    79,    19,   127,    -1,    79,
      46,    19,   127,    -1,   123,   124,    -1,   123,   128,    -1,
      27,    96,   125,   130,    97,    -1,    33,   132,    97,    -1,
      82,   132,    97,    -1,    10,   129,    98,   115,    99,   135,
      97,    -1,    10,   129,   135,    97,    -1,    -1,    81,    -1,
     131,   130,    -1,   131,    -1,    48,     5,   191,    -1,   132,
     133,    -1,   133,    -1,   134,    30,   127,    -1,   134,    48,
      -1,    48,    -1,   118,   139,   151,   136,    -1,   137,   136,
      -1,   137,    -1,   122,   138,   158,   162,    -1,    -1,    13,
      -1,    21,    -1,    44,    -1,     3,    -1,    32,    -1,    40,
      -1,    -1,   140,    -1,    12,   141,    39,    -1,   141,   142,
      -1,   142,    -1,   122,    48,    30,   124,     5,   143,    94,
      -1,    17,    -1,    18,    -1,    16,    -1,    15,    -1,   144,
      -1,   147,    -1,    98,   149,    99,    -1,    98,   145,    99,
      -1,   145,   146,    -1,    -1,    15,    41,   143,    -1,    98,
     148,    99,    -1,   148,   150,    -1,   150,    -1,   149,   150,
      -1,    -1,    48,     5,   143,    -1,    -1,   152,    -1,    83,
     153,    39,    -1,   153,   154,    -1,   154,    -1,   122,   134,
      30,   127,     5,   155,    94,    -1,   122,   134,    30,   127,
      94,    -1,   155,   191,    -1,   191,    -1,   156,   157,    -1,
      -1,   122,   158,   162,    -1,     1,    -1,    43,    48,    98,
     159,    99,    41,   161,    -1,    43,    48,    41,   161,    -1,
     134,    30,   127,     5,   160,    -1,   134,    30,   127,    -1,
     160,   186,    -1,   186,    -1,   127,    -1,    57,    -1,   139,
     151,   156,   163,    -1,    65,   164,    39,    -1,   164,   165,
      -1,   165,    -1,   166,    -1,   169,    -1,   172,    -1,   174,
      -1,   175,    -1,   176,    -1,   177,    -1,   178,    -1,   185,
      -1,     1,    -1,   190,    94,    -1,   167,    94,    -1,   187,
     168,   191,    -1,     5,    -1,    77,    -1,    73,    -1,    56,
      -1,    23,    -1,    55,    -1,    63,    -1,    37,    -1,    36,
      -1,     6,    -1,    84,    -1,    61,    -1,    75,    98,   191,
      99,   163,   170,    76,   163,    -1,    75,    98,   191,    99,
     163,   170,    -1,   170,   171,    -1,    -1,    25,    98,   191,
      99,   163,    -1,    53,    98,   191,    99,   163,    -1,    45,
     163,    53,    98,   191,    99,    94,    -1,    62,    98,   173,
     100,   191,   100,   173,    99,   163,    -1,    62,     7,    48,
      29,    98,   191,    99,   163,    -1,   173,   167,    -1,   167,
      -1,    74,    48,    94,    -1,    14,    94,    -1,    31,    94,
      -1,    34,    48,    94,    -1,    22,   191,    94,    -1,    22,
      94,    -1,    51,    35,    48,    94,    -1,    24,   163,   179,
      -1,   180,   184,    -1,   180,    -1,   184,    -1,   181,   183,
      -1,    -1,   181,   182,    -1,    35,   116,   163,    -1,    60,
      35,   163,    -1,    20,   163,    -1,    -1,    17,    -1,    18,
      -1,    16,    -1,    15,    -1,   188,    -1,   187,   101,   188,
      -1,   187,    50,   188,    -1,   187,    50,   189,    -1,   187,
     189,    -1,   116,    -1,    98,   191,    99,    -1,   102,   188,
      -1,    72,   188,    -1,   103,   191,   104,    -1,   105,   191,
     106,    -1,    48,    98,   155,    99,    -1,   199,    75,   191,
      76,   191,    -1,   199,    -1,   199,    62,     7,    48,    29,
     191,    -1,   192,    -1,   193,    -1,   194,    -1,   195,    -1,
     196,    -1,   197,    -1,   198,    -1,   199,    -1,     1,    -1,
      86,   191,    -1,   107,   191,    -1,   108,   191,    -1,   109,
     191,    -1,   191,    64,   191,    -1,   191,    87,   191,    -1,
     191,    88,   191,    -1,   191,    54,   191,    -1,   191,    85,
     191,    -1,   191,    86,   191,    -1,   191,    42,   191,    -1,
     191,    41,   191,    -1,   191,    91,   191,    -1,   191,    92,
     191,    -1,   191,    93,   191,    -1,   191,    89,   191,    -1,
     191,    90,   191,    -1,   191,    52,   191,    -1,   191,    47,
     191,    -1,   191,    28,   191,    -1,   191,    58,   191,    -1,
     191,     4,   191,    -1,   191,    59,   191,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    35,    40,    41,    44,    46,    50,    51,
      52,    58,    59,    63,    64,    68,    76,    78,    79,    82,
      86,    87,    91,    92,    96,    98,    99,   100,   103,   105,
     109,   110,   111,   114,   115,   116,   117,   118,   119,   123,
     124,   128,   129,   133,   134,   135,   136,   137,   140,   142,
     145,   146,   149,   153,   154,   158,   163,   164,   169,   173,
     174,   177,   180,   182,   183,   184,   185,   186,   187,   193,
     195,   198,   201,   202,   206,   210,   211,   212,   213,   214,
     215,   219,   220,   224,   225,   228,   232,   236,   237,   240,
     241,   245,   252,   254,   257,   261,   262,   266,   267,   272,
     273,   281,   282,   285,   286,   290,   291,   295,   296,   300,
     301,   304,   305,   309,   313,   322,   323,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   339,   340,   344,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   362,   363,   367,   368,   371,   375,   376,   377,
     378,   382,   383,   387,   388,   389,   393,   397,   398,   402,
     406,   410,   411,   412,   416,   418,   420,   423,   427,   431,
     434,   444,   445,   446,   447,   451,   452,   453,   454,   455,
     459,   460,   461,   462,   466,   467,   471,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   489,
     490,   491,   492,   496,   500,   501,   502,   506,   507,   511,
     512,   516,   517,   518,   522,   523,   524,   525,   526,   527,
     531,   532
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
  "XOR_ASIG", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'&'", "'@'",
  "'|'", "'.'", "';'", "'de'", "'fin'", "'('", "')'", "':'", "'?'", "'^'",
  "'['", "']'", "'{'", "'}'", "'~'", "'!'", "'tamano'", "$accept",
  "programa", "cabecera_programa", "lista_librerias", "libreria",
  "nombre_lista", "nombre", "bloque_programa", "declaraciones_tipos_opt",
  "declaraciones_tipos", "declaraciones_tipo_lista", "declaracion_tipo",
  "visibilidad_opt", "lista_ref", "tipo_basico", "tipo_escalar",
  "tipo_tabla", "especificacion_tipo", "tipo_estructurado", "ultima_opt",
  "elemento_num_lista", "elemento_enum", "linea_campo_lista",
  "linea_campo", "identificador_lista", "componentes",
  "declaracion_metodo_lista", "declaracion_metodo", "modificador_opt",
  "declaraciones_constantes_opt", "declaraciones_constantes",
  "declaraciones_constantes_lista", "declaracion_constantes", "constante",
  "constante_tabla", "lista_elemento_hash", "elemento_hash",
  "constante_estructurada", "campo_constante_lista",
  "lista_campo_constante", "campo_constante",
  "declaraciones_variables_opt", "declaraciones_variables",
  "declaracion_variables_lista", "declaracion_variables",
  "expresion_lista", "lista_declaracion_funcion", "declaracion_funcion",
  "firma_funcion", "parametros_lista", "expresion_constante_lista",
  "tipo_salida", "cuerpo_funcion", "bloque_instrucciones",
  "instruccion_lista", "instruccion", "instruccion_expresion",
  "asignacion", "operador_asignacion", "instruccion_bifurcacion",
  "lista_otro_caso", "otro_caso", "instruccion_bucle", "asignacion_lista",
  "instruccion_salto", "instruccion_destino_salto", "instruccion_devolver",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "clausulas", "clausulas_excepcion",
  "lista_clausula_excepcion_especifica", "clausula_excepcion_especifica",
  "clausula_excepcion_general", "clausula_defecto", "instruccion_vacia",
  "expresion_constante", "expresion_indexada", "expresion_basica",
  "indice", "expresion_funcional", "expresion", "expresion_unaria_prefijo",
  "expresion_potencia", "expresion_aritmetica", "expresion_numerica",
  "expresion_desplazamiento", "expresion_logica_binaria",
  "expresion_comparacion", "expresion_logica", 0
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
     335,   336,   337,   338,   339,    43,    45,    42,    47,    60,
      62,    38,    64,   124,    46,    59,   100,   102,    40,    41,
      58,    63,    94,    91,    93,   123,   125,   126,    33,   116
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
     185,   186,   186,   186,   186,   187,   187,   187,   187,   187,
     188,   188,   188,   188,   189,   189,   190,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   192,
     192,   192,   192,   193,   194,   194,   194,   195,   195,   196,
     196,   197,   197,   197,   198,   198,   198,   198,   198,   198,
     199,   199
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
       0,     1,     1,     1,     1,     1,     3,     3,     3,     2,
       1,     3,     2,     2,     3,     3,     4,     5,     1,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3
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
       0,     0,     0,     0,     0,     0,     0,   180,     0,   116,
     117,     0,   118,   119,   120,   121,   122,   123,   124,   125,
       0,   175,     0,     0,    69,    12,     0,    14,    49,     0,
       0,     0,    54,     0,    28,     0,     0,    22,     0,     0,
       0,   154,   198,     0,   158,     0,     0,     0,     0,   190,
     191,   192,   193,   194,   195,   196,   188,   165,   155,     0,
       0,     0,     0,     0,     0,     0,   183,     0,     0,     0,
     182,   114,   115,   128,   130,   139,   134,   138,   137,     0,
     135,   133,   141,   136,   132,   131,   140,     0,     0,     0,
       0,   179,   127,     0,    92,   103,     9,     0,    69,     0,
       0,    44,    53,    28,    39,    28,    45,    78,    77,    75,
      76,    84,     0,    79,    80,    41,    42,     0,    98,   199,
     200,   201,   202,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,     0,   160,   162,     0,   163,
     156,     0,     0,   100,     0,     0,     0,   152,     0,   153,
       0,   181,   177,   178,   176,     0,     0,   129,    28,     0,
     102,     0,    11,    92,    47,     0,     0,    51,    55,    40,
       0,     0,     0,     0,    88,    74,     0,   220,   218,   210,
     209,   217,   216,   206,   219,   221,   203,   207,   208,   204,
     205,   214,   215,   211,   212,   213,     0,     0,   169,   161,
       0,     0,   166,   164,     0,   186,    99,   159,     0,     0,
       0,   151,     0,   184,   185,   112,   111,   106,     0,     0,
       0,     0,    24,     0,    43,    50,     0,     0,    82,    83,
      86,    87,    81,    89,    97,     0,     0,     0,     0,     0,
     147,     0,     0,   145,    28,     0,   113,     0,    62,    58,
      24,    52,    91,     0,     0,   187,   167,   168,     0,     0,
       0,   143,   108,    28,    46,    66,    63,    64,    67,    68,
      65,     0,    59,    85,   189,   148,     0,     0,     0,     0,
     144,     0,   105,    69,   150,     0,     0,   142,   174,   173,
     171,   172,   107,   110,    61,   149,     0,   109,     0,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    34,    44,    97,     9,   188,    11,
      16,    17,    18,   129,    74,    75,    76,   316,    77,   119,
     266,   267,   121,   122,   123,   189,   349,   350,   371,   184,
      21,    27,    28,   202,   203,   271,   329,   204,   272,   273,
     274,    30,    31,    40,    41,   242,    42,    55,   114,   319,
     392,   317,   185,    56,    98,    99,   100,   101,   180,   102,
     361,   380,   103,   248,   104,   105,   106,   107,   108,   236,
     237,   238,   302,   303,   239,   109,   393,   110,   111,   181,
     112,   243,   139,   140,   141,   142,   143,   144,   145,   146
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -289
static const yytype_int16 yypact[] =
{
      21,    44,    34,    63,   275,    -5,  -289,  -289,   203,  -289,
      62,  -289,  -289,  -289,  -289,  -289,    76,   123,    69,   203,
      81,  -289,   215,  -289,  -289,    99,   119,   118,  -289,   203,
    -289,  -289,  -289,   121,  -289,  -289,   160,  -289,  -289,   146,
     200,  -289,    15,  -289,    30,     3,  1038,   157,  -289,    46,
    -289,  -289,  -289,   285,   164,  -289,  -289,  -289,   121,   155,
     171,  -289,  -289,   140,  -289,   108,   146,  -289,  -289,  -289,
    -289,    29,   146,   153,   138,  -289,  -289,  -289,   229,  -289,
    -289,  -289,   141,    19,   175,   147,   194,   175,   177,   218,
     179,     5,   190,   209,   180,    70,   190,   153,   303,  -289,
    -289,   185,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
     366,  -289,   188,   236,    62,   153,   195,  -289,  -289,   432,
      26,    11,  -289,   125,  -289,   271,    14,  -289,    25,  1038,
      12,  -289,  -289,    70,  -289,    70,    70,    70,   760,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,   -25,   274,  -289,   197,
     244,    70,   252,    70,   257,   190,  -289,   214,    70,   518,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,   -12,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,   190,    70,    70,
      70,  -289,  -289,    -2,    81,  -289,  -289,   121,    62,   217,
     272,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,   273,   228,  -289,  -289,  -289,  -289,    70,  -289,   884,
     831,   831,   831,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,  -289,   316,    70,   175,  -289,   274,    -6,  -289,
    -289,   230,    23,   831,   235,   571,   306,  -289,   110,  -289,
     586,  -289,  -289,  -289,  -289,   322,   159,   831,   282,   146,
    -289,   -50,   153,    81,  -289,   327,   247,   272,  -289,  -289,
     341,    -4,   -20,   -15,  -289,  -289,    67,   139,    28,   831,
     831,    28,    28,   952,    28,   139,   952,   884,   884,   937,
     937,    28,    28,   156,   156,   156,   301,   816,  -289,  -289,
     121,   317,  -289,  -289,    70,  -289,   831,  -289,   175,   255,
      70,  -289,   175,  -289,  -289,  -289,  -289,  -289,   172,   262,
      15,  1019,   203,    70,  -289,  -289,    25,   321,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,   337,    70,    45,   175,   639,
    -289,    70,   452,  -289,  -289,   326,  -289,   276,   415,  -289,
     102,   831,  -289,    25,    70,   831,  -289,  -289,   288,   692,
     190,     1,   363,   282,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,   164,  -289,  -289,   831,  -289,   175,   161,   281,   175,
    -289,   295,  -289,    62,  -289,   175,    70,  -289,  -289,  -289,
    -289,  -289,   295,  -289,  -289,  -289,   707,  -289,   175,  -289
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -289,  -289,  -289,  -289,  -289,   183,   -28,  -289,   380,  -289,
     368,  -289,   -19,   353,   -22,   270,  -289,   -77,   263,  -289,
     124,  -289,   323,   -75,   -33,    72,    47,  -289,  -289,    -3,
    -289,  -289,   367,  -288,  -289,  -289,  -289,  -289,  -289,  -289,
    -206,  -171,  -289,  -289,   356,   191,   144,  -289,    35,  -289,
    -289,    36,    17,   -83,  -289,   319,  -289,  -146,  -289,  -289,
    -289,  -289,  -289,    59,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,   186,  -289,    32,  -289,   -65,   251,
    -289,   -80,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -171
static const yytype_int16 yytable[] =
{
      26,   147,   130,   138,   150,    45,    49,    20,    26,   247,
      39,   327,   154,   260,    59,   159,    52,   207,    73,    73,
     132,    39,     1,    54,   132,    78,   378,   156,   270,   300,
     115,   160,   213,   270,    61,    62,    43,   233,   352,   258,
     197,   198,   199,   200,    -3,    58,   192,   194,   124,   321,
     234,   192,    64,   209,   301,   210,   211,   212,   -24,    48,
      92,    67,    48,     6,    68,   373,   331,   333,   132,   215,
     216,   132,    60,   245,    19,   125,    79,   379,   250,   330,
      53,    13,     5,    14,   332,    15,    95,   221,     2,    12,
      96,   178,   322,   179,    80,   328,   259,    69,   255,   256,
     257,    73,   311,   155,   252,   133,   208,   205,   191,   133,
      53,   196,   254,   134,    60,    23,   268,    25,   269,   229,
     230,   231,   305,   201,    57,    58,   135,   136,   137,    35,
     135,   136,   137,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   298,   133,   297,   193,   133,    37,    43,   262,
     213,   334,   306,   213,    29,    61,    62,    36,    13,    43,
      14,   -24,    15,    80,   135,   136,   137,   135,   136,   137,
     215,   216,    92,    64,    13,   263,    14,   214,    15,    13,
      47,    14,    67,    15,    48,    68,   306,   215,   216,   -60,
     215,   216,   344,   116,   120,    43,   217,   113,    95,    43,
     310,   218,    96,   219,   247,   221,    32,   220,   221,   117,
      80,   118,    60,   222,   339,   340,   318,    -4,    69,   343,
     342,   311,   127,    92,   128,   131,    71,   346,    43,    50,
      53,   148,   149,   351,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   152,   356,   357,   355,   157,    -4,    95,
     385,   359,    92,    96,    33,   314,    13,   362,    14,    13,
      15,    14,   337,    15,   374,   151,     7,   153,   158,   163,
      -4,    -4,   182,    -4,   183,    -4,    81,   -16,    95,   186,
     195,   240,    96,   384,   235,    -4,   387,   241,    -4,    82,
     244,    54,   395,   348,    81,   246,   396,    83,   249,    84,
     388,   389,   390,   391,   264,   399,    85,    82,   -16,    86,
     265,   270,   275,   296,  -170,    83,   213,    84,   304,   307,
      87,   348,   323,    88,    85,   309,    89,    86,    90,   315,
     -16,   -16,   161,   -16,   324,   -16,   326,    91,    87,   335,
     214,    88,   338,   341,    89,     8,    90,    92,   -16,    93,
      94,   345,   353,   215,   216,    91,   354,   363,   381,   217,
     261,   164,   165,   364,   218,    92,   219,    93,    94,   386,
     220,   221,   375,    95,    10,    24,   222,    96,    46,   166,
     190,   325,   206,   347,    38,   126,    51,   372,   276,   382,
     394,    95,   167,   168,   320,    96,   383,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   169,   162,   365,   377,
     253,   170,   171,   299,   397,     0,   313,   172,   366,   173,
       0,     0,     0,     7,     0,   -16,   367,     0,     0,   174,
       0,     0,     0,   175,   -16,   -16,     0,   368,     0,     0,
     176,     0,     0,   -16,     0,   369,   213,     0,     0,   370,
       0,     0,     0,     0,   -16,     0,     0,   177,     0,   178,
       0,   179,   -16,     0,     0,   -16,   -16,     0,     0,     0,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   215,   216,     0,     0,     0,   -16,   217,
     -16,     0,   -16,     0,   218,     0,   219,     0,     0,     0,
     220,   221,     8,     0,     0,   -16,   222,     0,     0,     0,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
     187,     0,     0,     0,     0,     0,     0,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   214,     0,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     0,     0,   215,
     216,     0,     0,     0,     0,   217,     0,     0,     0,     0,
     218,     0,   219,     0,     0,   213,   220,   221,     0,     0,
       0,     0,   222,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,   214,
       0,     0,     0,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   215,   216,   214,     0,     0,   251,   217,     0,
       0,     0,     0,   218,     0,   219,     0,   215,   216,   220,
     221,     0,     0,   217,     0,   222,     0,     0,   218,     0,
     219,     0,     0,   213,   220,   221,     0,     0,     0,     0,
     222,     0,     0,     0,     0,     0,   223,   224,   225,   226,
     227,   228,   229,   230,   231,     0,     0,   214,     0,     0,
     308,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     215,   216,     0,     0,     0,   312,   217,     0,     0,     0,
       0,   218,     0,   219,     0,     0,   213,   220,   221,     0,
       0,     0,     0,   222,     0,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   215,   216,   214,     0,     0,   358,   217,
       0,     0,     0,     0,   218,     0,   219,     0,   215,   216,
     220,   221,     0,     0,   217,     0,   222,     0,     0,   218,
       0,   219,     0,     0,   213,   220,   221,     0,     0,     0,
       0,   222,     0,     0,     0,     0,     0,   223,   224,   225,
     226,   227,   228,   229,   230,   231,     0,     0,   214,     0,
       0,   376,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   215,   216,     0,     0,     0,   398,   217,     0,     0,
       0,     0,   218,     0,   219,     0,     0,     0,   220,   221,
     213,     0,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,   214,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,     0,     0,   215,   216,   214,
       0,     0,     0,   217,     0,     0,     0,     0,   218,     0,
     219,     0,   215,   216,   220,   221,     0,     0,   217,     0,
     222,     0,     0,   218,     0,   219,     0,     0,   213,   220,
     221,     0,   336,     0,     0,   222,     0,     0,     0,     0,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
       0,     0,   214,     0,     0,     0,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   215,   216,     0,     0,     0,
       0,   217,     0,     0,     0,     0,   218,     0,   219,     0,
       0,   213,   220,   221,     0,     0,     0,     0,   222,     0,
       0,     0,     0,     0,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   225,   226,   227,   228,   229,   230,   231,   215,   216,
     214,     0,     0,     0,   217,     0,     0,     0,     0,   218,
       0,   219,     0,   215,   216,   220,   221,     0,     0,   217,
       0,   222,     0,     0,   218,     0,     0,     0,     0,     0,
     220,   221,     0,     0,     0,     0,   222,     0,     0,     0,
       7,     0,   -16,     0,     0,     0,   227,   228,   229,   230,
     231,   -16,   -16,     0,     0,     0,     0,     0,     0,     0,
     -16,   227,   228,   229,   230,   231,    61,    62,    63,     0,
       0,   -16,     0,     0,     0,     0,     0,     0,     0,   -16,
       0,     0,   -16,   -16,    64,    65,     0,     0,     0,     0,
       0,    66,     0,    67,     0,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,   -16,    43,   -16,     0,   -16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,   -16,     0,     0,     0,     0,     0,     0,    69,
      70,     0,     0,     0,     0,     0,     0,    71,     0,     0,
      72
};

static const yytype_int16 yycheck[] =
{
      19,    84,    79,    83,    87,    33,    39,    10,    27,   155,
      29,    15,     7,   184,    11,    95,     1,     5,    46,    47,
       1,    40,     1,    42,     1,    47,    25,    92,    48,    35,
      58,    96,     4,    48,     8,     9,    48,    62,   326,    41,
      15,    16,    17,    18,     0,    95,   121,   124,    19,    99,
      75,   126,    26,   133,    60,   135,   136,   137,    43,    48,
      72,    35,    48,     0,    38,   353,   272,   273,     1,    41,
      42,     1,    69,   153,    12,    46,    30,    76,   158,    99,
      65,    66,    48,    68,    99,    70,    98,    59,    67,    94,
     102,   103,   263,   105,    48,    99,    98,    71,   178,   179,
     180,   129,   248,    98,   169,    86,    94,   129,    97,    86,
      65,    97,   177,    94,    69,    39,   193,    48,   195,    91,
      92,    93,    99,    98,    94,    95,   107,   108,   109,    30,
     107,   108,   109,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   235,    86,   234,    30,    86,    39,    48,   187,
       4,    94,   242,     4,    83,     8,     9,    48,    66,    48,
      68,    48,    70,    48,   107,   108,   109,   107,   108,   109,
      41,    42,    72,    26,    66,   188,    68,    28,    70,    66,
      30,    68,    35,    70,    48,    38,   276,    41,    42,    97,
      41,    42,    30,    48,    96,    48,    47,    43,    98,    48,
     100,    52,   102,    54,   360,    59,     1,    58,    59,    48,
      48,    81,    69,    64,   304,   308,   259,    12,    71,   312,
     310,   377,    94,    72,     5,    94,    79,   320,    48,    39,
      65,    94,    48,   323,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    35,   337,   338,   336,    48,    43,    98,
      99,   341,    72,   102,    49,   106,    66,   344,    68,    66,
      70,    68,   300,    70,   354,    98,     1,    98,    98,    94,
      65,    66,    94,    68,    48,    70,     1,    12,    98,    94,
      19,    94,   102,   376,    20,    80,   379,    53,    83,    14,
      48,   320,   385,   322,     1,    48,   386,    22,    94,    24,
      15,    16,    17,    18,    97,   398,    31,    14,    43,    34,
      48,    48,    94,     7,    39,    22,     4,    24,    98,    94,
      45,   350,     5,    48,    31,    29,    51,    34,    53,    57,
      65,    66,    39,    68,    97,    70,     5,    62,    45,    48,
      28,    48,    35,    98,    51,    80,    53,    72,    83,    74,
      75,    99,    41,    41,    42,    62,    29,    41,     5,    47,
     187,     5,     6,    97,    52,    72,    54,    74,    75,    98,
      58,    59,    94,    98,     4,    17,    64,   102,    35,    23,
     120,   267,   129,   321,    27,    72,    40,   350,   207,   363,
     383,    98,    36,    37,   260,   102,   371,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    50,    98,     3,   360,
     169,    55,    56,   237,   392,    -1,   104,    61,    13,    63,
      -1,    -1,    -1,     1,    -1,     3,    21,    -1,    -1,    73,
      -1,    -1,    -1,    77,    12,    13,    -1,    32,    -1,    -1,
      84,    -1,    -1,    21,    -1,    40,     4,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    32,    -1,    -1,   101,    -1,   103,
      -1,   105,    40,    -1,    -1,    43,    44,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    66,    47,
      68,    -1,    70,    -1,    52,    -1,    54,    -1,    -1,    -1,
      58,    59,    80,    -1,    -1,    83,    64,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    28,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    -1,    -1,     4,    58,    59,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    41,    42,    28,    -1,    -1,    99,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    41,    42,    58,
      59,    -1,    -1,    47,    -1,    64,    -1,    -1,    52,    -1,
      54,    -1,    -1,     4,    58,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    -1,    28,    -1,    -1,
      99,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      41,    42,    -1,    -1,    -1,    99,    47,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    -1,     4,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    41,    42,    28,    -1,    -1,    99,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    41,    42,
      58,    59,    -1,    -1,    47,    -1,    64,    -1,    -1,    52,
      -1,    54,    -1,    -1,     4,    58,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    28,    -1,
      -1,    99,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    41,    42,    -1,    -1,    -1,    99,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    58,    59,
       4,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    41,    42,    28,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    -1,    41,    42,    58,    59,    -1,    -1,    47,    -1,
      64,    -1,    -1,    52,    -1,    54,    -1,    -1,     4,    58,
      59,    -1,    76,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    28,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    41,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      -1,     4,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    93,    41,    42,
      28,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    41,    42,    58,    59,    -1,    -1,    47,
      -1,    64,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
       1,    -1,     3,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    89,    90,    91,    92,    93,     8,     9,    10,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    43,    44,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    48,    68,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   111,   112,    48,     0,     1,    80,   117,
     118,   119,    94,    66,    68,    70,   120,   121,   122,    12,
     139,   140,   113,    39,   120,    48,   122,   141,   142,    83,
     151,   152,     1,    49,   114,    30,    48,    39,   142,   122,
     153,   154,   156,    48,   115,   116,   123,    30,    48,   134,
      39,   154,     1,    65,   122,   157,   163,    94,    95,    11,
      69,     8,     9,    10,    26,    27,    33,    35,    38,    71,
      72,    79,    82,   116,   124,   125,   126,   128,   124,    30,
      48,     1,    14,    22,    24,    31,    34,    45,    48,    51,
      53,    62,    72,    74,    75,    98,   102,   116,   164,   165,
     166,   167,   169,   172,   174,   175,   176,   177,   178,   185,
     187,   188,   190,    43,   158,   116,    48,    48,    81,   129,
      96,   132,   133,   134,    19,    46,   132,    94,     5,   123,
     127,    94,     1,    86,    94,   107,   108,   109,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   163,    94,    48,
     163,    98,    35,    98,     7,    98,   188,    48,    98,   191,
     188,    39,   165,    94,     5,     6,    23,    36,    37,    50,
      55,    56,    61,    63,    73,    77,    84,   101,   103,   105,
     168,   189,    94,    48,   139,   162,    94,    98,   118,   135,
     125,    97,   133,    30,   127,    19,    97,    15,    16,    17,
      18,    98,   143,   144,   147,   124,   128,     5,    94,   191,
     191,   191,   191,     4,    28,    41,    42,    47,    52,    54,
      58,    59,    64,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    62,    75,    20,   179,   180,   181,   184,
      94,    53,   155,   191,    48,   191,    48,   167,   173,    94,
     191,    99,   188,   189,   188,   191,   191,   191,    41,    98,
     151,   115,   116,   139,    97,    48,   130,   131,   127,   127,
      48,   145,   148,   149,   150,    94,   155,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,     7,   191,   163,   184,
      35,    60,   182,   183,    98,    99,   191,    94,    99,    29,
     100,   167,    99,   104,   106,    57,   127,   161,   134,   159,
     156,    99,   151,     5,    97,   130,     5,    15,    99,   146,
      99,   150,    99,   150,    94,    48,    76,   116,    35,   191,
     163,    98,   191,   163,    30,    99,   163,   135,   122,   136,
     137,   191,   143,    41,    29,   191,   163,   163,    99,   191,
     100,   170,   127,    41,    97,     3,    13,    21,    32,    40,
      44,   138,   136,   143,   191,    94,    99,   173,    25,    76,
     171,     5,   161,   158,   163,    99,    98,   163,    15,    16,
      17,    18,   160,   186,   162,   163,   191,   186,    99,   163
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
#line 34 "eazy.y"
    { printf("  ÉXITO: programa -> cabecera_programa bloque_programa\n"); ;}
    break;

  case 3:
#line 35 "eazy.y"
    { printf("  ERROR: programa -> error\n");yyerrok; ;}
    break;

  case 4:
#line 40 "eazy.y"
    { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); ;}
    break;

  case 5:
#line 41 "eazy.y"
    { printf("  ERROR: cabecera_programa -> error\n");yyerrok; ;}
    break;

  case 7:
#line 46 "eazy.y"
    { printf("  lista_librerias -> lista_librerias libreria\n"); ;}
    break;

  case 8:
#line 50 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre_lista .\n"); ;}
    break;

  case 9:
#line 51 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); ;}
    break;

  case 10:
#line 52 "eazy.y"
    { printf("  ERROR: libreria -> error\n");yyerrok; ;}
    break;

  case 11:
#line 58 "eazy.y"
    { printf("  lista_nombres -> nombre\n"); ;}
    break;

  case 12:
#line 59 "eazy.y"
    { printf("  lista_nombres -> lista_nombres ; nombre\n"); ;}
    break;

  case 13:
#line 63 "eazy.y"
    { printf("  nombre -> IDENTIFICADOR\n"); ;}
    break;

  case 14:
#line 64 "eazy.y"
    { printf("  nombre -> nombre PTOS IDENTIFICADOR\n"); ;}
    break;

  case 15:
#line 68 "eazy.y"
    { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); ;}
    break;

  case 18:
#line 79 "eazy.y"
    { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; ;}
    break;

  case 104:
#line 286 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 126:
#line 336 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 198:
#line 485 "eazy.y"
    { printf("  ERROR: expresion -> error\n");yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2124 "eazy.tab.c"
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


#line 536 "eazy.y"


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

