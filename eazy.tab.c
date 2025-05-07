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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   443

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNRULES -- Number of states.  */
#define YYNSTATES  420

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
       0,     0,     3,     6,    11,    12,    15,    19,    25,    27,
      31,    33,    37,    43,    44,    46,    50,    53,    55,    62,
      68,    69,    71,    73,    75,    76,    79,    81,    83,    85,
      87,    89,    91,    93,    95,    97,   101,   106,   109,   112,
     118,   122,   126,   134,   139,   140,   142,   146,   148,   152,
     156,   158,   162,   166,   168,   173,   176,   178,   183,   184,
     186,   188,   190,   192,   194,   196,   197,   199,   202,   204,
     208,   216,   218,   220,   222,   224,   226,   228,   231,   235,
     239,   241,   245,   249,   251,   255,   259,   263,   265,   269,
     270,   272,   276,   279,   281,   289,   295,   298,   299,   303,
     311,   316,   320,   322,   328,   332,   334,   338,   340,   342,
     347,   351,   354,   356,   358,   360,   362,   364,   366,   368,
     370,   372,   374,   377,   380,   384,   386,   388,   390,   392,
     394,   396,   398,   400,   402,   404,   406,   408,   417,   424,
     427,   428,   434,   440,   448,   458,   467,   471,   473,   477,
     480,   483,   487,   491,   494,   499,   503,   506,   508,   510,
     513,   514,   517,   521,   525,   528,   530,   534,   538,   540,
     546,   553,   555,   559,   561,   565,   569,   573,   575,   579,
     583,   587,   591,   593,   597,   599,   603,   605,   609,   611,
     613,   617,   621,   623,   627,   631,   633,   637,   641,   645,
     647,   651,   654,   657,   660,   663,   665,   667,   669,   671,
     676,   677,   679,   683,   685,   687,   691,   695,   699,   702,
     704,   708,   711,   714,   716,   718,   720
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   109,   114,    -1,    67,    48,    85,   110,
      -1,    -1,   110,   111,    -1,    49,   112,    85,    -1,    49,
     113,    11,    48,    85,    -1,   113,    -1,   112,    86,   113,
      -1,    48,    -1,   113,    69,    48,    -1,   115,   136,   148,
     152,   160,    -1,    -1,   116,    -1,    80,   117,    39,    -1,
     118,   117,    -1,   118,    -1,   119,    48,    30,   120,   121,
      85,    -1,   119,    48,    30,   120,   125,    -1,    -1,    70,
      -1,    68,    -1,    66,    -1,    -1,   120,    72,    -1,   113,
      -1,   122,    -1,   123,    -1,    26,    -1,    71,    -1,     9,
      -1,     8,    -1,    38,    -1,    35,    -1,    79,    19,   124,
      -1,    79,    46,    19,   124,    -1,   120,   121,    -1,   120,
     125,    -1,    27,    19,   122,   127,    39,    -1,    33,   129,
      39,    -1,    82,   129,    39,    -1,    10,   126,    87,   112,
      88,   132,    39,    -1,    10,   126,   132,    39,    -1,    -1,
      81,    -1,   128,    86,   127,    -1,   128,    -1,    48,     5,
     184,    -1,   130,    86,   129,    -1,   130,    -1,   131,    30,
     124,    -1,   131,    86,    48,    -1,    48,    -1,   115,   136,
     148,   133,    -1,   134,   133,    -1,   134,    -1,   119,   135,
     154,   159,    -1,    -1,    13,    -1,    21,    -1,    44,    -1,
       3,    -1,    32,    -1,    40,    -1,    -1,   138,    -1,   137,
     139,    -1,   139,    -1,    12,   137,    39,    -1,   119,    48,
      30,   121,     5,   140,    85,    -1,    17,    -1,    18,    -1,
      16,    -1,    15,    -1,   141,    -1,   145,    -1,    87,    88,
      -1,    87,   142,    88,    -1,    87,   143,    88,    -1,   140,
      -1,   140,    86,   142,    -1,   144,    86,   143,    -1,   144,
      -1,    15,    41,   140,    -1,    87,   146,    88,    -1,   146,
      86,   147,    -1,   147,    -1,    48,     5,   140,    -1,    -1,
     149,    -1,    83,   150,    39,    -1,   150,   151,    -1,   151,
      -1,   119,   131,    30,   124,     5,   200,    85,    -1,   119,
     131,    30,   124,    85,    -1,   152,   153,    -1,    -1,   119,
     154,   159,    -1,    43,    48,    87,   155,    88,    41,   158,
      -1,    43,    48,    41,   158,    -1,   155,    89,   156,    -1,
     156,    -1,   131,    30,   124,     5,   157,    -1,   131,    30,
     124,    -1,   203,    -1,   203,    86,   157,    -1,   124,    -1,
      57,    -1,   136,   148,   152,   160,    -1,    65,   161,    39,
      -1,   161,   162,    -1,   162,    -1,   163,    -1,   166,    -1,
     169,    -1,   171,    -1,   172,    -1,   173,    -1,   174,    -1,
     175,    -1,   182,    -1,   198,    85,    -1,   164,    85,    -1,
     201,   165,   184,    -1,     5,    -1,    77,    -1,    73,    -1,
      56,    -1,    23,    -1,    55,    -1,    63,    -1,    37,    -1,
      36,    -1,     6,    -1,    84,    -1,    61,    -1,    75,    87,
     184,    88,   160,   167,    76,   160,    -1,    75,    87,   184,
      88,   160,   167,    -1,   167,   168,    -1,    -1,    25,    87,
     184,    88,   160,    -1,    53,    87,   184,    88,   160,    -1,
      45,   160,    53,    87,   184,    88,    85,    -1,    62,    87,
     170,    89,   184,    89,   170,    88,   160,    -1,    62,     7,
      48,    29,    87,   184,    88,   160,    -1,   170,    86,   164,
      -1,   164,    -1,    74,    48,    85,    -1,    14,    85,    -1,
      31,    85,    -1,    34,    48,    85,    -1,    22,   184,    85,
      -1,    22,    85,    -1,    51,    35,    48,    85,    -1,    24,
     160,   176,    -1,   177,   181,    -1,   177,    -1,   181,    -1,
     178,   180,    -1,    -1,   178,   179,    -1,    35,   113,   160,
      -1,    60,    35,   160,    -1,    20,   160,    -1,    86,    -1,
      90,   184,    91,    -1,    92,   184,    93,    -1,   185,    -1,
     185,    75,   184,    76,   184,    -1,   185,    62,     7,    48,
      29,   184,    -1,   186,    -1,   185,    59,   186,    -1,   187,
      -1,   186,     4,   187,    -1,   188,    28,   188,    -1,   188,
      58,   188,    -1,   188,    -1,   189,    94,   189,    -1,   189,
      95,   189,    -1,   189,    52,   189,    -1,   189,    47,   189,
      -1,   189,    -1,   190,    96,   190,    -1,   190,    -1,   191,
      97,   191,    -1,   191,    -1,   192,    98,   192,    -1,   192,
      -1,   193,    -1,   192,    42,   193,    -1,   192,    41,   193,
      -1,   194,    -1,   193,    99,   194,    -1,   193,   100,   194,
      -1,   195,    -1,   194,   101,   195,    -1,   194,   102,   195,
      -1,   194,    54,   195,    -1,   196,    -1,   196,    64,   195,
      -1,   100,   197,    -1,   103,   197,    -1,   104,   197,    -1,
      78,   197,    -1,   197,    -1,   198,    -1,   201,    -1,   203,
      -1,    48,    87,   199,    88,    -1,    -1,   200,    -1,   200,
      86,   184,    -1,   184,    -1,   202,    -1,   201,   105,   202,
      -1,   201,    50,   202,    -1,   201,    50,   183,    -1,   201,
     183,    -1,   113,    -1,    87,   184,    88,    -1,   106,   202,
      -1,    72,   202,    -1,    17,    -1,    18,    -1,    16,    -1,
      15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    32,    35,    37,    41,    42,    48,    49,
      53,    54,    58,    66,    68,    71,    75,    76,    80,    81,
      85,    87,    88,    89,    92,    94,    98,    99,   100,   103,
     104,   105,   106,   107,   108,   112,   113,   117,   118,   122,
     123,   124,   125,   126,   129,   131,   134,   135,   138,   142,
     143,   147,   152,   153,   158,   162,   163,   166,   169,   171,
     172,   173,   174,   175,   176,   182,   184,   187,   188,   191,
     196,   200,   201,   202,   203,   204,   205,   209,   210,   211,
     215,   216,   221,   222,   225,   229,   233,   234,   238,   245,
     247,   250,   254,   255,   259,   260,   270,   271,   274,   278,
     279,   283,   284,   288,   289,   293,   294,   298,   299,   303,
     307,   316,   317,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   332,   333,   337,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   355,   356,   360,
     361,   364,   368,   369,   370,   371,   375,   376,   380,   381,
     382,   386,   390,   391,   395,   399,   403,   404,   405,   409,
     411,   413,   416,   420,   424,   428,   438,   439,   443,   444,
     445,   448,   449,   451,   452,   456,   457,   458,   462,   463,
     464,   465,   466,   470,   471,   475,   476,   480,   481,   485,
     486,   487,   490,   491,   492,   496,   497,   498,   499,   503,
     504,   508,   509,   510,   511,   512,   515,   516,   517,   520,
     522,   524,   527,   528,   532,   533,   534,   535,   536,   540,
     541,   542,   543,   546,   547,   548,   549
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
  "expresion_lista", "expresion_indexada", "expresion_basica",
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
     335,   336,   337,   338,   339,    46,    59,    40,    41,    58,
      91,    93,   123,   125,    60,    62,   124,    64,    38,    43,
      45,    42,    47,   126,    33,    63,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   115,   115,   116,   117,   117,   118,   118,
     119,   119,   119,   119,   120,   120,   121,   121,   121,   122,
     122,   122,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   129,
     129,   130,   131,   131,   132,   133,   133,   134,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   137,   137,   138,
     139,   140,   140,   140,   140,   140,   140,   141,   141,   141,
     142,   142,   143,   143,   144,   145,   146,   146,   147,   148,
     148,   149,   150,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     160,   161,   161,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   163,   163,   164,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   166,   167,
     167,   168,   169,   169,   169,   169,   170,   170,   171,   171,
     171,   172,   173,   173,   174,   175,   176,   176,   176,   177,
     178,   178,   179,   180,   181,   182,   183,   183,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   187,   188,   188,
     188,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   192,   193,   193,   193,   194,   194,   194,   194,   195,
     195,   196,   196,   196,   196,   196,   197,   197,   197,   198,
     199,   199,   200,   200,   201,   201,   201,   201,   201,   202,
     202,   202,   202,   203,   203,   203,   203
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     0,     2,     3,     5,     1,     3,
       1,     3,     5,     0,     1,     3,     2,     1,     6,     5,
       0,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     2,     2,     5,
       3,     3,     7,     4,     0,     1,     3,     1,     3,     3,
       1,     3,     3,     1,     4,     2,     1,     4,     0,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     3,
       7,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     0,
       1,     3,     2,     1,     7,     5,     2,     0,     3,     7,
       4,     3,     1,     5,     3,     1,     3,     1,     1,     4,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     8,     6,     2,
       0,     5,     5,     7,     9,     8,     3,     1,     3,     2,
       2,     3,     3,     2,     4,     3,     2,     1,     1,     2,
       0,     2,     3,     3,     2,     1,     3,     3,     1,     5,
       6,     1,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     2,     2,     2,     2,     1,     1,     1,     1,     4,
       0,     1,     3,     1,     1,     3,     3,     3,     2,     1,
       3,     2,     2,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    13,     0,     1,    20,     2,    65,    14,
       4,    23,    22,    21,     0,    17,     0,    20,    89,    66,
       3,    15,    16,     0,     0,    20,    68,    20,    97,    90,
       0,     5,    24,     0,    69,    67,     0,    20,    93,    20,
      10,     0,     8,     0,     0,    53,     0,    91,    92,     0,
       0,    96,    12,     6,     0,     0,     0,    32,    31,    44,
      29,     0,     0,    34,    33,    30,    25,     0,     0,    26,
       0,    27,    28,    19,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
     165,     0,     0,   219,     0,   112,   113,     0,   114,   115,
     116,   117,   118,   119,   120,   121,     0,     0,   214,     0,
      65,     9,     0,    11,    45,    13,     0,     0,    50,     0,
      24,     0,     0,    18,     0,     0,     0,    52,   149,   226,
     225,   223,   224,     0,   153,     0,     0,     0,     0,   168,
     171,   173,   177,   182,   184,   186,   188,   189,   192,   195,
     199,   205,   206,   207,   208,   160,   150,     0,     0,   210,
       0,     0,     0,     0,   222,     0,     0,     0,   221,   110,
     111,   123,   122,   125,   134,   129,   133,   132,     0,   130,
     128,   136,   131,   127,   126,   135,     0,     0,     0,     0,
     218,     0,    89,    98,     7,     0,    65,     0,     0,    40,
       0,    24,    35,    24,    41,    74,    73,    71,    72,     0,
       0,    75,    76,    37,    38,     0,    95,   204,   201,   202,
     203,   152,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,   157,     0,   158,   151,     0,
     213,     0,   211,     0,     0,     0,   147,     0,   148,     0,
     220,   217,   216,     0,     0,   215,   124,    24,     0,    97,
       0,     8,    89,    43,     0,     0,    47,    49,    51,    36,
      74,     0,    77,    80,     0,     0,    83,     0,    87,    70,
       0,   172,     0,     0,   174,   175,   176,   181,   180,   178,
     179,   183,   185,   191,   190,   187,   193,   194,   198,   196,
     197,   200,   164,   156,     0,     0,   161,   159,     0,   209,
       0,   154,     0,     0,     0,     0,     0,   166,   167,   108,
     107,   100,     0,     0,   102,    20,    13,    20,     0,    39,
       0,     0,     0,     0,    78,    79,     0,     0,    85,    94,
       0,     0,     0,     0,     0,   212,   142,     0,   146,     0,
     140,    24,     0,     0,   109,     0,    58,    54,    20,    48,
      46,    84,    88,    81,     0,    82,    86,     0,   169,   162,
     163,     0,     0,     0,   138,   104,    24,   101,    42,    62,
      59,    60,    63,    64,    61,     0,    55,   170,   143,     0,
       0,     0,     0,   139,     0,    99,    65,   145,     0,     0,
     137,   103,   105,    57,   144,     0,     0,     0,   106,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    20,    31,    41,    93,     7,   196,     9,
      14,    15,    16,   125,    70,    71,    72,   330,    73,   115,
     275,   276,   117,   118,   119,   197,   367,   368,   395,   192,
      25,    19,    26,   283,   211,   284,   285,   286,   212,   287,
     288,    28,    29,    37,    38,    39,    51,   110,   333,   334,
     411,   331,   193,    52,    94,    95,    96,    97,   189,    98,
     384,   403,    99,   257,   100,   101,   102,   103,   104,   244,
     245,   246,   316,   317,   247,   105,   190,   250,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   251,   252,   153,   108,   154
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -338
static const yytype_int16 yypact[] =
{
     -24,    15,    77,   -11,    28,  -338,   188,  -338,    87,  -338,
    -338,  -338,  -338,  -338,    89,   237,   109,   188,    90,  -338,
     130,  -338,  -338,   154,   141,   194,  -338,   188,  -338,  -338,
     148,  -338,  -338,   187,  -338,  -338,   178,   245,  -338,   155,
    -338,    56,    12,   300,   243,  -338,    -4,  -338,  -338,   132,
     185,  -338,  -338,  -338,   148,   201,   205,  -338,  -338,   161,
    -338,   240,   178,  -338,  -338,  -338,  -338,    98,   178,   203,
     209,  -338,  -338,  -338,   268,  -338,   231,   213,   183,   223,
     215,   242,   223,   214,   269,   219,    11,   -12,   264,   230,
    -338,   193,   -12,   203,   116,  -338,  -338,   234,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,   238,    47,  -338,   280,
      87,   203,   244,  -338,  -338,    49,    24,   286,   251,    18,
    -338,   312,   301,  -338,    22,   300,    16,  -338,  -338,  -338,
    -338,  -338,  -338,    13,  -338,    13,    13,    13,   256,   100,
     338,  -338,    14,    -6,   248,   249,    23,    82,    69,  -338,
     285,  -338,  -338,    43,  -338,   330,  -338,   279,   313,   193,
     317,   193,   319,   -12,  -338,   283,   193,   281,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,   -14,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,   193,   193,   -12,   193,
    -338,     3,    90,  -338,  -338,   148,    87,   331,   325,  -338,
     178,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,    39,
     289,  -338,  -338,  -338,  -338,   193,  -338,  -338,  -338,  -338,
    -338,  -338,   193,   368,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   223,  -338,   330,    83,  -338,  -338,   290,
    -338,   288,   292,   295,   293,   354,  -338,   -15,  -338,   296,
    -338,  -338,  -338,   294,   297,  -338,  -338,   329,   178,  -338,
      65,   203,    90,  -338,   382,   349,   303,  -338,  -338,  -338,
     350,   387,  -338,   307,   306,   308,   309,    72,  -338,  -338,
     101,   338,   351,   321,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,    82,    82,   151,    69,    69,  -338,  -338,
    -338,  -338,  -338,  -338,   148,   363,  -338,  -338,   193,  -338,
     193,  -338,   223,   314,   -12,   193,   223,  -338,  -338,  -338,
    -338,  -338,    36,   146,  -338,   155,   -11,   188,   193,  -338,
     325,    22,    22,    22,  -338,  -338,   385,   355,  -338,  -338,
     373,   193,   -20,   223,   316,  -338,  -338,   193,  -338,   318,
    -338,  -338,   364,   178,  -338,   367,   192,  -338,   277,  -338,
    -338,  -338,  -338,  -338,   350,  -338,  -338,   193,  -338,  -338,
    -338,   323,   322,   -12,    -8,   404,   329,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,   185,  -338,  -338,  -338,   223,
      86,   324,   223,  -338,   337,  -338,    87,  -338,   223,   193,
    -338,  -338,   326,  -338,  -338,   327,   337,   223,  -338,  -338
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,  -338,  -338,  -338,   218,   -19,  -338,   411,  -338,
     401,  -338,   -17,   386,   -29,   304,  -338,   -69,   298,  -338,
      81,  -338,   -55,  -338,   -31,    88,    51,  -338,  -338,     1,
    -338,  -338,   392,  -112,  -338,    84,    76,  -338,  -338,  -338,
      78,  -165,  -338,  -338,   389,   159,  -338,    34,  -338,    67,
      17,    45,    26,   -78,  -338,   340,  -338,  -156,  -338,  -338,
    -338,  -338,  -338,    52,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,   191,  -338,   259,   -75,  -338,   216,
     217,    20,   128,   207,   208,   204,     5,    29,   121,  -338,
      79,    31,  -338,   228,   -47,   -73,  -337
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -57
static const yytype_int16 yytable[] =
{
      24,   155,   107,   138,   158,    46,   126,   256,    24,    18,
      36,    42,   210,   122,   164,    74,   167,   401,   162,   168,
      36,   215,    50,    55,    69,    69,    75,   269,   129,   130,
     131,   132,    57,    58,    40,   111,    40,   205,   206,   207,
     208,   228,   226,     1,   267,    49,   229,   107,   201,    56,
      60,   202,   173,   174,   280,   206,   207,   208,    87,    63,
      87,    83,    64,     4,   234,   235,   361,   412,   402,     6,
     175,   324,   227,    91,   325,    91,   186,     5,   187,   412,
     106,    56,    76,   176,   177,    87,   254,   281,   230,   231,
     268,   259,    92,   178,    92,    65,   213,   178,   163,    17,
      91,   216,   179,   180,    76,   262,    69,   337,   181,   209,
     182,   263,   264,    10,   266,   265,   107,   120,   314,    92,
     183,   236,    76,   239,   184,   106,   209,   282,    21,     6,
      77,   185,   278,   186,   279,   187,   195,   186,    78,   187,
      79,    53,    54,   315,   121,   277,    77,    80,   188,   293,
      81,    54,   188,   336,    78,   169,    79,    23,   347,   222,
     348,    82,   223,    80,    83,   312,    81,    84,   358,    85,
     240,   241,   324,    27,   408,   224,   271,    82,    86,    30,
      83,   237,   238,    84,    32,    85,   349,   320,    87,    33,
      88,    89,   234,   235,    86,   389,    40,   272,   129,   130,
     131,   132,    90,    91,    87,   390,    88,    89,   129,   130,
     131,   132,   217,   391,   218,   219,   220,    44,    90,    91,
      49,    11,    92,    12,   392,    13,    45,   256,   109,   371,
     372,    83,   393,    34,   362,   363,   394,   332,    92,   303,
     304,    83,   114,   354,   356,   355,   295,   296,   360,   112,
     359,    57,    58,   113,    11,    87,    12,   364,    13,   116,
      11,   133,    12,   369,    13,    87,   306,   307,   134,    60,
      91,   133,    56,   124,   379,   380,   378,   107,    63,   127,
      91,    64,   382,   135,    47,   -20,   136,   137,    49,    92,
     157,    40,   385,   135,   123,   352,   136,   137,   128,    92,
     156,   159,   397,    11,   160,    12,   161,    13,    57,    58,
      59,    11,   165,    12,    65,    13,   -56,   166,    50,   171,
     366,   407,    67,   172,   410,   199,    60,    61,   191,   194,
     414,   203,   332,    62,   415,    63,   107,   200,    64,   419,
     204,   221,   225,    11,   232,    12,   233,    13,    40,   242,
     243,   366,   129,   130,   131,   132,   297,   298,   299,   300,
     308,   309,   310,   311,   248,   253,   249,   255,   258,   260,
     273,    65,    66,   274,   289,   292,   319,   318,   320,    67,
     321,   322,    68,   323,   326,   327,   329,   338,   339,   340,
     328,   341,   342,   343,   344,   346,   345,   351,   353,   350,
     374,   357,   377,   281,   381,   386,   388,   383,   398,   404,
     399,   409,   416,   270,     8,   417,    22,    35,    43,   396,
     198,   370,   375,   214,   365,   376,    48,   373,   335,   406,
     387,   405,   413,   418,   170,   400,   313,   261,   291,   301,
     305,   302,   294,   290
};

static const yytype_uint16 yycheck[] =
{
      17,    79,    49,    78,    82,    36,    75,   163,    25,     8,
      27,    30,   124,    68,    87,    44,    91,    25,     7,    92,
      37,     5,    39,    11,    43,    44,    30,   192,    15,    16,
      17,    18,     8,     9,    48,    54,    48,    15,    16,    17,
      18,    47,    28,    67,    41,    65,    52,    94,    30,    69,
      26,   120,     5,     6,    15,    16,    17,    18,    72,    35,
      72,    48,    38,    48,    41,    42,    30,   404,    76,    80,
      23,    86,    58,    87,    89,    87,    90,     0,    92,   416,
      49,    69,    86,    36,    37,    72,   161,    48,    94,    95,
      87,   166,   106,    50,   106,    71,   125,    50,    87,    12,
      87,    85,    55,    56,    86,   178,   125,   272,    61,    87,
      63,   186,   187,    85,   189,   188,   163,    19,    35,   106,
      73,    98,    86,    54,    77,    94,    87,    88,    39,    80,
      14,    84,   201,    90,   203,    92,    87,    90,    22,    92,
      24,    85,    86,    60,    46,   200,    14,    31,   105,   224,
      34,    86,   105,    88,    22,    39,    24,    48,    86,    59,
      88,    45,    62,    31,    48,   243,    34,    51,   324,    53,
     101,   102,    86,    83,    88,    75,   195,    45,    62,    49,
      48,    99,   100,    51,    30,    53,    85,    86,    72,    48,
      74,    75,    41,    42,    62,     3,    48,   196,    15,    16,
      17,    18,    86,    87,    72,    13,    74,    75,    15,    16,
      17,    18,   133,    21,   135,   136,   137,    30,    86,    87,
      65,    66,   106,    68,    32,    70,    48,   383,    43,   341,
     342,    48,    40,    39,    88,    89,    44,   268,   106,   234,
     235,    48,    81,   318,   322,   320,   226,   227,   326,    48,
     325,     8,     9,    48,    66,    72,    68,   335,    70,    19,
      66,    78,    68,   338,    70,    72,   237,   238,    85,    26,
      87,    78,    69,     5,   352,   353,   351,   324,    35,    48,
      87,    38,   357,   100,    39,    48,   103,   104,    65,   106,
      48,    48,   361,   100,    85,   314,   103,   104,    85,   106,
      85,    87,   377,    66,    35,    68,    87,    70,     8,     9,
      10,    66,    48,    68,    71,    70,    39,    87,   335,    85,
     337,   399,    79,    85,   402,    39,    26,    27,    48,    85,
     408,    19,   363,    33,   409,    35,   383,    86,    38,   417,
      39,    85,     4,    66,    96,    68,    97,    70,    48,    64,
      20,   368,    15,    16,    17,    18,   228,   229,   230,   231,
     239,   240,   241,   242,    85,    48,    53,    48,    85,    88,
      39,    71,    72,    48,    85,     7,    88,    87,    86,    79,
      85,    88,    82,    29,    88,    91,    57,     5,    39,    86,
      93,    41,     5,    86,    88,    86,    88,    76,    35,    48,
      15,    87,    29,    48,    88,    41,    39,    89,    85,     5,
      88,    87,    86,   195,     3,    88,    15,    25,    32,   368,
     116,   340,   346,   125,   336,   347,    37,   343,   269,   395,
     363,   386,   406,   416,    94,   383,   245,   178,   222,   232,
     236,   233,   225,   215
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,   108,   109,    48,     0,    80,   114,   115,   116,
      85,    66,    68,    70,   117,   118,   119,    12,   136,   138,
     110,    39,   117,    48,   119,   137,   139,    83,   148,   149,
      49,   111,    30,    48,    39,   139,   119,   150,   151,   152,
      48,   112,   113,   120,    30,    48,   131,    39,   151,    65,
     119,   153,   160,    85,    86,    11,    69,     8,     9,    10,
      26,    27,    33,    35,    38,    71,    72,    79,    82,   113,
     121,   122,   123,   125,   121,    30,    86,    14,    22,    24,
      31,    34,    45,    48,    51,    53,    62,    72,    74,    75,
      86,    87,   106,   113,   161,   162,   163,   164,   166,   169,
     171,   172,   173,   174,   175,   182,   198,   201,   202,    43,
     154,   113,    48,    48,    81,   126,    19,   129,   130,   131,
      19,    46,   129,    85,     5,   120,   124,    48,    85,    15,
      16,    17,    18,    78,    85,   100,   103,   104,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   201,   203,   160,    85,    48,   160,    87,
      35,    87,     7,    87,   202,    48,    87,   184,   202,    39,
     162,    85,    85,     5,     6,    23,    36,    37,    50,    55,
      56,    61,    63,    73,    77,    84,    90,    92,   105,   165,
     183,    48,   136,   159,    85,    87,   115,   132,   122,    39,
      86,    30,   124,    19,    39,    15,    16,    17,    18,    87,
     140,   141,   145,   121,   125,     5,    85,   197,   197,   197,
     197,    85,    59,    62,    75,     4,    28,    58,    47,    52,
      94,    95,    96,    97,    41,    42,    98,    99,   100,    54,
     101,   102,    64,    20,   176,   177,   178,   181,    85,    53,
     184,   199,   200,    48,   184,    48,   164,   170,    85,   184,
      88,   183,   202,   184,   184,   202,   184,    41,    87,   148,
     112,   113,   136,    39,    48,   127,   128,   129,   124,   124,
      15,    48,    88,   140,   142,   143,   144,   146,   147,    85,
     200,   186,     7,   184,   187,   188,   188,   189,   189,   189,
     189,   190,   191,   193,   193,   192,   194,   194,   195,   195,
     195,   195,   160,   181,    35,    60,   179,   180,    87,    88,
      86,    85,    88,    29,    86,    89,    88,    91,    93,    57,
     124,   158,   131,   155,   156,   152,    88,   148,     5,    39,
      86,    41,     5,    86,    88,    88,    86,    86,    88,    85,
      48,    76,   113,    35,   184,   184,   160,    87,   164,   184,
     160,    30,    88,    89,   160,   132,   119,   133,   134,   184,
     127,   140,   140,   142,    15,   143,   147,    29,   184,   160,
     160,    88,   184,    89,   167,   124,    41,   156,    39,     3,
      13,    21,    32,    40,    44,   135,   133,   184,    85,    88,
     170,    25,    76,   168,     5,   158,   154,   160,    88,    87,
     160,   157,   203,   159,   160,   184,    86,    88,   157,   160
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
#line 32 "eazy.y"
    { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); ;}
    break;

  case 5:
#line 37 "eazy.y"
    { printf("  lista_librerias -> lista_librerias libreria\n"); ;}
    break;

  case 6:
#line 41 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre_lista .\n"); ;}
    break;

  case 7:
#line 42 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); ;}
    break;

  case 8:
#line 48 "eazy.y"
    { printf("  lista_nombres -> nombre\n"); ;}
    break;

  case 9:
#line 49 "eazy.y"
    { printf("  lista_nombres -> lista_nombres ; nombre\n"); ;}
    break;

  case 10:
#line 53 "eazy.y"
    { printf("  nombre -> IDENTIFICADOR\n"); ;}
    break;

  case 11:
#line 54 "eazy.y"
    { printf("  nombre -> nombre PTOS IDENTIFICADOR\n"); ;}
    break;

  case 12:
#line 58 "eazy.y"
    { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); ;}
    break;

  case 14:
