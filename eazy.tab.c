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
#define YYLAST   1003

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNRULES -- Number of states.  */
#define YYNSTATES  402

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
       2,     2,     2,    86,     2,     2,     2,     2,    92,     2,
     101,   102,    88,    90,     2,    91,    97,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   103,    98,
      95,     2,    96,   104,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   106,     2,   107,   105,     2,     2,     2,     2,     2,
      99,     2,   100,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    87,     2,     2,     2,
       2,     2,     2,   108,    94,   109,    85,     2,     2,     2,
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
     552,   554,   558,   561,   564,   568,   572,   577,   579,   581,
     583,   585,   587,   589,   591,   593,   595,   597,   599,   605,
     612,   615,   618,   621,   624,   628,   632,   636,   640,   644,
     648,   652,   656,   660,   664,   668,   672,   676,   680,   684,
     688,   692,   696
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     111,     0,    -1,   112,   117,    -1,     1,    -1,    67,    48,
      97,   113,    -1,     1,    -1,    -1,   113,   114,    -1,    49,
     115,    97,    -1,    49,   116,    11,    48,    97,    -1,     1,
      -1,   116,    -1,   115,    98,   116,    -1,    48,    -1,   116,
      69,    48,    -1,   118,   139,   151,   156,   163,    -1,    -1,
     119,    -1,     1,    -1,    80,   120,    39,    -1,   121,   120,
      -1,   121,    -1,   122,    48,    30,   123,   124,    97,    -1,
     122,    48,    30,   123,   128,    -1,    -1,    70,    -1,    68,
      -1,    66,    -1,    -1,   123,    72,    -1,   116,    -1,   125,
      -1,   126,    -1,    26,    -1,    71,    -1,     9,    -1,     8,
      -1,    38,    -1,    35,    -1,    79,    19,   127,    -1,    79,
      46,    19,   127,    -1,   123,   124,    -1,   123,   128,    -1,
      27,    99,   125,   130,   100,    -1,    33,   132,   100,    -1,
      82,   132,   100,    -1,    10,   129,   101,   115,   102,   135,
     100,    -1,    10,   129,   135,   100,    -1,    -1,    81,    -1,
     131,   130,    -1,   131,    -1,    48,     5,   191,    -1,   132,
     133,    -1,   133,    -1,   134,    30,   127,    -1,   134,    48,
      -1,    48,    -1,   118,   139,   151,   136,    -1,   137,   136,
      -1,   137,    -1,   122,   138,   158,   162,    -1,    -1,    13,
      -1,    21,    -1,    44,    -1,     3,    -1,    32,    -1,    40,
      -1,    -1,   140,    -1,    12,   141,    39,    -1,   141,   142,
      -1,   142,    -1,   122,    48,    30,   124,     5,   143,    97,
      -1,    17,    -1,    18,    -1,    16,    -1,    15,    -1,   144,
      -1,   147,    -1,   101,   149,   102,    -1,   101,   145,   102,
      -1,   145,   146,    -1,    -1,    15,    41,   143,    -1,   101,
     148,   102,    -1,   148,   150,    -1,   150,    -1,   149,   150,
      -1,    -1,    48,     5,   143,    -1,    -1,   152,    -1,    83,
     153,    39,    -1,   153,   154,    -1,   154,    -1,   122,   134,
      30,   127,     5,   155,    97,    -1,   122,   134,    30,   127,
      97,    -1,   155,   191,    -1,   191,    -1,   156,   157,    -1,
      -1,   122,   158,   162,    -1,     1,    -1,    43,    48,   101,
     159,   102,    41,   161,    -1,    43,    48,    41,   161,    -1,
     134,    30,   127,     5,   160,    -1,   134,    30,   127,    -1,
     160,   186,    -1,   186,    -1,   127,    -1,    57,    -1,   139,
     151,   156,   163,    -1,    65,   164,    39,    -1,   164,   165,
      -1,   165,    -1,   166,    -1,   169,    -1,   172,    -1,   174,
      -1,   175,    -1,   176,    -1,   177,    -1,   178,    -1,   185,
      -1,     1,    -1,   190,    97,    -1,   167,    97,    -1,   187,
     168,   191,    -1,     5,    -1,    77,    -1,    73,    -1,    56,
      -1,    23,    -1,    55,    -1,    63,    -1,    37,    -1,    36,
      -1,     6,    -1,    84,    -1,    61,    -1,    75,   101,   191,
     102,   163,   170,    76,   163,    -1,    75,   101,   191,   102,
     163,   170,    -1,   170,   171,    -1,    -1,    25,   101,   191,
     102,   163,    -1,    53,   101,   191,   102,   163,    -1,    45,
     163,    53,   101,   191,   102,    97,    -1,    62,   101,   173,
     103,   191,   103,   173,   102,   163,    -1,    62,     7,    48,
      29,   101,   191,   102,   163,    -1,   173,   167,    -1,   167,
      -1,    74,    48,    97,    -1,    14,    97,    -1,    31,    97,
      -1,    34,    48,    97,    -1,    22,   191,    97,    -1,    22,
      97,    -1,    51,    35,    48,    97,    -1,    24,   163,   179,
      -1,   180,   184,    -1,   180,    -1,   184,    -1,   181,   183,
      -1,    -1,   181,   182,    -1,    35,   116,   163,    -1,    60,
      35,   163,    -1,    20,   163,    -1,    -1,    17,    -1,    18,
      -1,    16,    -1,    15,    -1,   188,    -1,   187,   104,   188,
      -1,   187,    50,   188,    -1,   187,    50,   189,    -1,   187,
     189,    -1,   116,    -1,   101,   191,   102,    -1,   105,   188,
      -1,    72,   188,    -1,   106,   191,   107,    -1,   108,   191,
     109,    -1,    48,   101,   155,   102,    -1,   192,    -1,   201,
      -1,   193,    -1,   194,    -1,   195,    -1,   196,    -1,   197,
      -1,   198,    -1,   199,    -1,   200,    -1,     1,    -1,   201,
      75,   191,    76,   191,    -1,   201,    62,     7,    48,    29,
     191,    -1,    91,   191,    -1,    85,   191,    -1,    86,   191,
      -1,    87,   191,    -1,   191,    64,   191,    -1,   191,    88,
     191,    -1,   191,    89,   191,    -1,   191,    54,   191,    -1,
     191,    90,   191,    -1,   191,    91,   191,    -1,   191,    42,
     191,    -1,   191,    41,   191,    -1,   191,    92,   191,    -1,
     191,    93,   191,    -1,   191,    94,   191,    -1,   191,    95,
     191,    -1,   191,    96,   191,    -1,   191,    52,   191,    -1,
     191,    47,   191,    -1,   191,    28,   191,    -1,   191,    58,
     191,    -1,   191,     4,   191,    -1,   191,    59,   191,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    39,    44,    45,    48,    50,    54,    55,
      56,    62,    63,    67,    68,    72,    80,    82,    83,    86,
      90,    91,    95,    96,   100,   102,   103,   104,   107,   109,
     113,   114,   115,   118,   119,   120,   121,   122,   123,   127,
     128,   132,   133,   137,   138,   139,   140,   141,   144,   146,
     149,   150,   153,   157,   158,   162,   167,   168,   173,   177,
     178,   181,   184,   186,   187,   188,   189,   190,   191,   197,
     199,   202,   205,   206,   210,   214,   215,   216,   217,   218,
     219,   223,   224,   228,   229,   232,   236,   240,   241,   244,
     245,   249,   256,   258,   261,   265,   266,   270,   271,   276,
     277,   285,   286,   289,   290,   294,   295,   299,   300,   304,
     305,   308,   309,   313,   317,   326,   327,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   343,   344,   348,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   366,   367,   371,   372,   375,   379,   380,   381,
     382,   386,   387,   391,   392,   393,   397,   401,   402,   406,
     410,   414,   415,   416,   420,   422,   424,   427,   431,   435,
     438,   448,   449,   450,   451,   455,   456,   457,   458,   459,
     463,   464,   465,   466,   470,   471,   475,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   492,   496,
     500,   501,   502,   503,   507,   511,   512,   513,   517,   518,
     522,   523,   527,   528,   529,   533,   534,   535,   536,   537,
     538,   542,   543
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
  "XOR_ASIG", "'~'", "'!'", "'tamano'", "'*'", "'/'", "'+'", "'-'", "'&'",
  "'@'", "'|'", "'<'", "'>'", "'.'", "';'", "'de'", "'fin'", "'('", "')'",
  "':'", "'?'", "'^'", "'['", "']'", "'{'", "'}'", "$accept", "programa",
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
  "indice", "expresion_funcional", "expresion", "expresion_condicional",
  "expresion_para_cada", "expresion_unaria_prefijo", "expresion_potencia",
  "expresion_aritmetica", "expresion_numerica", "expresion_desplazamiento",
  "expresion_logica_binaria", "expresion_comparacion", "expresion_logica", 0
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
      43,    45,    38,    64,   124,    60,    62,    46,    59,   100,
     102,    40,    41,    58,    63,    94,    91,    93,   123,   125
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
     191,   191,   191,   191,   191,   191,   191,   191,   192,   193,
     194,   194,   194,   194,   195,   196,   196,   196,   197,   197,
     198,   198,   199,   199,   199,   200,   200,   200,   200,   200,
     200,   201,   201
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
       1,     3,     2,     2,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     6,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3
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
       0,   154,   197,     0,     0,     0,     0,   158,     0,   187,
     189,   190,   191,   192,   193,   194,   195,   196,   188,   165,
     155,     0,     0,     0,     0,     0,     0,     0,   183,     0,
       0,     0,   182,   114,   115,   128,   130,   139,   134,   138,
     137,     0,   135,   133,   141,   136,   132,   131,   140,     0,
       0,     0,     0,   179,   127,     0,    92,   103,     9,     0,
      69,     0,     0,    44,    53,    28,    39,    28,    45,    78,
      77,    75,    76,    84,     0,    79,    80,    41,    42,     0,
      98,   201,   202,   203,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,     0,     0,     0,   160,   162,
       0,   163,   156,     0,     0,   100,     0,     0,     0,   152,
       0,   153,     0,   181,   177,   178,   176,     0,     0,   129,
      28,     0,   102,     0,    11,    92,    47,     0,     0,    51,
      55,    40,     0,     0,     0,     0,    88,    74,     0,   221,
     219,   211,   210,   218,   217,   207,   220,   222,   204,   205,
     206,   208,   209,   212,   213,   214,   215,   216,     0,     0,
     169,   161,     0,     0,   166,   164,     0,   186,    99,   159,
       0,     0,     0,   151,     0,   184,   185,   112,   111,   106,
       0,     0,     0,     0,    24,     0,    43,    50,     0,     0,
      82,    83,    86,    87,    81,    89,    97,     0,     0,     0,
       0,     0,   147,     0,     0,   145,    28,     0,   113,     0,
      62,    58,    24,    52,    91,     0,     0,   198,   167,   168,
       0,     0,     0,   143,   108,    28,    46,    66,    63,    64,
      67,    68,    65,     0,    59,    85,   199,   148,     0,     0,
       0,     0,   144,     0,   105,    69,   150,     0,     0,   142,
     174,   173,   171,   172,   107,   110,    61,   149,     0,   109,
       0,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    34,    44,    97,     9,   190,    11,
      16,    17,    18,   129,    74,    75,    76,   318,    77,   119,
     268,   269,   121,   122,   123,   191,   351,   352,   373,   186,
      21,    27,    28,   204,   205,   273,   331,   206,   274,   275,
     276,    30,    31,    40,    41,   244,    42,    55,   114,   321,
     394,   319,   187,    56,    98,    99,   100,   101,   182,   102,
     363,   382,   103,   250,   104,   105,   106,   107,   108,   238,
     239,   240,   304,   305,   241,   109,   395,   110,   111,   183,
     112,   245,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -290
