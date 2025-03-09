/*			valPunteros.c
valPunteros.c es un programa que crea una funcion 
para intercambiar dos punteros enteros y los intercambia 
sin usar a variables temporales. 
Pseudocodigo: 
1. Imprimir valores antes del intercambo de valores 
2. Entra a la funcion 
	2.1 Entran puntero *a y *b 
	2.2 *a = *a + *b
	2.3 *b = *a - *b
	2.4 *a = *a -v*b
3. Imprimir resultado de puntero intercambiabe*/

#include<stdio.h> 

void intercambio(int *a, int *b){
	*a = *a + *b; 
	*b = *a - *b; 
	*a = *a - *b; 
}

int main(){

int x = 5, y = 10; 

printf("Antes del intercambio: x = %d, y = %d", x,y); 
intercambio(&x, &y); 
printf("\nDespues del intercambio: x = %d, y = %d",x,y); 

return 0; 
}