#line 68 "eazy.y"
    { printf("  declaraciones_tipos_opt -> declaraciones_tipos\n");yyerrok; ;}
    break;

  case 15:
#line 71 "eazy.y"
    { printf("  declaraciones_tipos -> TIPOS declaraciones_tipo_lista FIN\n");yyerrok; ;}
    break;

  case 16:
#line 75 "eazy.y"
    { printf("  declaraciones_tipo_lista -> declaracion_tipo declaraciones_tipo_lista\n"); ;}
    break;

  case 17:
#line 76 "eazy.y"
    { printf("  declaraciones_tipo_lista -> declaracion_tipo\n"); ;}
    break;

  case 18:
#line 80 "eazy.y"
    { printf("  declaracion_tipo -> visibilidad_opt IDENTIFICADOR ES lista_ref tipo_basico .\n"); ;}
    break;

  case 19:
#line 81 "eazy.y"
    { printf("  declaracion_tipo -> visibilidad_opt IDENTIFICADOR ES lista_ref tipo_estructurado\n"); ;}
    break;

  case 21:
#line 87 "eazy.y"
    { printf("  visibilidad_opt -> PUBLICO\n"); ;}
    break;

  case 22:
#line 88 "eazy.y"
    { printf("  visibilidad_opt -> PROTEGIDO\n"); ;}
    break;

  case 23:
