/*			estructuras13.c 
estructuras13.c es un programa que maneja estructuras y 
punteros para el almacenamiento de la memoria...*/

#include<stdio.h>

struct Punto{
	int x; 
	int y; 
};

// funcion que utiliza el puntero a estructura
void moverPunto(struct Punto* p, int dx, int dy){
	p-> x += dx; 
	p-> y += dy; 
}

int main(){
	struct Punto punto1 = {5,10}; 

	printf("Punto inicial: (%d,%d)\n", punto1.x, punto1.y); 

	/// Llamamos a la funcion que modifica el punto. 
	moverPunto(&punto1,3,-2); 
	
	printf("Punto despues de moverlo: (%d,%d)\n", punto1.x, punto1.y);

return 0; 
}
