#include <stdio.h>
#include "README.md"

#define HOLA

int a = 3; int b;
int a = 0xA4;
double hola = 0125 + 3;  //Suma bien hecha
char holanda;
char caracter = 'a';
long b = 0;
char cadena[] = "Hola"; 

int numeros[5] = {1,2,3,4,5};  

int a ;=; //Error sintactico

$; //Error lexico

void OtraFun(float);
int unaFuncion(int);  
int unaFuncion2par(int,float);
int unaFuncion5par(long,float,int);

int main()
{
    int b = 3;
    float t=0.88;

    int funcionMalLlamada1 = unaFuncion(5,0xAf);  //error de cantidad de tipos
    int funcionMalLlamada2 = unaFuncion(cadena); //error de tipos en el llamado                               
    
    OtraFun(3); //error de tipos en el llamado   
    OtraFun(3.1);

    t = unaFuncion(P);                     // error de tipos en el llamado    
    b = unaFuncion2par(b,t);  

    b = b + caracter;   // tiene que tirar error
    t = 'a'+ "cadena";  // 

    if ( a != 3 )  
    { 
        if ( b >= 1 && 5 ) { 
            b++;
            b+5; 
        }
        else { 
            a++; 
        }
    }   
    else 
    {
        b--;
    }

    while (a<=3|| a!=-2) {
        a++;
    }
    for( int i=3; i<10; i++) 
    {
        a += i;
    }

    
    b = b + 1;  //Suma bien hecha
    b = b + t;  //Suma bien hecha

    return 0;
}

int unaFuncion(int a) {
    return a + 1;
}       

void OtraFun(float b){
    int g=5;
    b= 0.9999;
    
    if(b==0.9999 || b==1)
    {
        b=unaFuncion(g);
    }
    b=3/0;
}

int unaFuncion2par(int x ,float z){
    return x;
}

int unaFuncion5par(long a,float b,int c){
    return 1;
}