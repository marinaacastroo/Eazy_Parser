%{
  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);
%}

/* Prioridades para evitar conflictos */
%left OR
%left AND
%left '|' '@' '&'
%left EQ NEQ
%left '<' '>' LE GE
%left '+' '-'
%left '*' '/' MOD
%right POTENCIA
%right '!' '~' TAMANO


%token ABSTRACTO AND ASIG AND_ASIG CADA CADENA CARACTER CLASE COMO CONSTANTES CONSTRUCTOR CONTINUAR CTC_CADENA
%token CTC_CARACTER CTC_ENTERA CTC_REAL DE DEFECTO DESTRUCTOR DEVOLVER DIV_ASIG EJECUTA ENCAMBIO ENTERO
%token ENUMERACION EQ EN ES ESCAPE ESPECIFICO ESTRUCTURA ETIQUETA EXCEPCION FD_ASIG FI_ASIG FICHERO FIN FINAL
%token FLECHA_DCHA FLECHA_IZDA FUNCION GENERICO HACER HASH GE IDENTIFICADOR IMPORTAR INDIRECCION LANZA LE MIENTRAS
%token MOD MOD_ASIG MULT_ASIG NADA NEQ OR OTRA OR_ASIG PARA POT_ASIG POTENCIA PRINCIPIO PRIVADO PROGRAMA PROTEGIDO
%token PTOS PUBLICO REAL REF RESTA_ASIG SALTAR SI SINO SUMA_ASIG TAMANO TABLA TIPOS ULTIMA UNION VARIABLES XOR_ASIG

%%

/************/
/* programa */
/************/
programa:
      declaracion_funciones PRINCIPIO lista_instrucciones FIN
    | PRINCIPIO lista_instrucciones FIN
;

/**************/
/* expresiones */
/**************/

/* Constantes */
expresion_constante:
      CTC_ENTERA
    | CTC_REAL
    | CTC_CADENA
    | CTC_CARACTER
;

/* Nombre compuesto */
nombre:
      IDENTIFICADOR
    | nombre PTOS IDENTIFICADOR
;

/* Expresión básica */
expresion_basica:
      nombre
    | '(' expresion ')'
    | '^' expresion_basica
    | REF expresion_basica
;

/* Índices */
indice:
      '[' expresion ']'
    | '{' expresion '}'
;

/* Expresión indexada */
expresion_indexada:
      expresion_basica
    | expresion_indexada '?' expresion_basica
    | expresion_indexada '^' '?' expresion_basica
    | expresion_indexada indice
    | expresion_indexada '^' '?' indice
;

/* Expresión funcional */
expresion_funcional:
      IDENTIFICADOR '(' lista_expresiones ')'
;

/* Lista de expresiones separadas por ';' */
lista_expresiones:
      expresion
    | lista_expresiones ';' expresion
;

/* Primario */
primario:
      expresion_constante
    | expresion_indexada
    | expresion_funcional
;

/* Expresión unaria */
expresion_unaria:
      primario
    | '-' primario
    | '!' primario
    | '~' primario
    | TAMANO primario
;

/* Expresión de potencia (**) */
expresion_potencia:
      expresion_unaria
    | expresion_unaria POTENCIA expresion_potencia
;

/* Expresión multiplicativa (*, /, mod) */
expresion_mult:
      expresion_mult '*' expresion_potencia
    | expresion_mult '/' expresion_potencia
    | expresion_mult MOD expresion_potencia
    | expresion_potencia
;

/* Expresión aditiva (+, -) */
expresion_add:
      expresion_add '+' expresion_mult
    | expresion_add '-' expresion_mult
    | expresion_mult
;

/* Expresión de desplazamiento (<-, ->) */
expresion_desplazamiento:
      expresion_desplazamiento FLECHA_IZDA expresion_add
    | expresion_desplazamiento FLECHA_DCHA expresion_add
    | expresion_add
;

/* Expresión AND binario (&) */
expresion_and_binario:
      expresion_and_binario '&' expresion_desplazamiento
    | expresion_desplazamiento
;

/* Expresión XOR binario (@) */
expresion_xor_binario:
      expresion_xor_binario '@' expresion_and_binario
    | expresion_and_binario
;

/* Expresión OR binario (|) */
expresion_or_binario:
      expresion_or_binario '|' expresion_xor_binario
    | expresion_xor_binario
;

/* Expresión relacional (<, >, <=, >=, ==, !=) */
expresion_relacional:
      expresion_or_binario '<' expresion_or_binario
    | expresion_or_binario '>' expresion_or_binario
    | expresion_or_binario LE expresion_or_binario
    | expresion_or_binario GE expresion_or_binario
    | expresion_or_binario EQ expresion_or_binario
    | expresion_or_binario NEQ expresion_or_binario
    | expresion_or_binario
;

/* Expresión AND lógico (&&) */
expresion_and:
      expresion_and AND expresion_relacional
    | expresion_relacional
;

/* Expresión OR lógico (||) */
expresion_or:
      expresion_or OR expresion_and
    | expresion_and
;

/* Expresión lógica final */
expresion_logica:
      expresion_or
;

/* Expresión raíz */
expresion:
      expresion_logica
    | expresion_logica SI expresion SINO expresion
    | expresion_logica PARA CADA IDENTIFICADOR EN expresion
;

/*****************/
/* instrucciones */
/*****************/

lista_instrucciones:
      instruccion
    | lista_instrucciones instruccion
;

instruccion:
      expresion_instruccion
    | instruccion_condicional
    | instruccion_bucle
    | instruccion_de_salto
    | instruccion_constructor
    | instruccion_destructor
;

/* Para que no haya conflictos con expresiones */
expresion_instruccion:
      expresion_indexada ASIG expresion
    | expresion
;

instruccion_condicional:
    SI expresion instruccion SINO instruccion
;

instruccion_bucle:
    MIENTRAS expresion instruccion
;

instruccion_de_salto:
      CONTINUAR
    | SALTAR
    | DEVOLVER expresion
;

instruccion_constructor:
    CONSTRUCTOR expresion
;

instruccion_destructor:
    DESTRUCTOR expresion
;

/**********************/
/* Declaración funciones */
/**********************/

declaracion_funciones:
      declaracion_funcion
    | declaracion_funciones declaracion_funcion
;

declaracion_funcion:
    especificacion_funcion PRINCIPIO lista_instrucciones FIN
;

especificacion_funcion:
    FUNCION IDENTIFICADOR '(' declaracion_argumentos ')'
;

declaracion_argumentos:
      declaracion_argumento
    | declaracion_argumentos ',' declaracion_argumento
;

declaracion_argumento:
    IDENTIFICADOR
;

%%

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
