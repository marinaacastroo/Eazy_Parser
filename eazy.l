%option yylineno

%{
#include <stdio.h>
#include "eazy.h"
%}

%s COMENTARIO
%x MULTILINE



NUM_DECIMAL     [0-9]+
NUM_OCTAL       [0-7]+
NUM_HEXADECIMAL [0-9a-fA-F]+

CONST_DECIMAL     {NUM_DECIMAL}
CONST_OCTAL       "%"{NUM_OCTAL}
CONST_HEXADECIMAL "%"[hH]{NUM_HEXADECIMAL}


REAL_DECIMAL    ({NUM_DECIMAL}?","){NUM_DECIMAL}+
REAL_OCTAL      "%"{NUM_OCTAL}?","{NUM_OCTAL}
REAL_HEXADECIMAL "%[hH]"{NUM_HEXADECIMAL}?","{NUM_HEXADECIMAL}

EXPONENTE       "exp"[-+]?({NUM_DECIMAL}|"%"{NUM_OCTAL}|"%[hH]"{NUM_HEXADECIMAL})

REAL_DEC_EXP    ({NUM_DECIMAL}|{REAL_DECIMAL}){EXPONENTE}
REAL_OCT_EXP    "%"{NUM_OCTAL}|{REAL_OCTAL}{EXPONENTE}
REAL_HEX_EXP    "%[hH]"{NUM_HEXADECIMAL}?","{NUM_HEXADECIMAL}"exp"[-+]?{NUM_HEXADECIMAL}

CARACTER_VISIBLE [^\n"%áéíóúÁÉÍÓÚñÑüÜ]
ESCAPADO         %(\'|\"|%|n|r|t|\n)

CARACTER_OCTAL   "%([0-7]{1,2}|1[0-7]{2})"
CARACTER_HEXA    "%[hH]([0-7][0-9a-fA-F]?)"
CADENA  \"([^\n"]|{ESCAPADO}|CARACTER_OCTAL|CARACTER_HEXA|"%"\n)*\"

IDENTIFICADOR  [A-Za-záéíóúÁÉÍÓÚñÑüÜ_][A-Za-záéíóúÁÉÍÓÚñÑüÜ_0-9]*

%%




[ \t\r\n]+       ;

"%%".*   { }
"%/"          { BEGIN(MULTILINE); }
<MULTILINE>"/%"  { BEGIN(INITIAL); }
<MULTILINE>\n    {  }
<MULTILINE>.     { }


