/*			estructuras11_1.c
estructuras11_1.c es u programa codificado en C que 
tiene el manjo de la estructura Fecha dentro de la 
estrucutura Evento cuyos miembros son nombre y fecha*/
#include<stdio.h>

struct Fecha{
	int dia; 
	char mes[10];
	int anio; 
};

struct Lugar{
	char calle[50]; 
	char colonia[50]; 
	int numero; 
	int codPostal; 
};

struct Evento{
	char nomEvento[50]; 
	struct Fecha fecha; 
	int numInvitados; 
	struct Lugar lugar; 
	char notas[150];
};


int main(){
// Declarar el envento con datos inciales 
struct Evento ev1 = {"Despedida de Soltera de la Melany", {21, "Marzo", 2025}, 15, {"Calle Mcclays", "Revolucion", 18954, 22210}, "Viejas, dejense venir sin decirle a sus maridos pinches perras!!!"};

// Imprir datos del dichoso evento lujurioso... 
printf("\nEvento %s", ev1.nomEvento); 
printf("\nFecha: %d de %s de %d", ev1.fecha.dia, ev1.fecha.mes, ev1.fecha.anio); 
printf("\nNumero de Invitados: %d", ev1.numInvitados); 
printf("\nDireccion: Calle %s, Col. %s, Num. %d, C.P %d", ev1.lugar.calle, ev1.lugar.colonia, ev1.lugar.numero, ev1.lugar.codPostal); 
printf("\nNotas: %s", ev1.notas); 

return 0; 
}