#line 89 "eazy.y"
    { printf("  visibilidad_opt -> PRIVADO\n"); ;}
    break;

  case 25:
#line 94 "eazy.y"
    { printf("  lista_ref -> lista_ref REF\n"); ;}
    break;

  case 26:
#line 98 "eazy.y"
    { printf("  tipo_basico -> nombre\n"); ;}
    break;

  case 27:
#line 99 "eazy.y"
    { printf("  tipo_basico -> tipo_escalar\n"); ;}
    break;

  case 28:
#line 100 "eazy.y"
    { printf("  tipo_basico -> tipo_tabla\n"); ;}
    break;

  case 29:
#line 103 "eazy.y"
    { printf("  tipo_escalar -> ENTERO\n"); ;}
    break;

  case 30:
#line 104 "eazy.y"
    { printf("  tipo_escalar -> REAL\n"); ;}
    break;

  case 31:
#line 105 "eazy.y"
    { printf("  tipo_escalar -> CARACTER\n"); ;}
    break;

  case 32:
#line 106 "eazy.y"
    { printf("  tipo_escalar -> CADENA\n"); ;}
    break;

  case 33:
#line 107 "eazy.y"
    { printf("  tipo_escalar -> FICHERO\n"); ;}
    break;

  case 34:
#line 108 "eazy.y"
    { printf("  tipo_escalar -> EXCEPCION\n"); ;}
    break;

  case 35:
