/*			comString.c
compString.c es un programa que toma dos palabras del 
usuario y las compara imprimiendo el resultado en 
pantalla. 
Pseudocodigo: 
1. Captura palabra 1 y palabra 2
2. Comapra ambas palabras en sentencia if-else
	2.1 Si la comparacion es igual, imprime resultados iguals 
	2.2 Si la comapracion no es igual, imprime resutlado diferente
*/
#include<stdio.h>
#include<string.h>

char palabra1[10], palabra2[10]; 

int main(){

printf("Introducir palabra1: "); 
fgets(palabra1, sizeof(palabra1), stdin);
palabra1[strlen(palabra1) - 1] = '\0'; 

printf("\nIntroducir palabra2: "); 
fgets(palabra2, sizeof(palabra2), stdin); 
palabra2[strlen(palabra2) - 1] = '\0'; 

if(strcmp(palabra1,palabra2) == 0){
	printf("\nLas palabras son iguales\n");
}else{
	printf("\nLas palabras no son iguales\n");
}

return 0; 
}
