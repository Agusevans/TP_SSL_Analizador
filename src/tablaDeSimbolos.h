#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
int erroresSemanticos = 0;
void aumentarErrorSemantico() {erroresSemanticos++;}

typedef struct variable{
    char* tipo;
    char* identificador;
    struct variable* sig;
}VARIABLE;

typedef struct  ListaVariables{
    VARIABLE* inicio;
}ListaVariables;

typedef struct parametro{
    char* parametro;  
    struct parametro* sig;
}PARAMETRO;

typedef struct listaParametros{
    PARAMETRO* inicio;
}listaParametros;

typedef struct funcion {
    char* tipoRetorno;
    char* identificador;
    listaParametros parametros;  
    struct funcion* sig;
}FUNCION;

typedef struct ListaFunciones{
    FUNCION* inicio;
}ListaFunciones;


//listas:
ListaVariables variables = {NULL};
ListaFunciones funciones =  {NULL};

listaParametros* crearListaParametros(){
    
    listaParametros* lista = (listaParametros*) malloc(sizeof(listaParametros));
    lista -> inicio = NULL;
    return lista;
}

PARAMETRO* crearNodoParametro(char* tipo){
    PARAMETRO* nodoParametro = (PARAMETRO*) malloc(sizeof(PARAMETRO));
    nodoParametro -> parametro = tipo;
    nodoParametro -> sig = NULL;
    return nodoParametro;
}

void agregarParametro(listaParametros* parametros, char* tipo){
   
    PARAMETRO* parametro = crearNodoParametro(tipo);

    if ( parametros -> inicio == NULL ){
        parametros -> inicio = parametro;
    }else{
        PARAMETRO* aux = parametros -> inicio;

        while ( aux -> sig!=NULL ){
        aux = aux -> sig;
        }
        aux -> sig = parametro;
    }
}

VARIABLE* crearNodoVariable(char* tipo, char* identificador){

    VARIABLE* nodoVariable = (VARIABLE*) malloc(sizeof(VARIABLE));
    nodoVariable -> tipo = tipo;
    nodoVariable -> identificador = identificador;
    nodoVariable -> sig = NULL;  
  
    return nodoVariable;
}

listaParametros copiarLista(listaParametros parametros){  
    listaParametros* nuevaLista = crearListaParametros();

    PARAMETRO* aux = parametros.inicio;
    while ( aux!=NULL){
        agregarParametro(nuevaLista, aux->parametro);
        aux = aux -> sig;
    }

    return *nuevaLista;
}

FUNCION* crearNodoFuncion(char* tipoRetorno, char* identificador, listaParametros parametros){

    FUNCION* nodoFuncion = (FUNCION*) malloc(sizeof(FUNCION));
    nodoFuncion -> tipoRetorno = tipoRetorno;
    nodoFuncion -> identificador = identificador;
    nodoFuncion -> parametros = copiarLista(parametros); 
    nodoFuncion -> sig = NULL;
  
   return nodoFuncion;
}

FUNCION* buscarFuncion(char* identificador){ 
    
    FUNCION* aux = funciones.inicio;
    while( aux != NULL)
    {
        if ( strcmp(aux->identificador, identificador)==0 ){
            return aux;
        }

        aux = aux -> sig;
    }

    return NULL; 
}

void agregarFuncion(FUNCION funcion){

    if ( buscarFuncion(funcion.identificador) == NULL ){

        FUNCION* nodoFuncion = crearNodoFuncion(funcion.tipoRetorno, funcion.identificador, funcion.parametros);

        if ( funciones.inicio == NULL ){
            funciones.inicio = nodoFuncion;
        } 
        else {
            FUNCION* aux = funciones.inicio;

            while ( aux -> sig != NULL ){
                aux = aux -> sig;
            }
            aux -> sig = nodoFuncion;
        }
    }
}

VARIABLE* buscarVariable(char* identificador){ 
    
    VARIABLE* aux = variables.inicio;
    while( aux != NULL)
    {
        if ( strcmp(aux->identificador, identificador)==0 ){
            return aux;
        }

        aux = aux -> sig;
    }

    return NULL; //Si retorna null, no esta
}

