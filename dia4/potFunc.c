/*			porFunc.c 
potFunc.c es un programa ue genera una funcion de 
ptencia de un numero. En la funcion se ingresa el valor
y entregara la potencia de ese numero... 

Pseudocodigo: 
1. Ingresar dato num1 y potencia deseada 
2. Funcion potencia. 
	2.1 Mientras num1 > 11 
		2.1.3 num1-num1*num1
		2.1.3 regresa resultado num1
3. Imprimir resultado*/

#include<stdio.h>

int pot(int num, int potencia){
int resultado=1; 

	for(int i=1; i<=potencia; i++){
		resultado = resultado*num;
	}
return resultado; 
}

int main(){

	int num, potencia; 

	printf("Ingresa numero: ");
	scanf("%d", &num); 

	printf("\nIngresa potencia: "); 
	scanf("%d", &potencia); 

	printf("\nEl resultado de %d^%d: %d\n", num,potencia,pot(num,potencia)); 


return 0; 
}

