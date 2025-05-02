%{
    #include <stdio.h>
    extern FILE *yyin;
    extern int yylex();
    int yyerror (char *s);

    #define YYDEBUG 1        
%}

%token ABSTRACTO AND ASIG AND_ASIG CADA CADENA CARACTER CLASE COMO CONSTANTES CONSTRUCTOR CONTINUAR CTC_CADENA
%token CTC_CARACTER CTC_ENTERA CTC_REAL DE DEFECTO DESTRUCTOR DEVOLVER DIV_ASIG EJECUTA ENCAMBIO ENTERO
%token ENUMERACION EQ EN ES ESCAPE ESPECIFICO ESTRUCTURA ETIQUETA EXCEPCION FD_ASIG FI_ASIG FICHERO FIN FINAL
%token FLECHA_DCHA FLECHA_IZDA FUNCION GENERICO HACER HASH GE IDENTIFICADOR IMPORTAR INDIRECCION LANZA LE MIENTRAS
%token MOD MOD_ASIG MULT_ASIG NADA NEQ OR OTRA OR_ASIG PARA POT_ASIG POTENCIA PRINCIPIO PRIVADO PROGRAMA PROTEGIDO
%token PTOS PUBLICO REAL REF RESTA_ASIG SALTAR SI SINO SUMA_ASIG TAMANO TABLA TIPOS ULTIMA UNION VARIABLES XOR_ASIG

%left '+' '-'
%left '*' '/'
%left MOD
%right POTENCIA 

%%



/**********************************************************************/
/*   PROGRAMA   */
/**********************************************************************/

programa
      : cabecera_programa bloque_programa                  { printf("  ÉXITO: programa -> cabecera_programa bloque_programa\n"); }           
      | error                                              { printf("  ERROR: programa -> error\n");yyerrok; }
      ;


cabecera_programa
      : PROGRAMA IDENTIFICADOR '.' lista_librerias         { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); }
      | error                                              { printf("  ERROR: cabecera_programa -> error\n");yyerrok; }      
      ;

lista_librerias
      : 
      | lista_librerias libreria                           { printf("  lista_librerias -> lista_librerias libreria\n"); }
      ;

libreria
      : IMPORTAR nombre_lista '.'                          { printf("  libreria -> IMPORTAR nombre_lista .\n"); }
      | IMPORTAR nombre COMO IDENTIFICADOR '.'             { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); }
      | error                                              { printf("  ERROR: libreria -> error\n");yyerrok; }
      ;



nombre_lista
      : nombre                                        { printf("  lista_nombres -> nombre\n"); }
      | nombre_lista ';' nombre                     { printf("  lista_nombres -> lista_nombres ; nombre\n"); }
      ;

nombre
      : IDENTIFICADOR                     { printf("  nombre -> IDENTIFICADOR\n"); }
      | nombre PTOS IDENTIFICADOR         { printf("  nombre -> nombre PTOS IDENTIFICADOR\n"); }    
      ;

bloque_programa
    : declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones            { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); }
    ;


/**********************************************************************/
/*  TIPOS  */
/**********************************************************************/

declaraciones_tipos_opt
      : 
      | declaraciones_tipos
      | error              { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; }
      ;
declaraciones_tipos
      : TIPOS declaraciones_tipo_lista FIN 
      ;

declaraciones_tipo_lista
      : declaracion_tipo declaraciones_tipo_lista
      | declaracion_tipo
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
    : ENUMERACION 'de' tipo_escalar elemento_num_lista 'fin'
    | ESTRUCTURA linea_campo_lista 'fin'
    | UNION linea_campo_lista 'fin'
    | CLASE ultima_opt '(' nombre_lista ')' componentes 'fin'
    | CLASE ultima_opt componentes 'fin'
    ;

ultima_opt
      : 
      | ULTIMA
      ;
elemento_num_lista
    : elemento_enum elemento_num_lista
    | elemento_enum
    ;
elemento_enum
      : IDENTIFICADOR ASIG expresion
      ;

linea_campo_lista
      : linea_campo_lista linea_campo
      | linea_campo
      ;

linea_campo
      : identificador_lista ES especificacion_tipo
      ; 


identificador_lista
      : identificador_lista IDENTIFICADOR
      | IDENTIFICADOR
      ;


componentes
      : declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt declaracion_metodo_lista
      ;

declaracion_metodo_lista
      : declaracion_metodo declaracion_metodo_lista
      | declaracion_metodo
      ;
