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
#define YYLAST   434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNRULES -- Number of states.  */
#define YYNSTATES  351

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
       2,     2,     2,   103,     2,     2,     2,     2,   105,     2,
      93,    94,    87,    85,     2,    86,    89,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    95,    90,
     108,     2,   109,    96,   106,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    98,     2,    99,    97,     2,     2,     2,     2,     2,
      91,     2,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   104,     2,     2,     2,
       2,     2,     2,   100,   107,   101,   102,     2,     2,     2,
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
     592,   594,   598
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     111,     0,    -1,   112,   117,    -1,     1,    -1,    67,    48,
      89,   113,    -1,     1,    -1,    -1,   113,   114,    -1,    49,
     115,    89,    -1,    49,   116,    11,    48,    89,    -1,     1,
      -1,   116,    -1,   115,    90,   116,    -1,    48,    -1,   116,
      69,    48,    -1,   118,   139,   151,   156,   163,    -1,    -1,
     119,    -1,     1,    -1,    80,   120,    39,    -1,   121,   120,
      -1,   121,    -1,   122,    48,    30,   123,   124,    89,    -1,
     122,    48,    30,   123,   128,    -1,    -1,    70,    -1,    68,
      -1,    66,    -1,    -1,   123,    72,    -1,   116,    -1,   125,
      -1,   126,    -1,    26,    -1,    71,    -1,     9,    -1,     8,
      -1,    38,    -1,    35,    -1,    79,    19,   127,    -1,    79,
      46,    19,   127,    -1,   123,   124,    -1,   123,   128,    -1,
      27,    91,   125,   130,    92,    -1,    33,   132,    92,    -1,
      82,   132,    92,    -1,    10,   129,    93,   115,    94,   135,
      92,    -1,    10,   129,   135,    92,    -1,    -1,    81,    -1,
     131,   130,    -1,   131,    -1,    48,     5,   191,    -1,   132,
     133,    -1,   133,    -1,   134,    30,   127,    -1,   134,    48,
      -1,    48,    -1,   118,   139,   151,   136,    -1,   137,   136,
      -1,   137,    -1,   122,   138,   158,   162,    -1,    -1,    13,
      -1,    21,    -1,    44,    -1,     3,    -1,    32,    -1,    40,
      -1,    -1,   140,    -1,    12,   141,    39,    -1,   141,   142,
      -1,   142,    -1,   122,    48,    30,   124,     5,   143,    89,
      -1,    17,    -1,    18,    -1,    16,    -1,    15,    -1,   144,
      -1,   147,    -1,    93,   149,    94,    -1,    93,   145,    94,
      -1,   145,   146,    -1,    -1,    15,    41,   143,    -1,    93,
     148,    94,    -1,   148,   150,    -1,   150,    -1,   149,   150,
      -1,    -1,    48,     5,   143,    -1,    -1,   152,    -1,    83,
     153,    39,    -1,   153,   154,    -1,   154,    -1,   122,   134,
      30,   127,     5,   155,    89,    -1,   122,   134,    30,   127,
      89,    -1,   155,   191,    -1,   191,    -1,   156,   157,    -1,
      -1,   122,   158,   162,    -1,     1,    -1,    43,    48,    93,
     159,    94,    41,   161,    -1,    43,    48,    41,   161,    -1,
     134,    30,   127,     5,   160,    -1,   134,    30,   127,    -1,
     160,   186,    -1,   186,    -1,   127,    -1,    57,    -1,   139,
     151,   156,   163,    -1,    65,   164,    39,    -1,   164,   165,
      -1,   165,    -1,   166,    -1,   169,    -1,   172,    -1,   174,
      -1,   175,    -1,   176,    -1,   177,    -1,   178,    -1,   185,
      -1,     1,    -1,   190,    89,    -1,   167,    89,    -1,   187,
     168,   191,    -1,     5,    -1,    77,    -1,    73,    -1,    56,
      -1,    23,    -1,    55,    -1,    63,    -1,    37,    -1,    36,
      -1,     6,    -1,    84,    -1,    61,    -1,    75,    93,   191,
      94,   163,   170,    76,   163,    -1,    75,    93,   191,    94,
     163,   170,    -1,   170,   171,    -1,    -1,    25,    93,   191,
      94,   163,    -1,    53,    93,   191,    94,   163,    -1,    45,
     163,    53,    93,   191,    94,    89,    -1,    62,    93,   173,
      95,   191,    95,   173,    94,   163,    -1,    62,     7,    48,
      29,    93,   191,    94,   163,    -1,   173,   167,    -1,   167,
      -1,    74,    48,    89,    -1,    14,    89,    -1,    31,    89,
      -1,    34,    48,    89,    -1,    22,   191,    89,    -1,    22,
      89,    -1,    51,    35,    48,    89,    -1,    24,   163,   179,
      -1,   180,   184,    -1,   180,    -1,   184,    -1,   181,   183,
      -1,    -1,   181,   182,    -1,    35,   116,   163,    -1,    60,
      35,   163,    -1,    20,   163,    -1,    -1,    17,    -1,    18,
      -1,    16,    -1,    15,    -1,   188,    -1,   187,    96,   188,
      -1,   187,    50,   188,    -1,   187,    50,   189,    -1,   187,
     189,    -1,   116,    -1,    93,   191,    94,    -1,    97,   188,
      -1,    72,   188,    -1,    98,   191,    99,    -1,   100,   191,
     101,    -1,    48,    93,   155,    94,    -1,   192,    75,   191,
      76,   191,    -1,   192,    -1,   192,    62,     7,    48,    29,
     191,    -1,     1,    -1,   191,     4,   191,    -1,   191,    59,
     191,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    37,    38,    41,    43,    47,    48,
      49,    55,    56,    60,    61,    65,    73,    75,    76,    79,
      83,    84,    88,    89,    93,    95,    96,    97,   100,   102,
     106,   107,   108,   111,   112,   113,   114,   115,   116,   120,
     121,   125,   126,   130,   131,   132,   133,   134,   137,   139,
     142,   143,   146,   150,   151,   155,   160,   161,   166,   170,
     171,   174,   177,   179,   180,   181,   182,   183,   184,   190,
     192,   195,   198,   199,   203,   207,   208,   209,   210,   211,
     212,   216,   217,   221,   222,   225,   229,   233,   234,   237,
     238,   242,   249,   251,   254,   258,   259,   263,   264,   269,
     270,   278,   279,   282,   283,   287,   288,   292,   293,   297,
     298,   301,   302,   306,   310,   319,   320,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   336,   337,   341,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   359,   360,   364,   365,   368,   372,   373,   374,
     375,   379,   380,   384,   385,   386,   390,   394,   395,   399,
     403,   407,   408,   409,   413,   415,   417,   420,   424,   428,
     431,   441,   442,   443,   444,   448,   449,   450,   451,   452,
     456,   457,   458,   459,   463,   464,   468,   471,   472,   473,
     474,   520,   521
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
  "XOR_ASIG", "'+'", "'-'", "'*'", "'/'", "'.'", "';'", "'de'", "'fin'",
  "'('", "')'", "':'", "'?'", "'^'", "'['", "']'", "'{'", "'}'", "'~'",
  "'!'", "'tamano'", "'&'", "'@'", "'|'", "'<'", "'>'", "$accept",
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
  "indice", "expresion_funcional", "expresion", "expresion_logica", 0
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
     335,   336,   337,   338,   339,    43,    45,    42,    47,    46,
      59,   100,   102,    40,    41,    58,    63,    94,    91,    93,
     123,   125,   126,    33,   116,    38,    64,   124,    60,    62
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
     191,   192,   192
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
       1,     3,     3
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
       0,   154,   190,   158,     0,   188,   165,   155,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,   182,
     114,   115,   128,   130,   139,   134,   138,   137,     0,   135,
     133,   141,   136,   132,   131,   140,     0,     0,     0,     0,
     179,   127,     0,    92,   103,     9,     0,    69,     0,     0,
      44,    53,    28,    39,    28,    45,    78,    77,    75,    76,
      84,     0,    79,    80,    41,    42,     0,    98,     0,     0,
     157,     0,     0,     0,   160,   162,     0,   163,   156,     0,
       0,   100,     0,     0,     0,   152,     0,   153,     0,   181,
     177,   178,   176,     0,     0,   129,    28,     0,   102,     0,
      11,    92,    47,     0,     0,    51,    55,    40,     0,     0,
       0,     0,    88,    74,     0,   191,   192,     0,     0,   169,
     161,     0,     0,   166,   164,     0,   186,    99,   159,     0,
       0,     0,   151,     0,   184,   185,   112,   111,   106,     0,
       0,     0,     0,    24,     0,    43,    50,     0,     0,    82,
      83,    86,    87,    81,    89,    97,     0,     0,     0,     0,
       0,   147,     0,     0,   145,    28,     0,   113,     0,    62,
      58,    24,    52,    91,     0,     0,   187,   167,   168,     0,
       0,     0,   143,   108,    28,    46,    66,    63,    64,    67,
      68,    65,     0,    59,    85,   189,   148,     0,     0,     0,
       0,   144,     0,   105,    69,   150,     0,     0,   142,   174,
     173,   171,   172,   107,   110,    61,   149,     0,   109,     0,
     146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    34,    44,    97,     9,   177,    11,
      16,    17,    18,   129,    74,    75,    76,   267,    77,   119,
     234,   235,   121,   122,   123,   178,   300,   301,   322,   173,
      21,    27,    28,   191,   192,   239,   280,   193,   240,   241,
     242,    30,    31,    40,    41,   210,    42,    55,   114,   270,
     343,   268,   174,    56,    98,    99,   100,   101,   169,   102,
     312,   331,   103,   216,   104,   105,   106,   107,   108,   204,
     205,   206,   253,   254,   207,   109,   344,   110,   111,   170,
     112,   211,   135
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -244
static const yytype_int16 yypact[] =
{
      56,    44,    26,    53,   276,   -69,  -244,  -244,   100,  -244,
     129,  -244,  -244,  -244,  -244,  -244,   116,   303,   110,   100,
      88,  -244,   284,  -244,  -244,   131,   134,   264,  -244,   100,
    -244,  -244,  -244,   139,  -244,  -244,   174,  -244,  -244,   160,
     318,  -244,   173,  -244,   -39,    16,   352,   151,  -244,     6,
    -244,  -244,  -244,    24,   166,  -244,  -244,  -244,   139,   167,
     169,  -244,  -244,   143,  -244,   123,   160,  -244,  -244,  -244,
    -244,    14,   160,   157,   138,  -244,  -244,  -244,   224,  -244,
    -244,  -244,   146,    39,   172,   171,   184,   172,   147,   226,
     156,    10,   225,   215,   177,   273,   225,   157,   197,  -244,
    -244,   186,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
     228,  -244,   191,   233,   129,   157,   203,  -244,  -244,    70,
     175,   -26,  -244,    11,  -244,   274,   -16,  -244,   127,   352,
      23,  -244,  -244,  -244,    45,   -10,   286,  -244,   220,   257,
     273,   269,   273,   272,   225,  -244,   247,   273,    22,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   283,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,   225,   273,   273,   273,
    -244,  -244,    54,    88,  -244,  -244,   139,   129,   245,   292,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
     295,   256,  -244,  -244,  -244,  -244,   273,  -244,   273,   273,
    -244,   341,   273,   172,  -244,   286,    -4,  -244,  -244,   260,
      15,   133,   279,    31,   334,  -244,   207,  -244,    33,  -244,
    -244,  -244,  -244,     9,     5,   133,   308,   160,  -244,    62,
     157,    88,  -244,   367,   282,   292,  -244,  -244,   370,    -1,
      78,    91,  -244,  -244,    42,   133,   133,   329,   120,  -244,
    -244,   139,   347,  -244,  -244,   273,  -244,   133,  -244,   172,
     296,   273,  -244,   172,  -244,  -244,  -244,  -244,  -244,   103,
     297,   173,   255,   100,   273,  -244,  -244,   127,   351,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,   364,   273,   128,   172,
      35,  -244,   273,    20,  -244,  -244,   353,  -244,   304,   326,
    -244,    99,   133,  -244,   127,   273,   133,  -244,  -244,   306,
      38,   225,   124,   392,   308,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,   166,  -244,  -244,   133,  -244,   172,   214,   305,
     172,  -244,   298,  -244,   129,  -244,   172,   273,  -244,  -244,
    -244,  -244,  -244,   298,  -244,  -244,  -244,    41,  -244,   172,
    -244
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -244,  -244,  -244,   223,   -28,  -244,   397,  -244,
     385,  -244,   -19,   368,   -18,   285,  -244,   -77,   275,  -244,
     176,  -244,   335,    36,   -32,   136,   105,  -244,  -244,     1,
    -244,  -244,   382,  -243,  -244,  -244,  -244,  -244,  -244,  -244,
     -38,  -161,  -244,  -244,   372,   217,   182,  -244,    92,  -244,
    -244,   101,    82,   -83,  -244,   319,  -244,  -138,  -244,  -244,
    -244,  -244,  -244,   107,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,   216,  -244,    76,  -244,   -12,   262,
    -244,   -80,  -244
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -171
static const yytype_int16 yytable[] =
{
      26,   136,   130,   134,   139,    45,   215,    49,    26,   198,
      39,    20,   228,   198,   278,   148,   132,   143,    73,    73,
      12,    39,    48,    54,   198,    81,   198,    59,   196,    78,
     115,   251,    48,   124,   303,   198,    79,   198,    82,   198,
     132,   182,   198,   132,    -3,   198,    83,   183,    84,   198,
      57,    58,   201,     6,    80,    85,   252,     1,    86,    80,
     125,   324,   213,  -170,   199,   202,   180,   218,   199,    87,
     273,     7,    88,   -16,     5,    89,   185,    90,   262,   199,
     145,   199,   -16,   -16,   149,    60,    91,   223,   224,   225,
     199,   -16,   199,   279,   199,   226,    92,   199,    93,    94,
     199,    73,   -16,   144,   199,   236,   265,   237,   264,   256,
     -16,   194,   197,   -16,   -16,   311,   219,    95,   245,   246,
     249,    96,   248,     2,   198,   259,   238,   263,   133,   309,
     257,   285,   327,   295,   200,   349,   -16,   198,   -16,   238,
     -16,    19,   186,   187,   188,   189,   220,   227,   230,   329,
       8,    80,    58,   -16,   222,    23,   272,   181,    25,    61,
      62,    35,   181,   176,   257,    13,    13,    14,    14,    15,
      15,    29,   281,   215,    52,   290,   291,    64,   231,   199,
     294,   293,    36,    61,    62,   283,    67,    43,   297,    68,
     262,   -60,   199,    53,   302,   269,   287,    60,    81,    43,
     330,    64,   282,   284,    47,   307,   308,   306,    48,   113,
      67,    82,   310,    68,   120,   116,   -24,   117,   313,    83,
     190,    84,    69,   288,   118,   325,    60,   127,    85,   128,
      71,    86,   138,   153,   154,   131,   150,    53,    53,    13,
     140,    14,    87,    15,   335,    88,    69,   338,    89,   142,
      90,   155,    54,   346,   299,    43,     7,   347,   -16,    91,
     137,   141,    43,   146,   156,   157,   350,   -16,   -16,    92,
     147,    93,    94,    43,   132,   152,   -16,     7,   158,    92,
     171,   172,   299,   159,   160,    32,    92,   -16,   -16,   161,
      95,   162,   175,   184,    96,   -16,    -4,    92,   -16,   -16,
      95,   163,   261,    37,    96,   164,   203,    95,   336,   208,
     209,    96,   165,   339,   340,   341,   342,   212,    95,   -16,
     214,   -16,    96,   -16,   166,   -16,   167,    -4,   168,   316,
      13,    43,    14,    33,    15,     8,   217,   232,   -16,   317,
     233,   -16,   -16,   238,   -16,   243,   -16,   318,   247,    -4,
      -4,   -24,    -4,   255,    -4,    92,     8,    50,   319,   -16,
      61,    62,    63,   260,    -4,   266,   320,    -4,   258,    13,
     321,    14,   274,    15,   275,   277,    95,   286,    64,    65,
      96,   167,   289,   168,    13,    66,    14,    67,    15,   292,
      68,   296,   304,   305,   314,   326,   315,   332,   337,   229,
      43,    10,    24,    46,   195,   179,   323,   126,   298,    38,
     271,   276,    51,   244,   334,   333,   345,   151,   328,   348,
     221,   250,     0,    69,    70,     0,     0,     0,     0,     0,
       0,    71,     0,     0,    72
};

static const yytype_int16 yycheck[] =
{
      19,    84,    79,    83,    87,    33,   144,    39,    27,     4,
      29,    10,   173,     4,    15,    95,     1,     7,    46,    47,
      89,    40,    48,    42,     4,     1,     4,    11,     5,    47,
      58,    35,    48,    19,   277,     4,    30,     4,    14,     4,
       1,    30,     4,     1,     0,     4,    22,   124,    24,     4,
      89,    90,    62,     0,    48,    31,    60,     1,    34,    48,
      46,   304,   142,    39,    59,    75,    92,   147,    59,    45,
     231,     1,    48,     3,    48,    51,    92,    53,   216,    59,
      92,    59,    12,    13,    96,    69,    62,   167,   168,   169,
      59,    21,    59,    94,    59,    41,    72,    59,    74,    75,
      59,   129,    32,    93,    59,   182,   101,   184,    99,    94,
      40,   129,    89,    43,    44,    95,    94,    93,   198,   199,
     203,    97,   202,    67,     4,    94,    48,    94,    89,    94,
     210,    89,    94,    30,    89,    94,    66,     4,    68,    48,
      70,    12,    15,    16,    17,    18,   158,    93,   176,    25,
      80,    48,    90,    83,   166,    39,    94,   121,    48,     8,
       9,    30,   126,    93,   244,    66,    66,    68,    68,    70,
      70,    83,    94,   311,     1,   255,   259,    26,   177,    59,
     263,   261,    48,     8,     9,    94,    35,    48,   271,    38,
     328,    92,    59,    65,   274,   227,    76,    69,     1,    48,
      76,    26,   240,   241,    30,   288,   289,   287,    48,    43,
      35,    14,   292,    38,    91,    48,    43,    48,   295,    22,
      93,    24,    71,   251,    81,   305,    69,    89,    31,     5,
      79,    34,    48,     5,     6,    89,    39,    65,    65,    66,
      93,    68,    45,    70,   327,    48,    71,   330,    51,    93,
      53,    23,   271,   336,   273,    48,     1,   337,     3,    62,
      89,    35,    48,    48,    36,    37,   349,    12,    13,    72,
      93,    74,    75,    48,     1,    89,    21,     1,    50,    72,
      89,    48,   301,    55,    56,     1,    72,    32,    12,    61,
      93,    63,    89,    19,    97,    40,    12,    72,    43,    44,
      93,    73,    95,    39,    97,    77,    20,    93,    94,    89,
      53,    97,    84,    15,    16,    17,    18,    48,    93,    43,
      48,    66,    97,    68,    96,    70,    98,    43,   100,     3,
      66,    48,    68,    49,    70,    80,    89,    92,    83,    13,
      48,    65,    66,    48,    68,    89,    70,    21,     7,    65,
      66,    48,    68,    93,    70,    72,    80,    39,    32,    83,
       8,     9,    10,    29,    80,    57,    40,    83,    89,    66,
      44,    68,     5,    70,    92,     5,    93,    48,    26,    27,
      97,    98,    35,   100,    66,    33,    68,    35,    70,    93,
      38,    94,    41,    29,    41,    89,    92,     5,    93,   176,
      48,     4,    17,    35,   129,   120,   301,    72,   272,    27,
     228,   235,    40,   196,   322,   314,   334,    98,   311,   343,
     158,   205,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   111,   112,    48,     0,     1,    80,   117,
     118,   119,    89,    66,    68,    70,   120,   121,   122,    12,
     139,   140,   113,    39,   120,    48,   122,   141,   142,    83,
     151,   152,     1,    49,   114,    30,    48,    39,   142,   122,
     153,   154,   156,    48,   115,   116,   123,    30,    48,   134,
      39,   154,     1,    65,   122,   157,   163,    89,    90,    11,
      69,     8,     9,    10,    26,    27,    33,    35,    38,    71,
      72,    79,    82,   116,   124,   125,   126,   128,   124,    30,
      48,     1,    14,    22,    24,    31,    34,    45,    48,    51,
      53,    62,    72,    74,    75,    93,    97,   116,   164,   165,
     166,   167,   169,   172,   174,   175,   176,   177,   178,   185,
     187,   188,   190,    43,   158,   116,    48,    48,    81,   129,
      91,   132,   133,   134,    19,    46,   132,    89,     5,   123,
     127,    89,     1,    89,   191,   192,   163,    89,    48,   163,
      93,    35,    93,     7,    93,   188,    48,    93,   191,   188,
      39,   165,    89,     5,     6,    23,    36,    37,    50,    55,
      56,    61,    63,    73,    77,    84,    96,    98,   100,   168,
     189,    89,    48,   139,   162,    89,    93,   118,   135,   125,
      92,   133,    30,   127,    19,    92,    15,    16,    17,    18,
      93,   143,   144,   147,   124,   128,     5,    89,     4,    59,
      89,    62,    75,    20,   179,   180,   181,   184,    89,    53,
     155,   191,    48,   191,    48,   167,   173,    89,   191,    94,
     188,   189,   188,   191,   191,   191,    41,    93,   151,   115,
     116,   139,    92,    48,   130,   131,   127,   127,    48,   145,
     148,   149,   150,    89,   155,   191,   191,     7,   191,   163,
     184,    35,    60,   182,   183,    93,    94,   191,    89,    94,
      29,    95,   167,    94,    99,   101,    57,   127,   161,   134,
     159,   156,    94,   151,     5,    92,   130,     5,    15,    94,
     146,    94,   150,    94,   150,    89,    48,    76,   116,    35,
     191,   163,    93,   191,   163,    30,    94,   163,   135,   122,
     136,   137,   191,   143,    41,    29,   191,   163,   163,    94,
     191,    95,   170,   127,    41,    92,     3,    13,    21,    32,
      40,    44,   138,   136,   143,   191,    89,    94,   173,    25,
      76,   171,     5,   161,   158,   163,    94,    93,   163,    15,
      16,    17,    18,   160,   186,   162,   163,   191,   186,    94,
     163
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
#line 31 "eazy.y"
    { printf("  ÉXITO: programa -> cabecera_programa bloque_programa\n"); ;}
    break;

  case 3:
#line 32 "eazy.y"
    { printf("  ERROR: programa -> error\n");yyerrok; ;}
    break;

  case 4:
#line 37 "eazy.y"
    { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); ;}
    break;

  case 5:
#line 38 "eazy.y"
    { printf("  ERROR: cabecera_programa -> error\n");yyerrok; ;}
    break;

  case 7:
#line 43 "eazy.y"
    { printf("  lista_librerias -> lista_librerias libreria\n"); ;}
    break;

  case 8:
#line 47 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre_lista .\n"); ;}
    break;

  case 9:
#line 48 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); ;}
    break;

  case 10:
#line 49 "eazy.y"
    { printf("  ERROR: libreria -> error\n");yyerrok; ;}
    break;

  case 11:
#line 55 "eazy.y"
    { printf("  lista_nombres -> nombre\n"); ;}
    break;

  case 12:
#line 56 "eazy.y"
    { printf("  lista_nombres -> lista_nombres ; nombre\n"); ;}
    break;

  case 13:
#line 60 "eazy.y"
    { printf("  nombre -> IDENTIFICADOR\n"); ;}
    break;

  case 14:
#line 61 "eazy.y"
    { printf("  nombre -> nombre PTOS IDENTIFICADOR\n"); ;}
    break;

  case 15:
#line 65 "eazy.y"
    { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); ;}
    break;

  case 18:
#line 76 "eazy.y"
    { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; ;}
    break;

  case 104:
#line 283 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 126:
#line 333 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 190:
#line 474 "eazy.y"
    { printf("  ERROR: expresion -> error\n");yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1950 "eazy.tab.c"
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


#line 525 "eazy.y"


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

