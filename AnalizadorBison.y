%{
#include <stdio.h>
#include <math.h>
#include "tablaDeSimbolos.h"

#define YYERROR_VERBOSE 1

extern FILE* yyin;
extern int yylineno;

void validarAnalisisLexico();
int yylex();
int yywrap() { return(1); }
void yyerror (char const *s) { fprintf (stderr, "\n%d: %s ",yylineno,s); }

int flag_funcion = 0;
listaParametros parametros = {NULL};

%}

%union {
 char* cadena;
 struct yylval_struct {
    char* tipo;
    int valor_entero;
    float valor_float;
  } mystruct;
}

%token <cadena> IDENTIFICADOR
%token <mystruct> CONSTANTE_DECIMAL                                                                                    
%token <mystruct> CONSTANTE_CARACTER  
%token <mystruct> CONSTANTE_HEXADECIMAL  
%token <mystruct> CONSTANTE_OCTAL 
%token <mystruct> CONSTANTE_REAL 
%token <mystruct> LITERAL_CADENA

%token AND_LOGICO BREAK CASE CHAR DEFINE DISTINTO                                     
%token DIVISION_IGUAL DO DOUBLE ELSE ENUM  FLOAT FOR IF IGUAL_IGUAL INCLUDE                                          
%token INT LONG MAS_IGUAL MAS_MAS MAYOR_IGUAL MENOR_IGUAL MENOS_IGUAL MENOS_MENOS MODULO_IGUAL                                      
%token O_IGUAL OR_LOGICO POR_IGUAL RETURN SHORT SWITCH VOID WHILE                                  

%left '+' '-'
%left '*' '/'
%left '(' ')'

%nonassoc IFX
%nonassoc ELSE

%start unidad_de_programa

%% 

unidad_de_programa:      /* vacio */
                        | INCLUDE  unidad_de_programa                                                    
                        | DEFINE   expresion_primaria   unidad_de_programa                                        
                        | unidad_de_traduccion                          
                        | error unidad_de_traduccion { yyerrok;}
                        ;

unidad_de_traduccion:   declaracion_externa                                                                           
                        | unidad_de_traduccion  declaracion_externa                                                        
                        ;

declaracion_externa:    definicion_de_funcion                      {flag_funcion=0;}                  
                        | declaracion                                             
                        ;

definicion_de_funcion:  especificadores_de_declaracion declarador lista_de_declaracion sentencia_compuesta                                      
                        | declarador lista_de_declaracion sentencia_compuesta                                       
                        | especificadores_de_declaracion declarador sentencia_compuesta                                                      
                        | declarador sentencia_compuesta                                         
                        ;

declaracion:            especificadores_de_declaracion lista_declaradores_init ';'         
                        | especificadores_de_declaracion ';'                                   
                        ;

lista_de_declaracion:   declaracion                                   
                        | lista_de_declaracion declaracion                                   
                        ;

especificadores_de_declaracion: especificador_de_tipo especificadores_de_declaracion                                                               
                                | especificador_de_tipo                                                                              
                                ;

especificador_de_tipo:   INT     
                        |CHAR                                       
                        |FLOAT                                         
                        |DOUBLE                                      
                        |SHORT                                        
                        |VOID                                      
                        |LONG                                                                                                                                                     
                        |especificador_enum                                                                               
                        ;


lista_declaradores_init:    declarador_init                                     
                            | lista_declaradores_init ',' declarador_init                               
                            ;                                                   

declarador_init: declarador                        {if (flag_funcion==0){VARIABLE var={$<cadena>0, $<cadena>1}; agregarVariable(var); }}               
                | declarador '=' inicializador     {VARIABLE var={$<cadena>0, $<cadena>1}; agregarVariable(var);}                      
                ; 


lista_calificador_especificador:             especificador_de_tipo lista_calificador_especificador                 
                                            | especificador_de_tipo                                  
                                            ;


especificador_enum:                         ENUM IDENTIFICADOR '{' lista_de_enumerador '}'                                      
                                            | ENUM '{' lista_de_enumerador '}'                  
                                            | ENUM IDENTIFICADOR                                     
                                            ;

lista_de_enumerador:                        enumerador                  
                                            | lista_de_enumerador ',' enumerador                  
                                            ;

enumerador:                                 IDENTIFICADOR                                     
                                            | IDENTIFICADOR '=' expresion_constante                                            
                                            ;

declarador:                                 apuntador declarador_directo             
                                            | declarador_directo               
                                            ;

declarador_directo:                         IDENTIFICADOR                                                                              
                                            | '(' declarador ')'                                                           
                                            | declarador_directo '[' expresion_constante  ']'       {strcat($<cadena>0,"*");}                                                          
                                            | declarador_directo '['  ']'                           {strcat($<cadena>0,"*");}  
                                            | declarador_directo '(' lista_tipos_de_parametro ')'   {flag_funcion=1; FUNCION func = {$<cadena>0, $<cadena>1, parametros}; agregarFuncion(func); limpiarParametros(&parametros);}                                         
                                            | declarador_directo '(' lista_de_identificadores ')'                                                             
                                            | declarador_directo '('  ')'                           {flag_funcion=1; FUNCION func = {$<cadena>0, $<cadena>1, parametros}; agregarFuncion(func); }                     
                                            ;

