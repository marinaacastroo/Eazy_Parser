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
      ;


cabecera_programa
      : PROGRAMA IDENTIFICADOR '.' lista_librerias         { printf("  cabecera_programa -> PROGRAMA IDENTIFICADOR . lista_librerias\n"); }
      ;

lista_librerias
      : 
      | lista_librerias libreria                           { printf("  lista_librerias -> lista_librerias libreria\n"); }
      ;

libreria
      : IMPORTAR nombre_lista '.'                          { printf("  libreria -> IMPORTAR nombre_lista .\n"); }
      | IMPORTAR nombre COMO IDENTIFICADOR '.'             { printf("  libreria -> IMPORTAR nombre COMO IDENTIFICADOR .\n"); }
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
      : '(' ')'
      | '(' lista_constante ')'                 { printf("  constante -> '(' lista_constante ')'\n"); }
      | '(' lista_elemento_hash ')'             { printf("  constante -> '(' lista_elemento_hash ')'\n"); }
      ;

lista_constante
      : constante
      | constante ';' lista_constante           { printf("  lista_constante -> constante ; lista_constante\n"); }
      ;


lista_elemento_hash
      : elemento_hash ';' lista_elemento_hash   { printf("  lista_elemento_hash -> elemento_hash ; lista_elemento_hash\n"); }
      | elemento_hash                           { printf("  lista_elemento_hash -> elemento_hash\n"); }     
      ;
elemento_hash
      :  CTC_CADENA FLECHA_DCHA constante        { printf("  elemento_hash -> CTC_CADENA FLECHA_DCHA constante\n"); }
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
      | declaraciones_variables                 { printf("  declaraciones_variables_opt -> declaraciones_variables\n"); }
      ;
declaraciones_variables
      : VARIABLES declaracion_variables_lista FIN            { printf("  declaraciones_variables -> VARIABLES declaracion_variables_lista FIN\n"); }
      ;

declaracion_variables_lista
      : declaracion_variables_lista declaracion_variables         { printf("  declaracion_variables_lista -> declaracion_variables_lista declaracion_variables\n"); }
      | declaracion_variables                                     { printf("  declaracion_variables_lista -> declaracion_variables\n"); }      
      ;     

declaracion_variables
      : visibilidad_opt identificador_lista ES especificacion_tipo ASIG expresion_lista '.'           { printf("  declaracion_variables -> visibilidad_opt identificador_lista ES especificacion_tipo ASIG expresion_lista .\n"); }
      | visibilidad_opt identificador_lista ES especificacion_tipo  '.'                               { printf("  declaracion_variables -> visibilidad_opt identificador_lista ES especificacion_tipo .\n"); }
      ;



/*--------------------------------------------------------------------*/
/*  FUNCIONES    */
/*--------------------------------------------------------------------*/

lista_declaracion_funcion                 
      : lista_declaracion_funcion declaracion_funcion                   { printf("  lista_declaracion_funcion -> lista_declaracion_funcion declaracion_funcion\n"); }
      |
      ;
declaracion_funcion
      : visibilidad_opt firma_funcion cuerpo_funcion                    { printf("  declaracion_funcion -> visibilidad_opt firma_funcion cuerpo_funcion\n"); }              
      ;

firma_funcion
      : FUNCION IDENTIFICADOR '(' parametros_lista ')' FLECHA_DCHA tipo_salida            { printf("  firma_funcion -> FUNCION IDENTIFICADOR '(' parametros_lista ')' FLECHA_DCHA tipo_salida\n"); }
      | FUNCION IDENTIFICADOR FLECHA_DCHA tipo_salida                                     { printf("  firma_funcion -> FUNCION IDENTIFICADOR FLECHA_DCHA tipo_salida\n"); }
      ;

parametros_lista
      : parametros_lista ':' parametros          { printf("  parametros_lista -> parametros_lista : parametros\n"); }
      | parametros                               { printf("  parametros_lista -> parametros\n"); }     
      ;

parametros
      : identificador_lista ES especificacion_tipo ASIG expresion_constante_lista         { printf("  parametros -> identificador_lista ES especificacion_tipo ASIG expresion_constante_lista\n"); }
      | identificador_lista ES especificacion_tipo                                        { printf("  parametros -> identificador_lista ES especificacion_tipo\n"); }
      ;

