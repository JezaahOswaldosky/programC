/*		EjercicioPunt1.c 
EjercicioPunt1.c es un programa que utiliza punteros
y hace intercambio de direcciones 

Pseudocodigo: 
1. Inicializar una variable 
2. Inicializar un puntero con la variable 
3. Imprimir variable mediante la variable 
4. Imprimir variable mediante el puntero*/

#include<stdio.h>

int main(){

int x; 
int *ptr; 

printf("Valor de x: "); 
scanf("%d", &x); 

*ptr = x; 

printf("\nValor de x: %d", x); 
printf("\nValor de ptr: %d", *ptr); 

return 0; 
}
