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

/************/
/* programa */
/************/
programa ::= cabecera_programa bloque_programa
cabecera_programa ::= 'programa' IDENTIFICADOR '.' [ libreria ]*
libreria ::= 'importar' ( nombre )+ '.'
           | 'importar' nombre 'como' IDENTIFICADOR '.'
nombre ::= ( IDENTIFICADOR )::+
bloque_programa ::= [ declaraciones_tipos ]?
                    [ declaraciones_constantes ]?
                    [ declaraciones_variables ]?
                    [ declaracion_funcion ]*
                    bloque_instrucciones

/************************/
/* declaracion de tipos */
/************************/
declaraciones_tipos ::= 'tipos' [ declaracion_tipo ]+ 'fin'
declaracion_tipo ::= [ visibilidad ]? IDENTIFICADOR 'es' [ 'ref' ]* tipo_basico '.'
                   | [ visibilidad ]? IDENTIFICADOR 'es' [ 'ref' ]* tipo_estructurado
visibilidad ::= 'publico' | 'privado' | 'protegido'
tipo_basico ::= nombre
              | tipo_escalar
              | tipo_tabla
tipo_escalar ::= ENTERO | REAL | CARACTER | CADENA | FICHERO | EXCEPCION
tipo_tabla ::= 'tabla' 'de' especificacion_tipo
             | 'tabla' 'hash' 'de' especificacion_tipo
especificacion_tipo ::= [ 'ref' ]* tipo_basico
                      | [ 'ref' ]* tipo_estructurado
tipo_estructurado ::= 'enumeracion' 'de' tipo_escalar ( elemento_enum )+ 'fin'
                    | 'estructura' ( linea_campo )+ 'fin'
                    | 'union' ( linea_campo )+ 'fin'
                    | 'clase' [ 'ultima' ]? [ '(' ( nombre )+ ')' ]? componentes 'fin'
elemento_enum ::= IDENTIFICADOR ':=' expresion
linea_campo ::= ( IDENTIFICADOR )+ 'es' especificacion_tipo
componentes ::= [ declaraciones_tipos ]?
                [ declaraciones_constantes ]?
                [ declaraciones_variables ]?
                [ declaracion_metodo ]+
declaracion_metodo ::= [ visibilidad ]? [ modificador ]? firma_funcion cuerpo_funcion
modificador ::= 'constructor' | 'destructor' | 'generico' | 'abstracto' | 'especifico' | 'final'

/*****************************/
/* declaracion de constantes */
/*****************************/
declaraciones_constantes ::= 'constantes' [ declaracion_constante ]+ 'fin'
declaracion_constante ::= [ visibilidad ]? IDENTIFICADOR 'es' tipo_basico ':=' constante '.'
constante ::= CTC_ENTERA
            | CTC_REAL
            | CTC_CARACTER
            | CTC_CADENA
            | constante_tabla
            | constante_estructurada
constante_tabla ::= '(' ( constante )* ')'
                  | '(' ( elemento_hash )* ')'
elemento_hash ::= CTC_CADENA '->' constante
constante_estructurada ::= '(' ( campo_constante )+ ')'
campo_constante ::= IDENTIFICADOR ':=' constante

/****************************/
/* declaracion de variables */
/****************************/
declaraciones_variables ::= 'variables' [ declaracion_variables ]+ 'fin'
declaracion_variables ::= [ visibilidad ]? ( IDENTIFICADOR )+ 'es' especificacion_tipo
                         [ ':=' ( expresion )+ ]? '.'

/****************************/
/* declaracion de funciones */
/****************************/
declaracion_funcion ::= [ visibilidad ]? firma_funcion cuerpo_funcion
firma_funcion ::= 'funcion' IDENTIFICADOR [ '(' ( parametros )+ ')' ]? '->' tipo_salida
parametros ::= ( IDENTIFICADOR )+ 'es' especificacion_tipo [ ':=' ( expresion_constante )+ ]?
tipo_salida ::= especificacion_tipo | 'nada'
cuerpo_funcion ::= [ declaraciones_constantes ]?
                   [ declaraciones_variables ]?
                   [ declaracion_funcion ]*
                   bloque_instrucciones
bloque_instrucciones ::= 'principio' [ instruccion ]+ 'fin'

/*****************/
/* instrucciones */
/*****************/
instruccion ::= instruccion_expresion
              | instruccion_bifurcacion
              | instruccion_bucle
              | instruccion_salto
              | instruccion_destino_salto
              | instruccion_devolver
              | instruccion_lanzamiento_excepcion
              | instruccion_captura_excepcion
              | instruccion_vacia
instruccion_expresion ::= expresion_funcional '.'
                        | asignacion '.'
asignacion ::= expresion_indexada operador_asignacion expresion
operador_asignacion ::= ':=' | '+=' | '-=' | '*=' | '/=' | 'mod=' |
                        '**=' | '<-=' | '->=' | '&=' | '@=' | '|='
instruccion_bifurcacion ::= 'si' '(' expresion ')' bloque_instrucciones [ otro_caso ]*
                          [ 'sino' bloque_instrucciones ]?
otro_caso ::= 'encambio' '(' expresion ')' bloque_instrucciones
instruccion_bucle ::= 'mientras' '(' expresion ')' bloque_instrucciones
                    | 'hacer' bloque_instrucciones 'mientras' '(' expresion ')' '.'
                    | 'para' '(' ( asignacion )+ ':' expresion ':' ( asignacion )+ ')'
                      bloque_instrucciones
                    | 'para' 'cada' IDENTIFICADOR 'en' '(' expresion ')' bloque_instrucciones
instruccion_salto ::= 'saltar' IDENTIFICADOR '.' | 'continuar' '.' | 'escape' '.'
instruccion_destino_salto ::= 'etiqueta' IDENTIFICADOR '.'
instruccion_devolver ::= 'devolver' [ expresion ]? '.'
instruccion_lanzamiento_excepcion ::= 'lanza' 'excepcion' IDENTIFICADOR '.'
instruccion_captura_excepcion ::= 'ejecuta' bloque_instrucciones clausulas
clausulas ::= clausulas_excepcion [ clausula_defecto ]?
            | clausula_defecto
clausulas_excepcion ::= [ clausula_excepcion_especifica ]* clausula_excepcion_general
clausula_excepcion_especifica ::= 'excepcion' nombre bloque_instrucciones
clausula_excepcion_general ::= 'otra' 'excepcion' bloque_instrucciones
clausula_defecto ::= 'defecto' bloque_instrucciones

/***************/
/* expresiones */
/***************/
expresion_constante ::= CTC_ENTERA | CTC_REAL | CTC_CADENA | CTC_CARACTER
expresion_indexada ::= expresion_basica
                     | expresion_indexada '?' expresion_basica
                     | expresion_indexada '^?' expresion_basica
                     | expresion_indexada [ '^?' ]? indice
expresion_basica ::= nombre
                   | '(' expresion ')'
                   | '^' expresion_basica
                   | 'ref' expresion_basica
indice ::= '[' expresion ']' | '{' expresion '}'
expresion_funcional ::= IDENTIFICADOR '(' ( expresion )* ')'
expresion ::= expresion_logica [ 'si' expresion 'sino' expresion ]?
            | expresion_logica 'para' 'cada' IDENTIFICADOR 'en' expresion

%%

int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./eazy NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
