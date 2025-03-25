/*			estructuras14.c 
estructuras14.c es un programa que maneja estructuras 
anidadas una de otra para almacenar datos...*/
#include<stdio.h>


struct Direccion{
	char calle[50]; 
	char ciudad[50]; 
	int codPostal; 
};

struct Persona{
	char nombre[50]; 
	int edad; 
	struct Direccion direccion; 
};

int main(){
// Inicializar la estructura 
struct Persona persona1 = {"Carlos", 30, {"Avenida Guttenberg", "Colonia Santa Anna", 22198}}; 

printf("Nombre: %s\n", persona1.nombre); 
printf("Edad: %d\n", persona1.edad); 
printf("Direccion: %s,%s,C.P %d", persona1.direccion.calle, persona1.direccion.ciudad, persona1.direccion.codPostal); 

return 0; 
}
