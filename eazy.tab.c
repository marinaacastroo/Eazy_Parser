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
     OR = 258,
     AND = 259,
     NEQ = 260,
     EQ = 261,
     GE = 262,
     LE = 263,
     MOD = 264,
     POTENCIA = 265,
     TAMANO = 266,
     ABSTRACTO = 267,
     ASIG = 268,
     AND_ASIG = 269,
     CADA = 270,
     CADENA = 271,
     CARACTER = 272,
     CLASE = 273,
     COMO = 274,
     CONSTANTES = 275,
     CONSTRUCTOR = 276,
     CONTINUAR = 277,
     CTC_CADENA = 278,
     CTC_CARACTER = 279,
     CTC_ENTERA = 280,
     CTC_REAL = 281,
     DE = 282,
     DEFECTO = 283,
     DESTRUCTOR = 284,
     DEVOLVER = 285,
     DIV_ASIG = 286,
     EJECUTA = 287,
     ENCAMBIO = 288,
     ENTERO = 289,
     ENUMERACION = 290,
     EN = 291,
     ES = 292,
     ESCAPE = 293,
     ESPECIFICO = 294,
     ESTRUCTURA = 295,
     ETIQUETA = 296,
     EXCEPCION = 297,
     FD_ASIG = 298,
     FI_ASIG = 299,
     FICHERO = 300,
     FIN = 301,
     FINAL = 302,
     FLECHA_DCHA = 303,
     FLECHA_IZDA = 304,
     FUNCION = 305,
     GENERICO = 306,
     HACER = 307,
     HASH = 308,
     IDENTIFICADOR = 309,
     IMPORTAR = 310,
     INDIRECCION = 311,
     LANZA = 312,
     MIENTRAS = 313,
     MOD_ASIG = 314,
     MULT_ASIG = 315,
     NADA = 316,
     OTRA = 317,
     OR_ASIG = 318,
     PARA = 319,
     POT_ASIG = 320,
     PRINCIPIO = 321,
     PRIVADO = 322,
     PROGRAMA = 323,
     PROTEGIDO = 324,
     PTOS = 325,
     PUBLICO = 326,
     REAL = 327,
     REF = 328,
     RESTA_ASIG = 329,
     SALTAR = 330,
     SI = 331,
     SINO = 332,
     SUMA_ASIG = 333,
     TABLA = 334,
     TIPOS = 335,
     ULTIMA = 336,
     UNION = 337,
     VARIABLES = 338,
     XOR_ASIG = 339
   };
