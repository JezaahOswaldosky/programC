/*			parImpar.c 
parImpar.c es unprogra ue toma un dato o numero por 
el usuario, y este se verificar si el numero es par 
o impar. 

Pseudocodigo: 
1. Tomar dato del usuario 
2. Comaprar numero si es par o impar 
3. Imprimir resultado*/

#include<stdio.h>

int numero; 

int main(){
printf("Numero: \a"); 
scanf("%d", &numero); 

if(numero % 2 == 0){
	printf("\nNumero par!!\n"); 
}else{
	printf("\nNumero impar!!\n"); 
}


}
