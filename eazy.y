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

        
%%



/**********************************************************************/
/*   PROGRAMA   */
/**********************************************************************/

programa
      : cabecera_programa bloque_programa                  { printf("  ÉXITO: programa -> cabecera_programa bloque_programa\n"); }           
      | error '\n'                                            { printf("  ERROR: programa -> error\n");yyerrok; }
      ;


cabecera_programa
      : PROGRAMA IDENTIFICADOR '.' lista_librerias         { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); }
      | error '\n'                                             { printf("  ERROR: cabecera_programa -> error\n");yyerrok; }      
      ;

lista_librerias
      : 
      | lista_librerias libreria                           { printf("  lista_librerias -> lista_librerias libreria\n"); }
      ;

libreria
      : IMPORTAR nombre_lista '.'                          { printf("  libreria -> IMPORTAR nombre_lista .\n"); }
      | IMPORTAR nombre COMO IDENTIFICADOR '.'             { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); }
      | error '\n'                                             { printf("  ERROR: libreria -> error\n");yyerrok; }
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
    : declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion bloque_instrucciones            { printf("  bloque_programa -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion_cero_o_mas bloque_instrucciones\n"); }
    ;


/**********************************************************************/
/*  TIPOS  */
/**********************************************************************/

declaraciones_tipos_opt
      : 
      | declaraciones_tipos    { printf("  declaraciones_tipos_opt -> declaraciones_tipos\n");yyerrok; }
      | error '\n'             { printf("  ERROR: declaraciones_tipos_opt -> error\n");yyerrok; }
      ;
declaraciones_tipos
      : TIPOS declaraciones_tipo_lista FIN    { printf("  declaraciones_tipos -> TIPOS declaraciones_tipo_lista FIN\n");yyerrok; }
      ;

declaraciones_tipo_lista
      : declaracion_tipo declaraciones_tipo_lista    { printf("  declaraciones_tipo_lista -> declaracion_tipo declaraciones_tipo_lista\n"); }
      | declaracion_tipo                             { printf("  declaraciones_tipo_lista -> declaracion_tipo\n"); }
      ;

declaracion_tipo
      : visibilidad_opt IDENTIFICADOR ES lista_ref tipo_basico '.'      { printf("  declaracion_tipo -> visibilidad_opt IDENTIFICADOR ES lista_ref tipo_basico .\n"); }
      | visibilidad_opt IDENTIFICADOR ES lista_ref tipo_estructurado    { printf("  declaracion_tipo -> visibilidad_opt IDENTIFICADOR ES lista_ref tipo_estructurado\n"); }
      ;


visibilidad_opt
      : 
      | PUBLICO         { printf("  visibilidad_opt -> PUBLICO\n"); }
      | PROTEGIDO       { printf("  visibilidad_opt -> PROTEGIDO\n"); }
      | PRIVADO         { printf("  visibilidad_opt -> PRIVADO\n"); }
      ;

lista_ref
      : 
      | lista_ref REF   { printf("  lista_ref -> lista_ref REF\n"); }
      ;

tipo_basico
      : nombre          { printf("  tipo_basico -> nombre\n"); }
      | tipo_escalar    { printf("  tipo_basico -> tipo_escalar\n"); }
      | tipo_tabla      { printf("  tipo_basico -> tipo_tabla\n"); }
      ;
tipo_escalar
      : ENTERO          { printf("  tipo_escalar -> ENTERO\n"); }
      | REAL            { printf("  tipo_escalar -> REAL\n"); }
      | CARACTER        { printf("  tipo_escalar -> CARACTER\n"); }
      | CADENA          { printf("  tipo_escalar -> CADENA\n"); }
      | FICHERO         { printf("  tipo_escalar -> FICHERO\n"); }
      | EXCEPCION       { printf("  tipo_escalar -> EXCEPCION\n"); }
      ;

tipo_tabla
      : TABLA DE especificacion_tipo            { printf("  tipo_tabla -> TABLA DE especificacion_tipo\n"); }
      | TABLA HASH DE especificacion_tipo       { printf("  tipo_tabla -> TABLA HASH DE especificacion_tipo\n"); }
      ;

especificacion_tipo
      : lista_ref tipo_basico                   { printf("  especificacion_tipo -> lista_ref tipo_basico\n"); }
      | lista_ref tipo_estructurado             { printf("  especificacion_tipo -> lista_ref tipo_estructurado\n"); }
      ;

