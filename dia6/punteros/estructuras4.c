/*			estructuras4.c 
estructuras4.c es un programa que maneja y declara 
una estructura Libro que contiene los miembros 
titulo, autor, precio... */

#include<stdio.h>

struct Libro{
	char Titulo[50]; 
	char Autor[50]; 
	float precio; 
	int anioPub; 
};


int main(){

struct Libro lib1 = {"Don Quijote de la Mancha", "Cervantes, Miguel", 1200.00, 1605};

// Imprimir datos del libro 
printf("Titulo: %s\nAutor: %s\nAnio: %d\nPrecio: $%.2f",lib1.Titulo, lib1.Autor, lib1.anioPub, lib1.precio);

return 0; 
}