expresion_constante_lista
    : expresion_constante                       { printf("  expresion_constante_lista -> expresion_constante\n"); }
    | expresion_constante ';' expresion_constante_lista       { printf("  expresion_constante_lista -> expresion_constante ; expresion_constante_lista\n"); }
    ;

tipo_salida
      : especificacion_tipo               { printf("  tipo_salida -> especificacion_tipo\n"); }
      | NADA                              { printf("  tipo_salida -> NADA\n"); }
      ; 

cuerpo_funcion
      : declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion bloque_instrucciones         { printf("  cuerpo_funcion -> declaraciones_constantes_opt declaraciones_variables_opt lista_declaracion_funcion bloque_instrucciones\n"); }
      ;     

bloque_instrucciones 
      : PRINCIPIO instruccion_lista FIN               { printf("  bloque_instrucciones -> PRINCIPIO instruccion_lista FIN\n"); }
      ;


/*--------------------------------------------------------------------*/
/*  INSTRUCCIONES    */
/*--------------------------------------------------------------------*/

instruccion_lista
      : instruccion_lista instruccion                 { printf("  instruccion_lista -> instruccion_lista instruccion\n"); }
      | instruccion                       { printf("  instruccion_lista -> instruccion\n"); }
      ;

instruccion 
      : instruccion_expresion             { printf("  instruccion -> instruccion_expresion\n"); }
      | instruccion_bifurcacion           { printf("  instruccion -> instruccion_bifurcacion\n"); }
      | instruccion_bucle                 { printf("  instruccion -> instruccion_bucle\n"); }
      | instruccion_salto                 { printf("  instruccion -> instruccion_salto\n"); }
      | instruccion_destino_salto         { printf("  instruccion -> instruccion_destino_salto\n"); }
      | instruccion_devolver              { printf("  instruccion -> instruccion_devolver\n"); }
      | instruccion_lanzamiento_excepcion { printf("  instruccion -> instruccion_lanzamiento_excepcion\n"); }
      | instruccion_captura_excepcion     { printf("  instruccion -> instruccion_captura_excepcion\n"); }
      | instruccion_vacia                 { printf("  instruccion -> instruccion_vacia\n"); }
      ;
instruccion_expresion
      : expresion_funcional '.'           { printf("  instruccion_expresion -> expresion_funcional .\n"); }
      | asignacion '.'                    { printf("  instruccion_expresion -> asignacion .\n"); }
      ;

asignacion
      : expresion_indexada operador_asignacion expresion        { printf("  asignacion -> expresion_indexada operador_asignacion expresion\n"); }
      ; 

operador_asignacion
      : ASIG                  { printf("  operador_asignacion -> ASIG\n"); }
      | SUMA_ASIG             { printf("  operador_asignacion -> SUMA_ASIG\n"); }
      | RESTA_ASIG            { printf("  operador_asignacion -> RESTA_ASIG\n"); }
      | MULT_ASIG             { printf("  operador_asignacion -> MULT_ASIG\n"); }
      | DIV_ASIG              { printf("  operador_asignacion -> DIV_ASIG\n"); }
      | MOD_ASIG              { printf("  operador_asignacion -> MOD_ASIG\n"); }
      | POT_ASIG              { printf("  operador_asignacion -> POT_ASIG\n"); }
      | FI_ASIG               { printf("  operador_asignacion -> FI_ASIG\n"); }      
      | FD_ASIG               { printf("  operador_asignacion -> FD_ASIG\n"); }
      | AND_ASIG              { printf("  operador_asignacion -> AND_ASIG\n"); }
      | XOR_ASIG              { printf("  operador_asignacion -> XOR_ASIG\n"); }
      | OR_ASIG               { printf("  operador_asignacion -> OR_ASIG\n"); }
      ; 
instruccion_bifurcacion
      : SI '(' expresion ')' bloque_instrucciones lista_otro_caso SINO bloque_instrucciones                   { printf("  instruccion_bifurcacion -> SI '(' expresion ')' bloque_instrucciones lista_otro_caso SINO bloque_instrucciones\n"); }
      | SI '(' expresion ')' bloque_instrucciones lista_otro_caso                                                 { printf("  instruccion_bifurcacion -> SI '(' expresion ')' bloque_instrucciones lista_otro_caso\n"); }
      ;

