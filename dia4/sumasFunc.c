/*			sumasFunc.c 
sumasfunc.c es un programa funcional que entrega el 
resultado de la suma de dos numeros proporcionados por 
el usuario

Pseudocodigo: 
1. Capturar num1 y num2 
2. funcion suma(a,b)
	2.1 aplicar suma num1+num2
	2.2 retornar suma 
3. Imprimir resultado */

#include<stdio.h>

//Funcion sumas 
int sumas(int a, int b){
	return a+b; 
}

// funcion main 
int main(){

int a,b; 
printf("Ingresar num1: "); 
scanf("%d", &a); 

printf("Ingresar num2: "); 
scanf("%d", &b); 

printf("\nEl resultado %d + %d = %d", a,b, sumas(a,b));

return 0; 
}
