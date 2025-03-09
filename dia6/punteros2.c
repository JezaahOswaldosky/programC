#include<stdio.h>

int main(){

int x = 5; 
int *p = &x;

printf("Valor de x: %d\n", x); 
printf("\nDireccion de x: %p", &x); 	//direccion de x
printf("\nValor de p: %p",p); 		// Direccion de x 
printf("\nValor al que apunta p: %d", *p); 

*p = 10;	// Cambiar el valor de x a traves de p
printf("\nNuevo valor de a: %d", x); 	// 10

return 0; 
}
