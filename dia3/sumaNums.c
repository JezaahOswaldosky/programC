/*			sumaNums.c 
sumaNums.c es un programa donde el usuario 
introducira numeros para ser sumados hasta que se 
ingrese el numero 0 

PSeudocodigo: 
1. Numero ctrl = 1 
2. se ingresa numero por usuario 
3. se suma valor nuevo + valor viejo --> valor nuevo 
4. imprimir resultado 
5. repetir hasta ingresar 0*/

#include<stdio.h>

int main(){

int ctrl = 1; 
int numNew, numOld = 0; 

while(ctrl ==1){
	printf("\nIngrese numero:"); 
	scanf("%d", &numNew); 
	if(numNew != 0){
		numOld = numNew + numOld; 
	}else{
		ctrl = 0;
	}
	printf("\nResultado: %d", numOld); 
}
return 0; 
}
