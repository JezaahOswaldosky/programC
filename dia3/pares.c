/*			pares.c 
pares.c es un programa que imprime los primeros 10 
numeros en secuencia. Este utiliza el operador modulo 
para determinar que numeros empiezan par para ser 
impreso. 

PSeucodigico: 
1. Se imprime el 0, por considerase par
2. Inicia ciclo siempre y el contador sea menor de 10 
3. cnt += 1 y cnt%2 
4. si el cnt%2 - 0 se imprime, si no, no se imprime*/

#include<stdio.h>

int main(){

int cnt = 0; 
 
while(cnt <= 10){	
	if(cnt%2 == 0){
		printf("\nImprime %d", cnt);
	}
	cnt++; 
}
return 0; 

}
