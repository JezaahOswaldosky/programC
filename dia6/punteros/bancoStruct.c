/*			bancoStruct.c 
bancoStruct.c es un programa que permite manipular datos 
mediante estructuras y punteros como el Titular de la Cuenta
y el Saldo que cuenta disponible... */

#include<stdio.h> 

struct cuentaBancaria{
	char titular[50]; 
	float saldo; 
};

/// Funcion para depositar dinero 
void depositar(struct cuentaBancaria* cuenta, float cantidad){
	cuenta->saldo += cantidad; 
	printf("Depositado: %.2f\n", cantidad); 
	printf("Nuevo saldo: %.2f\n\a", cuenta->saldo); 
}

/// funcion para retirar dinero 
void retirar(struct cuentaBancaria* cuenta, float cantidad){
	if(cantidad > cuenta->saldo){
		printf("Fondos insuficientes\n");
	}else{
		cuenta->saldo -= cantidad; 
		printf("Retirado: %.2f\n", cantidad); 
		printf("Nuevo saldo: %.2f\n\a", cuenta->saldo);
	}
}

/// funcion para mostrar informacion de la cuenta
void mostrarCuenta(struct cuentaBancaria cuenta){
	printf("Titular: %s\n", cuenta.titular); 
	printf("Saldo: %.2f\n\a", cuenta.saldo); 
}

int main(){
	struct cuentaBancaria cuenta1 = {"Carlos", 1000.50};

	/// Mostrar informacion inicial 
	mostrarCuenta(cuenta1); 

	/// Realizar operaciones 
	depositar(&cuenta1, 200.75); 
	retirar(&cuenta1, 300.00); 
	retirar(&cuenta1, 2000.00); 

return 0; 
}
