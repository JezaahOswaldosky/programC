/*			estructuras6.c 
estructuras6.c es un programa que permite el manejo 
de estructuras con punteros mediante el operador ->*/
#include<stdio.h>

struct Producto{
	char nombre[50]; 
	float precio; 
};

int main(){
	struct Producto p1 = {"Laptop", 799.99}; 
	struct Producto *ptr = &p1; 

	printf("Nombre: %s\n", ptr->nombre); 
	printf("Precio: %.2f\n", ptr->precio);

return 0; 
}
