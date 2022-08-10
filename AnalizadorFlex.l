%option noyywrap
%option yylineno

%{
    #include "AnalizadorBison.tab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern FILE* yyin;
    int cantidadDeErroresLexicos = 0;
%}

ESPACIO_EN_BLANCO (" ")+
TABULACION (\t)+
SALTO_DE_LINEA (\n)+

PALABRA_RESERVADA {TIPO_DE_DATO}|break|case|do|else|enum|for|if|return|sizeof|switch|void|while
TIPO_DE_DATO char|float|int|long|short|double

NO_DIGITO           [_a-zA-Z]
DIGITO              [0-9]
IDENTIFICADOR       {NO_DIGITO}({NO_DIGITO}|{DIGITO})*

CARACTER_SIMPLE "["|"]"|"("|")"|"{"|"}"|"."|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<"|">"|"^"|"|"|"="|"?"|":"|";"|","|"#"

DIGITO_HEXADECIMAL  [0-9a-fA-F]
SECUENCIA_DE_ESCAPE_HEXADECIMAL \\x{DIGITO_HEXADECIMAL}{1,2}
DIGITO_OCTAL        [0-7]
SECUENCIA_DE_ESCAPE_OCTAL       \\{DIGITO_OCTAL}{1,3}
SECUENCIA_DE_ESCAPE_SIMPLE \\(\'|\"|\?|\\|a|b|f|n|r|t|v)
SECUENCIA_DE_ESCAPE {SECUENCIA_DE_ESCAPE_SIMPLE}|{SECUENCIA_DE_ESCAPE_OCTAL}|{SECUENCIA_DE_ESCAPE_HEXADECIMAL}
CUALQUIER_CARACTER_EXCEPTO_COMILLAS_O_BARRA_INVERTIDA [^"\\]
CARACTER {CUALQUIER_CARACTER_EXCEPTO_COMILLAS_O_BARRA_INVERTIDA}|{SECUENCIA_DE_ESCAPE}
SECUENCIA_DE_CARACTERES {CARACTER}+

LITERAL_CADENA      \"{SECUENCIA_DE_CARACTERES}\"

CONSTANTE_OCTAL     0{DIGITO_OCTAL}*
CONSTANTE_DECIMAL [1-9][0-9]*
CONSTANTE_HEXADECIMAL 0(x|X)[0-9a-fA-F]+  
CONSTANTE_REAL   [0-9]+"."[0-9]*([eE](\+|\-)?[0-9]*)?
CONSTANTE_CARACTER (\'{CUALQUIER_CARACTER_EXCEPTO_COMILLAS_O_BARRA_INVERTIDA}\')|(\'{SECUENCIA_DE_ESCAPE}\')

COMENTARIO_DE_LINEA "//".*
COMENTARIO_MULTIPLE_LINEA "/*"([^*]|(\*+[^*/]))*"*"+"/"

%%

"int"                          {yylval.cadena=strdup(yytext); return INT;}
"double"                       {yylval.cadena=strdup(yytext); return DOUBLE;}
"char"                         {yylval.cadena=strdup(yytext); return CHAR;}
"float"                        {yylval.cadena=strdup(yytext); return FLOAT;}
"short"                        {yylval.cadena=strdup(yytext); return SHORT;}
"long"                         {yylval.cadena=strdup(yytext); return LONG;}
"void"                         {yylval.cadena=strdup(yytext); return VOID;}
"if"                           {return IF;}
"else"                         {return ELSE;}
"while"                        {return WHILE;}
"for"                          {return FOR;}
"return"                       {return RETURN;}

"||"|"or"                      {return OR_LOGICO;}
"&&"|"and"                     {return AND_LOGICO;}

"=="                           {return IGUAL_IGUAL;}
"!="                           {return DISTINTO;}
"+="                           {return MAS_IGUAL;}
"-="                           {return MENOS_IGUAL;}
"*="                           {return POR_IGUAL;}
"++"                           {return MAS_MAS;}
"--"                           {return MENOS_MENOS;}
"<="                           {return MENOR_IGUAL;}
">="                           {return MAYOR_IGUAL;}

"#include"{ESPACIO_EN_BLANCO}{LITERAL_CADENA}                     {return INCLUDE;}
"#include"{ESPACIO_EN_BLANCO}"<"{SECUENCIA_DE_CARACTERES}">"      {return INCLUDE;}
"#define"                                                         {return DEFINE;}

{CONSTANTE_DECIMAL}     {yylval.mystruct.valor_entero=atoi(yytext);yylval.mystruct.tipo="int"; return CONSTANTE_DECIMAL;}

{CONSTANTE_OCTAL}       {yylval.mystruct.valor_entero=strtol(yytext,NULL,8); yylval.mystruct.tipo="int";return CONSTANTE_OCTAL;}

{CONSTANTE_HEXADECIMAL} {yylval.mystruct.valor_float=strtol(yytext,NULL,16);yylval.mystruct.tipo="float";return CONSTANTE_HEXADECIMAL;}

{CONSTANTE_REAL}        {yylval.mystruct.valor_float=atof(yytext);yylval.mystruct.tipo="float" ;return CONSTANTE_REAL;}

{CARACTER_SIMPLE}       {return yytext[0];}

{CONSTANTE_CARACTER}    {yylval.mystruct.tipo="char";return CONSTANTE_CARACTER;}

{IDENTIFICADOR}         {yylval.cadena=strdup(yytext); return IDENTIFICADOR;}   

{LITERAL_CADENA}        {yylval.mystruct.tipo="char*"; return LITERAL_CADENA;}                                         

{COMENTARIO_MULTIPLE_LINEA} {}

{COMENTARIO_DE_LINEA}       {}   

{ESPACIO_EN_BLANCO}|{TABULACION}|{SALTO_DE_LINEA} {}

.           { printf("\n%d: error lexico, Token no reconocido: %s",yylineno, yytext); cantidadDeErroresLexicos++;}

%%

void validarAnalisisLexico() {
    printf("\n\nEl analisis lexico concluyo con %d errores\n",cantidadDeErroresLexicos);
}