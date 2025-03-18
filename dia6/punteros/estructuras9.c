/*			estructuras9.c 
estructuras9.c es un programa que maneja estructuras y 
arreglos para un sistema de peliculas que contiene los 
miembros Titulo, Genero y Anio... */

#include<stdio.h> 

struct Pelicula{
	char Titulo[25]; 
	char Genero[25]; 
	int anio;
};

int main(){

struct Pelicula peli[3] = {
	{"X-men Origenes", "Accion", 2003},
	{"John Wick", "Accion", 2015},
	{"La naranja mecanica", "Thriller", 1974}
};

for(int i =  0; i < 3; i++){
	printf("\n+--------------------------------------------+");
	printf("\nDatos de la Pelicula:\nPelicula: %s\nGenero: %s\nAnio: %d", peli[i].Titulo, peli[i].Genero,peli[i].anio);
}

return 0; 
}