#endif
/* Tokens.  */
#define OR 258
#define AND 259
#define NEQ 260
#define EQ 261
#define GE 262
#define LE 263
#define MOD 264
#define POTENCIA 265
#define TAMANO 266
#define ABSTRACTO 267
#define ASIG 268
#define AND_ASIG 269
#define CADA 270
#define CADENA 271
#define CARACTER 272
#define CLASE 273
#define COMO 274
#define CONSTANTES 275
#define CONSTRUCTOR 276
#define CONTINUAR 277
#define CTC_CADENA 278
#define CTC_CARACTER 279
#define CTC_ENTERA 280
#define CTC_REAL 281
#define DE 282
#define DEFECTO 283
#define DESTRUCTOR 284
#define DEVOLVER 285
#define DIV_ASIG 286
#define EJECUTA 287
#define ENCAMBIO 288
#define ENTERO 289
#define ENUMERACION 290
#define EN 291
#define ES 292
#define ESCAPE 293
#define ESPECIFICO 294
#define ESTRUCTURA 295
#define ETIQUETA 296
#define EXCEPCION 297
#define FD_ASIG 298
#define FI_ASIG 299
#define FICHERO 300
#define FIN 301
#define FINAL 302
#define FLECHA_DCHA 303
#define FLECHA_IZDA 304
#define FUNCION 305
#define GENERICO 306
#define HACER 307
#define HASH 308
#define IDENTIFICADOR 309
#define IMPORTAR 310
#define INDIRECCION 311
#define LANZA 312
#define MIENTRAS 313
#define MOD_ASIG 314
#define MULT_ASIG 315
#define NADA 316
#define OTRA 317
#define OR_ASIG 318
#define PARA 319
#define POT_ASIG 320
#define PRINCIPIO 321
#define PRIVADO 322
#define PROGRAMA 323
#define PROTEGIDO 324
#define PTOS 325
#define PUBLICO 326
#define REAL 327
#define REF 328
#define RESTA_ASIG 329
#define SALTAR 330
#define SI 331
#define SINO 332
#define SUMA_ASIG 333
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

  #define YYDEBUG 1

  int yyerror(char *);


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
#line 284 "eazy.tab.c"

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   318

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNRULES -- Number of states.  */
#define YYNSTATES  160

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
       2,     2,     2,    20,     2,     2,     2,     2,     7,     2,
      96,    97,    16,    14,   105,    15,     2,    17,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   104,
      10,     2,    11,   103,     6,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    99,     2,   100,    98,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   101,     5,   102,    21,     2,     2,     2,
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
       8,     9,    12,    13,    18,    19,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    14,    16,    18,    20,    22,
      26,    28,    32,    35,    38,    42,    46,    48,    52,    57,
      60,    65,    70,    72,    76,    78,    80,    82,    84,    87,
      90,    93,    96,    98,   102,   106,   110,   114,   116,   120,
     124,   126,   130,   134,   136,   140,   142,   146,   148,   152,
     154,   158,   162,   166,   170,   174,   178,   180,   184,   186,
     190,   192,   194,   196,   202,   209,   211,   214,   216,   218,
     220,   222,   224,   226,   230,   232,   238,   242,   244,   246,
     249,   252,   255,   257,   260,   265,   271,   273,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     107,     0,    -1,   137,    77,   129,    57,    -1,    77,   129,
      57,    -1,    36,    -1,    37,    -1,    34,    -1,    35,    -1,
      65,    -1,   109,    81,    65,    -1,   109,    -1,    96,   128,
      97,    -1,    98,   110,    -1,    84,   110,    -1,    99,   128,
     100,    -1,   101,   128,   102,    -1,   110,    -1,   112,   103,
     110,    -1,   112,    98,   103,   110,    -1,   112,   111,    -1,
     112,    98,   103,   111,    -1,    65,    96,   114,    97,    -1,
     128,    -1,   114,   104,   128,    -1,   108,    -1,   112,    -1,
     113,    -1,   115,    -1,    15,   115,    -1,    20,   115,    -1,
      21,   115,    -1,    22,   115,    -1,   116,    -1,   116,    19,
     117,    -1,   118,    16,   117,    -1,   118,    17,   117,    -1,
     118,    18,   117,    -1,   117,    -1,   119,    14,   118,    -1,
     119,    15,   118,    -1,   118,    -1,   120,    60,   119,    -1,
     120,    59,   119,    -1,   119,    -1,   121,     7,   120,    -1,
     120,    -1,   122,     6,   121,    -1,   121,    -1,   123,     5,
     122,    -1,   122,    -1,   123,    10,   123,    -1,   123,    11,
     123,    -1,   123,    13,   123,    -1,   123,    12,   123,    -1,
     123,     9,   123,    -1,   123,     8,   123,    -1,   123,    -1,
     125,     4,   124,    -1,   124,    -1,   126,     3,   125,    -1,
     125,    -1,   126,    -1,   127,    -1,   127,    87,   128,    88,
     128,    -1,   127,    75,    26,    65,    47,   128,    -1,   130,
      -1,   129,   130,    -1,   131,    -1,   132,    -1,   133,    -1,
     134,    -1,   135,    -1,   136,    -1,   112,    24,   128,    -1,
     128,    -1,    87,   128,   130,    88,   130,    -1,    69,   128,
     130,    -1,    33,    -1,    86,    -1,    41,   128,    -1,    32,
     128,    -1,    40,   128,    -1,   138,    -1,   137,   138,    -1,
     139,    77,   129,    57,    -1,    61,    65,    96,   140,    97,
      -1,   141,    -1,   140,   105,   141,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    46,    47,    48,    49,    54,    55,
      60,    61,    62,    63,    68,    69,    74,    75,    76,    77,
      78,    83,    88,    89,    94,    95,    96,   101,   102,   103,
     104,   105,   110,   111,   116,   117,   118,   119,   124,   125,
     126,   131,   132,   133,   138,   139,   144,   145,   150,   151,
     156,   157,   158,   159,   160,   161,   162,   167,   168,   173,
     174,   179,   184,   185,   186,   194,   195,   199,   200,   201,
     202,   203,   204,   209,   210,   214,   218,   222,   223,   224,
     228,   232,   240,   241,   245,   249,   253,   254,   258
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "'|'", "'@'", "'&'", "NEQ",
  "EQ", "'<'", "'>'", "GE", "LE", "'+'", "'-'", "'*'", "'/'", "MOD",
  "POTENCIA", "'!'", "'~'", "TAMANO", "ABSTRACTO", "ASIG", "AND_ASIG",
  "CADA", "CADENA", "CARACTER", "CLASE", "COMO", "CONSTANTES",
  "CONSTRUCTOR", "CONTINUAR", "CTC_CADENA", "CTC_CARACTER", "CTC_ENTERA",
  "CTC_REAL", "DE", "DEFECTO", "DESTRUCTOR", "DEVOLVER", "DIV_ASIG",
  "EJECUTA", "ENCAMBIO", "ENTERO", "ENUMERACION", "EN", "ES", "ESCAPE",
  "ESPECIFICO", "ESTRUCTURA", "ETIQUETA", "EXCEPCION", "FD_ASIG",
  "FI_ASIG", "FICHERO", "FIN", "FINAL", "FLECHA_DCHA", "FLECHA_IZDA",
  "FUNCION", "GENERICO", "HACER", "HASH", "IDENTIFICADOR", "IMPORTAR",
  "INDIRECCION", "LANZA", "MIENTRAS", "MOD_ASIG", "MULT_ASIG", "NADA",
  "OTRA", "OR_ASIG", "PARA", "POT_ASIG", "PRINCIPIO", "PRIVADO",
  "PROGRAMA", "PROTEGIDO", "PTOS", "PUBLICO", "REAL", "REF", "RESTA_ASIG",
  "SALTAR", "SI", "SINO", "SUMA_ASIG", "TABLA", "TIPOS", "ULTIMA", "UNION",
  "VARIABLES", "XOR_ASIG", "'('", "')'", "'^'", "'['", "']'", "'{'", "'}'",
  "'?'", "';'", "','", "$accept", "programa", "expresion_constante",
  "nombre", "expresion_basica", "indice", "expresion_indexada",
  "expresion_funcional", "lista_expresiones", "primario",
  "expresion_unaria", "expresion_potencia", "expresion_mult",
  "expresion_add", "expresion_desplazamiento", "expresion_and_binario",
  "expresion_xor_binario", "expresion_or_binario", "expresion_relacional",
  "expresion_and", "expresion_or", "expresion_logica", "expresion",
  "lista_instrucciones", "instruccion", "expresion_instruccion",
  "instruccion_condicional", "instruccion_bucle", "instruccion_de_salto",
  "instruccion_constructor", "instruccion_destructor",
  "declaracion_funciones", "declaracion_funcion", "especificacion_funcion",
  "declaracion_argumentos", "declaracion_argumento", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   124,    64,    38,   260,   261,
      60,    62,   262,   263,    43,    45,    42,    47,   264,   265,
      33,   126,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,    40,    41,    94,    91,
      93,   123,   125,    63,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   107,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   111,   111,   112,   112,   112,   112,
     112,   113,   114,   114,   115,   115,   115,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   118,   118,   119,   119,
     119,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     126,   127,   128,   128,   128,   129,   129,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   133,   134,   134,   134,
     135,   136,   137,   137,   138,   139,   140,   140,   141
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     1,     1,     1,     1,     1,     3,
       1,     3,     2,     2,     3,     3,     1,     3,     4,     2,
       4,     4,     1,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     1,     1,     5,     6,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     1,     5,     3,     1,     1,     2,
       2,     2,     1,     2,     4,     5,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,    77,     6,     7,     4,     5,     0,     0,
       8,     0,     0,    78,     0,     0,     0,    24,    10,    16,
      25,    26,    27,    32,    37,    40,    43,    45,    47,    49,
      56,    58,    60,    61,    62,    74,     0,    65,    67,    68,
      69,    70,    71,    72,     1,     0,    83,     0,     0,    25,
      28,    29,    30,    31,    80,    81,    79,     0,     0,     8,
      13,     0,     0,    12,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,    66,     0,     0,    88,     0,    86,     0,
      22,    76,     0,    11,     9,    73,     0,     0,     0,    17,
      33,    34,    35,    36,    38,    39,    42,    41,    44,    46,
      48,    55,    54,    50,    51,    53,    52,    57,    59,     0,
       0,     2,    84,    85,     0,    21,     0,     0,    18,    20,
      14,    15,     0,     0,    87,    23,    75,     0,    63,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    27,    28,    29,    80,    59,    31,   109,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     4,     5,     6,   107,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yytype_int16 yypact[] =
{
     -56,   -45,   220,    23,   -46,   -82,   -44,   -58,    88,    88,
      88,    88,    37,   -82,   -82,   -82,   -82,   -82,    37,    37,
     -43,    37,   -54,   -82,    37,    37,   -54,   -82,   -21,   -82,
     -22,   -82,   -82,    43,   -82,    11,    26,    31,    57,    69,
      38,   -82,    74,    77,   -61,   -82,    73,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   220,   -82,   220,    27,    -2,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,    37,   220,   -82,
     -82,   220,     3,   -82,    47,    37,    33,    37,    37,   -54,
     -82,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
     111,    37,   -82,   -82,   141,   179,   -82,   -81,   -82,   -79,
     -82,   -82,    51,   -82,   -82,   -82,   -62,    40,    41,   -82,
     -82,   -82,   -82,   -82,    11,    11,    26,    26,    31,    57,
      69,   139,   139,   139,   139,   139,   139,   -82,    74,    82,
      60,   -82,   -82,   -82,    27,   -82,    37,   220,   -82,   -82,
     -82,   -82,   102,    37,   -82,   -82,   -82,    37,   -82,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,   -82,   -18,    35,    -1,   -82,   -82,   107,
     -82,    45,    34,    44,    61,    62,    63,   -10,    66,    56,
     -82,   -82,   -12,   -38,   -36,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   154,   -82,   -82,    21
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      64,    30,    75,    69,    70,     1,    65,    66,    73,    68,
     103,    69,    71,    72,   100,     1,   143,   104,   145,   105,
       7,     2,    22,    54,   144,   146,   101,    82,    83,    84,
      22,    55,   111,    57,    25,   112,    26,    77,    58,    78,
      85,    86,    25,    91,    26,    30,    92,    93,    94,    95,
      96,    97,     8,    67,    30,   110,    30,     9,    10,    11,
      74,   119,    81,   115,    89,   117,   118,    30,   103,   103,
      30,    14,    15,    16,    17,    90,    76,    77,    98,    78,
      99,    79,   131,   132,   133,   134,   135,   136,     8,   140,
      87,    88,   106,     9,    10,    11,    76,    77,   148,    78,
     113,    79,    20,    30,    30,    12,    13,    14,    15,    16,
      17,   156,   114,    18,    19,    60,    61,    62,    63,   124,
     125,    22,    14,    15,    16,    17,   120,   121,   122,   123,
     102,   126,   127,    25,   155,    26,   116,   139,    20,   147,
     150,   158,    21,   151,    91,   159,    30,   152,   153,   157,
     128,   149,   129,    20,   130,   138,     8,    22,    56,    23,
      24,     9,    10,    11,   137,   154,     0,     0,     0,    25,
       0,    26,    22,    12,    13,    14,    15,    16,    17,     0,
       0,    18,    19,     0,    25,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,   141,     9,
      10,    11,     0,     0,     0,     0,    20,     0,     0,     0,
      21,    12,    13,    14,    15,    16,    17,     0,     0,    18,
      19,     0,     0,     0,     0,    22,     0,    23,    24,     0,
       0,     0,     0,     0,     0,     8,   142,    25,     0,    26,
       9,    10,    11,     0,    20,     0,     0,     0,    21,     0,
       0,     0,    12,    13,    14,    15,    16,    17,     0,     0,
      18,    19,     0,    22,     0,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    26
};