#line 112 "eazy.y"
    { printf("  tipo_tabla -> TABLA DE especificacion_tipo\n"); ;}
    break;

  case 36:
#line 113 "eazy.y"
    { printf("  tipo_tabla -> TABLA HASH DE especificacion_tipo\n"); ;}
    break;

  case 37:
#line 117 "eazy.y"
    { printf("  especificacion_tipo -> lista_ref tipo_basico\n"); ;}
    break;

  case 38:
#line 118 "eazy.y"
    { printf("  especificacion_tipo -> lista_ref tipo_estructurado\n"); ;}
    break;

  case 39:
#line 122 "eazy.y"
    { printf("  tipo_estructurado -> ENUMERACION DE tipo_escalar elemento_num_lista FIN\n"); ;}
    break;

  case 40:
#line 123 "eazy.y"
    { printf("  tipo_estructurado -> ESTRUCTURA linea_campo_lista FIN\n"); ;}
    break;

  case 41:
#line 124 "eazy.y"
    { printf("  tipo_estructurado -> UNION linea_campo_lista FIN\n"); ;}
    break;

  case 42:
#line 125 "eazy.y"
    { printf("  tipo_estructurado -> CLASE ultima_opt '(' nombre_lista ')' componentes FIN\n"); ;}
    break;

  case 43:
#line 126 "eazy.y"
    { printf("  tipo_estructurado -> CLASE ultima_opt componentes FIN\n"); ;}
    break;

  case 45:
#line 131 "eazy.y"
    { printf("  ultima_opt -> ULTIMA\n"); ;}
    break;

  case 46:
#line 134 "eazy.y"
    { printf("  elemento_num_lista -> elemento_enum ; elemento_num_lista\n"); ;}
    break;

  case 47:
#line 135 "eazy.y"
    { printf("  elemento_num_lista -> elemento_enum\n"); ;}
    break;

  case 48:
#line 138 "eazy.y"
    { printf("  elemento_enum -> IDENTIFICADOR ASIG expresion\n"); ;}
    break;

  case 49:
#line 142 "eazy.y"
    { printf("  linea_campo_lista -> linea_campo ; linea_campo_lista\n"); ;}
    break;

  case 50:
#line 143 "eazy.y"
    { printf("  linea_campo_lista -> linea_campo\n"); ;}
    break;

  case 51:
#line 147 "eazy.y"
    { printf("  linea_campo -> identificador_lista ES especificacion_tipo\n"); ;}
    break;

  case 52:
#line 152 "eazy.y"
    { printf("  identificador_lista -> identificador_lista ; IDENTIFICADOR\n"); ;}
    break;

  case 53:
#line 153 "eazy.y"
    { printf("  identificador_lista -> IDENTIFICADOR\n"); ;}
    break;

  case 54:
#line 158 "eazy.y"
    { printf("  componentes -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt declaracion_metodo_lista\n"); ;}
    break;

  case 55:
#line 162 "eazy.y"
    { printf("  declaracion_metodo_lista -> declaracion_metodo declaracion_metodo_lista\n"); ;}
    break;

  case 56:
#line 163 "eazy.y"
    { printf("  declaracion_metodo_lista -> declaracion_metodo\n"); ;}
    break;

  case 57:
#line 166 "eazy.y"
    { printf("  declaracion_metodo -> visibilidad_opt modificador_opt firma_funcion cuerpo_funcion\n"); ;}
    break;

  case 59:
#line 171 "eazy.y"
    { printf("  modificador_opt -> CONSTRUCTOR\n"); ;}
    break;

  case 60:
#line 172 "eazy.y"
    { printf("  modificador_opt -> DESTRUCTOR\n"); ;}
    break;

  case 61:
#line 173 "eazy.y"
    { printf("  modificador_opt -> GENERICO\n"); ;}
    break;

  case 62:
#line 174 "eazy.y"
    { printf("  modificador_opt -> ABSTRACTO\n"); ;}
    break;

  case 63:
