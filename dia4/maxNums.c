/*			maxNums.c
maxNums.c es un programa que cuenta con una funcion 
para determinar el mayor numero de tres numeros ingresado 
por el usuario. 

Pseudocodigo: 
1. Ingresar datos a,b,c
2. Entran datos a funcion 
	2.1 Comaprar a, b y c para ver cual es mayor 
	2.2 Regresa resultado
3. Imprime resutlado devuelto por la funcion*/

#include<stdio.h>

//	Funcion comparacion 
int numMax(int a, int b, int c){
int regreso; 

	if(a > b && a >c){
		regreso = a; 
	}else if(b >a && b > c){
		regreso = b;
	}else if(c > a && c > b){
		regreso = c;
	}
return  regreso; 
}

int main(){

int a,b,c; 

// Ingresar datos de a,b y c 
printf("Ingresa a: \n"); 
scanf("%d", &a); 

// Ingresar datos de a,b y c 
printf("Ingresa b: \n"); 
scanf("%d", &b); 

// Ingresar datos de a,b y c 
printf("Ingresa c: \n"); 
scanf("%d", &c); 

///	Utilizar funcion para comparar y entregar valor mas alto 
printf("\n El mayor numero es : %d", numMax(a,b,c)); 

return 0; 
}
