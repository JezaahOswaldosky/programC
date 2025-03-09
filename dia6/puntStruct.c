#include<stdio.h> 

struct Persona{
	char nombre[50]; 
	int edad; 
};

int main(){

struct Persona p1 = {"Juan", 30}; 
struct Persona *p = &p1; 

printf("Nombre; %s", p->nombre); 	// Juan 
printf("\nEdad: %d", p->edad); 		// 30 

return 0; 
}
