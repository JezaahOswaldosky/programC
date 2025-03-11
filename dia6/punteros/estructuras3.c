/*			estructura3.c 
estructura3.c es un programa que define estructuras para 
una persona contando con nombre y telefono */

#include<stdio.h> 

struct Persona{
	char nombre[50]; 
	int edad; 
};

int main(){

struct Persona p1 = {"Juan", 30}; 

printf("Nombre: %s\n", p1.nombre); 
printf("Edad: %d\n\a", p1.edad);

return 0; 
}
