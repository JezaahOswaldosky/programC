/*			estructuras2.c 
estructuras2.c es un programa que utiliza punteros a 
funciones para calcular el area de diferentes figuras 
geometricas*/
#include<stdio.h> 
#include<math.h>

typedef struct{
	double radio; 
}Circulo; 

typedef struct{
	double base; 
	double altura; 
}Rectangulo; 

// Funcion para calcular el circulo 
double areaCirculo(Circulo *c){
	return M_PI * c->radio * c-radio; 
}

// Funcion para calcular el rectangulo 
double areaRectangulo(Rectangulo *r){
	return r->base * r->altura; 
}

int main(){

Circulo c = {5.0}; 
Rectangulo = {4.0, 6.0}; 

// Punteros a funciones 

double (*ptrAreaCirculo)(Circulo *) = areaCirculo; 
double (*ptrAreaRectangulo)(Rectangulo *) = areaRectangulo; 

/// Imprimir resultados 
printf("\nArea del circulo: %.2f", ptrAreaCirculo(&c)); 
printf("\narae del Rectangulo: %.2f", ptrarearectangulo(&r));

return 0; 
}
