/*			aritmetica.c 
aritmetica.c es un programa que recibe dos valores 
del usuario y realiza la suma, resta, division y 
multiplicacion para ser impresa por la terminal 
Pseudocodigo: 
1. Toma valores 
2. Realiza aritmetica suma, resta, multiplicacion 
division 
3. Imprime resultado en pantalla*/

#include<stdio.h>

float a,b; 

int main(){
printf("Numero 1: \n"); 
scanf("%f", &a); 

printf("Numero 2: \n"); 
scanf("%f", &b); 

printf("\nLa suma de %f y %f es %f\n ", a,b,a+b);
printf("\nLa resta de %f y %f es %f\n ", a,b,a-b);
printf("\nLa multiplicacion de %f y %f es %f\n ", a,b,a*b);
printf("\nLa division de %f y %f es %f\n ", a,b,a/b);


return 0; 
}
