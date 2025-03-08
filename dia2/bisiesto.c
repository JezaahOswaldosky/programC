/*			bisiesto.c
bisiesto.c es un programa que determina si un anio
introducido por el usuario es bisiesto
Pseudocodigo: 
1. Recibir anio por el usuario 
2. Dividir num%4 para comaprar 
3. Compara si el modilo es cero, entonces es bisiesto 
4. Imprimir resultado en pantalla*/

#include<stdio.h>
#include<math.h>

int main(){
int anio; 

//	Pedir anio al usuario 
printf("Anio: \n"); 
scanf("%d", &anio); 

//Comparar 
if(anio%4 == 0){
	printf("\nEl anio %d es bisiesto!!!\n", anio);
}else{

	printf("\nEl anio %d no es bisiesto!!!\n", anio); 
}

return 0; 
}