lista_otro_caso
      : lista_otro_caso otro_caso               { printf("  lista_otro_caso -> lista_otro_caso otro_caso\n"); }
      | 
      ;
otro_caso
      : ENCAMBIO '(' expresion ')' bloque_instrucciones           { printf("  otro_caso -> ENCAMBIO '(' expresion ')' bloque_instrucciones\n"); }
      ;

instruccion_bucle
      : MIENTRAS '(' expresion ')' bloque_instrucciones                 { printf("  instruccion_bucle -> MIENTRAS '(' expresion ')' bloque_instrucciones\n"); }
      | HACER bloque_instrucciones MIENTRAS '(' expresion ')' '.'       { printf("  instruccion_bucle -> HACER bloque_instrucciones MIENTRAS '(' expresion ')' .\n"); }
      | PARA '(' asignacion_lista ':' expresion ':' asignacion_lista ')' bloque_instrucciones         { printf("  instruccion_bucle -> PARA '(' asignacion_lista ':' expresion ':' asignacion_lista ')' bloque_instrucciones\n"); }
      | PARA CADA IDENTIFICADOR EN '(' expresion ')' bloque_instrucciones       { printf("  instruccion_bucle -> PARA CADA IDENTIFICADOR EN '(' expresion ')' bloque_instrucciones\n"); }
      ;

asignacion_lista
      : asignacion_lista ';' asignacion         { printf("  asignacion_lista -> asignacion_lista ; asignacion\n"); }
      | asignacion                        { printf("  asignacion_lista -> asignacion\n"); }
      ;

instruccion_salto
      : SALTAR IDENTIFICADOR '.'          { printf("  instruccion_salto -> SALTAR IDENTIFICADOR .\n"); }
      | CONTINUAR '.'                     { printf("  instruccion_salto -> CONTINUAR .\n"); }
      | ESCAPE '.'                  { printf("  instruccion_salto -> ESCAPE .\n"); }
      ;

instruccion_destino_salto
      : ETIQUETA IDENTIFICADOR '.'        { printf("  instruccion_destino_salto -> ETIQUETA IDENTIFICADOR .\n"); }
      ;

instruccion_devolver
      : DEVOLVER expresion '.'            { printf("  instruccion_devolver -> DEVOLVER expresion .\n"); }
      | DEVOLVER '.'            { printf("  instruccion_devolver -> DEVOLVER .\n"); }
      ;

instruccion_lanzamiento_excepcion
      : LANZA EXCEPCION IDENTIFICADOR '.'       { printf("  instruccion_lanzamiento_excepcion -> LANZA EXCEPCION IDENTIFICADOR .\n"); }
      ;

instruccion_captura_excepcion
      : EJECUTA bloque_instrucciones clausulas              { printf("  instruccion_captura_excepcion -> EJECUTA bloque_instrucciones clausulas\n"); }
      ;

clausulas 
      : clausulas_excepcion clausula_defecto                { printf("  clausulas -> clausulas_excepcion clausula_defecto\n"); }
      | clausulas_excepcion                     { printf("  clausulas -> clausulas_excepcion\n"); }
      | clausula_defecto                  { printf("  clausulas -> clausula_defecto\n"); }
      ; 

clausulas_excepcion
      : lista_clausula_excepcion_especifica clausula_excepcion_general        { printf("  clausulas_excepcion -> lista_clausula_excepcion_especifica clausula_excepcion_general\n"); }
      ;
