#include<stdio.h>

int main(){

int arr[3] = {1,2,3}; 
int *p = arr; 

printf("Elemento 0: %d",*(p+0));	// 1
printf("\nElemento 1: %d",*(p+1));	// 1
printf("\nElemento 2: %d",*(p+2));	// 1


return 0;
}
