%{
    #include <stdio.h>
    extern FILE *yyin;
    extern int yylex();
    int yyerror (char *s);

    #define YYDEBUG 1        
%}

%token ABSTRACTO AND ASIG AND_ASIG CADA CADENA CARACTER CLASE COMO CONSTANTES
%token CONSTRUCTOR CONTINUAR CTC_CADENA CTC_CARACTER CTC_ENTERA CTC_REAL DE
%token DEFECTO DESTRUCTOR DEVOLVER DIV_ASIG EJECUTA ENCAMBIO ENTERO ENUMERACION
%token EQ EN ESCAPE ES ESPECIFICO ESTRUCTURA ETIQUETA EXCEPCION FD_ASIG FI_ASIG
%token FICHERO FIN FINAL FLECHA_DCHA FLECHA_IZDA FUNCION GENERICO HACER HASH GE
%token IDENTIFICADOR IMPORTAR INDIRECCION LANZA LE MIENTRAS MOD MOD_ASIG
%token MULT_ASIG NADA NEQ OR OTRA OR_ASIG PARA POT_ASIG POTENCIA PRINCIPIO
%token PRIVADO PROGRAMA PROTEGIDO PTOS PUBLICO REAL REF RESTA_ASIG SALTAR
%token SI SINO SUMA_ASIG TAMANO TABLA TIPOS ULTIMA UNION VARIABLES XOR_ASIG

%%

/**********************************************************************/
/* 1.  PROGRAMA                                                       */
/**********************************************************************/

programa
        : cabecera_programa bloque_programa
        ;

/*------------------ 1.1 Cabecera ------------------------------------*/

cabecera_programa
        : PROGRAMA IDENTIFICADOR '.' lista_librerias
        ;

lista_librerias
        : 
        | lista_librerias libreria
        ;

libreria
        : IMPORTAR nombre_lista '.'
        | IMPORTAR nombre COMO IDENTIFICADOR '.'
        ;


nombre_lista
    : nombre 
    | nombre_lista '.' 
    | nombre_lista PTOS nombre 
    ;



nombre
        : IDENTIFICADOR
        | nombre PTOS IDENTIFICADOR        
        ;

/**********************************************************************/
/* 2.  BLOQUE PRINCIPAL                                               */
/**********************************************************************/

bloque_programa
        : PRINCIPIO secciones FIN
        ;

secciones
        : bloque_tipos bloque_constantes bloque_variables bloque_funciones bloque_instrucciones
        ;

/*------------------ 2.1 Sección TIPOS -------------------------------*/

bloque_tipos
        :                           /* ε */
        | TIPOS contenido_tipos FIN
        ;

contenido_tipos
        : 
          contenido_tipos_pieza
          |                       /* ε */
        ;

contenido_tipos_pieza
        : IDENTIFICADOR
        | error { yyerrok; }     
        ;

/*------------------ 2.2 Sección CONSTANTES --------------------------*/

bloque_constantes
        :                           /* ε */
        | CONSTANTES contenido_constantes FIN
        ;

contenido_constantes
        : contenido_constantes pieza_const
        |                           /* ε */
        ;

pieza_const
        : IDENTIFICADOR
        | error { yyerrok; }
        ;

/*------------------ 2.3 Sección VARIABLES ---------------------------*/

bloque_variables
        :                           /* ε */
        | VARIABLES contenido_variables FIN
        ;

contenido_variables
        : contenido_variables pieza_var
        |                           /* ε */
        ;

pieza_var
        : IDENTIFICADOR
        | error { yyerrok; }
        ;

/*------------------ 2.4 Funciones de nivel superior -----------------*/

bloque_funciones
        :                           /* ε */
        | bloque_funciones declaracion_funcion
        ;

declaracion_funcion
        : firma_funcion cuerpo_funcion
        ;

firma_funcion
        : FUNCION IDENTIFICADOR '(' lista_argumentos ')'
        ;

lista_argumentos
        :                       /* ε */
        | lista_argumentos_nonempty
        ;

lista_argumentos_nonempty
        : IDENTIFICADOR
        | lista_argumentos_nonempty ',' IDENTIFICADOR
        ;

/*------------------ 2.4.1 Cuerpo de una función ---------------------*/

cuerpo_funcion
        : PRINCIPIO bloque_instrucciones FIN
        ;

/*--------------------------------------------------------------------*/
/* 3.  INSTRUCCIONES (sección PRINCIPIO…FIN del programa o función)   */
/*--------------------------------------------------------------------*/

