/*			estructuras10.c 
estructuras10.c es un programa codificado en lenguaje 
C que demuestra una estructura dentro de otra estructuras
para trabajar datos*/

#include<stdio.h>

struct Direccion{
	char calle[50]; 
	char ciudad[25]; 
	int codigoPostal;
};

struct Persona{
	char nombre[25]; 
	int edad; 
	struct Direccion direccion; 	// Estructura anidad
};


int main(){
	struct Persona p1 = {"Juan", 21, {"Avenida Siempre Viva", "Springfield", 12345}}; 

	printf("Datos de la persona\n"); 
	printf("Nombre: %s\n", p1.nombre); 
	printf("Edad: %d\n", p1.edad); 
	printf("Direccion: %s, %s, %d", p1.direccion.calle, p1.direccion.ciudad, p1.direccion.codigoPostal);

return 0; 
}
