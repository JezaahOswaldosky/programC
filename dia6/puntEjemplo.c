/*			puntejemplo.c
puntEjemplo.c es un programa ejemplo que muesta 
la delcaracion y asignacion de valores en punteros. 
Pseudocodigo: 
1. Inicializar variables y punteros 
2. Asignar una variable a los punteros
3. Introducir valor a la variable */

#include<stdio.h>
int main(){

int num1, num2;
int *ptr1,*ptr2; 

num1 = 10; 
num2 = 20; 

ptr1 = ptr2; 
ptr2 = NULL; 

return 0; 
}