declaracion_metodo
      : visibilidad_opt modificador_opt firma_funcion cuerpo_funcion
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
declaraciones_constantes_opt
      : 
      | declaraciones_constantes
      ;
declaraciones_constantes
      : CONSTANTES declaraciones_constantes_lista FIN
      ;
declaraciones_constantes_lista
      : declaraciones_constantes_lista declaracion_constantes
      | declaracion_constantes
      ;

declaracion_constantes
      : visibilidad_opt IDENTIFICADOR ES tipo_basico ASIG constante '.'
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
      | '(' lista_elemento_hash')'
      ;

lista_elemento_hash
      : lista_elemento_hash elemento_hash
      |
      ;
elemento_hash
      : CTC_CADENA FLECHA_DCHA constante
      ;

constante_estructurada
      : '(' campo_constante_lista ')'
      ;

campo_constante_lista
      : campo_constante_lista campo_constante
      | campo_constante
      ;
lista_campo_constante
      : lista_campo_constante campo_constante
      |
      ;

campo_constante
      : IDENTIFICADOR ASIG constante
      ;


/*--------------------------------------------------------------------*/
/*  VARIABLES  */
/*--------------------------------------------------------------------*/
declaraciones_variables_opt
      : 
      | declaraciones_variables
      ;
declaraciones_variables
      : VARIABLES lista_declaracion_variables FIN
      ;

lista_declaracion_variables
      : visibilidad_opt lista_identificador_uno_o_mas ES especificacion_tipo ASIG lista_expresion_cero_o_mas '.'
      | visibilidad_opt lista_identificador_uno_o_mas ES especificacion_tipo  '.'
      | lista_declaracion_variables visibilidad_opt lista_identificador_uno_o_mas ES especificacion_tipo ASIG lista_expresion_cero_o_mas '.'
      | lista_declaracion_variables visibilidad_opt lista_identificador_uno_o_mas ES especificacion_tipo  '.'
      ;


lista_expresion_cero_o_mas
      : lista_expresion_cero_o_mas expresion
      | expresion
      |
      ;

/*--------------------------------------------------------------------*/
/*  FUNCIONES    */
/*--------------------------------------------------------------------*/

lista_declaracion_funcion_cero_o_mas
      : declaracion_funcion lista_declaracion_funcion_cero_o_mas
      | declaracion_funcion
      |
      ;
declaracion_funcion
      : visibilidad_opt firma_funcion cuerpo_funcion
      | error                 { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; }
      ;

firma_funcion
      : FUNCION IDENTIFICADOR '(' lista_parametros ')' FLECHA_DCHA tipo_salida
      | FUNCION IDENTIFICADOR FLECHA_DCHA tipo_salida
      ;

lista_parametros
      : lista_identificador_uno_o_mas ES especificacion_tipo ASIG lista_expresion_constante_una_o_mas
      | lista_identificador_uno_o_mas ES especificacion_tipo 
      | lista_parametros lista_identificador_uno_o_mas ES especificacion_tipo ASIG lista_expresion_constante_una_o_mas
      | lista_parametros lista_identificador_uno_o_mas ES especificacion_tipo 
      ;

lista_expresion_constante_una_o_mas
      : lista_expresion_constante_una_o_mas expresion_constante
      | expresion_constante
      ;
tipo_salida
      : especificacion_tipo
      | NADA
      ; 

cuerpo_funcion
      : declaraciones_constantes_opt
      | declaraciones_variables_opt
      | lista_declaracion_funcion_cero_o_mas
      | bloque_instrucciones
      ;

bloque_instrucciones 
      : PRINCIPIO lista_instrucciones_una_o_mas FIN
      ;


/*--------------------------------------------------------------------*/
/*  INSTRUCCIONES    */
/*--------------------------------------------------------------------*/

lista_instrucciones_una_o_mas
      : lista_instrucciones_una_o_mas instruccion
      | instruccion
      ;

instruccion 
      : instruccion_expresion
      | instruccion_bifurcacion
      | instruccion_bucle
      | instruccion_salto
      | instruccion_destino_salto
      | instruccion_devolver
      | instruccion_lanzamiento_excepcion
      | instruccion_captura_excepcion
      | instruccion_vacia
      | error             { printf("  ERROR: instruccion -> error\n");yyerrok; }    
      ;
instruccion_expresion
      : expresion_funcional '.'
      | asignacion '.'
      ;

asignacion
      : expresion_indexada operador_asignacion expresion
      ; 

