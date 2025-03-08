/*			calc.c
calc.c es un programa que permite operaciones aritmeticas
impartidas por el usuario. El usuario introduce 2 
numeros y la opcion a operar. Y finalmente el programa 
otorga el resultado en pantalla. 
Pseudocodigo: 
1. Usuario introduce dato num1 y num2 
2. Usuario introduce la opcion de operacion 
3. Se realiza la operacion 
4. Imprime el resultado */

#include<stdio.h>

float num1, num2; 
int opc; 

int main(){
// 	Mensaje de bienvenida 
printf("Bienvenido a Calc.c\n"); 
///	Capturar datos del usuario 
printf("\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n"); 
printf("\nNumero 1: "); 
scanf("%f",&num1 ); 

printf("\nNumero 2: "); 
scanf("%f",&num2 ); 

//  	Capturar dato de operacion 
printf("\nOperacion: "); 
scanf("%d",&opc ); 


//	Flujo de operacion 
switch(opc){
	case 1:
		printf("\nLa suma de %f+%f=%f\n", num1, num2, num1+num2); 
	break; 
	case 2: 
		printf("\nLa suma de %f-%f=%f\n", num1, num2, num1-num2); 
	break; 
	case 3: 
		printf("\nLa suma de %f*%f=%f\n", num1, num2, num1*num2); 
	break;
	case 4: 
		printf("\nLa suma de %f/%f=%f\n", num1, num2, num1/num2); 
	break; 
	default: 
		printf("\nEsa opcion no se encuentra!!!\n");
	break; 
}



return 0; 
}

