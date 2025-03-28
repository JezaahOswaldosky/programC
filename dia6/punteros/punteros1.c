/*			puntero1.c 
punteros1.c es un ejemplo que explica la utilizacion de 
un puntero 
Pseudocodigo: 
1. Inicializar variable 
2. Inicializar el puntero 
3. Imprimir el valor de x 
4. Imprimir la direccion de memoria de X 
5. Imprimir la direccion de memoria guardada en p 
6. Imprimir el valor que apunta *p*/

#include<stdio.h>

int main(){

int x = 10; 
int *p = &x; 	// P es un puntero que guarda la direccion de memoria x

printf("Valor de x: %d\n", x);// Imprimir el valor de x 
printf("\nDireccion de memoria x: %p\n", &x); //Direccion de memoria de x 
printf("\nDireccion almacenada en p: %p\n", p); // Direccion de memoria en p 
printf("\nValor a traves de puntero p: %d\n", *p); // Valor al que apunta p 

return 0;
}