#line 175 "eazy.y"
    { printf("  modificador_opt -> ESPECIFICO\n"); ;}
    break;

  case 64:
#line 176 "eazy.y"
    { printf("  modificador_opt -> FINAL\n"); ;}
    break;

  case 66:
#line 184 "eazy.y"
    { printf("  declaraciones_constantes_opt -> declaraciones_constantes\n"); ;}
    break;

  case 67:
#line 187 "eazy.y"
    { printf("  declaraciones_constantes_lista -> declaraciones_constantes_lista declaracion_constantes\n"); ;}
    break;

  case 68:
#line 188 "eazy.y"
    { printf("  declaraciones_constantes_lista -> declaracion_constantes\n"); ;}
    break;

  case 69:
#line 191 "eazy.y"
    { printf("  declaraciones_constantes -> CONSTANTES declaraciones_constantes_lista FIN\n"); ;}
    break;

  case 70:
#line 196 "eazy.y"
    { printf("  declaracion_constantes -> visibilidad_opt IDENTIFICADOR ES tipo_basico ASIG constante .\n"); ;}
    break;

  case 71:
#line 200 "eazy.y"
    { printf("  constante -> CTC_ENTERA\n"); ;}
    break;

  case 72:
#line 201 "eazy.y"
    { printf("  constante -> CTC_REAL\n"); ;}
    break;

  case 73:
#line 202 "eazy.y"
    { printf("  constante -> CTC_CARACTER\n"); ;}
    break;

  case 74:
#line 203 "eazy.y"
    { printf("  constante -> CTC_CADENA\n"); ;}
    break;

  case 75:
#line 204 "eazy.y"
    { printf("  constante -> constante_tabla\n"); ;}
    break;

  case 76:
#line 205 "eazy.y"
    { printf("  constante -> constante_estructurada\n"); ;}
    break;

  case 78:
#line 210 "eazy.y"
    { printf("  constante -> '(' lista_constante ')'\n"); ;}
    break;

  case 79:
#line 211 "eazy.y"
    { printf("  constante -> '(' lista_elemento_hash ')'\n"); ;}
    break;

  case 81:
#line 216 "eazy.y"
    { printf("  lista_constante -> constante ; lista_constante\n"); ;}
    break;

  case 82:
#line 221 "eazy.y"
    { printf("  lista_elemento_hash -> elemento_hash ; lista_elemento_hash\n"); ;}
    break;

  case 83:
#line 222 "eazy.y"
    { printf("  lista_elemento_hash -> elemento_hash\n"); ;}
    break;

  case 84:
#line 225 "eazy.y"
    { printf("  elemento_hash -> CTC_CADENA FLECHA_DCHA constante\n"); ;}
    break;

  case 85:
#line 229 "eazy.y"
    { printf("  constante -> '(' campo_constante_lista ')'\n"); ;}
    break;

  case 86:
#line 233 "eazy.y"
    { printf("  campo_constante_lista -> campo_constante_lista ; campo_constante\n"); ;}
    break;

  case 87:
#line 234 "eazy.y"
    { printf("  campo_constante_lista -> campo_constante\n"); ;}
    break;

  case 88:
#line 238 "eazy.y"
    { printf("  campo_constante -> IDENTIFICADOR ASIG constante\n"); ;}
    break;

  case 90:
#line 247 "eazy.y"
    { printf("  declaraciones_variables_opt -> declaraciones_variables\n"); ;}
    break;

  case 91:
#line 250 "eazy.y"
    { printf("  declaraciones_variables -> VARIABLES declaracion_variables_lista FIN\n"); ;}
    break;

  case 92:
#line 254 "eazy.y"
    { printf("  declaracion_variables_lista -> declaracion_variables_lista declaracion_variables\n"); ;}
    break;

  case 93:
#line 255 "eazy.y"
    { printf("  declaracion_variables_lista -> declaracion_variables\n"); ;}
    break;

  case 94:
#line 259 "eazy.y"
    { printf("  declaracion_variables -> visibilidad_opt identificador_lista ES especificacion_tipo ASIG expresion_lista .\n"); ;}
    break;

  case 95:
#line 260 "eazy.y"
    { printf("  declaracion_variables -> visibilidad_opt identificador_lista ES especificacion_tipo .\n"); ;}
    break;

  case 96:
#line 270 "eazy.y"
    { printf("  lista_declaracion_funcion -> lista_declaracion_funcion declaracion_funcion\n"); ;}
    break;

  case 98:
#line 274 "eazy.y"
    { printf("  declaracion_funcion -> visibilidad_opt firma_funcion cuerpo_funcion\n"); ;}
    break;

  case 99:
#line 278 "eazy.y"
    { printf("  firma_funcion -> FUNCION IDENTIFICADOR '(' parametros_lista ')' FLECHA_DCHA tipo_salida\n"); ;}
    break;

  case 100:
#line 279 "eazy.y"
    { printf("  firma_funcion -> FUNCION IDENTIFICADOR FLECHA_DCHA tipo_salida\n"); ;}
    break;

  case 101:
#line 283 "eazy.y"
    { printf("  parametros_lista -> parametros_lista : parametros\n"); ;}
    break;

  case 102:
#line 284 "eazy.y"
    { printf("  parametros_lista -> parametros\n"); ;}
    break;

  case 103:
#line 288 "eazy.y"
    { printf("  parametros -> identificador_lista ES especificacion_tipo ASIG expresion_constante_lista\n"); ;}
    break;

  case 104:
#line 289 "eazy.y"
    { printf("  parametros -> identificador_lista ES especificacion_tipo\n"); ;}
    break;

  case 105:
#line 293 "eazy.y"
    { printf("  expresion_constante_lista -> expresion_constante\n"); ;}
    break;

  case 106:
#line 294 "eazy.y"
    { printf("  expresion_constante_lista -> expresion_constante ; expresion_constante_lista\n"); ;}
    break;

  case 107:
#line 298 "eazy.y"
    { printf("  tipo_salida -> especificacion_tipo\n"); ;}
    break;

  case 108:
#line 299 "eazy.y"
    { printf("  tipo_salida -> NADA\n"); ;}
    break;

  case 109:
#line 303 "eazy.y"
    { printf("  cuerpo_funcion -> declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion bloque_instrucciones\n"); ;}
    break;

  case 110:
#line 307 "eazy.y"
    { printf("  bloque_instrucciones -> PRINCIPIO instruccion_lista FIN\n"); ;}
    break;

  case 111:
#line 316 "eazy.y"
    { printf("  instruccion_lista -> instruccion_lista instruccion\n"); ;}
    break;

  case 112:
#line 317 "eazy.y"
    { printf("  instruccion_lista -> instruccion\n"); ;}
    break;

  case 113:
#line 321 "eazy.y"
    { printf("  instruccion -> instruccion_expresion\n"); ;}
    break;

  case 114:
#line 322 "eazy.y"
    { printf("  instruccion -> instruccion_bifurcacion\n"); ;}
    break;

  case 115:
#line 323 "eazy.y"
    { printf("  instruccion -> instruccion_bucle\n"); ;}
    break;

  case 116:
#line 324 "eazy.y"
    { printf("  instruccion -> instruccion_salto\n"); ;}
    break;

  case 117:
#line 325 "eazy.y"
    { printf("  instruccion -> instruccion_destino_salto\n"); ;}
    break;

  case 118:
#line 326 "eazy.y"
    { printf("  instruccion -> instruccion_devolver\n"); ;}
    break;

  case 119:
#line 327 "eazy.y"
    { printf("  instruccion -> instruccion_lanzamiento_excepcion\n"); ;}
    break;

  case 120:
#line 328 "eazy.y"
    { printf("  instruccion -> instruccion_captura_excepcion\n"); ;}
    break;

  case 121:
#line 329 "eazy.y"
    { printf("  instruccion -> instruccion_vacia\n"); ;}
    break;

  case 122:
#line 332 "eazy.y"
    { printf("  instruccion_expresion -> expresion_funcional .\n"); ;}
    break;

  case 123:
#line 333 "eazy.y"
    { printf("  instruccion_expresion -> asignacion .\n"); ;}
    break;

  case 124:
#line 337 "eazy.y"
    { printf("  asignacion -> expresion_indexada operador_asignacion expresion\n"); ;}
    break;

  case 125:
#line 341 "eazy.y"
    { printf("  operador_asignacion -> ASIG\n"); ;}
    break;

  case 126:
#line 342 "eazy.y"
    { printf("  operador_asignacion -> SUMA_ASIG\n"); ;}
    break;

  case 127:
#line 343 "eazy.y"
    { printf("  operador_asignacion -> RESTA_ASIG\n"); ;}
    break;

  case 128:
#line 344 "eazy.y"
    { printf("  operador_asignacion -> MULT_ASIG\n"); ;}
    break;

  case 129:
#line 345 "eazy.y"
    { printf("  operador_asignacion -> DIV_ASIG\n"); ;}
    break;

  case 130:
#line 346 "eazy.y"
    { printf("  operador_asignacion -> MOD_ASIG\n"); ;}
    break;

  case 131:
#line 347 "eazy.y"
    { printf("  operador_asignacion -> POT_ASIG\n"); ;}
    break;

  case 132:
#line 348 "eazy.y"
    { printf("  operador_asignacion -> FI_ASIG\n"); ;}
    break;

  case 133:
#line 349 "eazy.y"
    { printf("  operador_asignacion -> FD_ASIG\n"); ;}
    break;

  case 134:
#line 350 "eazy.y"
    { printf("  operador_asignacion -> AND_ASIG\n"); ;}
    break;

  case 135:
#line 351 "eazy.y"
    { printf("  operador_asignacion -> XOR_ASIG\n"); ;}
    break;

  case 136:
#line 352 "eazy.y"
    { printf("  operador_asignacion -> OR_ASIG\n"); ;}
    break;

  case 137:
#line 355 "eazy.y"
    { printf("  instruccion_bifurcacion -> SI '(' expresion ')' bloque_instrucciones lista_otro_caso SINO bloque_instrucciones\n"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2542 "eazy.tab.c"
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
