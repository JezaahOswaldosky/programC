/*			punteros1_1.c
punteros1_1.c es un programa que utiliza punteros 
*/

#include<stdio.h>

int main(){

int x = 10; 
int *p = &x; 

printf("Valor de x: %d", x); 
printf("\nValor de memoria x: %p\n",&x); 
printf("\nValor almacenado en p: %p\n", p); 
printf("\nValor a traves del puntero p: %d\n", *p); 

return 0; 

}