(?i:"abstracto")     {printf("linea %d, palabra reservada: ABSTRACTO\n" , yylineno); return ABSTRACTO;}
(?i:"cada")          {printf("linea %d, palabra reservada: CADA\n" , yylineno); return CADA;}
(?i:"cadena")        {printf("linea %d, palabra reservada: CADENA\n" , yylineno); return CADENA;}
(?i:"caracter")      {printf("linea %d, palabra reservada: CARACTER\n" , yylineno); return CARACTER;}
(?i:"clase")         {printf("linea %d, palabra reservada: CLASE\n" , yylineno); return CLASE;}
(?i:"como")          {printf("linea %d, palabra reservada: COMO\n" , yylineno); return COMO;}
(?i:"constantes")    {printf("linea %d, palabra reservada: CONSTANTES\n" , yylineno); return CONSTANTES;}
(?i:"constructor")   {printf("linea %d, palabra reservada: CONSTRUCTOR\n" , yylineno); return CONSTRUCTOR;}
(?i:"continuar")     {printf("linea %d, palabra reservada: CONTINUAR\n" , yylineno); return CONTINUAR;}
(?i:"de")            {printf("linea %d, palabra reservada: DE\n" , yylineno); return DE;}
(?i:"defecto")       {printf("linea %d, palabra reservada: DEFECTO\n" , yylineno); return DEFECTO;}
(?i:"destructor")    {printf("linea %d, palabra reservada: DESTRUCTOR\n" , yylineno); return DESTRUCTOR;}
(?i:"devolver")      {printf("linea %d, palabra reservada: DEVOLVER\n" , yylineno); return DEVOLVER;}
(?i:"ejecuta")       {printf("linea %d, palabra reservada: EJECUTA\n" , yylineno); return EJECUTA;}
(?i:"encambio")      {printf("linea %d, palabra reservada: ENCAMBIO\n" , yylineno); return ENCAMBIO;}
(?i:"entero")        {printf("linea %d, palabra reservada: ENTERO\n" , yylineno); return ENTERO;}
(?i:"enumeracion")   {printf("linea %d, palabra reservada: ENUMERACION\n" , yylineno); return ENUMERACION;}
(?i:"en")            {printf("linea %d, palabra reservada: EN\n" , yylineno); return EN;}
(?i:"es")            {printf("linea %d, palabra reservada: ES\n" , yylineno); return ES;}
(?i:"escape")        {printf("linea %d, palabra reservada: ESCAPE\n" , yylineno); return ESCAPE;}
(?i:"especifico")    {printf("linea %d, palabra reservada: ESPECIFICO\n" , yylineno); return ESPECIFICO;}
(?i:"estructura")    {printf("linea %d, palabra reservada: ESTRUCTURA\n" , yylineno); return ESTRUCTURA;}
(?i:"etiqueta")      {printf("linea %d, palabra reservada: ETIQUETA\n" , yylineno); return ETIQUETA;}
(?i:"excepcion")     {printf("linea %d, palabra reservada: EXCEPCION\n" , yylineno); return EXCEPCION;}
(?i:"fichero")       {printf("linea %d, palabra reservada: FICHERO\n" , yylineno); return FICHERO;}
(?i:"fin")           {printf("linea %d, palabra reservada: FIN\n" , yylineno); return FIN;}
(?i:"final")         {printf("linea %d, palabra reservada: FINAL\n" , yylineno); return FINAL;}
(?i:"funcion")       {printf("linea %d, palabra reservada: FUNCION\n" , yylineno); return FUNCION;}
(?i:"generico")      {printf("linea %d, palabra reservada: GENERICO\n" , yylineno); return GENERICO;}
(?i:"hash")          {printf("linea %d, palabra reservada: HASH\n" , yylineno); return HASH;}
(?i:"hacer")         {printf("linea %d, palabra reservada: HACER\n" , yylineno); return HACER;}
(?i:"importar")      {printf("linea %d, palabra reservada: IMPORTAR\n" , yylineno); return IMPORTAR;}
(?i:"lanza")         {printf("linea %d, palabra reservada: LANZA\n" , yylineno); return LANZA;}
(?i:"mientras")      {printf("linea %d, palabra reservada: MIENTRAS\n" , yylineno); return MIENTRAS;}
(?i:"nada")          {printf("linea %d, palabra reservada: NADA\n" , yylineno); return NADA;}
(?i:"or")            {printf("linea %d, palabra reservada: OR\n" , yylineno); return OR;}
(?i:"otra")          {printf("linea %d, palabra reservada: OTRA\n" , yylineno); return OTRA;}
(?i:"para")          {printf("linea %d, palabra reservada: PARA\n" , yylineno); return PARA;}
(?i:"principio")     {printf("linea %d, palabra reservada: PRINCIPIO\n" , yylineno); return PRINCIPIO;}
(?i:"privado")       {printf("linea %d, palabra reservada: PRIVADO\n" , yylineno); return PRIVADO;}
(?i:"programa")      {printf("linea %d, palabra reservada: PROGRAMA\n" , yylineno); return PROGRAMA;}
(?i:"protegido")     {printf("linea %d, palabra reservada: PROTEGIDO\n" , yylineno); return PROTEGIDO;}
(?i:"publico")       {printf("linea %d, palabra reservada: PUBLICO\n" , yylineno); return PUBLICO;}
(?i:"real")          {printf("linea %d, palabra reservada: REAL\n" , yylineno); return REAL;}
(?i:"ref")           {printf("linea %d, palabra reservada: REF\n" , yylineno); return REF;}
(?i:"saltar")        {printf("linea %d, palabra reservada: SALTAR\n" , yylineno); return SALTAR;}
(?i:"si")            {printf("linea %d, palabra reservada: SI\n" , yylineno); return SI;}
(?i:"sino")          {printf("linea %d, palabra reservada: SINO\n" , yylineno); return SINO;}
(?i:"tabla")         {printf("linea %d, palabra reservada: TABLA\n" , yylineno); return TABLA;}
(?i:"tipos")         {printf("linea %d, palabra reservada: TIPOS\n" , yylineno); return TIPOS;}
(?i:"ultima")        {printf("linea %d, palabra reservada: ULTIMA\n" , yylineno); return ULTIMA;}
(?i:"union")         {printf("linea %d, palabra reservada: UNION\n" , yylineno); return UNION;}
(?i:"variables")     {printf("linea %d, palabra reservada: VARIABLES\n" , yylineno); return VARIABLES;}


