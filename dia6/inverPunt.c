/*			inverPunt.c
inverPunt.c es un programa que crea una funcion que 
invierte una cadena de texto utilizando puntos. 
Pseudocodigo: 
1. Generar una cadena de texto
2. Entramos a la funcion de invertir 
	2.1 Inicializar el puntero *inicio a str 
	2.2 Inicializar puntero con la cantidad de cadena de texto 
	2.3 Ciclo para invertir caracteres 
3. Imprimir cadena de texto*/

#include<stdio.h>
#include<string.h>

void invertirCadena(char *str){
	char *inicio = str; 
	char *fin = str + strlen(str) - 1; 

	while(fin > inicio){
	//	Intercambiar los caracteres 
	char temp = *inicio; 
	*inicio = *fin; 
	*fin = temp; 

	// Mover los punteros
	inicio++; 
	fin--; 
	}
}	


int main(){

char str[] = "Hola mundo!!!"; 

printf("Cadena original: %s", str); 

invertirCadena(str); 

printf("\nCadena Invertida: %s",str); 

return 0; 
}
