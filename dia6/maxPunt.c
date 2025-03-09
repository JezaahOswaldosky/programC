/*			maxPunt.c 
maxPunt.c es un programa que crea una funcion que 
recibe un puntero a un array y su tamano, y devuelve 
el valor maximo del arreglo...
Pseudocodigo: 
1. Iniciar arreglo de 5 numeros 
2. Declarar tamano del arrelo 
3. entra a funcion maxPunt 
	3.1 Inicializar la variable max al puntero de arreglo 
	3.2 comparar los valore sdel arreglo 
	4.4 Devuelve el valor maximo 
4. Imprimir el valor maximo*/

#include<stdio.h>
int maximus(int *arr, int n){
	int max = *arr;	// Inicializar el maximo con el primer valor 

	for(int i = 1; i < n; i++){
		if(*(arr+i) > max){
			max = *(arr+i);
		}
	}
	return max;
}


int main(){

int arr[] = {3,1,7,4,9};
int n  = sizeof(arr)/sizeof(arr[0]); 

printf("El valor maximo es: %d\n", maximus(arr,n));


return 0;  
}
