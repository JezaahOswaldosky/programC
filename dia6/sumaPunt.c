/*			sumaPunt.c 
sumaPunt.c es un programa que suma dos variables 
de un puntero. 
Pseudocodigo: 
1. Declarar un arreglo de 5 numeros 
2. Declarar una division de un arreglo 
3. Imprimir la sima del arreglo de punteros*/

#include<stdio.h>

int sumArray(int *arr, int n){
	int suma = 0; 
	for(int i = 0; i < n; i++){
		suma += *(arr+i);// Acceder al valor de la posicion i
	}
	return suma; 
}

int main(){

int arr[] = {1,2,3,4,5}; 
int n = sizeof(arr)/sizeof(arr[0]); 

printf("La suma del array es: %d\n", sumArray(arr,n));

return 0; 
}

