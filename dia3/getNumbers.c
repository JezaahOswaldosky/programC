/*			getNumbers.c 
getNumbers.c es un programa que captura datos por el 
usuario hasta que uno sea negativo

PSeudocodigo: 
1. Entrar al ciclo dato <0 
	1.2 pedir dato al usuario */

#include<stdio.h>

int main(){
int dato; 

printf("Ingrese dato: "); 
scanf("%d", &dato); 

while(dato > 0 ){
	printf("\nIngrese dato: ");
	scanf("%d", &dato);
}

return 0; 
}