tipo_estructurado
      : ENUMERACION DE tipo_escalar elemento_num_lista FIN          { printf("  tipo_estructurado -> ENUMERACION DE tipo_escalar elemento_num_lista FIN\n"); }
      | ESTRUCTURA linea_campo_lista FIN                            { printf("  tipo_estructurado -> ESTRUCTURA linea_campo_lista FIN\n"); }
      | UNION linea_campo_lista FIN                                 { printf("  tipo_estructurado -> UNION linea_campo_lista FIN\n"); }  
      | CLASE ultima_opt '(' nombre_lista ')' componentes FIN       { printf("  tipo_estructurado -> CLASE ultima_opt '(' nombre_lista ')' componentes FIN\n"); }
      | CLASE ultima_opt componentes FIN                    { printf("  tipo_estructurado -> CLASE ultima_opt componentes FIN\n"); }
      ;

ultima_opt
      : 
      | ULTIMA                      { printf("  ultima_opt -> ULTIMA\n"); }
      ;
elemento_num_lista
    : elemento_enum ';' elemento_num_lista      { printf("  elemento_num_lista -> elemento_enum ; elemento_num_lista\n"); }
    | elemento_enum                             { printf("  elemento_num_lista -> elemento_enum\n"); }
    ;
elemento_enum
      : IDENTIFICADOR ASIG expresion            { printf("  elemento_enum -> IDENTIFICADOR ASIG expresion\n"); }
      ;

linea_campo_lista
      : linea_campo ';' linea_campo_lista       { printf("  linea_campo_lista -> linea_campo ; linea_campo_lista\n"); }
      | linea_campo                             { printf("  linea_campo_lista -> linea_campo\n"); }
      ;

linea_campo
      : identificador_lista ES especificacion_tipo    { printf("  linea_campo -> identificador_lista ES especificacion_tipo\n"); }
      ; 


identificador_lista
      : identificador_lista ';' IDENTIFICADOR               { printf("  identificador_lista -> identificador_lista ; IDENTIFICADOR\n"); }
      | IDENTIFICADOR                { printf("  identificador_lista -> IDENTIFICADOR\n"); }          
      ;


componentes
      : declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt declaracion_metodo_lista             { printf("  componentes -> declaraciones_tipos_opt declaraciones_constantes_opt declaraciones_variables_opt declaracion_metodo_lista\n"); }
      ;

declaracion_metodo_lista
      : declaracion_metodo declaracion_metodo_lista               { printf("  declaracion_metodo_lista -> declaracion_metodo declaracion_metodo_lista\n"); }
      | declaracion_metodo                { printf("  declaracion_metodo_lista -> declaracion_metodo\n"); } 
      ;
declaracion_metodo
      : visibilidad_opt modificador_opt firma_funcion cuerpo_funcion          { printf("  declaracion_metodo -> visibilidad_opt modificador_opt firma_funcion cuerpo_funcion\n"); }
      ; 

modificador_opt
      : 
      | CONSTRUCTOR                 { printf("  modificador_opt -> CONSTRUCTOR\n"); }
      | DESTRUCTOR                  { printf("  modificador_opt -> DESTRUCTOR\n"); }
      | GENERICO                    { printf("  modificador_opt -> GENERICO\n"); }
      | ABSTRACTO                   { printf("  modificador_opt -> ABSTRACTO\n"); }
      | ESPECIFICO                  { printf("  modificador_opt -> ESPECIFICO\n"); }
      | FINAL                       { printf("  modificador_opt -> FINAL\n"); }
      ;

/*--------------------------------------------------------------------*/
/*  CONSTANTES  */
/*--------------------------------------------------------------------*/
declaraciones_constantes_opt
      : 
      | declaraciones_constantes          { printf("  declaraciones_constantes_opt -> declaraciones_constantes\n"); }
      ;
declaraciones_constantes_lista
      : declaraciones_constantes_lista declaracion_constantes           { printf("  declaraciones_constantes_lista -> declaraciones_constantes_lista declaracion_constantes\n"); }
      | declaracion_constantes                                          { printf("  declaraciones_constantes_lista -> declaracion_constantes\n"); }   
      ;
