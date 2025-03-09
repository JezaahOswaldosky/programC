/*			primo.c 
primo.c es un programa que tiene consigo una funcion 
para determinar si un numero es primo o no 

PSeudocodigo: 
1. Pedir dato n para calcular 
2. Entrar a funcion primoFunc(int n)
	2.1 Ciclo donde si n/i <=*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){

int num; 
printf("Ingresa numero: ");
scanf("%d", &num); 

for(int divisor=2; divisor<num/2;++divisor)
	if(!(num%divisor)){
		printf("\nNo es primo!!\n");
		return 0; 
	}
printf("\nEs primo!!\n");

return 0;
}
