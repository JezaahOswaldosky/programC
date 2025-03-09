#include<stdio.h> 
#include<stdlib.h>

int main(){

int *arr; 
int n = 5; 

//	Asignas memoria para un arreglo de 5 enteros 
arr = (int *)malloc(n*sizeof(int)); 

if(arr == NULL){
	printf("No se pudo asignar memoria\n"); 
	return 1; 
}

//	Inicializar y mostrar valores 
for(int i = 0; i < n; i++){
	arr[i] = i + 1; 
	printf("\narr[%d] = %d", arr[i]); 
}

///	Liberar memoria asignada 
free(arr);

return 0; 
}
