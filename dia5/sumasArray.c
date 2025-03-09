/*			sumasArray.c
sumasArray.c es un programa que toma os numeros de 
usuario y se almacena en u arreglo para finalizar 
sumarlo. 
Pseudocodigo: 
1. Toma dato a[0]
2. toma dato a[1]
3. Guarda suma de a[0]+a[1]
4. Imprimir resultado*/

#include<stdio.h>

int main(){
int a[3]; 
printf("dato a[0]: "); 
scanf("%d", &a[0]); 

printf("\ndato a[1]: "); 
scanf("%d", &a[1]);

a[2] = a[0]+a[1]; 

printf("\n a[0]+a[1]=%d", a[2]);

return 0; 
}
