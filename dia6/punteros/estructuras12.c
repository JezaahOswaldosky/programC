/*			estructuras12.c
estructuras12.c es un programa que manipula estructuras 
pero con el manejo de funciones....*/
#include<stdio.h> 

struct Rectangulo{
	float base; 
	float altura; 
};

// Funcion para calcular el area de un rectangulo 
float calcArea(struct Rectangulo r){
	return r.base * r.altura; 
}

int main(){
struct Rectangulo rectangulo1 = {10.5, 5}; 

printf("Area del rectangulo: %.2f", calcArea(rectangulo1));

return 0; 
}
