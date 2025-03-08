/*			posngcmp/c
posnegcmp.c es un codigo que detecta si un numero 
introducido por el usuario es positivo, negativo o 
cero. 
Pseudocodigo: 
1. Recibir dato del usuario 
2. Comapra si es mayor, menor o cero 
3. Entrega el resutlado en pantalla*/

#include<stdio.h>

int num; 

int main(){

//	Introducir dato a comaprar
printf("Introducir numero a comparar: "); 
scanf("%d", &num); 

//	Procesos de comparacion 
if(num > 0){
	printf("\n Es positivo!!\n");
}else if(num < 0) {
	printf("\nEs negativo!!\n");
}else if(num == 0){
	printf("\nEl numero es cero!!\n"); 
}else{
	printf("\nEl dato no es compatible!!!\n");
}

return 0; 
}