void validarDobleDeclaracionVariable(char* identificador){

    VARIABLE* direccionVariable = buscarVariable(identificador);

    if ( direccionVariable != NULL ) {
        printf("\n%d: Error semantico, doble declaracion de %s", yylineno, identificador);
        aumentarErrorSemantico();
    }

}

void agregarVariable(VARIABLE variable){

    validarDobleDeclaracionVariable(variable.identificador); 

    VARIABLE* nodoVariable = crearNodoVariable(variable.tipo, variable.identificador);

    if ( variables.inicio == NULL ){
        variables.inicio = nodoVariable;
    } 
    else {
        VARIABLE* aux = variables.inicio;

        while ( aux -> sig != NULL ){
            aux = aux -> sig;
        }
        aux -> sig = nodoVariable;
    }
}

void compararParametros(listaParametros parametrosFuncion, listaParametros parametrosInvocados){
    PARAMETRO* parametro1 = parametrosFuncion.inicio;
    PARAMETRO* parametro2 = parametrosInvocados.inicio;
    
    int error = 0;
    while (error == 0 &&  parametro1!=NULL && parametro2!=NULL){
        if ( strcmp(parametro1->parametro, parametro2->parametro) != 0){
            error = 1;
            printf("\n%d: Error semantico, parametros de invocacion de funcion incorrectos", yylineno);
            aumentarErrorSemantico();

        }

        parametro1 = parametro1 -> sig;
        parametro2 = parametro2 -> sig;
    }

    if(parametro1!=NULL || parametro2!=NULL && error==0){
        printf("\n%d: Error semantico, cantidad incorrecta de parametros de invocacion", yylineno);
        aumentarErrorSemantico();
    }
}

void validarInvocacion(char* nombreFuncion, listaParametros parametros){ 
    
    FUNCION* funcion = buscarFuncion(nombreFuncion);

    if( funcion == NULL ) {
        printf("\n%d: Error semantico, funcion %s no declarada", yylineno, nombreFuncion);
        aumentarErrorSemantico();
    }
    else { 
        compararParametros(funcion->parametros, parametros);
    }

}

int esTipoValido(char* tipo){

    char* tiposValidos[5] = {"int","double","float","short","long"};

    for(int i = 0; i<5 ; i++){
        if ( strcmp(tipo, tiposValidos[i]) == 0 ){
            return 1;
        }
    }
    return 0;
}

void validarSuma(char* tipo1, char* tipo2){ 

    if ( !esTipoValido(tipo1) || !esTipoValido(tipo2) ){
        printf("\n%d: Error semantico, no se puede sumar esos tipos de dato", yylineno);
        aumentarErrorSemantico();
    }

} 

char* tipoParametro(char* cadena){

    if ( esTipoValido(cadena) ){  
        return cadena;
    } 
    else 
    {
        VARIABLE* variable = buscarVariable(cadena);
        if(variable!=NULL) {
            return variable->tipo;
        }
        else {
            return "NULL";
        }
    }

}

void mostrarParametros(listaParametros parametros){
    PARAMETRO* aux = parametros.inicio;

    while( aux!=NULL){
        printf(" %s",aux->parametro);
        aux = aux -> sig;
    }
    printf(" )");
}

void limpiarParametros(listaParametros* parametros){
    PARAMETRO* aux = parametros ->inicio;

    while (aux!=NULL){
        free(aux);
        aux = aux -> sig;
    }

    parametros->inicio = NULL;
}

void mostrarYLimpiarListas(){
    
    VARIABLE* auxVar = variables.inicio;
    FUNCION* auxFunc = funciones.inicio;

    printf("\nTABLA DE SIMBOLOS:\n---------------------------");

    printf("\nVariablesDeclaradas:");
    while( auxVar!=NULL ){

        printf("\n %s %s", auxVar->tipo, auxVar->identificador);

        free(auxVar);
        auxVar = auxVar -> sig;
    }

    printf("\n\nFuncionesDeclaradas:");
    while( auxFunc!=NULL){

        printf("\n %s %s (", auxFunc->tipoRetorno, auxFunc->identificador);
        mostrarParametros(auxFunc->parametros);

        free(auxFunc);
        auxFunc = auxFunc -> sig;
    }

    printf("\n---------------------------\n");
}

void resultadoAnalisisSemantico(){
    
    printf("El analisis semantico concluyo con %d errores\n", erroresSemanticos);
    mostrarYLimpiarListas();
}