static const yytype_int16 yypact[] =
{
      17,    40,    24,    50,   906,   -30,  -290,  -290,   139,  -290,
      53,  -290,  -290,  -290,  -290,  -290,    74,   185,    48,   139,
       5,  -290,   840,  -290,  -290,   138,   127,   124,  -290,   139,
    -290,  -290,  -290,   141,  -290,  -290,   147,  -290,  -290,   149,
     260,  -290,   321,  -290,   137,    26,   921,   409,  -290,    12,
    -290,  -290,  -290,   240,   143,  -290,  -290,  -290,   141,   151,
     156,  -290,  -290,   121,  -290,   109,   149,  -290,  -290,  -290,
    -290,     3,   149,   145,   113,  -290,  -290,  -290,   211,  -290,
    -290,  -290,   133,    37,   175,   155,   194,   175,   158,   209,
     159,     2,   241,   217,   167,    93,   241,   145,   305,  -290,
    -290,   169,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
       8,  -290,   173,   224,    53,   145,   176,  -290,  -290,   372,
     165,    -7,  -290,    22,  -290,   256,    -2,  -290,   114,   921,
      11,  -290,  -290,    93,    93,    93,    93,  -290,   653,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,   -14,   258,
    -290,   184,   230,    93,   239,    93,   259,   241,  -290,   221,
      93,   425,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,   322,  -290,  -290,  -290,  -290,  -290,  -290,  -290,   241,
      93,    93,    93,  -290,  -290,   -24,     5,  -290,  -290,   141,
      53,   223,   276,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,   286,   243,  -290,  -290,  -290,  -290,    93,
    -290,   730,   730,   730,   154,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,  -290,   314,    93,   175,  -290,   258,
      -9,  -290,  -290,   236,    19,   730,   246,   481,   309,  -290,
     189,  -290,   501,  -290,  -290,  -290,  -290,   307,   129,   730,
     290,   149,  -290,    57,   145,     5,  -290,   346,   252,   276,
    -290,  -290,   350,    13,   -16,   -15,  -290,  -290,    75,   298,
      23,   803,   803,    15,    15,   786,    23,  -290,   730,   786,
     786,   154,   154,   807,    31,   273,    15,    15,   312,   710,
    -290,  -290,   141,   327,  -290,  -290,    93,  -290,   730,  -290,
     175,   262,    93,  -290,   175,  -290,  -290,  -290,  -290,  -290,
      49,   270,   321,   872,   139,    93,  -290,  -290,   114,   333,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,   347,    93,   100,
     175,   557,  -290,    93,   404,  -290,  -290,   337,  -290,   281,
     947,  -290,   216,   730,  -290,   114,    93,   730,  -290,  -290,
     285,   577,   241,    43,   378,   290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,   143,  -290,  -290,   730,  -290,   175,   195,
     287,   175,  -290,   486,  -290,    53,  -290,   175,    93,  -290,
    -290,  -290,  -290,  -290,   486,  -290,  -290,  -290,   633,  -290,
     175,  -290
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -290,  -290,  -290,  -290,  -290,   201,   -22,  -290,   388,  -290,
     390,  -290,   -19,   370,   -18,   289,  -290,   -77,   282,  -290,
     144,  -290,   348,   -64,   -32,    96,    69,  -290,  -290,    -5,
    -290,  -290,   395,  -289,  -290,  -290,  -290,  -290,  -290,  -290,
      35,  -174,  -290,  -290,   384,   222,   163,  -290,    60,  -290,
    -290,    61,    51,   -83,  -290,   336,  -290,  -151,  -290,  -290,
    -290,  -290,  -290,    77,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,  -290,   198,  -290,    47,  -290,   -62,   272,
    -290,   -80,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  -290
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -171
static const yytype_int16 yytable[] =
{
      26,   149,   130,   138,   152,    20,   249,    49,    26,   156,
      39,    45,   262,   166,   167,   161,   209,   260,     1,   215,
     132,    39,   124,    54,    73,    73,   302,   215,   329,    78,
     158,   168,   272,   272,   162,   215,   115,    59,   132,   354,
      -3,    48,    79,   216,   169,   170,    48,   196,   235,   125,
       6,   303,   195,   211,   212,   213,   214,   194,   171,   216,
      80,   236,   194,   172,   173,    19,   375,    12,   380,   174,
      80,   175,     5,   222,   223,   247,   132,   261,   219,   346,
     252,   176,   223,   220,     2,   177,   332,   334,    29,   222,
     223,   324,   178,   193,   132,    60,    25,    80,   198,   313,
     257,   258,   259,   157,   133,   134,   135,    73,   210,   254,
     136,   207,   179,    23,   180,   330,   181,   256,   270,   381,
     271,   307,   133,   134,   135,   231,   232,   233,   136,   199,
     200,   201,   202,   215,   137,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   300,    58,   299,   216,   215,   323,
     133,   134,   135,    37,   308,    53,   136,   264,    35,    60,
     217,   218,   336,    61,    62,    36,   219,    47,   133,   134,
     135,   220,   216,   221,   136,   265,   113,   222,   223,    43,
      13,    64,    14,   224,    15,   217,   218,    48,   308,   116,
      67,   219,   118,    68,   117,    13,   220,    14,   120,    15,
     127,   249,   222,   223,    60,   203,   128,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   341,   342,   313,   320,
     131,   345,   344,   -24,    57,    58,    69,    43,   316,   348,
      53,    81,   151,    43,   154,   353,   229,   230,   231,   232,
     233,    13,   150,    14,    82,    15,   358,   359,   357,   153,
     155,    92,    83,   361,    84,   159,   165,    92,   160,   364,
     184,    85,   185,   188,    86,   197,   376,   215,   237,  -170,
     339,   242,    13,   243,    14,    87,    15,   246,    88,    43,
      95,    89,   312,    90,    96,   386,    95,   387,   389,    50,
      96,   216,    91,    54,   397,   350,    81,   248,   398,   333,
     335,   215,    92,    92,    93,    94,   -60,   401,   251,    82,
     219,   298,    52,   266,   267,   220,    13,    83,    14,    84,
      15,   222,   223,   350,   272,   216,    85,   306,   311,    86,
     277,    95,    95,   309,   163,    96,    96,   317,   217,   218,
      87,   325,   326,    88,   219,   328,    89,   223,    90,   220,
     337,   221,   340,   343,   -24,   222,   223,    91,   232,   233,
      43,   224,   347,     7,   355,   -16,   356,    92,   365,    93,
      94,   366,   377,   383,   -16,   -16,    53,    13,   388,    14,
     263,    15,    10,   -16,    92,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   -16,    46,    95,    24,   215,   192,
      96,   208,   -16,   327,   315,   -16,   -16,    61,    62,   349,
     126,   374,    38,    95,    51,   322,   384,    96,   180,   215,
     181,   278,   216,   385,   164,    64,   396,   301,   -16,   379,
     -16,   399,   -16,   255,    67,   217,   218,    68,     0,     0,
       0,   219,     8,   216,     0,   -16,   220,    43,   221,     0,
       0,     0,   222,   223,     0,     0,   217,   218,   224,     0,
       0,     0,   219,   189,     0,     0,     0,   220,     0,   221,
      69,     0,     0,   222,   223,   215,     0,     0,    71,   224,
       0,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   390,   391,   392,   393,   215,     0,   362,     0,   216,
       0,     0,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   217,   218,     0,     0,     0,   253,   219,   216,
       0,     0,     0,   220,     0,   221,     0,     0,     0,   222,
     223,     0,   217,   218,     0,   224,     0,     0,   219,     0,
       0,     0,     0,   220,     0,   221,     0,     0,     0,   222,
     223,   215,     0,     0,     0,   224,     0,     0,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,     0,     0,
       0,   215,     0,   310,     0,   216,     0,     0,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   217,   218,
       0,     0,     0,   314,   219,   216,     0,     0,     0,   220,
       0,   221,     0,     0,     0,   222,   223,     0,   217,   218,
       0,   224,     0,     0,   219,     0,     0,     0,     0,   220,
       0,   221,     0,     0,     0,   222,   223,   215,     0,     0,
       0,   224,     0,     0,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,     0,     0,     0,   215,     0,   360,
       0,   216,     0,     0,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   217,   218,     0,     0,     0,   378,
     219,   216,     0,     0,     0,   220,     0,   221,     0,     0,
       0,   222,   223,     0,   217,   218,     0,   224,     0,     0,
     219,     0,     0,     0,     0,   220,     0,   221,     0,     0,
       0,   222,   223,     0,   215,     0,     0,   224,     0,     0,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
       0,     0,     0,     0,   215,   400,     0,     0,   216,     0,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   217,   218,     0,     0,     0,     0,   219,   216,     0,
       0,     0,   220,     0,   221,     0,     0,     0,   222,   223,
       0,   217,   218,     0,   224,     0,     0,   219,     0,     0,
       0,     0,   220,     0,   221,     0,   338,     0,   222,   223,
     215,     0,     0,     0,   224,     0,     0,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   215,     0,     0,
       0,   215,     0,     0,   216,     0,     0,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   217,   218,     0,
       0,   216,     0,   219,     0,   216,     0,     0,   220,     0,
       0,    32,     0,     0,   222,   223,     0,     0,     0,     0,
     219,     0,    -4,     0,   219,   220,     0,     0,     0,   220,
       0,   222,   223,     0,     0,   222,   223,     0,     0,     0,
       0,     0,     0,     7,     0,   -16,   227,   228,   229,   230,
     231,   232,   233,    -4,   -16,   -16,     0,     0,     0,    33,
       0,     0,     0,   -16,     0,   229,   230,   231,   232,   233,
     230,   231,   232,   233,   -16,    -4,    -4,     7,    -4,     0,
      -4,     0,   -16,     0,     0,   -16,   -16,     0,   -16,     0,
      -4,     0,     0,    -4,     0,     0,     0,     0,     0,    61,
      62,    63,     0,     0,     0,     0,     0,     0,   -16,     0,
     -16,     0,   -16,     0,     0,     0,     0,    64,    65,   -16,
     367,     0,     8,     0,    66,   -16,    67,     0,     0,    68,
     368,     0,     0,     0,     0,     0,     0,     0,   369,    43,
       0,   -16,   -16,     0,   -16,     0,   -16,     0,     0,   370,
       0,     0,     0,     0,     0,     0,     8,   371,     0,   -16,
       0,   372,    69,    70,     0,     0,     0,     0,     0,     0,
      71,     0,     0,    72
};

static const yytype_int16 yycheck[] =
{
      19,    84,    79,    83,    87,    10,   157,    39,    27,     7,
      29,    33,   186,     5,     6,    95,     5,    41,     1,     4,
       1,    40,    19,    42,    46,    47,    35,     4,    15,    47,
      92,    23,    48,    48,    96,     4,    58,    11,     1,   328,
       0,    48,    30,    28,    36,    37,    48,   124,    62,    46,
       0,    60,    30,   133,   134,   135,   136,   121,    50,    28,
      48,    75,   126,    55,    56,    12,   355,    97,    25,    61,
      48,    63,    48,    58,    59,   155,     1,   101,    47,    30,
     160,    73,    59,    52,    67,    77,   102,   102,    83,    58,
      59,   265,    84,   100,     1,    69,    48,    48,   100,   250,
     180,   181,   182,   101,    85,    86,    87,   129,    97,   171,
      91,   129,   104,    39,   106,   102,   108,   179,   195,    76,
     197,   102,    85,    86,    87,    94,    95,    96,    91,    15,
      16,    17,    18,     4,    97,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   237,    98,   236,    28,     4,   102,
      85,    86,    87,    39,   244,    65,    91,   189,    30,    69,
      41,    42,    97,     8,     9,    48,    47,    30,    85,    86,
      87,    52,    28,    54,    91,   190,    43,    58,    59,    48,
      66,    26,    68,    64,    70,    41,    42,    48,   278,    48,
      35,    47,    81,    38,    48,    66,    52,    68,    99,    70,
      97,   362,    58,    59,    69,   101,     5,    88,    89,    90,
      91,    92,    93,    94,    95,    96,   306,   310,   379,   261,
      97,   314,   312,    48,    97,    98,    71,    48,   109,   322,
      65,     1,    48,    48,    35,   325,    92,    93,    94,    95,
      96,    66,    97,    68,    14,    70,   339,   340,   338,   101,
     101,    72,    22,   343,    24,    48,    97,    72,   101,   346,
      97,    31,    48,    97,    34,    19,   356,     4,    20,    39,
     302,    97,    66,    53,    68,    45,    70,    48,    48,    48,
     101,    51,   103,    53,   105,   378,   101,   102,   381,    39,
     105,    28,    62,   322,   387,   324,     1,    48,   388,   274,
     275,     4,    72,    72,    74,    75,   100,   400,    97,    14,
      47,     7,     1,   100,    48,    52,    66,    22,    68,    24,
      70,    58,    59,   352,    48,    28,    31,   101,    29,    34,
      97,   101,   101,    97,    39,   105,   105,    57,    41,    42,
      45,     5,   100,    48,    47,     5,    51,    59,    53,    52,
      48,    54,    35,   101,    43,    58,    59,    62,    95,    96,
      48,    64,   102,     1,    41,     3,    29,    72,    41,    74,
      75,   100,    97,     5,    12,    13,    65,    66,   101,    68,
     189,    70,     4,    21,    72,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    32,    35,   101,    17,     4,   120,
     105,   129,    40,   269,   107,    43,    44,     8,     9,   323,
      72,   352,    27,   101,    40,   262,   365,   105,   106,     4,
     108,   209,    28,   373,    98,    26,   385,   239,    66,   362,
      68,   394,    70,   171,    35,    41,    42,    38,    -1,    -1,
      -1,    47,    80,    28,    -1,    83,    52,    48,    54,    -1,
      -1,    -1,    58,    59,    -1,    -1,    41,    42,    64,    -1,
      -1,    -1,    47,   101,    -1,    -1,    -1,    52,    -1,    54,
      71,    -1,    -1,    58,    59,     4,    -1,    -1,    79,    64,
      -1,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    15,    16,    17,    18,     4,    -1,   103,    -1,    28,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    41,    42,    -1,    -1,    -1,   102,    47,    28,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    58,
      59,    -1,    41,    42,    -1,    64,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    58,
      59,     4,    -1,    -1,    -1,    64,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    -1,
      -1,     4,    -1,   102,    -1,    28,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    41,    42,
      -1,    -1,    -1,   102,    47,    28,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    58,    59,    -1,    41,    42,
      -1,    64,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    58,    59,     4,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    -1,    -1,     4,    -1,   102,
      -1,    28,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    41,    42,    -1,    -1,    -1,   102,
      47,    28,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    58,    59,    -1,    41,    42,    -1,    64,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    58,    59,    -1,     4,    -1,    -1,    64,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,     4,   102,    -1,    -1,    28,    -1,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    41,    42,    -1,    -1,    -1,    -1,    47,    28,    -1,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    58,    59,
      -1,    41,    42,    -1,    64,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    -1,    76,    -1,    58,    59,
       4,    -1,    -1,    -1,    64,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     4,    -1,    -1,
      -1,     4,    -1,    -1,    28,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    41,    42,    -1,
      -1,    28,    -1,    47,    -1,    28,    -1,    -1,    52,    -1,
      -1,     1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      47,    -1,    12,    -1,    47,    52,    -1,    -1,    -1,    52,
      -1,    58,    59,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    90,    91,    92,    93,
      94,    95,    96,    43,    12,    13,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    21,    -1,    92,    93,    94,    95,    96,
      93,    94,    95,    96,    32,    65,    66,     1,    68,    -1,
      70,    -1,    40,    -1,    -1,    43,    44,    -1,    12,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    -1,    70,    -1,    -1,    -1,    -1,    26,    27,    43,
       3,    -1,    80,    -1,    33,    83,    35,    -1,    -1,    38,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    48,
      -1,    65,    66,    -1,    68,    -1,    70,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    40,    -1,    83,
      -1,    44,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   111,   112,    48,     0,     1,    80,   117,
     118,   119,    97,    66,    68,    70,   120,   121,   122,    12,
     139,   140,   113,    39,   120,    48,   122,   141,   142,    83,
     151,   152,     1,    49,   114,    30,    48,    39,   142,   122,
     153,   154,   156,    48,   115,   116,   123,    30,    48,   134,
      39,   154,     1,    65,   122,   157,   163,    97,    98,    11,
      69,     8,     9,    10,    26,    27,    33,    35,    38,    71,
      72,    79,    82,   116,   124,   125,   126,   128,   124,    30,
      48,     1,    14,    22,    24,    31,    34,    45,    48,    51,
      53,    62,    72,    74,    75,   101,   105,   116,   164,   165,
     166,   167,   169,   172,   174,   175,   176,   177,   178,   185,
     187,   188,   190,    43,   158,   116,    48,    48,    81,   129,
      99,   132,   133,   134,    19,    46,   132,    97,     5,   123,
     127,    97,     1,    85,    86,    87,    91,    97,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   163,
      97,    48,   163,   101,    35,   101,     7,   101,   188,    48,
     101,   191,   188,    39,   165,    97,     5,     6,    23,    36,
      37,    50,    55,    56,    61,    63,    73,    77,    84,   104,
     106,   108,   168,   189,    97,    48,   139,   162,    97,   101,
     118,   135,   125,   100,   133,    30,   127,    19,   100,    15,
      16,    17,    18,   101,   143,   144,   147,   124,   128,     5,
      97,   191,   191,   191,   191,     4,    28,    41,    42,    47,
      52,    54,    58,    59,    64,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    62,    75,    20,   179,   180,
     181,   184,    97,    53,   155,   191,    48,   191,    48,   167,
     173,    97,   191,   102,   188,   189,   188,   191,   191,   191,
      41,   101,   151,   115,   116,   139,   100,    48,   130,   131,
     127,   127,    48,   145,   148,   149,   150,    97,   155,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,     7,   191,
     163,   184,    35,    60,   182,   183,   101,   102,   191,    97,
     102,    29,   103,   167,   102,   107,   109,    57,   127,   161,
     134,   159,   156,   102,   151,     5,   100,   130,     5,    15,
     102,   146,   102,   150,   102,   150,    97,    48,    76,   116,
      35,   191,   163,   101,   191,   163,    30,   102,   163,   135,
     122,   136,   137,   191,   143,    41,    29,   191,   163,   163,
     102,   191,   103,   170,   127,    41,   100,     3,    13,    21,
      32,    40,    44,   138,   136,   143,   191,    97,   102,   173,
      25,    76,   171,     5,   161,   158,   163,   102,   101,   163,
      15,    16,    17,    18,   160,   186,   162,   163,   191,   186,
     102,   163
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
#line 38 "eazy.y"
    { printf("  ÉXITO: programa -> cabecera_programa bloque_programa\n"); ;}
    break;

  case 3:
#line 39 "eazy.y"
    { printf("  ERROR: programa -> error\n");yyerrok; ;}
    break;

  case 4:
#line 44 "eazy.y"
    { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); ;}
    break;

  case 5:
#line 45 "eazy.y"
    { printf("  ERROR: cabecera_programa -> error\n");yyerrok; ;}
    break;

  case 7:
#line 50 "eazy.y"
    { printf("  lista_librerias -> lista_librerias libreria\n"); ;}
    break;

  case 8:
#line 54 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre_lista .\n"); ;}
    break;

  case 9:
#line 55 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); ;}
    break;

  case 10:
#line 56 "eazy.y"
    { printf("  ERROR: libreria -> error\n");yyerrok; ;}
    break;

  case 11:
#line 62 "eazy.y"
    { printf("  lista_nombres -> nombre\n"); ;}
    break;

  case 12:
#line 63 "eazy.y"
    { printf("  lista_nombres -> lista_nombres ; nombre\n"); ;}
    break;

  case 13:
#line 67 "eazy.y"
    { printf("  nombre -> IDENTIFICADOR\n"); ;}
    break;

  case 14:
#line 68 "eazy.y"
    { printf("  nombre -> nombre PTOS IDENTIFICADOR\n"); ;}
    break;

  case 15:
#line 72 "eazy.y"
    { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); ;}
    break;

  case 18:
#line 83 "eazy.y"
    { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; ;}
    break;

  case 104:
#line 290 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 126:
#line 340 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 197:
#line 488 "eazy.y"
    { printf("  ERROR: expresion -> error\n");yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2105 "eazy.tab.c"
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


#line 547 "eazy.y"


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

