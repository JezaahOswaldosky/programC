/*			arrayChar.c
arrayChar.c es un programa que permite introducir 
caracteres y mostrarlos en una lista... 
Pseudocodigo: 
1. Capturar nombres
2. Capturar mensajes 
3. ciclo donde se invierten los caracteres 
4. Imprimir nombre mensaje original 
5. Imprimir mensaje inverso*/

#include<stdio.h>
#include<string.h>

int main(){

char nombre[20]; 
char mensaje[100]; 
char mensaje2[100];

printf("Cual es tu nombre: "); 
fgets(nombre, sizeof(nombre), stdin);
nombre[strlen(nombre)-1] = '\0'; 

printf("\nIntroducir mensaje: \n"); 
fgets(mensaje, sizeof(mensaje), stdin);
mensaje[strlen(mensaje)-1] = '\0';

for(int i = 0; i <= strlen(mensaje); i++){
	mensaje2[i] = mensaje[strlen(mensaje)- 1 -i]; 
	printf("%d %d \n", i, strlen(mensaje)- 1 -i);
}

printf("\nMensaje: \n%c", mensaje2[0]);
printf("\nMensaje Invertido: \n %s \n", mensaje2); 

return 0;
}
