/*			miNombre.c 
miNombre.c es un programa que toma el nombre del 
usuario y lo imprime en pantalla 
Pseudocodigo: 
1. Toma nombre del usuario 
2. Toma apellido del usuario 
3. Concatena el nombre del usuario 
4. Imprime nombre y apellido concatenado en pantalla*/

#include<stdio.h>
#include<string.h>

char nom[20]; 
char apellido[20]; 
char printer[40]; 

int main(){

printf("Cual es tu nombre: ");
fgets(nom, sizeof(nom), stdin); 
nom[strlen(nom)-1] = '\0';

printf("\nCual es tu apellido: ");
fgets(apellido, sizeof(apellido), stdin); 
apellido[strlen(apellido)-1] = '\0';

strcpy(printer, nom); 
strcat(printer, " "); 
strcat(printer, apellido); 

printf("%s", printer); 

return 0; 
}