{CONST_DECIMAL}    {printf("linea %d, constante entera: %s\n" , yylineno, yytext); return CTC_ENTERA;}
{CONST_OCTAL}      {printf("linea %d, constante entera: %s\n" , yylineno, yytext); return CTC_ENTERA;}
{CONST_HEXADECIMAL} {printf("linea %d, constante entera: %s\n", yylineno, yytext); return CTC_ENTERA;}
{REAL_DECIMAL}     {printf("linea %d, constante real: %s\n" , yylineno, yytext); return CTC_REAL;}
{REAL_OCTAL}       {printf("linea %d, constante real: %s\n" , yylineno, yytext); return CTC_REAL;}
{REAL_HEXADECIMAL} {printf("linea %d, constante real: %s\n" , yylineno, yytext); return CTC_REAL;}
{REAL_DEC_EXP}     {printf("linea %d, constante real: %s\n" , yylineno, yytext); return CTC_REAL;}
{REAL_OCT_EXP}     {printf("linea %d, constante real: %s\n" , yylineno, yytext); return CTC_REAL;}
{REAL_HEX_EXP}     {printf("linea %d, constante real: %s\n" , yylineno, yytext); return CTC_REAL;}
{ESCAPADO}         {printf("linea %d, caracter escapado: %s\n" , yylineno, yytext); return CARACTER;}
{CARACTER_OCTAL}   {printf("linea %d, caracter octal: %s\n" , yylineno, yytext); return CARACTER;}
{CARACTER_HEXA}    {printf("linea %d, caracter hexadecimal: %s\n" , yylineno, yytext); return CARACTER;}


"("             {printf("linea %d, delimitador: %s \n", yylineno, yytext); return (int)yytext[0];}
")"             {printf("linea %d, delimitador: %s \n", yylineno, yytext); return (int)yytext[0];}
":"             {printf("linea %d, delimitador: %s \n", yylineno, yytext); return (int)yytext[0];}
";"             {printf("linea %d, delimitador: %s \n", yylineno, yytext); return (int)yytext[0];}
"."             {printf("linea %d, delimitador: %s \n", yylineno, yytext); return (int)yytext[0];}
"::"            {printf("linea %d, delimitador: %s \n", yylineno, yytext); return PTOS;}


"+"             {printf("linea %d, operador aritmetico: %s \n", yylineno, yytext); return (int)yytext[0];}
"-"             {printf("linea %d, operador aritmetico: %s \n", yylineno, yytext); return (int)yytext[0];}
"*"             {printf("linea %d, operador aritmetico: %s \n", yylineno, yytext); return (int)yytext[0];}
"/"             {printf("linea %d, operador aritmetico: %s \n", yylineno, yytext); return (int)yytext[0];}
"mod"           {printf("linea %d, operador aritmetico: %s \n", yylineno, yytext); return MOD;}
"**"            {printf("linea %d, operador aritmetico: %s \n", yylineno, yytext); return POTENCIA;}

