/*			mayorNum.c
mayorNum.c es un programa que toma tres valores por 
el usuario y los clasifica de mayor a menor 

PSeudocodigo: 
1. Pedir datos a,b, y c
2. Comapra si a< b
	2.1 comaprar si a<b 
		2.1.1 Catalogar a en posicion 3 
			2.1.1.1 Comaprar si b<c 
				2.1.1.1.1 Catalogar b en 3 y c en 2 
			2.1.1.2 si b>c 
				2.1.1.2.1 Catalogar b en 1 y c en 2 
		2.1.2 Catalogar b en 3 y c en 2 
3. Imprimir resutlador de aba y c en orden correcto */

#include<stdio.h>

int a,b,c; 
int puesto[3]; 


int main(){
// Pedir numeros al usuari 
printf("Inserte valor de a: \n"); 
scanf("%d", &a); 

printf("Inserte valor de B: \n"); 
scanf("%d", &b); 

printf("Inserte valor de c: \n"); 
scanf("%d", &c); 

/// Proceso de comparacion 
if(a > b && a > c){
	puesto[0] = a; 
	if(b > c){
		puesto[1] = b; 
		puesto[2] = c; 
	}else{
		puesto[1] = c; 
		puesto[2] = b; 
	}
}
if(b > a && b > c){
	puesto[0] = b;
	if(a >  c){
		puesto[1] = a;
		puesto[2] = c;
	}else{
		puesto[1] = c; 
		puesto[2] = a; 
	}
}
if(c > a && c > b){
	puesto[0] = c; 
	if(a >  b){
		puesto[1] = a; 
		puesto[2] = c; 
	}else{
		puesto[1] =  b; 
		puesto[2] =  c; 
	}
}
///	Imprimir puestos 
printf("\n1. %d\n2. %d\n3. %d\n", puesto[0],puesto[1],puesto[2]);

return 0; 
}
