/*			punteros2.c
punteros2.c es un programa que utiliza arreglos en los 
punteros
Pseudocodigo: 
1. Inicializar el arreglo con sus valores 
2. Inicializar el puntero --> arr 
3. Mostrar primr elemento del arreglo y guardarlo en 
el puntero 
4. Mostrar el segundo elemento del puntero y guardarlo 
en el puntero 
5. Usar un bucle para iprimir todos los elementos 
del arreglo
*/
#include<stdio.h> 

int main(){

int arr[] = {10,20,30,40}; 
int *p = arr; 

printf("Primer elemento: %d\n", *p); 
printf("Segundo elemento: %d\n", *(p+1)); 

// Usar un buble para imprimir todos los elementos del 
// arreglo 

for(int i = 0; i < 4; i++){

printf("Elemento %d: %d\n", i, *(p+i)); 
}

return 0; 
}
