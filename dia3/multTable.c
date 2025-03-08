/*			multTable.c 
multtable.c es un programa que otorga la tabla de 
multiplicar de un numero seleccionado por el usuario 
hasta el numero tambien seleccionado por el usuario 

Pseudocodigo: 
1. Caoturar datos tabla y limite 
2. Crear ciclo for de tabla de multiplicar 
	2.1 Imprimir resultados */

#include<stdio.h>

int main(){
int num, limite; 

printf("Numero a multiplicar: "); 
scanf("%d", &num); 

printf("\nLimite de multiplicacion: ");
scanf("%d", &limite); 

for(int i = 0; i <= limite; i++){
	printf("\n%d x %d = %d", num, i, num*i); 

}

return 0;
}
