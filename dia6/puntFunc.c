#include<stdio.h>

void modificarValor(int *p){
	*p = 20; 
}


int main(){

int a = 10; 

printf("Valor de a antes: %d", a); 	//10
modificarValor(&a); 	
printf("\nValor de a despues: %d", a); 	// 20 

return 0; 
}

