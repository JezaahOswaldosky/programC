/*			concatString.c
concatString.c es un programa que captura nombre y 
apellido en diferentes variables, y los combina en 
una variable llamado cliente.

Pseudocodigo: 
1. Pedir y capturar nombre 
2. Pedir y capturar apellido 
3. Concatenar nombre y apellido rusando strcat()
4. Imprimir concatenacion*/

#include<stdio.h>
#include<string.h>

char nombre[20], apellido[20], cliente[40]; 

int main(){

//Pedir nombre y apellido 
printf("Nombre: "); 
fgets(nombre, sizeof(nombre), stdin); 
nombre[strlen(nombre) - 1] = '\0'; 

printf("\nApellido: "); 
fgets(apellido, sizeof(apellido), stdin); 
apellido[strlen(apellido) - 1] = '\0'; 

// Proceso de contatenacion 
strcat(cliente, nombre); 
strcat(cliente, " "); 
strcat(cliente, apellido); 

// Imprimir resultado 
printf("\n\aNombre cliente: %s", cliente); 

return 0; 
}
