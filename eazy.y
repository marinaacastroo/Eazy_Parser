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
/*   PROGRAMA   */
/**********************************************************************/

programa
        : cabecera_programa bloque_programa
        ;


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

bloque_programa
      : declaraciones_tipos
      | declaraciones_constantes
      | declaraciones_variables
      | declaracion_funcion
      | bloque_instrucciones 
      ;

/**********************************************************************/
/*  TIPOS  */
/**********************************************************************/

declaraciones_tipos
      : TIPOS lista_declaraciones_tipo FIN 
      ;

lista_declaraciones_tipo
      : declaracion_tipo lista_declaraciones_tipo
      |
      ;

declaracion_tipo
      : visibilidad_opt IDENTIFICADOR ES lista_ref tipo_basico '.'
      | visibilidad_opt IDENTIFICADOR ES lista_ref tipo_estructurado 
      ;


visibilidad_opt
      : 
      | PUBLICO
      | PROTEGIDO
      | PRIVADO
      ;

lista_ref
      : 
      | lista_ref REF
      ;

tipo_basico
      : nombre
      | tipo_escalar
      | tipo_tabla
      ;
tipo_escalar
      : ENTERO
      | REAL
      | CARACTER
      | CADENA
      | FICHERO
      | EXCEPCION
      ;

tipo_tabla
      : TABLA DE especificacion_tipo
      | TABLA HASH DE especificacion_tipo
      ;

especificacion_tipo
      : lista_ref tipo_basico
      | lista_ref tipo_estructurado
      ;

tipo_estructurado
    : ENUMERACION 'de' tipo_escalar lista_elemento_num 'fin'
    | ESTRUCTURA lista_linea_campo 'fin'
    | UNION lista_linea_campo 'fin'
    | CLASE ultima_opt '(' lista_nombre_una_o_mas ')' componentes 'fin'
    | CLASE ultima_opt componentes 'fin'
    ;

ultima_opt
      : 
      | ULTIMA
      ;
lista_elemento_num
      : elemento_numerico lista_elemento_num
      ;
elemento_numerico
      : IDENTIFICADOR ASIG expresion
      ;

lista_linea_campo
      : lista_linea_campo linea_campo
      ;

linea_campo
      : lista_identificador_uno_o_mas ES especificacion_tipo
      ; 

lista_identificador_uno_o_mas
      : lista_identificador_uno_o_mas IDENTIFICADOR 
      ;

lista_nombre_una_o_mas
      : lista_nombre_una_o_mas nombre
      ;

componentes
      :
      | declaraciones_tipos
      | declaraciones_constantes
      | declaraciones_variables
      | declaracion_metodo
      ;

declaracion_metodo
      : visibilidad_opt modificador_opt firma_funcion cuerpo_funcion
      | declaracion_metodo visibilidad_opt modificador_opt firma_funcion cuerpo_funcion
      ; 

modificador_opt
      : 
      | CONSTRUCTOR
      | DESTRUCTOR
      | GENERICO
      | ABSTRACTO
      | ESPECIFICO
      | FINAL
      ;

/*--------------------------------------------------------------------*/
/*  CONSTANTES  */
/*--------------------------------------------------------------------*/

declaraciones_constantes
      : CONSTANTES lista_declaraciones_constantes FIN
      ;
lista_declaraciones_constantes
      : visibilidad_opt IDENTIFICADOR ES tipo_basico ASIG constante '.'
      | lista_declaraciones_constantes visibilidad_opt IDENTIFICADOR ES tipo_basico ASIG constante '.'
      ;

constante
      : CTC_ENTERA
      | CTC_REAL
      | CTC_CARACTER
      | CTC_CADENA
      | constante_tabla
      | constante_estructurada
      ;

constante_tabla
      : '(' lista_campo_constante ')'
      ;

lista_campo_constante
      : lista_campo_constante campo_constante
      | campo_constante
      ;

campo_constante
      : IDENTIFICADOR ASIG constante
      ;


/*--------------------------------------------------------------------*/
/*  VARIABLES  */
/*--------------------------------------------------------------------*/

declaraciones_variables
      : VARIABLES lista_declaracion_variables FIN
      ;

lista_declaracion_variables
      : visibilidad_opt lista_identificador_uno_o_mas ES especificacion_tipo ASIG lista_expresion '.'
      | visibilidad_opt lista_identificador_uno_o_mas ES especificacion_tipo  '.'
      | lista_declaracion_variables visibilidad_opt lista_identificador_uno_o_mas ES especificacion_tipo ASIG lista_expresion '.'
      | lista_declaracion_variables visibilidad_opt lista_identificador_uno_o_mas ES especificacion_tipo  '.'
      ;

lista_expresion
      : lista_expresion expresion
      ;

/*--------------------------------------------------------------------*/
/*  FUNCIONES    */
/*--------------------------------------------------------------------*/

declaracion





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
