/*			estructuras7.c 
estructuras.7 es un programa que maneja estructuras 
con arreglos...*/
#include<stdio.h>

struct Estudiante{
	char nombre[20];
	int edad; 
};

int main(){

struct Estudiante estudiantes[3] = {
	{"Pedro",21},
	{"Ana",22},
	{"Carlos",23}
};

for(int i = 0; i < 3; i++){
	printf("Estudiante %d: %s Edad: %d \n ", i+1, estudiantes[i].nombre, estudiantes[i].edad);
}

return 0; 
}
