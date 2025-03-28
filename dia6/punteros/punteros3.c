/*			punteros3.c
punteros3.c es un programa que ensena a utilizar los 
punteros y direcciones de memorias en lenguaje C. 

Pseudocodigo: 
1. Inicializar variable a utilizar 
2. Inicializar puntero 
3. Pedir a usuario dato para almacenar en la variable 
4. Apuntar a la memoria de la variable con el puntero 
5. Mostrar la direccion de memoria del puntero y 
lo que tiene almacenado*/

#include<stdio.h>

int main(){
int x; 
int *ptr; 

printf("Valor de x: "); 
scanf("%d", &x); 

ptr =  &x; 

printf("\nDireccion de memoria de ptr: %p\n", ptr); 
printf("\nValor de x usando el puntero ptr: %d\n", *ptr);

return 0; 
}
