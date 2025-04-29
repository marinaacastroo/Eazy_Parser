%{
  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);

%}

%token ABSTRACTO AND ASIG AND_ASIG CADA CADENA CARACTER CLASE COMO CONSTANTES CONSTRUCTOR CONTINUAR CTC_CADENA
%token CTC_CARACTER CTC_ENTERA CTC_REAL DE DEFECTO DESTRUCTOR DEVOLVER DIV_ASIG EJECUTA ENCAMBIO ENTERO
%token ENUMERACION EQ EN ES ESCAPE ESPECIFICO ESTRUCTURA ETIQUETA EXCEPCION FD_ASIG FI_ASIG FICHERO FIN FINAL
%token FLECHA_DCHA FLECHA_IZDA FUNCION GENERICO HACER HASH GE IDENTIFICADOR IMPORTAR INDIRECCION LANZA LE MIENTRAS
%token MOD MOD_ASIG MULT_ASIG NADA NEQ OR OTRA OR_ASIG PARA POT_ASIG POTENCIA PRINCIPIO PRIVADO PROGRAMA PROTEGIDO
%token PTOS PUBLICO REAL REF RESTA_ASIG SALTAR SI SINO SUMA_ASIG TAMANO TABLA TIPOS ULTIMA UNION VARIABLES XOR_ASIG

%%

programa:
    cabecera_programa bloque_programa
;

cabecera_programa:
    PROGRAMA nombre '.' lista_librerias
;

lista_librerias:
      /* vacío */
    | lista_librerias libreria
;

libreria
    : IMPORTAR lista_nombres_punto              
    | IMPORTAR nombre  COMO IDENTIFICADOR  '.'   
    ;

lista_nombres_punto           
    : lista_nombres_semi '.'
    ;

lista_nombres_semi            
    : nombre
    | lista_nombres_semi ';' nombre
    ;


nombre:
      IDENTIFICADOR
    | nombre PTOS IDENTIFICADOR
;

bloque_programa:
    PRINCIPIO bloque_declaraciones_instrucciones FIN
;

bloque_declaraciones_instrucciones:
      bloque_tipos bloque_constantes bloque_variables bloque_funciones bloque_instrucciones
;

bloque_tipos
    :                 
    | TIPOS error FIN     
    | TIPOS error FIN '.' 
    ;


bloque_constantes:
      /* vacío */
    | CONSTANTES lista_nombres
;

bloque_variables:
      /* vacío */
    | VARIABLES lista_nombres
;

lista_nombres:
      nombre
    | lista_nombres nombre
;

bloque_funciones:
      /* vacío */
    | bloque_funciones declaracion_funcion
;

declaracion_funcion:
    especificacion_funcion bloque_instrucciones
;

especificacion_funcion:
    FUNCION IDENTIFICADOR '(' lista_argumentos ')'
;

lista_argumentos:
      /* vacío */
    | lista_argumentos_nonempty
;

lista_argumentos_nonempty:
      IDENTIFICADOR
    | lista_argumentos_nonempty ',' IDENTIFICADOR
;

bloque_instrucciones:
    PRINCIPIO lista_instrucciones FIN
;

lista_instrucciones:
      instruccion
    | lista_instrucciones instruccion
;

instruccion:
      asignacion
    | instruccion_condicional
    | instruccion_bucle
    | instruccion_de_salto
    | instruccion_constructor
    | instruccion_destructor
    | instruccion_expresion
;

asignacion:
    expresion_indexada ASIG expresion
;

instruccion_condicional:
    SI expresion bloque_instrucciones SINO bloque_instrucciones
;


instruccion_bucle:
    MIENTRAS expresion bloque_instrucciones
;

instruccion_de_salto:
      CONTINUAR
    | SALTAR
    | DEVOLVER expresion
;

instruccion_constructor:
    CONSTRUCTOR expresion bloque_instrucciones
;

instruccion_destructor:
    DESTRUCTOR expresion bloque_instrucciones
;

instruccion_expresion:
    expresion
;

expresion_constante:
      CTC_ENTERA
    | CTC_REAL
    | CTC_CADENA
    | CTC_CARACTER
;

expresion_basica:
      nombre
    | '(' expresion ')'
    | '^' expresion_basica
    | REF expresion_basica
;

indice:
      '[' expresion ']'
    | '{' expresion '}'
;

expresion_indexada:
      expresion_basica
    | expresion_indexada '?' expresion_basica
    | expresion_indexada '^' '?' expresion_basica
    | expresion_indexada indice
    | expresion_indexada '^' '?' indice
;

expresion_funcional:
    IDENTIFICADOR '(' lista_expresiones ')'
;

lista_expresiones:
      expresion
    | lista_expresiones ';' expresion
;

primario:
      expresion_constante
    | expresion_indexada
    | expresion_funcional
;

expresion_unaria:
      primario
    | '-' primario
    | '!' primario
    | '~' primario
    | TAMANO primario
;

expresion_potencia:
      expresion_unaria
    | expresion_unaria POTENCIA expresion_potencia
;

expresion_mult:
      expresion_mult '*' expresion_potencia
    | expresion_mult '/' expresion_potencia
    | expresion_mult MOD expresion_potencia
    | expresion_potencia
;

expresion_add:
      expresion_add '+' expresion_mult
    | expresion_add '-' expresion_mult
    | expresion_mult
;

expresion_desplazamiento:
      expresion_desplazamiento FLECHA_IZDA expresion_add
    | expresion_desplazamiento FLECHA_DCHA expresion_add
    | expresion_add
;

expresion_and_binario:
      expresion_and_binario '&' expresion_desplazamiento
    | expresion_desplazamiento
;

expresion_xor_binario:
      expresion_xor_binario '@' expresion_and_binario
    | expresion_and_binario
;

expresion_or_binario:
      expresion_or_binario '|' expresion_xor_binario
    | expresion_xor_binario
;

expresion_relacional:
      expresion_or_binario '<' expresion_or_binario
    | expresion_or_binario '>' expresion_or_binario
    | expresion_or_binario LE expresion_or_binario
    | expresion_or_binario GE expresion_or_binario
    | expresion_or_binario EQ expresion_or_binario
    | expresion_or_binario NEQ expresion_or_binario
    | expresion_or_binario
;

expresion_and:
      expresion_and AND expresion_relacional
    | expresion_relacional
;

expresion_or:
      expresion_or OR expresion_and
    | expresion_and
;

expresion_logica:
    expresion_or
;

expresion:
      expresion_logica
    | expresion_logica SI expresion SINO expresion
    | expresion_logica PARA CADA IDENTIFICADOR EN expresion
;

%%

int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n", s);
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
    yyparse();
  }
}
