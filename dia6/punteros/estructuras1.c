/*		estructuras1.c 
estructuras1.c es un programa en C que permite el 
manejo de estructuras mediante punteros */
#include<stdio.h>

typedef struct{
	int edad; 
	float salario;
}Empleado; 

void actualizarEmpleado(Empleado *emp){
	emp->edad = 30; 
	emp->salario = 3500.50; 
}


int main(){

Empleado e1 = {25, 2500.75}; 

printf("Antes de actualizad: Edad = %d, Salario = %.2f\n", e1.edad, e1.salario); 

actualizarEmpleado(&e1); 

printf("Despues de actualizar: edad = %d, Salario = %.2f\n",e1.edad, e1.salario );

return 0; 
}
