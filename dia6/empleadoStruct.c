/*			empleadoStruct.c 
empleadoStruct.c es un programa que maneja datos de un 
empleado mediante estructuras, tales como Nombre, Apellido, 
Puesto, Salario, Departamento y Supervisor Inmediato*/

#include<stdio.h>

struct Area{
	char jefeInmediato[30]; 
	char Departamento[30]; 
};

struct Empleado{
	char Nombre[30]; 
	char Apellido[30];
	char Puesto[15]; 
	struct Area area; 
	float Salario; 
};

int main(){
// Inicializar la estructura 
struct Empleado emp = {"Jose Alfonso", "Medrado Aguirre", "Montacarguista", {"Ing.Guillermo Fonseca", "Almacen"}, 2400.00};

printf("+++++ INFORMACION DEL EMPLEADO +++++\n"); 
printf("Nombre: %s\n", emp.Nombre);
printf("Apellido: %s\n", emp.Apellido); 
printf("Puesto: %s\n", emp.Puesto); 
printf("Salario: %.2f\n", emp.Salario);
printf("Departamento: %s\n", emp.area.Departamento);
printf("Jefe Inmediato: %s\n", emp.area.jefeInmediato);
printf("++++++++++++++++++++++++++++++++++++\n\a");

return 0; 
}
