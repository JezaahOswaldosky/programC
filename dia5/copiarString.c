/*			copiarString.c 
copiarString.c es un programa que captura nombre y 
apellido por parte del usuario y lo copia en tra 
variable utilizada para una base de datos. 
Pseudocodigo: 
1 Capturar nombre y apellido del usuario 
2. Copiar el nombre a nomBas y apellido a lastBase
3. Imprimir mensaje de copiado con exito en base de 
datos*/

#include<stdio.h> 
#include<string.h>


char nombre[25], nombreBase[25];

int main(){

printf("Introducir nombre: "); 
fgets(nombre, sizeof(nombre), stdin); 
nombre[strlen(nombre) - 1] = '\0'; 

strcpy(nombreBase, nombre);

printf("\nNombre plataforma: %s", nombre); 
printf("\nNombre Base de Datos: %s", nombreBase); 

return 0; 
}