apuntador:                                  '*' apuntador  
                                            | '*'          
                                            ;

lista_tipos_de_parametro:                   lista_de_parametros                                                                 
                                            ;

lista_de_parametros:                        declaracion_de_parametro                                    
                                            | lista_de_parametros ',' declaracion_de_parametro   
                                            ; 

declaracion_de_parametro:                   especificadores_de_declaracion declarador             {agregarParametro(&parametros, $<cadena>1);}             
                                            | especificadores_de_declaracion declarador_abstracto                    
                                            | especificadores_de_declaracion                      {agregarParametro(&parametros, $<cadena>1);}                   
                                            ;
                                            
lista_de_identificadores:                   IDENTIFICADOR                           
                                            | lista_de_identificadores ',' IDENTIFICADOR                               
                                            ;
inicializador: expresion_de_asignacion                                       
             | '{' lista_de_inicializadores'}'                                   
             | '{' lista_de_inicializadores',' '}'                                      
             ;
lista_de_inicializadores: inicializador                                       
                   | lista_de_inicializadores',' inicializador                                       
                   ;
nombre_de_tipo: lista_calificador_especificador declarador_abstracto                                  
              | lista_calificador_especificador                                    
              ;
declarador_abstracto: apuntador                                        
                    | apuntador declarador_abstracto_directo                                          
                    | declarador_abstracto_directo                                     
                    ;
declarador_abstracto_directo:'(' declarador_abstracto ')'                                  
                  | declarador_abstracto_directo '[' expresion_constante ']'                                 
                  | '[' expresion_constante ']'
                  | declarador_abstracto_directo '[' ']'
                  | '[' ']'
                  | declarador_abstracto_directo '(' lista_tipos_de_parametro ')'
                  | '(' lista_tipos_de_parametro ')'
                  | declarador_abstracto_directo '(' ')'
                  | '(' ')'
                  ;
sentencia: sentencia_etiquetada                                             
         | sentencia_expresion                                          
         | sentencia_compuesta                                      
         | sentencia_de_seleccion                                       
         | sentencia_de_iteracion      
         | sentencia_de_salto          
         ;
sentencia_etiquetada: IDENTIFICADOR ':' sentencia                                        
                    | CASE expresion_constante  ':' sentencia                                  
                    ;
sentencia_expresion: expresion ';'                                     
                   | ';'                                  
                   ;
sentencia_compuesta: '{' lista_de_declaracion lista_de_sentencias  '}'              
                   | '{' lista_de_sentencias  '}'                                                                           
                   | '{' lista_de_declaracion   '}'                                                                               
                   | '{' '}'                                                                                
                   ;
lista_de_sentencias: sentencia                                                                                          
                | lista_de_sentencias  sentencia                                                                                
                ;
sentencia_de_seleccion: IF '(' expresion ')' sentencia %prec IFX                
                   | IF '(' expresion ')' sentencia ELSE sentencia             
                   | SWITCH '(' expresion ')' sentencia                                    
                   ;
sentencia_de_iteracion: WHILE '(' expresion ')' sentencia                                   
                   | DO sentencia WHILE '(' expresion ')' ';'    
                   | FOR  '(' declaracion  expresion ';' expresion ')' sentencia                             
                   | FOR '(' expresion ';' expresion ';' expresion ')' sentencia                  
                   | FOR '(' expresion ';' expresion ';'    ')' sentencia                                       
                   | FOR '(' expresion ';' ';' expresion ')' sentencia                                    
                   | FOR '(' expresion ';' ';' ')' sentencia                                  
                   | FOR '(' ';' expresion ';' expresion ')' sentencia                                       
                   | FOR '(' ';' expresion ';' ')' sentencia                                     
                   | FOR '(' ';' ';' expresion ')' sentencia                                    
                   | FOR '(' ';' ';' ')' sentencia                                   
                   ;
sentencia_de_salto: BREAK ';'                                       
                  | RETURN expresion ';'                               
                  | RETURN ';'                                  
                  ;
expresion: expresion_de_asignacion                                       
         | expresion ',' expresion_de_asignacion                                       
         ;
expresion_de_asignacion: expresion_condicional                                   
                       | expresion_unaria operador_de_asignacion expresion_de_asignacion            
                       ;
operador_de_asignacion:    POR_IGUAL                           
                           |DIVISION_IGUAL                                    
                           |MAS_IGUAL                                       
                           |MENOS_IGUAL                                         
                           |MODULO_IGUAL                                                                        
                           | '='                                         
                           ;
