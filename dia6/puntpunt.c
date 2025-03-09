#include<stdio.h>

int main(){

int a = 10; 
int *p = &a; 	/// Puntero a a 
int **pp = &p;	// Puntero a puntero 

printf("Valor de a: %d",a); 
printf("\nDireccion de a: %p", &a);	// Direccion de a
printf("\nValor de p: %p", p); 		// Direccion de a
printf("\nValor de pp: %p", pp);	// Direccion de p 
printf("\nValor al que apunta pp: %p", *pp);//Direccion de a
printf("\nValor al que apunta *pp: %d", **pp);//10 


return 0; 
}