declaraciones_constantes
      : CONSTANTES declaraciones_constantes_lista FIN                   { printf("  declaraciones_constantes -> CONSTANTES declaraciones_constantes_lista FIN\n"); }
      ;


declaracion_constantes
      : visibilidad_opt IDENTIFICADOR ES tipo_basico ASIG constante '.'             { printf("  declaracion_constantes -> visibilidad_opt IDENTIFICADOR ES tipo_basico ASIG constante .\n"); }
      ;

constante
      : CTC_ENTERA                        { printf("  constante -> CTC_ENTERA\n"); }
      | CTC_REAL                          { printf("  constante -> CTC_REAL\n"); }  
      | CTC_CARACTER                      { printf("  constante -> CTC_CARACTER\n"); }    
      | CTC_CADENA                        { printf("  constante -> CTC_CADENA\n"); }
      | constante_tabla                   { printf("  constante -> constante_tabla\n"); }
      | constante_estructurada            { printf("  constante -> constante_estructurada\n"); }
      ;

constante_tabla
      : '(' lista_constante ')'                 { printf("  constante -> '(' lista_constante ')'\n"); }
      | '(' lista_elemento_hash ')'             { printf("  constante -> '(' lista_elemento_hash ')'\n"); }
      ;

lista_constante
      : 
      | constante ';' lista_constante           { printf("  lista_constante -> constante ; lista_constante\n"); }
      ;


lista_elemento_hash
      : elemento_hash ';' lista_elemento_hash   { printf("  lista_elemento_hash -> elemento_hash ; lista_elemento_hash\n"); }
      | elemento_hash                           { printf("  lista_elemento_hash -> elemento_hash\n"); }     
      ;
elemento_hash
      : 
      | CTC_CADENA FLECHA_DCHA constante        { printf("  elemento_hash -> CTC_CADENA FLECHA_DCHA constante\n"); }
      ;

constante_estructurada
      : '(' campo_constante_lista ')'           { printf("  constante -> '(' campo_constante_lista ')'\n"); }
      ;

campo_constante_lista
      : campo_constante_lista ';' campo_constante       { printf("  campo_constante_lista -> campo_constante_lista ; campo_constante\n"); }
      | campo_constante                                 { printf("  campo_constante_lista -> campo_constante\n"); }      
      ;

campo_constante
      : IDENTIFICADOR ASIG constante                  { printf("  campo_constante -> IDENTIFICADOR ASIG constante\n"); }
      ;


/*--------------------------------------------------------------------*/
/*  VARIABLES  */
/*--------------------------------------------------------------------*/
declaraciones_variables_opt
      : 
      | declaraciones_variables
      ;
declaraciones_variables
      : VARIABLES declaracion_variables_lista FIN
      ;

declaracion_variables_lista
      : declaracion_variables_lista declaracion_variables
      | declaracion_variables
      ;

declaracion_variables
      : visibilidad_opt identificador_lista ES especificacion_tipo ASIG expresion_lista '.'
      | visibilidad_opt identificador_lista ES especificacion_tipo  '.'
      ;



/*--------------------------------------------------------------------*/
/*  FUNCIONES    */
/*--------------------------------------------------------------------*/

lista_declaracion_funcion
      : lista_declaracion_funcion declaracion_funcion
      |
      ;
declaracion_funcion
      : visibilidad_opt firma_funcion cuerpo_funcion
      | error '\n'                 { printf("  ERROR: declaracion_funcion -> error\n");yyerrok; }
      ;

firma_funcion
      : FUNCION IDENTIFICADOR '(' parametros_lista ')' FLECHA_DCHA tipo_salida
      | FUNCION IDENTIFICADOR FLECHA_DCHA tipo_salida
      ;

parametros_lista
      : parametros_lista ';' parametros
      | parametros
      ;

parametros
      : identificador_lista ES especificacion_tipo ASIG expresion_constante_lista 
      | identificador_lista ES especificacion_tipo
      ;

expresion_constante_lista
    : expresion_constante
    | expresion_constante ';' expresion_constante_lista
    ;

tipo_salida
      : especificacion_tipo
      | NADA
      ; 

cuerpo_funcion
      : declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion bloque_instrucciones
      ;

bloque_instrucciones 
      : PRINCIPIO instruccion_lista FIN
      ;


