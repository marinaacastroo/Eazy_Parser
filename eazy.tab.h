/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