lista_clausula_excepcion_especifica
      : 
      | lista_clausula_excepcion_especifica clausula_excepcion_especifica           { printf("  lista_clausula_excepcion_especifica -> lista_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
      ;
clausula_excepcion_especifica
      : EXCEPCION nombre bloque_instrucciones                     { printf("  clausula_excepcion_especifica -> EXCEPCION nombre bloque_instrucciones\n"); }
      ;

clausula_excepcion_general
      : OTRA EXCEPCION bloque_instrucciones                       { printf("  clausula_excepcion_general -> OTRA EXCEPCION bloque_instrucciones\n"); }
      ;

clausula_defecto
      : DEFECTO bloque_instrucciones                  { printf("  clausula_defecto -> DEFECTO bloque_instrucciones\n"); }
      ;

instruccion_vacia
      : ';'                     { printf("  instruccion_vacia -> ;\n"); }
      ;
      

/*--------------------------------------------------------------------*/
/*  EXPRESIONES    */
/*--------------------------------------------------------------------*/


indice
      : '[' expresion ']'                 { printf("  indice -> '[' expresion ']'\n"); }
      | '{' expresion '}'                 { printf("  indice -> '{' expresion '}'\n"); }
      ;

expresion
      : expresion_logica_or                     { printf("  expresion -> expresion_logica_or\n"); }
      | expresion_logica_or SI expresion SINO expresion           { printf("  expresion -> expresion_logica_or SI expresion SINO expresion\n"); }
      | expresion_logica_or PARA CADA IDENTIFICADOR EN expresion        { printf("  expresion -> expresion_logica_or PARA CADA IDENTIFICADOR EN expresion\n"); }
      ;
expresion_logica_or
      : expresion_logica_and              { printf("  expresion_logica_or -> expresion_logica_and\n"); }
      | expresion_logica_or OR expresion_logica_and         { printf("  expresion_logica_or -> expresion_logica_or OR expresion_logica_and\n"); }
expresion_logica_and
      : expresion_igualdad                { printf("  expresion_logica_and -> expresion_igualdad\n"); }
      | expresion_logica_and AND expresion_igualdad         { printf("  expresion_logica_and -> expresion_logica_and AND expresion_igualdad\n"); }
      ;

expresion_igualdad
      : expresion_comparacion EQ expresion_comparacion            { printf("  expresion_igualdad -> expresion_comparacion EQ expresion_comparacion\n"); }
      | expresion_comparacion NEQ expresion_comparacion           { printf("  expresion_igualdad -> expresion_comparacion NEQ expresion_comparacion\n"); }
      | expresion_comparacion                               { printf("  expresion_igualdad -> expresion_comparacion\n"); }
      ;

expresion_comparacion
      : expresion_or_binario '<' expresion_or_binario             { printf("  expresion_comparacion -> expresion_or_binario < expresion_or_binario\n"); }
      | expresion_or_binario '>' expresion_or_binario             { printf("  expresion_comparacion -> expresion_or_binario > expresion_or_binario\n"); }
      | expresion_or_binario LE expresion_or_binario              { printf("  expresion_comparacion -> expresion_or_binario LE expresion_or_binario\n"); }
      | expresion_or_binario GE expresion_or_binario              { printf("  expresion_comparacion -> expresion_or_binario GE expresion_or_binario\n"); }
      | expresion_or_binario                          { printf("  expresion_comparacion -> expresion_or_binario\n"); }  
      ;

expresion_or_binario
      : expresion_xor_binario '|' expresion_xor_binario           { printf("  expresion_or_binario -> expresion_xor_binario | expresion_xor_binario\n"); }
      | expresion_xor_binario                     { printf("  expresion_or_binario -> expresion_xor_binario\n"); }      
      ;

expresion_xor_binario
      : expresion_and_binario '@' expresion_and_binario           { printf("  expresion_xor_binario -> expresion_and_binario @ expresion_and_binario\n"); }
      | expresion_and_binario               { printf("  expresion_xor_binario -> expresion_and_binario\n"); }     
      ;     

expresion_and_binario
      : expresion_desplazamiento '&' expresion_desplazamiento                 { printf("  expresion_and_binario -> expresion_desplazamiento & expresion_desplazamiento\n"); }
      | expresion_desplazamiento                { printf("  expresion_and_binario -> expresion_desplazamiento\n"); }
      ;

expresion_desplazamiento
      : expresion_aditiva                 { printf("  expresion_desplazamiento -> expresion_aditiva\n"); }
      | expresion_desplazamiento FLECHA_IZDA expresion_aditiva                { printf("  expresion_desplazamiento -> expresion_desplazamiento FLECHA_IZDA expresion_aditiva\n"); }
      | expresion_desplazamiento FLECHA_DCHA expresion_aditiva                { printf("  expresion_desplazamiento -> expresion_desplazamiento FLECHA_DCHA expresion_aditiva\n"); }
      ;
expresion_aditiva
      : expresion_multiplicativa                { printf("  expresion_aditiva -> expresion_multiplicativa\n"); }
      | expresion_aditiva '+' expresion_multiplicativa            { printf("  expresion_aditiva -> expresion_aditiva + expresion_multiplicativa\n"); }
      | expresion_aditiva '-' expresion_multiplicativa            { printf("  expresion_aditiva -> expresion_aditiva - expresion_multiplicativa\n"); }
      ;

expresion_multiplicativa
      : expresion_potencia                { printf("  expresion_multiplicativa -> expresion_potencia\n"); }
      | expresion_multiplicativa '*' expresion_potencia                 { printf("  expresion_multiplicativa -> expresion_multiplicativa * expresion_potencia\n"); }
      | expresion_multiplicativa '/' expresion_potencia                 { printf("  expresion_multiplicativa -> expresion_multiplicativa / expresion_potencia\n"); }
      | expresion_multiplicativa MOD expresion_potencia                 { printf("  expresion_multiplicativa -> expresion_multiplicativa MOD expresion_potencia\n"); }
      ;

expresion_potencia
      : expresion_unaria                        { printf("  expresion_potencia -> expresion_unaria\n"); }
      | expresion_unaria POTENCIA expresion_potencia        { printf("  expresion_potencia -> expresion_unaria POTENCIA expresion_potencia\n"); }
      ;

expresion_unaria
      : '-' expresion_primitiva           { printf("  expresion_unaria -> - expresion_primitiva\n"); }
      | '~' expresion_primitiva           { printf("  expresion_unaria -> ~ expresion_primitiva\n"); }
      | '!' expresion_primitiva           { printf("  expresion_unaria -> ! expresion_primitiva\n"); }
      | TAMANO expresion_primitiva        { printf("  expresion_unaria -> TAMANO expresion_primitiva\n"); }
      | expresion_primitiva               { printf("  expresion_unaria -> expresion_primitiva\n"); }  
      ;
expresion_primitiva
      : expresion_funcional               { printf("  expresion_primitiva -> expresion_funcional\n"); }
      | expresion_indexada                { printf("  expresion_primitiva -> expresion_indexada\n"); }
      | expresion_constante               { printf("  expresion_primitiva -> expresion_constante\n"); }
      ;
expresion_funcional
      : IDENTIFICADOR '(' opt_expresion_lista ')'           { printf("  expresion_funcional -> IDENTIFICADOR '(' opt_expresion_lista ')'\n"); }
      ;
opt_expresion_lista
      :
      | expresion_lista             { printf("  opt_expresion_lista -> expresion_lista\n"); }
      ;
expresion_lista
      : expresion_lista ';' expresion           { printf("  expresion_lista -> expresion_lista ; expresion\n"); }
      | expresion             { printf("  expresion_lista -> expresion\n"); }
      ;

expresion_indexada 
      : expresion_basica            { printf("  expresion_indexada -> expresion_basica\n"); }
      | expresion_indexada '?' expresion_basica             { printf("  expresion_indexada -> expresion_indexada ? expresion_basica\n"); }
      | expresion_indexada INDIRECCION expresion_basica           { printf("  expresion_indexada -> expresion_indexada INDIRECCION expresion_basica\n"); }
      | expresion_indexada INDIRECCION indice               { printf("  expresion_indexada -> expresion_indexada INDIRECCION indice\n"); }
      | expresion_indexada indice                     { printf("  expresion_indexada -> expresion_indexada indice\n"); }
      ;

expresion_basica
      : nombre                { printf("  expresion_basica -> nombre\n"); }
      | '(' expresion ')'            { printf("  expresion_basica -> '(' expresion ')'\n"); }
      | '^' expresion_basica        { printf("  expresion_basica -> ^ expresion_basica\n"); }
      | REF expresion_basica              { printf("  expresion_basica -> REF expresion_basica\n"); }
      ;
expresion_constante 
      : CTC_ENTERA            { printf("  expresion_constante -> CTC_ENTERA\n"); }
      | CTC_REAL                    { printf("  expresion_constante -> CTC_REAL\n"); }
      | CTC_CARACTER                { printf("  expresion_constante -> CTC_CARACTER\n"); }
      | CTC_CADENA                  { printf("  expresion_constante -> CTC_CADENA\n"); }
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