"<-"            {printf("linea %d, operador de bits: %s \n", yylineno, yytext); return FLECHA_IZDA;}
"->"            {printf("linea %d, operador de bits: %s \n", yylineno, yytext); return FLECHA_DCHA;}
"&"             {printf("linea %d, operador de bits: %s \n", yylineno, yytext); return (int)yytext[0];}
"|"             {printf("linea %d, operador de bits: %s \n", yylineno, yytext); return (int)yytext[0];}
"@"             {printf("linea %d, operador de bits: %s \n", yylineno, yytext); return (int)yytext[0];}
"~"             {printf("linea %d, operador de bits: %s \n", yylineno, yytext); return (int)yytext[0];}

"<"             {printf("linea %d, operador relacional: %s \n", yylineno, yytext); return (int)yytext[0];}
">"             {printf("linea %d, operador relacional: %s \n", yylineno, yytext); return (int)yytext[0];}
"<="            {printf("linea %d, operador relacional: %s \n", yylineno, yytext); return LE;}
">="            {printf("linea %d, operador relacional: %s \n", yylineno, yytext); return GE;}
"=="            {printf("linea %d, operador relacional: %s \n", yylineno, yytext); return EQ;}
"!="            {printf("linea %d, operador relacional: %s \n", yylineno, yytext); return NEQ;}

"!"             {printf("linea %d, operador logico: %s \n", yylineno, yytext); return (int)yytext[0];}
"&&"            {printf("linea %d, operador logico: %s \n", yylineno, yytext); return AND;}
"||"            {printf("linea %d, operador logico: %s \n", yylineno, yytext); return OR;}

":="            {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return ASIG;}
"+="            {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return SUMA_ASIG;}
"-="            {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return RESTA_ASIG;}
"*="            {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return MULT_ASIG;}
"/="            {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return DIV_ASIG;}
"mod="          {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return MOD_ASIG;}
"**="           {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return POT_ASIG;}
"<-="           {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return FI_ASIG;}
"->="           {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return FD_ASIG;}
"&="            {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return AND_ASIG;}
"@="            {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return XOR_ASIG;}
"|="            {printf("linea %d, operador de asignacion: %s \n", yylineno, yytext); return OR_ASIG;}

"tamano"        {printf("linea %d, operador de acceso a memoria: %s \n", yylineno, yytext); return TAMANO;}
(?i:"tamano")   {printf("linea %d, Identificador: TAMANO\n" , yylineno); return TAMANO;}
"?"             {printf("linea %d, operador de acceso a memoria: %s \n", yylineno, yytext); return (int)yytext[0];}
"^"             {printf("linea %d, operador de acceso a memoria: %s \n", yylineno, yytext); return (int)yytext[0];}
"^?"            {printf("linea %d, operador de acceso a memoria: %s \n", yylineno, yytext); return INDIRECCION;}
"["             {printf("linea %d, operador de acceso a memoria: %s \n", yylineno, yytext); return (int)yytext[0];}
"]"             {printf("linea %d, operador de acceso a memoria: %s \n", yylineno, yytext); return (int)yytext[0];}
"{"             {printf("linea %d, operador de acceso a memoria: %s \n", yylineno, yytext); return (int)yytext[0];}
"}"             {printf("linea %d, operador de acceso a memoria: %s \n", yylineno, yytext); return (int)yytext[0];}


{IDENTIFICADOR} {printf("linea %d, identificador: %s\n", yylineno, yytext); return IDENTIFICADOR;}
{CARACTER_VISIBLE} {printf("linea %d, caracter: %s\n" , yylineno, yytext); return CARACTER;}



{CADENA}                           { printf("linea %d, cadena: %s\n", yylineno, yytext); return CADENA; }

.                                  { fprintf(stdout, "ERROR en línea %d: carácter inesperado '%s'\n", yylineno, yytext); }
%%



int yywrap() {
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: ./eazy NombreArchivo\n");
        return 1;
    }
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error al abrir el archivo");
        return 1;
    }
    while (yylex());
    fclose(yyin);
    return 0;
}
