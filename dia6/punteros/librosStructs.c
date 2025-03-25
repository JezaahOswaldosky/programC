/*			librosStruct.c
librosStruct.c es un programa que maneja estructuras para 
guardar informacion de libros como Titulo, Autor y el Precio */

#include<stdio.h>

struct Libro{
	char Nombre[30]; 
	char Autor[30]; 
	float Precio; 
};

int main(){
// Inicializar estructura 
struct Libro libro = {"Don Quijote de la Mancha", "Miguel de  Cervantes", 1400.00};

//Imprimir datos de la estructura libro
printf("+++ DATOS DEL LIBRO +++\n");
printf("Titulo: %s", libro.Nombre); 
printf("\nAutor: %s", libro.Autor); 
printf("\nPrecio: $%.2f", libro.Precio);
printf("\n+++++++++++++++++++++\n");
return 0;

}
