/*			punteros1.c
puntero1.c es un programa que muestra la utilizacion 
de punteros en lenguaje C.
1. Valor de a
2. Direccion de a 
3. Valor de p 
4. Valor al que apunta p */

#include<stdio.h>

int main(){

int a = 10; 
int *p = &a;	// Puntero p almacena la direccion de memoria de a

printf("Valor de a: %d", a); 		//10 
printf("\nDireccion de a: %p", &a); 	// Direccion de a
printf("\nValor de p: %p", p);		// Direccion de a
printf("\nValor a que apunta p: %d\n", *p);// 10

return 0;
}