static const yytype_int16 yycheck[] =
{
      12,     2,    24,    65,    22,    61,    18,    19,    26,    21,
      46,    65,    24,    25,    75,    61,    97,    55,    97,    57,
      65,    77,    84,     0,   105,   104,    87,    16,    17,    18,
      84,    77,    68,    77,    96,    71,    98,    99,    96,   101,
      14,    15,    96,     5,    98,    46,     8,     9,    10,    11,
      12,    13,    15,    96,    55,    67,    57,    20,    21,    22,
      81,    79,    19,    75,     7,    77,    78,    68,   104,   105,
      71,    34,    35,    36,    37,     6,    98,    99,     4,   101,
       3,   103,    92,    93,    94,    95,    96,    97,    15,   101,
      59,    60,    65,    20,    21,    22,    98,    99,   116,   101,
      97,   103,    65,   104,   105,    32,    33,    34,    35,    36,
      37,   147,    65,    40,    41,     8,     9,    10,    11,    85,
      86,    84,    34,    35,    36,    37,    81,    82,    83,    84,
      57,    87,    88,    96,   146,    98,   103,    26,    65,    88,
     100,   153,    69,   102,     5,   157,   147,    65,    88,    47,
      89,   116,    90,    65,    91,    99,    15,    84,     4,    86,
      87,    20,    21,    22,    98,   144,    -1,    -1,    -1,    96,
      -1,    98,    84,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    -1,    96,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    57,    20,
      21,    22,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      69,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    57,    96,    -1,    98,
      20,    21,    22,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    77,   107,   137,   138,   139,    65,    15,    20,
      21,    22,    32,    33,    34,    35,    36,    37,    40,    41,
      65,    69,    84,    86,    87,    96,    98,   108,   109,   110,
     112,   113,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,     0,    77,   138,    77,    96,   112,
     115,   115,   115,   115,   128,   128,   128,    96,   128,    65,
     110,   128,   128,   110,    81,    24,    98,    99,   101,   103,
     111,    19,    16,    17,    18,    14,    15,    59,    60,     7,
       6,     5,     8,     9,    10,    11,    12,    13,     4,     3,
      75,    87,    57,   130,   129,   129,    65,   140,   141,   114,
     128,   130,   130,    97,    65,   128,   103,   128,   128,   110,
     117,   117,   117,   117,   118,   118,   119,   119,   120,   121,
     122,   123,   123,   123,   123,   123,   123,   124,   125,    26,
     128,    57,    57,    97,   105,    97,   104,    88,   110,   111,
     100,   102,    65,    88,   141,   128,   130,    47,   128,   128
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
      
/* Line 1267 of yacc.c.  */
#line 1678 "eazy.tab.c"
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


#line 261 "eazy.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n",s);
  return 0;
}

int yywrap() {
  return 1;
}

int main(int argc, char *argv[]) {
  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./eazy NombreArchivo\n");
  }
  else {
    yyin = fopen(argv[1], "r");
    yyparse();
  }
}

