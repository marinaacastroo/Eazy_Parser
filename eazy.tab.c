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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  205

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
       2,     2,     2,    97,     2,     2,     2,     2,   102,     2,
      86,    87,    99,   101,    88,    96,    85,   100,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    89,
     105,     2,   106,    95,   103,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    92,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    93,   104,    94,    98,     2,     2,     2,
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
      31,    35,    37,    41,    45,    51,    52,    56,    58,    59,
      61,    63,    64,    68,    71,    72,    74,    76,    77,    81,
      84,    85,    87,    89,    90,    93,    96,   102,   103,   105,
     107,   111,   115,   119,   121,   124,   126,   128,   130,   132,
     134,   136,   138,   140,   143,   147,   153,   157,   159,   161,
     164,   168,   172,   174,   176,   178,   180,   182,   184,   188,
     191,   194,   198,   202,   204,   208,   213,   216,   221,   226,
     228,   232,   234,   236,   238,   240,   243,   246,   249,   252,
     254,   258,   262,   266,   270,   272,   276,   280,   282,   286,
     290,   292,   296,   298,   302,   304,   308,   310,   314,   318,
     322,   326,   330,   334,   336,   340,   342,   346,   348,   350,
     352,   358
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   109,   114,    -1,    67,    48,    85,   110,
      -1,    -1,   110,   111,    -1,    49,   112,    85,    -1,    49,
     113,    11,    48,    85,    -1,   113,    -1,   112,    85,   113,
      -1,   112,    69,   113,    -1,    48,    -1,   113,    69,    48,
      -1,    65,   115,    39,    -1,   116,   119,   122,   125,   131,
      -1,    -1,    80,   117,    39,    -1,   118,    -1,    -1,    48,
      -1,     1,    -1,    -1,    12,   120,    39,    -1,   120,   121,
      -1,    -1,    48,    -1,     1,    -1,    -1,    83,   123,    39,
      -1,   123,   124,    -1,    -1,    48,    -1,     1,    -1,    -1,
     125,   126,    -1,   127,   130,    -1,    43,    48,    86,   128,
      87,    -1,    -1,   129,    -1,    48,    -1,   129,    88,    48,
      -1,    65,   131,    39,    -1,    65,   132,    39,    -1,   133,
      -1,   132,   133,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   138,    -1,   139,    -1,   140,    -1,    89,    -1,
       1,    89,    -1,   144,     5,   160,    -1,    75,   160,   131,
      76,   131,    -1,    53,   160,   131,    -1,    14,    -1,    74,
      -1,    22,   160,    -1,    13,   160,   131,    -1,    21,   160,
     131,    -1,   160,    -1,    17,    -1,    18,    -1,    15,    -1,
      16,    -1,   113,    -1,    86,   160,    87,    -1,    90,   142,
      -1,    72,   142,    -1,    91,   160,    92,    -1,    93,   160,
      94,    -1,   142,    -1,   144,    95,   142,    -1,   144,    90,
      95,   142,    -1,   144,   143,    -1,   144,    90,    95,   143,
      -1,    48,    86,   146,    87,    -1,   160,    -1,   146,    89,
     160,    -1,   141,    -1,   144,    -1,   145,    -1,   147,    -1,
      96,   147,    -1,    97,   147,    -1,    98,   147,    -1,    78,
     147,    -1,   148,    -1,   148,    64,   149,    -1,   150,    99,
     149,    -1,   150,   100,   149,    -1,   150,    54,   149,    -1,
     149,    -1,   151,   101,   150,    -1,   151,    96,   150,    -1,
     150,    -1,   152,    42,   151,    -1,   152,    41,   151,    -1,
     151,    -1,   153,   102,   152,    -1,   152,    -1,   154,   103,
     153,    -1,   153,    -1,   155,   104,   154,    -1,   154,    -1,
     155,   105,   155,    -1,   155,   106,   155,    -1,   155,    52,
     155,    -1,   155,    47,   155,    -1,   155,    28,   155,    -1,
     155,    58,   155,    -1,   155,    -1,   157,     4,   156,    -1,
     156,    -1,   158,    59,   157,    -1,   157,    -1,   158,    -1,
     159,    -1,   159,    75,   160,    76,   160,    -1,   159,    62,
       7,    48,    29,   160,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    33,    36,    38,    42,    43,    47,    48,
      49,    53,    54,    62,    67,    72,    74,    79,    80,    84,
      85,    90,    92,    96,    97,   101,   102,   107,   109,   113,
     114,   118,   119,   124,   126,   130,   134,   137,   139,   143,
     144,   150,   158,   162,   163,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   183,   189,   195,   201,   202,   203,
     209,   213,   219,   227,   227,   227,   227,   231,   232,   233,
     234,   237,   237,   240,   241,   242,   243,   244,   248,   252,
     253,   257,   258,   259,   263,   264,   265,   266,   267,   271,
     272,   276,   277,   278,   279,   283,   284,   285,   289,   290,
     291,   295,   296,   300,   301,   305,   306,   310,   311,   312,
     313,   314,   315,   316,   320,   321,   325,   326,   329,   332,
     333,   334
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
  "XOR_ASIG", "'.'", "'('", "')'", "','", "';'", "'^'", "'['", "']'",
  "'{'", "'}'", "'?'", "'-'", "'!'", "'~'", "'*'", "'/'", "'+'", "'&'",
  "'@'", "'|'", "'<'", "'>'", "$accept", "programa", "cabecera_programa",
  "lista_librerias", "libreria", "nombre_lista", "nombre",
  "bloque_programa", "secciones", "bloque_tipos", "contenido_tipos",
  "contenido_tipos_pieza", "bloque_constantes", "contenido_constantes",
  "pieza_const", "bloque_variables", "contenido_variables", "pieza_var",
  "bloque_funciones", "declaracion_funcion", "firma_funcion",
  "lista_argumentos", "lista_argumentos_nonempty", "cuerpo_funcion",
  "bloque_instrucciones", "lista_instrucciones", "instruccion",
  "asignacion", "instruccion_condicional", "instruccion_bucle",
  "instruccion_de_salto", "instruccion_constructor",
  "instruccion_destructor", "instruccion_expresion", "expresion_constante",
  "expresion_basica", "indice", "expresion_indexada",
  "expresion_funcional", "lista_expresiones", "primario",
  "expresion_unaria", "expresion_potencia", "expresion_mult",
  "expresion_add", "expresion_desplazamiento", "expresion_and_binario",
  "expresion_xor_binario", "expresion_or_binario", "expresion_relacional",
  "expresion_and", "expresion_or", "expresion_logica", "expresion", 0
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
     335,   336,   337,   338,   339,    46,    40,    41,    44,    59,
      94,    91,    93,   123,   125,    63,    45,    33,   126,    42,
      47,    43,    38,    64,   124,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   109,   110,   110,   111,   111,   112,   112,
     112,   113,   113,   114,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   126,   127,   128,   128,   129,
     129,   130,   131,   132,   132,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   135,   136,   137,   137,   137,
     138,   139,   140,   141,   141,   141,   141,   142,   142,   142,
     142,   143,   143,   144,   144,   144,   144,   144,   145,   146,
     146,   147,   147,   147,   148,   148,   148,   148,   148,   149,
     149,   150,   150,   150,   150,   151,   151,   151,   152,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     156,   156,   156,   156,   157,   157,   158,   158,   159,   160,
     160,   160
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     0,     2,     3,     5,     1,     3,
       3,     1,     3,     3,     5,     0,     3,     1,     0,     1,
       1,     0,     3,     2,     0,     1,     1,     0,     3,     2,
       0,     1,     1,     0,     2,     2,     5,     0,     1,     1,
       3,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     5,     3,     1,     1,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     3,     3,     1,     3,     4,     2,     4,     4,     1,
       3,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     3,     1,     1,     1,
       5,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,    15,     2,     4,     0,
       0,    21,     3,    20,    19,     0,    17,    13,    24,    27,
       0,     5,    16,     0,    30,    33,    11,     0,     8,    26,
      22,    25,    23,     0,     0,     0,     6,     0,     0,    32,
      28,    31,    29,     0,     0,    34,     0,    14,    10,     9,
       0,    12,     0,     0,     0,    57,    65,    66,    63,    64,
       0,     0,    11,     0,     0,    58,     0,     0,     0,    52,
       0,     0,     0,     0,    67,     0,    43,    45,    46,    47,
      48,    49,    50,    51,    81,    73,    82,    83,    84,    89,
      94,    97,   100,   102,   104,   106,   113,   115,   117,   118,
     119,    62,     0,    35,     7,    37,    53,    82,     0,     0,
      59,     0,     0,    70,     0,    88,     0,    69,    85,    86,
      87,    42,    44,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    38,    60,    61,     0,    79,    56,     0,
      68,    54,     0,     0,     0,    74,    90,    93,    91,    92,
      96,    95,    99,    98,   101,   103,   111,   110,   109,   112,
     105,   107,   108,   114,   116,     0,     0,    41,    36,     0,
      78,     0,     0,    75,    77,    71,    72,     0,     0,    40,
      80,    55,     0,   120,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    12,    21,    27,    74,     7,    10,    11,
      15,    16,    19,    23,    32,    25,    33,    42,    34,    45,
      46,   152,   153,   103,    47,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   128,   107,    87,   156,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -90
