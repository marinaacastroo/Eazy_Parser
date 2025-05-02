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
     ESCAPE = 285,
     ES = 286,
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
#define ESCAPE 285
#define ES 286
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
#define YYLAST   391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNRULES -- Number of states.  */
#define YYNSTATES  303

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
       2,     2,     2,   102,     2,     2,     2,     2,   104,     2,
      92,    93,    87,    85,     2,    86,    89,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,     2,
     107,     2,   108,    95,   105,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    97,     2,    98,    96,     2,     2,     2,     2,     2,
      90,     2,    91,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   103,     2,     2,     2,
       2,     2,     2,    99,   106,   100,   101,     2,     2,     2,
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
      29,    31,    33,    36,    40,    42,    46,    52,    53,    55,
      57,    61,    64,    65,    72,    78,    79,    81,    83,    85,
      86,    89,    91,    93,    95,    97,    99,   101,   103,   105,
     107,   111,   116,   119,   122,   128,   133,   134,   136,   139,
     141,   145,   146,   148,   150,   152,   154,   159,   165,   166,
     168,   170,   172,   174,   176,   178,   179,   181,   185,   193,
     202,   204,   206,   208,   210,   212,   214,   218,   222,   225,
     227,   228,   232,   236,   239,   241,   244,   246,   247,   251,
     252,   255,   257,   258,   261,   263,   264,   268,   270,   275,
     277,   279,   281,   283,   285,   287,   291,   294,   296,   298,
     300,   302,   304,   306,   308,   310,   312,   314,   316,   319,
     322,   326,   328,   330,   332,   334,   336,   338,   340,   342,
     344,   346,   348,   350,   359,   366,   372,   379,   380,   386,
     394,   404,   413,   416,   418,   422,   425,   428,   432,   436,
     439,   444,   447,   448,   451,   455,   459,   460,   462,   466,
     470,   474,   477,   479,   483,   486,   489,   493,   497,   502,
     508,   510,   517,   519,   523
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     110,     0,    -1,   111,   116,    -1,     1,    -1,    67,    48,
      89,   112,    -1,     1,    -1,    -1,   112,   113,    -1,    49,
     114,    89,    -1,    49,   115,    11,    48,    89,    -1,     1,
      -1,   115,    -1,   114,    89,    -1,   114,    69,   115,    -1,
      48,    -1,   115,    69,    48,    -1,   117,   134,   145,   147,
     152,    -1,    -1,   118,    -1,     1,    -1,    80,   119,    39,
      -1,   120,   119,    -1,    -1,   121,    48,    31,   122,   123,
      89,    -1,   121,    48,    31,   122,   127,    -1,    -1,    70,
      -1,    68,    -1,    66,    -1,    -1,   122,    72,    -1,   115,
      -1,   124,    -1,   125,    -1,    26,    -1,    71,    -1,     9,
      -1,     8,    -1,    38,    -1,    35,    -1,    79,    19,   126,
      -1,    79,    46,    19,   126,    -1,   122,   123,    -1,   122,
     127,    -1,    27,    90,   124,   129,    91,    -1,    10,   128,
     131,    91,    -1,    -1,    81,    -1,   130,   129,    -1,   130,
      -1,    48,     5,   175,    -1,    -1,   118,    -1,   134,    -1,
     145,    -1,   132,    -1,   121,   133,   149,   151,    -1,   132,
     121,   133,   149,   151,    -1,    -1,    13,    -1,    21,    -1,
      44,    -1,     3,    -1,    32,    -1,    40,    -1,    -1,   135,
      -1,    12,   136,    39,    -1,   121,    48,    31,   123,     5,
     137,    89,    -1,   136,   121,    48,    31,   123,     5,   137,
      89,    -1,    17,    -1,    18,    -1,    16,    -1,    15,    -1,
     138,    -1,   141,    -1,    92,   143,    93,    -1,    92,   139,
      93,    -1,   139,   140,    -1,   140,    -1,    -1,    15,    41,
     137,    -1,    92,   142,    93,    -1,   142,   144,    -1,   144,
      -1,   143,   144,    -1,   144,    -1,    -1,    48,     5,   137,
      -1,    -1,   146,   175,    -1,   175,    -1,    -1,   148,   147,
      -1,   148,    -1,    -1,   121,   149,   151,    -1,     1,    -1,
      43,    48,    41,   150,    -1,   126,    -1,    57,    -1,   134,
      -1,   145,    -1,   147,    -1,   152,    -1,    65,   153,    39,
      -1,   153,   154,    -1,   154,    -1,   155,    -1,   158,    -1,
     160,    -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,
     166,    -1,   170,    -1,     1,    -1,   174,    89,    -1,   156,
      89,    -1,   171,   157,   175,    -1,     5,    -1,    77,    -1,
      73,    -1,    56,    -1,    23,    -1,    55,    -1,    63,    -1,
      37,    -1,    36,    -1,     6,    -1,    84,    -1,    61,    -1,
      75,    92,   175,    93,   152,   159,    76,   152,    -1,    75,
      92,   175,    93,   152,   159,    -1,    25,    92,   175,    93,
     152,    -1,    25,    92,   175,    93,   152,   159,    -1,    -1,
      53,    92,   175,    93,   152,    -1,    45,   152,    53,    92,
     175,    93,    89,    -1,    62,    92,   161,    94,   175,    94,
     161,    93,   152,    -1,    62,     7,    48,    29,    92,   175,
      93,   152,    -1,   161,   156,    -1,   156,    -1,    74,    48,
      89,    -1,    14,    89,    -1,    30,    89,    -1,    34,    48,
      89,    -1,    22,   175,    89,    -1,    22,    89,    -1,    51,
      35,    48,    89,    -1,   167,   169,    -1,    -1,   167,   168,
      -1,    35,   115,   152,    -1,    60,    35,   152,    -1,    -1,
     172,    -1,   171,    95,   172,    -1,   171,    50,   172,    -1,
     171,    50,   173,    -1,   171,   173,    -1,   115,    -1,    92,
     175,    93,    -1,    96,   172,    -1,    72,   172,    -1,    97,
     175,    98,    -1,    99,   175,   100,    -1,    48,    92,   146,
      93,    -1,   176,    75,   175,    76,   175,    -1,   176,    -1,
     176,    62,     7,    48,    29,   175,    -1,     1,    -1,   175,
       4,   175,    -1,   175,    59,   175,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    36,    41,    42,    45,    47,    51,    52,
      53,    58,    59,    60,    66,    67,    72,    80,    82,    83,
      86,    90,    91,    95,    96,   100,   102,   103,   104,   107,
     109,   113,   114,   115,   118,   119,   120,   121,   122,   123,
     127,   128,   132,   133,   137,   141,   144,   146,   149,   150,
     155,   176,   178,   179,   180,   181,   185,   186,   189,   191,
     192,   193,   194,   195,   196,   202,   204,   207,   210,   211,
     215,   216,   217,   218,   219,   220,   224,   225,   229,   230,
     231,   234,   237,   241,   242,   245,   246,   247,   251,   258,
     275,   276,   277,   285,   286,   287,   290,   291,   296,   311,
     312,   316,   317,   318,   319,   323,   332,   333,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   349,   350,
     354,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   372,   373,   377,   378,   379,   383,   384,
     385,   386,   390,   391,   395,   396,   397,   401,   405,   406,
     410,   414,   417,   419,   423,   427,   434,   451,   452,   453,
     454,   455,   459,   460,   461,   462,   466,   467,   471,   474,
     475,   476,   477,   523,   524
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
  "EJECUTA", "ENCAMBIO", "ENTERO", "ENUMERACION", "EQ", "EN", "ESCAPE",
  "ES", "ESPECIFICO", "ESTRUCTURA", "ETIQUETA", "EXCEPCION", "FD_ASIG",
  "FI_ASIG", "FICHERO", "FIN", "FINAL", "FLECHA_DCHA", "FLECHA_IZDA",
  "FUNCION", "GENERICO", "HACER", "HASH", "GE", "IDENTIFICADOR",
  "IMPORTAR", "INDIRECCION", "LANZA", "LE", "MIENTRAS", "MOD", "MOD_ASIG",
  "MULT_ASIG", "NADA", "NEQ", "OR", "OTRA", "OR_ASIG", "PARA", "POT_ASIG",
  "POTENCIA", "PRINCIPIO", "PRIVADO", "PROGRAMA", "PROTEGIDO", "PTOS",
  "PUBLICO", "REAL", "REF", "RESTA_ASIG", "SALTAR", "SI", "SINO",
  "SUMA_ASIG", "TAMANO", "TABLA", "TIPOS", "ULTIMA", "UNION", "VARIABLES",
  "XOR_ASIG", "'+'", "'-'", "'*'", "'/'", "'.'", "'de'", "'fin'", "'('",
  "')'", "':'", "'?'", "'^'", "'['", "']'", "'{'", "'}'", "'~'", "'!'",
  "'tamano'", "'&'", "'@'", "'|'", "'<'", "'>'", "$accept", "programa",
  "cabecera_programa", "lista_librerias", "libreria", "nombre_lista",
  "nombre", "bloque_programa", "declaraciones_tipos_opt",
  "declaraciones_tipos", "lista_declaraciones_tipo", "declaracion_tipo",
  "visibilidad_opt", "lista_ref", "tipo_basico", "tipo_escalar",
  "tipo_tabla", "especificacion_tipo", "tipo_estructurado", "ultima_opt",
  "lista_elemento_num", "elemento_numerico", "componentes",
  "declaracion_metodo", "modificador_opt", "declaraciones_constantes_opt",
  "declaraciones_constantes", "lista_declaraciones_constantes",
  "constante", "constante_tabla", "lista_elemento_hash", "elemento_hash",
  "constante_estructurada", "lista_campo_constante_una_o_mas",
  "lista_campo_constante", "campo_constante",
  "declaraciones_variables_opt", "lista_expresion_cero_o_mas",
  "lista_declaracion_funcion_cero_o_mas", "declaracion_funcion",
  "firma_funcion", "tipo_salida", "cuerpo_funcion", "bloque_instrucciones",
  "lista_instrucciones_una_o_mas", "instruccion", "instruccion_expresion",
  "asignacion", "operador_asignacion", "instruccion_bifurcacion",
  "lista_otro_caso", "instruccion_bucle", "lista_asignacion_una_o_mas",
  "instruccion_salto", "instruccion_destino_salto", "instruccion_devolver",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "lista_clausula_excepcion_especifica_cero_o_mas",
  "clausula_excepcion_especifica", "clausula_excepcion_general",
  "instruccion_vacia", "expresion_indexada", "expresion_basica", "indice",
  "expresion_funcional", "expresion", "expresion_logica", 0
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
     100,   102,    40,    41,    58,    63,    94,    91,    93,   123,
     125,   126,    33,   116,    38,    64,   124,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   114,   114,   114,   115,   115,   116,   117,   117,   117,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   122,
     122,   123,   123,   123,   124,   124,   124,   124,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   131,   131,   131,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   134,   134,   135,   136,   136,
     137,   137,   137,   137,   137,   137,   138,   138,   139,   139,
     139,   140,   141,   142,   142,   143,   143,   143,   144,   145,
     146,   146,   146,   147,   147,   147,   148,   148,   149,   150,
     150,   151,   151,   151,   151,   152,   153,   153,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   155,   155,
     156,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   158,   158,   159,   159,   159,   160,   160,
     160,   160,   161,   161,   162,   162,   162,   163,   164,   164,
     165,   166,   167,   167,   168,   169,   170,   171,   171,   171,
     171,   171,   172,   172,   172,   172,   173,   173,   174,   175,
     175,   175,   175,   176,   176
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     4,     1,     0,     2,     3,     5,
       1,     1,     2,     3,     1,     3,     5,     0,     1,     1,
       3,     2,     0,     6,     5,     0,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     2,     2,     5,     4,     0,     1,     2,     1,
       3,     0,     1,     1,     1,     1,     4,     5,     0,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     7,     8,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       0,     3,     3,     2,     1,     2,     1,     0,     3,     0,
       2,     1,     0,     2,     1,     0,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     6,     5,     6,     0,     5,     7,
       9,     8,     2,     1,     3,     2,     2,     3,     3,     2,
       4,     2,     0,     2,     3,     3,     0,     1,     3,     3,
       3,     2,     1,     3,     2,     2,     3,     3,     4,     5,
       1,     6,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     0,     0,     1,    19,    22,     2,
      65,    18,     6,    28,    27,    26,     0,    22,     0,    25,
      89,    66,     0,    20,    21,     0,     0,    25,     0,    10,
       0,     7,    29,     0,    67,     0,    97,     0,     0,     0,
      14,     0,    11,     0,     0,     0,     0,     0,     0,    16,
      93,     0,     8,     0,     0,    37,    36,    46,    34,     0,
      39,    38,    35,    30,     0,    31,     0,    32,    33,    24,
       0,     0,     0,   101,   102,   103,    96,   104,   117,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,   162,     0,   107,   108,     0,   109,   110,
     111,   112,   113,   114,   115,     0,   116,     0,   157,     0,
      13,     0,    15,    47,    25,     0,    29,     0,    23,     0,
       0,    29,   145,   172,   149,     0,   170,   146,     0,     0,
       0,     0,     0,     0,     0,   165,     0,     0,     0,   164,
     105,   106,   119,     0,     0,   153,   151,   121,   130,   125,
     129,   128,     0,   126,   124,   132,   127,   123,   122,   131,
       0,     0,     0,     0,   161,   118,     9,    52,    58,     0,
      25,    53,    54,     0,     0,    40,    29,    73,    72,    70,
      71,    80,     0,    74,    75,     0,   100,    99,    98,     0,
       0,   148,     0,     0,   147,     0,     0,    91,     0,     0,
       0,   143,     0,   144,     0,   163,     0,     0,   159,   160,
     158,     0,     0,   120,    62,    59,    60,    63,    64,    61,
       0,    45,    58,     0,     0,    49,    42,    43,    41,     0,
       0,     0,    79,     0,     0,    84,    68,     0,   173,   174,
       0,     0,     0,   168,    90,   150,     0,     0,     0,   142,
       0,   154,   155,   166,   167,     0,     0,     0,    44,    48,
       0,     0,    77,    78,    82,    83,    76,    85,    69,     0,
       0,     0,   138,     0,     0,   137,    56,     0,    50,    81,
      88,     0,   169,     0,     0,     0,     0,   134,    57,   171,
     139,     0,     0,     0,     0,   141,     0,     0,   133,   140,
       0,   135,   136
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    31,    41,    93,     9,    10,    11,
      16,    17,    37,   174,    66,    67,    68,   175,    69,   114,
     224,   225,   169,   170,   220,    73,    21,    27,   182,   183,
     231,   232,   184,   233,   234,   235,    74,   196,    75,    39,
      47,   188,    76,    77,    94,    95,    96,    97,   163,    98,
     287,    99,   202,   100,   101,   102,   103,   104,   105,   145,
     146,   106,   107,   108,   164,   109,   125,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -215
