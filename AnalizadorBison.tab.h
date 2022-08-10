
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFICADOR = 258,
     CONSTANTE_DECIMAL = 259,
     CONSTANTE_CARACTER = 260,
     CONSTANTE_HEXADECIMAL = 261,
     CONSTANTE_OCTAL = 262,
     CONSTANTE_REAL = 263,
     LITERAL_CADENA = 264,
     AND_LOGICO = 265,
     BREAK = 266,
     CASE = 267,
     CHAR = 268,
     DEFINE = 269,
     DISTINTO = 270,
     DIVISION_IGUAL = 271,
     DO = 272,
     DOUBLE = 273,
     ELSE = 274,
     ENUM = 275,
     FLOAT = 276,
     FOR = 277,
     IF = 278,
     IGUAL_IGUAL = 279,
     INCLUDE = 280,
     INT = 281,
     LONG = 282,
     MAS_IGUAL = 283,
     MAS_MAS = 284,
     MAYOR_IGUAL = 285,
     MENOR_IGUAL = 286,
     MENOS_IGUAL = 287,
     MENOS_MENOS = 288,
     MODULO_IGUAL = 289,
     O_IGUAL = 290,
     OR_LOGICO = 291,
     POR_IGUAL = 292,
     RETURN = 293,
     SHORT = 294,
     SWITCH = 295,
     VOID = 296,
     WHILE = 297,
     IFX = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 21 "AnalizadorBison.y"

 char* cadena;
 struct yylval_struct {
    char* tipo;
    int valor_entero;
    float valor_float;
  } mystruct;



/* Line 1676 of yacc.c  */
#line 106 "AnalizadorBison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


