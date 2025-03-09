/*			arreglos.c 
arreglos.c es un programa que maneja arerglos 
unidimensionales como multidimensionales

Pseudocodigo: 
1. Pedir dato al usuario 
2. Almacenar datos en la matriz 
3. Imprimir matriz de datos*/

#include<stdio.h>


int main(){

int a[4]; 
int i = 0; 

for(i=0; i<=3; i++){
	printf("Introduce un numero: \n");
	scanf("%d", &a[i]);
}
for(i=3; i>=0; i--){
	printf("\t\t %d\n", a[i]);
}
return 0;
}
