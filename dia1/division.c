/*			division .c 

division.c es un programa que toma datos del usuario 
e imprime el resultado de ambos numeros
Pseudocodigo: 
1. Toma dos numeros del usuario 
2. Aritmetica de division 
3. Iprimir el resultado */

#include<stdio.h>

float a,b; 

int main(){
printf("Numero1: \n"); 
scanf("%f", &a); 

printf("\nNumero2: \n"); 
scanf("%f", &b); 

printf("\n%f/%f: %f",a,b,a/b); 

return 0;

}
