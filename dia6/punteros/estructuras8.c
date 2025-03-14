/*			estructuras8.c 
estructuras8.c es un programa que maneja estructuras 
y punteros para un empleado con los miembros nombre, 
edad y salario*/
#include<stdio.h> 

struct Empleado{
	char nombre[25]; 
	int edad; 
	float salario;
};

int main(){

struct Empleado esc1 = {"Armando Medina", 34, 4500.00};
struct Empleado *ptr = &esc1;


printf("+++Datos del empleado+++\n");
printf("Nombre: %s\nEdad: %d\nSaladio: %.2f", ptr->nombre, ptr->edad, ptr->salario); 

return 0; 
}