/*--------------------------------------------------------------------*/
/*  INSTRUCCIONES    */
/*--------------------------------------------------------------------*/

instruccion_lista
      : instruccion_lista instruccion
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
      | error '\n'            { printf("  ERROR: instruccion -> error\n");yyerrok; }    
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
      : lista_otro_caso otro_caso
      | 
      ;
otro_caso
      : ENCAMBIO '(' expresion ')' bloque_instrucciones
      ;

instruccion_bucle
      : MIENTRAS '(' expresion ')' bloque_instrucciones
      | HACER bloque_instrucciones MIENTRAS '(' expresion ')' '.'
      | PARA '(' asignacion_lista ':' expresion ':' asignacion_lista ')' bloque_instrucciones
      | PARA CADA IDENTIFICADOR EN '(' expresion ')' bloque_instrucciones
      ;

asignacion_lista
      : asignacion_lista ';' asignacion
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
      : EJECUTA bloque_instrucciones clausulas
      ;

clausulas 
      : clausulas_excepcion clausula_defecto
      | clausulas_excepcion
      | clausula_defecto
      ; 

clausulas_excepcion
      : lista_clausula_excepcion_especifica clausula_excepcion_general
      ;
lista_clausula_excepcion_especifica
      : 
      | lista_clausula_excepcion_especifica clausula_excepcion_especifica
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


indice
      : '[' expresion ']'
      | '{' expresion '}'
      ;

expresion
      : expresion_logica_or
      | expresion_logica_or SI expresion SINO expresion
      | expresion_logica_or PARA CADA IDENTIFICADOR EN expresion
      ;
expresion_logica_or
      : expresion_logica_and
      | expresion_logica_or OR expresion_logica_and
expresion_logica_and
      : expresion_igualdad
      | expresion_logica_and AND expresion_igualdad
      ;

expresion_igualdad
      : expresion_comparacion EQ expresion_comparacion
      | expresion_comparacion NEQ expresion_comparacion
      | expresion_comparacion
      ;

expresion_comparacion
      : expresion_or_binario '<' expresion_or_binario
      | expresion_or_binario '>' expresion_or_binario
      | expresion_or_binario LE expresion_or_binario
      | expresion_or_binario GE expresion_or_binario
      | expresion_or_binario
      ;

expresion_or_binario
      : expresion_xor_binario '|' expresion_xor_binario
      | expresion_xor_binario
      ;

expresion_xor_binario
      : expresion_and_binario '@' expresion_and_binario
      | expresion_and_binario
      ;

expresion_and_binario
      : expresion_desplazamiento '&' expresion_desplazamiento
      | expresion_desplazamiento
      ;

expresion_desplazamiento
      : expresion_aditiva
      | expresion_desplazamiento FLECHA_IZDA expresion_aditiva
      | expresion_desplazamiento FLECHA_DCHA expresion_aditiva
      ;
expresion_aditiva
      : expresion_multiplicativa
      | expresion_aditiva '+' expresion_multiplicativa
      | expresion_aditiva '-' expresion_multiplicativa
      ;

expresion_multiplicativa
      : expresion_potencia
      | expresion_multiplicativa '*' expresion_potencia
      | expresion_multiplicativa '/' expresion_potencia
      | expresion_multiplicativa MOD expresion_potencia
      ;

expresion_potencia
      : expresion_unaria
      | expresion_unaria POTENCIA expresion_potencia
      ;

expresion_unaria
      : '-' expresion_primitiva
      | '~' expresion_primitiva
      | '!' expresion_primitiva
      | TAMANO expresion_primitiva
      | expresion_primitiva
      ;
expresion_primitiva
      : expresion_funcional
      | expresion_indexada
      | expresion_basica
      | expresion_constante
      | error '\n'{ printf("ERROR: expresión_primitiva -> error\n"); yyerrok; }
      ;
expresion_funcional
      : IDENTIFICADOR '(' opt_expresion_lista ')'
      ;
opt_expresion_lista
      :
      | lista_expresiones
      ;
expresion_lista
      : lista_expresiones ';' expresion
      | expresion
      ;

lista_expresiones
      :
      | lista_expresiones ';' expresion
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
expresion_constante 
      : CTC_ENTERA
      | CTC_REAL
      | CTC_CARACTER
      | CTC_CADENA
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