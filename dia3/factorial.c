/*			factorial.c 
factorial.c es un programa que toma un numero por el 
usuario y realiza la operacion factorial de dicho 
numero. 
Pseudocodigo: 
1. Recibir dato del usuario 
2. Iniciar dato dato = 1 
3. Entrar a ciclo dato > 1
	2.1 res = res*datp 
	2.2 dato -= 1 
	2.3 Imprimir res*/

#include<stdio.h>

int main(){
int dato, datoPrint; 
long res = 1; 

printf("Factorial de: \n"); 
scanf("%d", &dato); 

datoPrint = dato; 

while(dato > 1){
	res = res*dato; 
	//printf("### %d \n", dato);
	dato--;
}

printf("\nEl factorial de %d es %d\n", datoPrint, res); 

return 0; 

}
