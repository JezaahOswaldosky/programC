/*			sumas.c 
sumas.c es un programa que obtiene 2 numeros por 
parte del usuario y despliega en pantalla la suma de 
estos: 
Pseudocodigo: 
1. Recibe numero 1 y numero 2
2. Suma numero1 y numero 2; numero1+numero2
3. muestra en pantalla la suma de ambos numeros*/

#include<stdio.h>

int main(){
int a,b; 

printf("Introduce el numero 1: \n"); 
scanf("%d", &a); 

printf("\nIntroduce el numero 2: \n"); 
scanf("%d", &b);

printf("\nEl resultado es: %d\n", a+b) ; 

return 0; 

}
