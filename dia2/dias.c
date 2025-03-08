/*			dias.c 
dias.c es un programa que toma un numero del 1-7 y 
regresa su representacion en dia
Pseudocodig: 
1. Tomar dato del usuario
2. Comprar entre un selectror switch-case 
3. Imprime dia correspondiente*/

#include<stdio.h>

int dia; 

int main(){

printf("Selecciona un numero del 1-7 para representar el dia: \n"); 
scanf("%d", &dia); 

switch(dia){
	case 1: 
		printf("\nDomingo!!\n");
	break; 
	case 2: 
		printf("\nLunes!!\n");
	break; 
	case 3:
		printf("\nMartes!!\n");
	break; 
	case 4:
		printf("\nMiercoles!!\n");
	break; 
	case 5:
		printf("\nJueves!!\n");
	break; 
	case 6:
		printf("\nViernes!!\n");
	break; 
	case 7: 
		printf("\nSabado!!\n");
	break; 
	default: 
		printf("\nDato no identificado\n");

}

return 0; 
}

