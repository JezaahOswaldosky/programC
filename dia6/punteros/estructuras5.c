/*			estructuras5.c 
estructuras5.c es un programa que permite el manejo 
e inicializacion de una estructura de datos. */
#include<stdio.h>

struct Estudiante{
	char nombre[50]; 
	int edad; 
	float promedio; 
}; 


int main(){

struct Estudiante e1 = {"Ana", 20, 8.5}; 

printf("Nombre %s\n", e1. nombre);
printf("Edad: %d\n", e1.edad); 
printf("Promedio: %f\n", e1.promedio); 

return 0; 
}
