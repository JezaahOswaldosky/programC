/*			cocheStruct.c 
socheStruct.c es un programa para una concecionaria donde 
se recupera la informacion de un automovil como Marca, Modelo
Anio de Fabricacion y tipo de Motor, donde el tipo de Motor
cuenta con los miembros Tipo de combustible y Potencia..*/

#include<stdio.h>
struct Transmision{
	char Trans[15]; 
};

struct Motor{
	char gasType[15]; 
	int Potencia; 	
};

struct Coche{
	char Marca[15]; 
	char Modelo[15]; 
	int  Anio; 
	struct Transmision transmision; 
	struct Motor motor; 
};

int main(){
// Declarar la estructura con variables 
struct Coche carro = {"Toyota", "Camry", 2014, {"Automatica"},{"Premium", 800}};

/// Mostrar informacion del carro 
printf("++++++ CONSECIONARIO RICKY RON +++++++\n"); 
printf("Marca: %s\n", carro.Marca); 
printf("Modelo: %s\n", carro.Modelo); 
printf("Anio: %d\n", carro.Anio); 
printf("Tipo de Transmision: %s\n", carro.transmision.Trans); 
printf("Tipo de gasolina: %s\n", carro.motor.gasType);
printf("Potencia: %d", carro.motor.Potencia);
printf("\n+++++++++++++++++++++++++++++++++++++\a");
return 0; 
}