static const yytype_int16 yypact[] =
{
      27,    48,     6,    50,   220,   -23,  -215,  -215,   176,  -215,
      71,  -215,  -215,  -215,  -215,  -215,    56,   176,    66,   221,
    -215,  -215,   228,  -215,  -215,   108,    81,    85,   306,  -215,
      95,  -215,  -215,   132,  -215,   102,  -215,   114,   113,   271,
    -215,    49,     1,   308,   312,   151,   136,   236,    45,  -215,
    -215,    95,    73,   144,   148,  -215,  -215,   121,  -215,   115,
    -215,  -215,  -215,  -215,   135,   147,   125,  -215,  -215,  -215,
     199,   312,   178,  -215,  -215,  -215,  -215,  -215,  -215,   134,
       8,   138,   180,   113,   146,   195,   149,    36,   203,   197,
     158,   254,   203,   147,   126,  -215,  -215,   171,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,     4,  -215,   170,  -215,   177,
     147,   181,  -215,  -215,   119,   226,  -215,   240,  -215,    40,
     268,   225,  -215,  -215,  -215,    23,   -37,  -215,   189,   230,
      17,   262,   254,   264,   203,  -215,   224,   254,    22,  -215,
    -215,  -215,  -215,    95,   284,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,    98,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
     203,   254,   254,   254,  -215,  -215,  -215,  -215,   319,   232,
     145,  -215,  -215,   276,   308,  -215,  -215,  -215,  -215,  -215,
    -215,    20,   239,  -215,  -215,    40,  -215,  -215,  -215,   254,
     254,  -215,   323,   254,  -215,   250,    18,    26,   242,    28,
     315,  -215,   261,  -215,    29,  -215,   -16,   113,  -215,  -215,
    -215,     3,     2,    26,  -215,  -215,  -215,  -215,  -215,  -215,
     114,  -215,   319,   340,   257,   276,  -215,  -215,  -215,   311,
     349,    37,  -215,   -28,   -19,  -215,  -215,   269,    26,    26,
     313,    10,   254,  -215,    26,  -215,   113,   272,   254,  -215,
     113,  -215,  -215,  -215,  -215,   236,   114,   254,  -215,  -215,
      40,    40,  -215,  -215,  -215,  -215,  -215,  -215,  -215,   336,
     254,    30,  -215,   254,    19,   341,  -215,   236,    26,  -215,
    -215,   254,    26,   278,    32,   203,   277,   292,  -215,    26,
    -215,   113,   233,   254,   113,  -215,   113,    33,  -215,  -215,
     113,   341,  -215
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,  -215,  -215,  -215,   -27,  -215,  -215,   256,
     356,  -215,    -6,   343,   -40,   263,  -215,   -99,   207,  -215,
     152,  -215,  -215,  -215,   160,    -5,  -215,  -215,  -125,  -215,
    -215,   153,  -215,  -215,  -215,   -61,   -10,  -215,   105,  -215,
    -205,  -215,  -214,   -38,  -215,   291,  -215,  -126,  -215,  -215,
      87,  -215,   101,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,    57,   237,  -215,   -90,  -215
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -157
static const yytype_int16 yytable[] =
{
      49,   138,    18,    42,    70,    20,   189,   189,   201,   123,
      28,    18,    53,    26,   189,   255,    65,    65,   123,   123,
     230,    35,   187,   189,   110,   192,   189,   189,     1,   230,
     189,   120,   189,   189,   189,   229,   189,   189,   193,   143,
     197,   276,   199,   133,    65,   129,    78,   204,    -3,    48,
       6,   277,   229,    54,     5,   177,   178,   179,   180,    79,
     237,   190,   190,   288,   144,   264,    12,    80,   230,   190,
      54,   211,   212,   213,   266,    81,   249,   228,   190,    82,
    -152,   190,   190,    19,  -156,   190,   270,   190,   190,   190,
      83,   190,   190,    84,     2,    23,    85,   124,    86,   238,
     239,   253,   254,   241,   172,  -152,   244,    87,   168,   171,
     -92,   243,   191,   285,    25,   205,   206,    88,    51,    89,
      90,   246,   250,   283,    34,   291,   300,    78,   134,    33,
     262,    19,   181,    38,   226,   279,   280,    91,    52,    32,
      79,    92,   -12,    40,    50,   135,    40,    65,    80,   139,
      45,    13,   271,    14,   116,    15,    81,    46,   274,   201,
      82,  -152,   -12,    44,   222,   140,   249,   278,   251,   252,
      88,    83,   265,   267,    84,   147,   148,    85,    48,    86,
     282,   117,    71,   284,    72,    13,  -152,    14,    87,    15,
      91,   289,   111,   149,    92,   161,   112,   162,    88,     8,
      89,    90,   113,   297,   119,   115,   150,   151,   272,   208,
     -51,    13,   275,    14,   118,    15,    54,   210,    91,   121,
     152,     7,    92,   122,   -25,   153,   154,   127,   128,    29,
     131,   155,   -17,   156,    55,    56,   -55,    36,   130,   -65,
      -4,   132,    13,   157,    14,   136,    15,   158,    19,   -65,
     137,    40,    58,   295,   159,   123,   298,   -65,   299,   176,
     142,    60,   301,   -17,    61,   160,   165,   161,   -65,   162,
     166,    -4,    36,   185,   -94,    88,   -65,    30,   194,   -25,
     -65,    40,   186,   195,   -94,   -17,   -17,    13,   -17,    14,
     -17,    15,   -94,    -4,    -4,    91,    -4,    62,    -4,    92,
       8,    48,    13,   -94,    14,    88,    15,    36,    -4,    40,
     198,   -94,   200,   203,   -25,   -94,    55,    56,    57,   207,
      55,    56,   214,   221,   223,    91,   296,   -65,   236,    92,
     240,   245,   215,    88,    58,    59,   -94,    13,    58,    14,
     216,    15,   242,    60,   247,   257,    61,    60,   258,   -25,
      61,   217,   260,    91,   261,   248,    40,    92,   268,   218,
      40,   269,   -94,   219,   273,   281,   286,   290,   294,   293,
     167,   -95,    13,    24,    14,    43,    15,   259,   173,    62,
      63,   227,   256,    62,   263,   141,   292,    64,   302,   209,
       0,    64
};

static const yytype_int16 yycheck[] =
{
      38,    91,     8,    30,    44,    10,     4,     4,   134,     1,
      20,    17,    11,    19,     4,   220,    43,    44,     1,     1,
      48,    27,   121,     4,    51,    62,     4,     4,     1,    48,
       4,    71,     4,     4,     4,    15,     4,     4,    75,    35,
     130,   255,   132,     7,    71,    83,     1,   137,     0,    65,
       0,   256,    15,    69,    48,    15,    16,    17,    18,    14,
     185,    59,    59,   277,    60,    93,    89,    22,    48,    59,
      69,   161,   162,   163,    93,    30,   202,   176,    59,    34,
      35,    59,    59,    12,    39,    59,    76,    59,    59,    59,
      45,    59,    59,    48,    67,    39,    51,    89,    53,   189,
     190,    98,   100,   193,   114,    60,   196,    62,   114,   114,
      93,    93,    89,    94,    48,    93,   143,    72,    69,    74,
      75,    93,    93,    93,    39,    93,    93,     1,    92,    48,
      93,    12,    92,    28,   174,   260,   261,    92,    89,    31,
      14,    96,    69,    48,    39,    88,    48,   174,    22,    92,
      48,    66,   242,    68,    19,    70,    30,    43,   248,   285,
      34,    35,    89,    31,   170,    39,   292,   257,   206,   207,
      72,    45,   233,   234,    48,     5,     6,    51,    65,    53,
     270,    46,    31,   273,    48,    66,    60,    68,    62,    70,
      92,   281,    48,    23,    96,    97,    48,    99,    72,    80,
      74,    75,    81,   293,     5,    90,    36,    37,   246,   152,
      91,    66,   250,    68,    89,    70,    69,   160,    92,    41,
      50,     1,    96,    89,    48,    55,    56,    89,    48,     1,
      35,    61,    12,    63,     8,     9,    91,     1,    92,     3,
      12,    92,    66,    73,    68,    48,    70,    77,    12,    13,
      92,    48,    26,   291,    84,     1,   294,    21,   296,    19,
      89,    35,   300,    43,    38,    95,    89,    97,    32,    99,
      89,    43,     1,     5,     3,    72,    40,    49,    89,    43,
      44,    48,    57,    53,    13,    65,    66,    66,    68,    68,
      70,    70,    21,    65,    66,    92,    68,    71,    70,    96,
      80,    65,    66,    32,    68,    72,    70,     1,    80,    48,
      48,    40,    48,    89,    43,    44,     8,     9,    10,    35,
       8,     9,     3,    91,    48,    92,    93,    91,    89,    96,
       7,    89,    13,    72,    26,    27,    65,    66,    26,    68,
      21,    70,    92,    35,    29,     5,    38,    35,    91,    43,
      38,    32,    41,    92,     5,    94,    48,    96,    89,    40,
      48,    48,    91,    44,    92,    29,    25,    89,    76,    92,
     114,    65,    66,    17,    68,    32,    70,   225,   115,    71,
      72,   174,   222,    71,   231,    94,   285,    79,   301,   152,
      -1,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    67,   110,   111,    48,     0,     1,    80,   116,
     117,   118,    89,    66,    68,    70,   119,   120,   121,    12,
     134,   135,   112,    39,   119,    48,   121,   136,   145,     1,
      49,   113,    31,    48,    39,   121,     1,   121,   147,   148,
      48,   114,   115,   122,    31,    48,    43,   149,    65,   152,
     147,    69,    89,    11,    69,     8,     9,    10,    26,    27,
      35,    38,    71,    72,    79,   115,   123,   124,   125,   127,
     123,    31,    48,   134,   145,   147,   151,   152,     1,    14,
      22,    30,    34,    45,    48,    51,    53,    62,    72,    74,
      75,    92,    96,   115,   153,   154,   155,   156,   158,   160,
     162,   163,   164,   165,   166,   167,   170,   171,   172,   174,
     115,    48,    48,    81,   128,    90,    19,    46,    89,     5,
     123,    41,    89,     1,    89,   175,   176,    89,    48,   152,
      92,    35,    92,     7,    92,   172,    48,    92,   175,   172,
      39,   154,    89,    35,    60,   168,   169,     5,     6,    23,
      36,    37,    50,    55,    56,    61,    63,    73,    77,    84,
      95,    97,    99,   157,   173,    89,    89,   118,   121,   131,
     132,   134,   145,   124,   122,   126,    19,    15,    16,    17,
      18,    92,   137,   138,   141,     5,    57,   126,   150,     4,
      59,    89,    62,    75,    89,    53,   146,   175,    48,   175,
      48,   156,   161,    89,   175,    93,   115,    35,   172,   173,
     172,   175,   175,   175,     3,    13,    21,    32,    40,    44,
     133,    91,   121,    48,   129,   130,   123,   127,   126,    15,
      48,   139,   140,   142,   143,   144,    89,   137,   175,   175,
       7,   175,    92,    93,   175,    89,    93,    29,    94,   156,
      93,   152,   152,    98,   100,   149,   133,     5,    91,   129,
      41,     5,    93,   140,    93,   144,    93,   144,    89,    48,
      76,   175,   152,    92,   175,   152,   151,   149,   175,   137,
     137,    29,   175,    93,   175,    94,    25,   159,   151,   175,
      89,    93,   161,    92,    76,   152,    93,   175,   152,   152,
      93,   152,   159
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
#line 35 "eazy.y"
    { printf("  ÉXITO: programa -> cabecera_programa bloque_programa\n"); ;}
    break;

  case 3:
#line 36 "eazy.y"
    { printf("  ERROR: programa -> error\n");yyerrok; ;}
    break;

  case 4:
#line 41 "eazy.y"
    { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); ;}
    break;

  case 5:
#line 42 "eazy.y"
    { printf("  ERROR: cabecera_programa -> error\n");yyerrok; ;}
    break;

  case 7:
#line 47 "eazy.y"
    { printf("  lista_librerias -> lista_librerias libreria\n"); ;}
    break;

  case 8:
#line 51 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre_lista .\n"); ;}
    break;

  case 9:
#line 52 "eazy.y"
    { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); ;}
    break;

  case 10:
#line 53 "eazy.y"
    { printf("  ERROR: libreria -> error\n");yyerrok; ;}
    break;

  case 11:
#line 58 "eazy.y"
    { printf("  nombre_lista -> nombre\n"); ;}
    break;

  case 12:
#line 59 "eazy.y"
    { printf("  nombre_lista -> nombre_lista .\n"); ;}
    break;

  case 13:
#line 60 "eazy.y"
    { printf("  nombre_lista -> nombre_lista PTOS nombre\n"); ;}
    break;

  case 14:
#line 66 "eazy.y"
    { printf("  nombre -> IDENTIFICADOR\n"); ;}
    break;

  case 15:
#line 67 "eazy.y"
    { printf("  nombre -> nombre PTOS IDENTIFICADOR\n"); ;}
    break;

  case 16:
#line 72 "eazy.y"
    { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); ;}
    break;

  case 19:
#line 83 "eazy.y"
    { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; ;}
    break;

  case 97:
#line 291 "eazy.y"
    { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; ;}
    break;

  case 117:
#line 346 "eazy.y"
    { printf("  ERROR: instruccion -> error\n");yyerrok; ;}
    break;

  case 172:
#line 477 "eazy.y"
    { printf("  ERROR: expresion -> error\n");yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1907 "eazy.tab.c"
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


#line 528 "eazy.y"


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