static const yytype_int16 yypact[] =
{
     -49,   -24,    27,   -27,   -43,   -90,   -33,   -90,   -90,     2,
      22,    55,    24,   -90,   -90,    42,   -90,   -90,   -90,     1,
      40,   -90,   -90,     4,   -90,   -90,   -90,    11,   -10,   -90,
     -90,   -90,   -90,    10,   -17,    40,    40,    46,    54,   -90,
     -90,   -90,   -90,    60,    61,   -90,    45,   -90,    52,    52,
      38,   -90,    48,    37,   112,   -90,   -90,   -90,   -90,   -90,
     112,   112,    59,   112,   -26,   -90,   112,   125,   112,   -90,
     -26,   125,   125,   125,    52,    15,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,    29,   -90,   -90,    74,
     -90,   -44,   -57,    65,    44,    49,    -7,   -90,   149,    95,
      -9,   -90,    90,   -90,   -90,   108,   -90,    71,    90,    90,
     -90,   112,    90,   -90,    90,   -90,    78,   -90,   -90,   -90,
     -90,   -90,   -90,   112,    76,   112,   112,   -26,   -90,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   162,   112,
     133,   -90,    91,    94,   -90,   -90,   -72,   -90,   -90,   107,
     -90,   -90,    77,    96,    97,   -90,   -90,   -90,   -90,   -90,
     -44,   -44,   -57,   -57,    65,    44,    85,    85,    85,    85,
      49,    85,    85,   -90,   149,   144,   117,   -90,   -90,   146,
     -90,   112,    90,   -90,   -90,   -90,   -90,   166,   112,   -90,
     -90,   -90,   112,   -90,   -90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -90,   -90,   -90,   -90,   -90,   -90,    50,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -89,   -90,   121,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -62,    39,   -40,   -90,   -90,
     114,   -90,   -14,   -42,    -4,    62,    66,    57,    35,    67,
      56,   -90,   -90,   -54
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -19
static const yytype_int16 yytable[] =
{
     108,    37,   113,    13,    86,    29,   109,   110,   117,   112,
     130,    39,   114,   150,   116,   190,    53,   191,     1,   154,
     155,   139,    26,   158,     4,   159,    43,     5,    54,    55,
      56,    57,    58,    59,   123,    86,    60,    61,     6,   133,
     140,   -18,     8,    30,   134,   141,    64,     9,    44,    40,
      14,   142,    31,   148,   121,   131,   132,   157,    41,    38,
      68,    17,    53,    62,    70,   165,   149,    18,    63,   161,
      28,   163,   164,    20,    54,    55,    56,    57,    58,    59,
      35,    22,    60,    61,    24,    48,    49,    64,    26,    65,
      66,   170,   171,    67,    50,   186,    36,   143,   144,   145,
     193,    68,    51,   201,    69,    70,   135,   136,    52,    62,
     102,    71,    72,    73,    63,   166,   167,   168,   169,   124,
     125,    38,   126,   104,   127,    26,   106,    56,    57,    58,
      59,   172,   173,    64,   105,    65,    66,   200,   129,    67,
      56,    57,    58,    59,   203,   111,   137,    68,   204,    64,
      69,    70,   138,   146,   147,    44,   151,    71,    72,    73,
      62,   124,   125,    68,   126,   160,   127,    70,   125,   185,
     126,   162,   187,    62,   176,   177,   178,   179,   188,   181,
     182,   115,   189,   192,    64,   118,   119,   120,   195,   143,
      67,   196,   197,   198,   199,   202,   122,    64,    68,   174,
     180,   194,    70,   184,   175,     0,     0,     0,    71,    72,
      73,    68,     0,   183,     0,    70
};

static const yytype_int16 yycheck[] =
{
      54,    11,    64,     1,    44,     1,    60,    61,    70,    63,
      54,     1,    66,   102,    68,    87,     1,    89,    67,   108,
     109,    28,    48,   112,    48,   114,    43,     0,    13,    14,
      15,    16,    17,    18,     5,    75,    21,    22,    65,    96,
      47,    39,    85,    39,   101,    52,    72,    80,    65,    39,
      48,    58,    48,    62,    39,    99,   100,   111,    48,    69,
      86,    39,     1,    48,    90,   127,    75,    12,    53,   123,
      20,   125,   126,    49,    13,    14,    15,    16,    17,    18,
      69,    39,    21,    22,    83,    35,    36,    72,    48,    74,
      75,   133,   134,    78,    48,   149,    85,   104,   105,   106,
     162,    86,    48,   192,    89,    90,    41,    42,    48,    48,
      65,    96,    97,    98,    53,   129,   130,   131,   132,    90,
      91,    69,    93,    85,    95,    48,    89,    15,    16,    17,
      18,   135,   136,    72,    86,    74,    75,   191,    64,    78,
      15,    16,    17,    18,   198,    86,   102,    86,   202,    72,
      89,    90,   103,     4,    59,    65,    48,    96,    97,    98,
      48,    90,    91,    86,    93,    87,    95,    90,    91,     7,
      93,    95,    39,    48,   139,   140,   141,   142,    87,   144,
     145,    67,    88,    76,    72,    71,    72,    73,    92,   104,
      78,    94,    48,    76,    48,    29,    75,    72,    86,   137,
     143,   162,    90,   147,   138,    -1,    -1,    -1,    96,    97,
      98,    86,    -1,   146,    -1,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,   108,   109,    48,     0,    65,   114,    85,    80,
     115,   116,   110,     1,    48,   117,   118,    39,    12,   119,
      49,   111,    39,   120,    83,   122,    48,   112,   113,     1,
      39,    48,   121,   123,   125,    69,    85,    11,    69,     1,
      39,    48,   124,    43,    65,   126,   127,   131,   113,   113,
      48,    48,    48,     1,    13,    14,    15,    16,    17,    18,
      21,    22,    48,    53,    72,    74,    75,    78,    86,    89,
      90,    96,    97,    98,   113,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   144,   145,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,    65,   130,    85,    86,    89,   144,   160,   160,
     160,    86,   160,   142,   160,   147,   160,   142,   147,   147,
     147,    39,   133,     5,    90,    91,    93,    95,   143,    64,
      54,    99,   100,    96,   101,    41,    42,   102,   103,    28,
      47,    52,    58,   104,   105,   106,     4,    59,    62,    75,
     131,    48,   128,   129,   131,   131,   146,   160,   131,   131,
      87,   160,    95,   160,   160,   142,   149,   149,   149,   149,
     150,   150,   151,   151,   152,   153,   155,   155,   155,   155,
     154,   155,   155,   156,   157,     7,   160,    39,    87,    88,
      87,    89,    76,   142,   143,    92,    94,    48,    76,    48,
     160,   131,    29,   160,   160
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
        case 20:
#line 85 "eazy.y"
    { yyerrok; ;}
    break;

  case 26:
#line 102 "eazy.y"
    { yyerrok; ;}
    break;

  case 32:
#line 119 "eazy.y"
    { yyerrok; ;}
    break;

  case 53:
#line 175 "eazy.y"
    { yyerrok; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1726 "eazy.tab.c"
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


#line 338 "eazy.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("Error sintáctico: %s\n", s);
  return 0;
}

int yywrap() {
  return 1;
}

int main(int argc, char *argv[]) {
  yydebug = 0;

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