operador_asignacion
      : ASIG
      | SUMA_ASIG
      | RESTA_ASIG
      | MULT_ASIG
      | DIV_ASIG
      | MOD_ASIG
      | POT_ASIG
      | FI_ASIG
      | FD_ASIG
      | AND_ASIG
      | XOR_ASIG
      | OR_ASIG 
      ; 
instruccion_bifurcacion
      : SI '(' expresion ')' bloque_instrucciones lista_otro_caso SINO bloque_instrucciones
      | SI '(' expresion ')' bloque_instrucciones lista_otro_caso 
      ;

lista_otro_caso
      : ENCAMBIO '(' expresion ')' bloque_instrucciones
      | ENCAMBIO '(' expresion ')' bloque_instrucciones lista_otro_caso
      |
      ;

instruccion_bucle
      : MIENTRAS '(' expresion ')' bloque_instrucciones
      | HACER bloque_instrucciones MIENTRAS '(' expresion ')' '.'
      | PARA '(' lista_asignacion_una_o_mas ':' expresion ':' lista_asignacion_una_o_mas ')' bloque_instrucciones
      | PARA CADA IDENTIFICADOR EN '(' expresion ')' bloque_instrucciones
      ;

lista_asignacion_una_o_mas
      : lista_asignacion_una_o_mas asignacion
      | asignacion
      ;

instruccion_salto
      : SALTAR IDENTIFICADOR '.' 
      | CONTINUAR '.'
      | ESCAPE '.'
      ;

instruccion_destino_salto
      : ETIQUETA IDENTIFICADOR '.'
      ;

instruccion_devolver
      : DEVOLVER expresion '.'
      | DEVOLVER '.' 
      ;

instruccion_lanzamiento_excepcion
      : LANZA EXCEPCION IDENTIFICADOR '.'
      ;

instruccion_captura_excepcion
      : lista_clausula_excepcion_especifica_cero_o_mas clausula_excepcion_general
      ;

lista_clausula_excepcion_especifica_cero_o_mas
      : 
      | lista_clausula_excepcion_especifica_cero_o_mas clausula_excepcion_especifica
      ;

clausula_excepcion_especifica
      : EXCEPCION nombre bloque_instrucciones
      ;

clausula_excepcion_general
      : OTRA EXCEPCION bloque_instrucciones
      ;

clausula_defecto
      : DEFECTO bloque_instrucciones
      ;

instruccion_vacia
      : 
      ;
      

/*--------------------------------------------------------------------*/
/*  EXPRESIONES    */
/*--------------------------------------------------------------------*/

expresion_constante 
      : CTC_ENTERA
      | CTC_REAL
      | CTC_CARACTER
      | CTC_CADENA
      ;

expresion_indexada 
      : expresion_basica
      | expresion_indexada '?' expresion_basica
      | expresion_indexada INDIRECCION expresion_basica
      | expresion_indexada INDIRECCION indice
      | expresion_indexada indice     
      ;

expresion_basica
      : nombre
      | '(' expresion ')'
      | '^' expresion_basica
      | REF expresion_basica
      ;

indice
      : '[' expresion ']'
      | '{' expresion '}'
      ;

expresion_funcional
      : IDENTIFICADOR '(' lista_expresion_cero_o_mas ')'

expresion
      : expresion_logica SI expresion SINO expresion
      | expresion_logica
      | expresion_logica PARA CADA IDENTIFICADOR EN expresion
      | error                 { printf("  ERROR: expresion -> error\n");yyerrok; }
      ;

expresion_unaria_prefijo
      : '-' expresion      
      | '~' expresion      
      | '!' expresion     
      | 'tamano' expresion 
      ;

expresion_potencia
      : expresion POTENCIA expresion
      ;

expresion_aritmetica
      : expresion '*' expresion
      | expresion '/' expresion
      | expresion MOD expresion
      ;

expresion_numerica
      : expresion '+' expresion
      | expresion '-' expresion
      ;

expresion_desplazamiento
      : expresion FLECHA_IZDA expresion
      | expresion FLECHA_DCHA expresion
      ;

expresion_logica_binaria
      : expresion '&' expresion
      | expresion '@' expresion
      | expresion '|' expresion
      ;

expresion_comparacion
      : expresion '<' expresion
      | expresion '>' expresion
      | expresion LE expresion
      | expresion GE expresion
      | expresion EQ expresion
      | expresion NEQ expresion
      ;

expresion_logica
      : expresion AND expresion
      | expresion OR expresion
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
