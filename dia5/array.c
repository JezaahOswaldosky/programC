/*			array.c 
array.c es un programa que maneja arreglos de 
caracteres y genera un movimiento: 

Pseudocodigo: 
1. Preguntar por dato. 
2. */

#include<stdio.h>
#include<string.h>

char name[20]; 

int main(){

printf("Introduce nombre: ");
fgets(name, sizeof(name), stdin); 
name[strlen(name)-1] = '\0'; 

printf("\nHola %s\n", name);

return 0; 
}