expresion_condicional: expresion_logica_or                         
                     | expresion_logica_or '?' expresion ':' expresion_condicional                                       
                     ;  
expresion_constante: expresion_condicional                                       
                   ;
expresion_logica_or: expresion_logica_and                                  
                   | expresion_logica_or OR_LOGICO expresion_logica_and                 
                   ;
expresion_logica_and: expresion_or_inclusivo                                         
                    | expresion_logica_and AND_LOGICO expresion_or_inclusivo                                    
                    ;
expresion_or_inclusivo: expresion_or_exclusivo                                        
                      | expresion_or_inclusivo '|' expresion_or_exclusivo                                   
                      ;
expresion_or_exclusivo: expresion_and                                  
                      | expresion_or_exclusivo '^' expresion_and                                      
                      ;
expresion_and: expresion_de_igualdad                                       
             | expresion_and '&' expresion_de_igualdad                                       
             ;
expresion_de_igualdad: expresion_relacional                                      
                     | expresion_de_igualdad IGUAL_IGUAL expresion_relacional         
                     | expresion_de_igualdad DISTINTO expresion_relacional                                      
                     ;
expresion_relacional: expresion_de_corrimiento                                     
                    | expresion_relacional '<' expresion_de_corrimiento                                        
                    | expresion_relacional '>' expresion_de_corrimiento                                       
                    | expresion_relacional MENOR_IGUAL expresion_de_corrimiento                                     
                    | expresion_relacional MAYOR_IGUAL expresion_de_corrimiento                                   
                    ;
expresion_de_corrimiento: expresion_aditiva                                                                       
                        ;
expresion_aditiva: expresion_multiplicativa                                      
                    | expresion_aditiva '+' expresion_multiplicativa    { char* tipo1 = tipoParametro($<mystruct>1.tipo);
                                                                          char* tipo2 = tipoParametro($<mystruct>3.tipo);
                                                                          if (tipo1!="NULL" && tipo2!="NULL"){
                                                                            validarSuma(tipo1,tipo2); 
                                                                          } else {
                                                                            printf("\n%d: Error semantico, no se puede sumar esos tipos de dato", yylineno);
                                                                            aumentarErrorSemantico();
                                                                          }                                                                                                                                                                                                      
                                                                        }                                   
                    | expresion_aditiva '-' expresion_multiplicativa                                    
                    ;
expresion_multiplicativa: expresion_cast                                      
                        | expresion_multiplicativa '*' expresion_cast                             
                        | expresion_multiplicativa '/' expresion_cast   { if ($<mystruct>3.valor_entero == 0 || $<mystruct>3.valor_float == 0) {
                                                                            printf("\n%d: Error semantico, No se puede dividir por 0",yylineno);
                                                                            aumentarErrorSemantico();  
                                                                          }  
                                                                        }                                   
                        | expresion_multiplicativa '%' expresion_cast                                         
                        ;
expresion_cast: expresion_unaria                                     
              | '(' nombre_de_tipo ')' expresion_cast                                     
              ;
expresion_unaria: expresion_posfija                                       
                | MENOS_MENOS  expresion_unaria                                
                | MAS_MAS expresion_unaria                                 
                | operador_unario  expresion_cast                                                                          
                ;
operador_unario: '&'                                       
               | '*'                                      
               | '+'                                   
               | '-'                                                                    
               | '!'                                                    
               ;
expresion_posfija: expresion_primaria                                           
                 | expresion_posfija '[' expresion ']'                                                              
                 | expresion_posfija '(' lista_expresiones_argumento ')' {validarInvocacion($<cadena>1,parametros); limpiarParametros(&parametros);}
                 | expresion_posfija '(' ')'                             {validarInvocacion($<cadena>1,parametros); limpiarParametros(&parametros);}
                 | expresion_posfija MENOS_MENOS        
                 | expresion_posfija MAS_MAS            
                 ;
expresion_primaria: IDENTIFICADOR                                      
                  | constante                                           
                  | LITERAL_CADENA                                      
                  | '(' expresion')'
                  ;
lista_expresiones_argumento: expresion_de_asignacion                                  {agregarParametro(&parametros, tipoParametro($<mystruct>1.tipo)); }
                           | lista_expresiones_argumento ',' expresion_de_asignacion  {agregarParametro(&parametros, tipoParametro($<mystruct>3.tipo)); }
                           ;
constante: CONSTANTE_OCTAL 
         | CONSTANTE_HEXADECIMAL  
         | CONSTANTE_DECIMAL                                            
         | CONSTANTE_CARACTER  
         | CONSTANTE_REAL 
         | ENUM 
         ;

%%

int main()
{
    yyin = fopen("ArchivoDeEntrada.c","r");

    yyparse();

    fclose(yyin);

    validarAnalisisLexico();
    printf("El analisis sintactico concluyo con %d errores\n",yynerrs);
    
    resultadoAnalisisSemantico();

    return 0;
}