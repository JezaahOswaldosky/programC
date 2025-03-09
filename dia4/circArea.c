/*			circArea.c
circArea.c es un programa que tiene una funcion para 
determinar el area de un circulo*/

#include<stdio.h>

#define pi 3.1415

float areaCirc(float radio){
	return 2*pi*radio*radio;

}

int main(){
float radio, area; 

printf("Radio: \n"); 
scanf("%f", &radio); 

area = areaCirc(radio); 

printf("\nEl area del circulo de radio %f es %f", radio, area); 

return 0; 

}
