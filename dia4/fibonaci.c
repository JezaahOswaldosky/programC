/*			fibonaci.c 
fibonaci.c es un programa que imprime los primeros 
valores de la serie fibonaci... Utilizando recursion

Pseudocodigo: 
1. Pedir dato n al usuario 
2. Entrar a la funcion recursiva
	2.1 si n == 0
		2.1.1 regresa - 
	2.2 si n ==1 
		2.2.1 regresa 1
	2.3 si no 
		2.3.1 regresa fibonaci(n-1)+fibonaci(n-2)
3. Imprime datos*/

#include<stdio.h>

void fibonaci(int n){
	int a =0, b =1, c; 

	printf("\nLa serie de fibonaci hasta %d es: \n", n);
	for(int i = 0; i < n ; i++){
		printf("%d\n",a);
		c = a+b; 
		a = b; 
		b = c; 
	}
	printf("\n"); 

}


int main(){

int n; 

printf("Introduce n para determinar la serie de fibonaci: \n"); 
scanf("%d", &n); 

fibonaci(n);


return 0; 
}