bloque_instrucciones
        : PRINCIPIO lista_instrucciones FIN
        ;

lista_instrucciones
        : instruccion
        | lista_instrucciones instruccion
        ;

instruccion
        : asignacion
        | instruccion_condicional
        | instruccion_bucle
        | instruccion_de_salto
        | instruccion_constructor
        | instruccion_destructor
        | instruccion_expresion
        | ';'                           
        | error ';'  { yyerrok; }        
        ;

/*--------------------------------------------------------------------*/
/*      3.1  Asignaciones y expresiones                               */
/*--------------------------------------------------------------------*/

asignacion
        : expresion_indexada ASIG expresion
        ;

/*------------------ 3.2  Condicionales ------------------------------*/

instruccion_condicional
        : SI expresion bloque_instrucciones SINO bloque_instrucciones
        ;

/*------------------ 3.3  Bucles -------------------------------------*/

instruccion_bucle
        : MIENTRAS expresion bloque_instrucciones
        ;

/*------------------ 3.4  Saltos / retorno ---------------------------*/

instruccion_de_salto
        : CONTINUAR
        | SALTAR
        | DEVOLVER expresion
        ;

/*------------------ 3.5  Constr./Destr. (place-holders) -------------*/

instruccion_constructor
        : CONSTRUCTOR expresion bloque_instrucciones
        ;

instruccion_destructor
        : DESTRUCTOR expresion bloque_instrucciones
        ;

/*------------------ 3.6  Una expresión como instrucción ------------*/

instruccion_expresion
        : expresion
        ;

/*--------------------------------------------------------------------*/
/* 4.  EXPRESIONES  (idénticas a las que ya tenías)                   */
/*--------------------------------------------------------------------*/

expresion_constante
        : CTC_ENTERA | CTC_REAL | CTC_CADENA | CTC_CARACTER
        ;

expresion_basica
        : nombre
        | '(' expresion ')'
        | '^' expresion_basica
        | REF expresion_basica
        ;

indice  : '[' expresion ']' | '{' expresion '}' ;

expresion_indexada
        : expresion_basica
        | expresion_indexada '?'  expresion_basica
        | expresion_indexada '^' '?' expresion_basica
        | expresion_indexada indice
        | expresion_indexada '^' '?' indice
        ;

expresion_funcional
        : IDENTIFICADOR '(' lista_expresiones ')'
        ;

lista_expresiones
        : expresion
        | lista_expresiones ';' expresion
        ;

primario
        : expresion_constante
        | expresion_indexada
        | expresion_funcional
        ;

expresion_unaria
        : primario
        | '-' primario
        | '!' primario
        | '~' primario
        | TAMANO primario
        ;

expresion_potencia
        : expresion_unaria
        | expresion_unaria POTENCIA expresion_potencia
        ;

expresion_mult
        : expresion_mult '*'  expresion_potencia
        | expresion_mult '/'  expresion_potencia
        | expresion_mult MOD  expresion_potencia
        | expresion_potencia
        ;

expresion_add
        : expresion_add '+' expresion_mult
        | expresion_add '-' expresion_mult
        | expresion_mult
        ;

expresion_desplazamiento
        : expresion_desplazamiento FLECHA_IZDA expresion_add
        | expresion_desplazamiento FLECHA_DCHA expresion_add
        | expresion_add
        ;

expresion_and_binario
        : expresion_and_binario '&' expresion_desplazamiento
        | expresion_desplazamiento
        ;

expresion_xor_binario
        : expresion_xor_binario '@' expresion_and_binario
        | expresion_and_binario
        ;

expresion_or_binario
        : expresion_or_binario '|' expresion_xor_binario
        | expresion_xor_binario
        ;

expresion_relacional
        : expresion_or_binario '<'  expresion_or_binario
        | expresion_or_binario '>'  expresion_or_binario
        | expresion_or_binario LE   expresion_or_binario
        | expresion_or_binario GE   expresion_or_binario
        | expresion_or_binario EQ   expresion_or_binario
        | expresion_or_binario NEQ  expresion_or_binario
        | expresion_or_binario
        ;

expresion_and
        : expresion_and AND expresion_relacional
        | expresion_relacional
        ;

expresion_or
        : expresion_or OR expresion_and
        | expresion_and
        ;

expresion_logica : expresion_or ;

expresion
        : expresion_logica
        | expresion_logica SI expresion SINO expresion
        | expresion_logica PARA CADA IDENTIFICADOR EN expresion
        ;

%%

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
