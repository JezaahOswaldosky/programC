/*			cels_farh.c
cels_farh.c es un programa que convierte la 
teperatura en celsius por el usuario y la imprime en 
farenheit
Pseudocodigo: 
1. Toma temperatura del usuario 
2. Transforma Centigrados a Farenheit 
3. Imprime valor de temp. Farenheit*/

#include<stdio.h>

float celsius; 

int main(){

printf("Temperatura en Celsius: \n"); 
scanf("%f", &celsius); 

printf("\n La temperatura de celsius a farenheit es: %f", (celsius*9/5)+32);

return 0 ; 
}
