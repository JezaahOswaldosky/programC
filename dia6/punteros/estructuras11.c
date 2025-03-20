/*			estructuras11.c
estructuras11.c es un programa codificado en C que 
tiene el manejo de la estructura Fecha dentro de la 
estructura Evento cuyos miembros son nombre y Fecha*/

struct fecha{
	int dia; 
	char mes[10]; 
	int anio; 
};

struct lugar{
	char calle[50]; 
	char col[50];
	int numero;  
	int codPostal;
};

struct Evento{
	char nomEvento[50]; 
	struct fecha; 
	int numInvitados;
	struct lugar; 
	char notas[100]; 
};

int main(){

struct Evento ev1 = {"Despedida de Soltera de Melany", {21, "Marzo", 2025}, 15, {"Calle Mcclays","Revolucion",18954 , 22210}, "Viejas, dejense venir y sin decirse a sus esposos perras!!!"};

printf("Evento %s\n", ev1.nomEvento);
printf("Fecha: %d de %s de %d\n", ev1.fecha.dia, ev1.fecha.mes, ev1.fecha.anio);
printf("Numero de Invitados: %d\n", ev1.numInvitados);
printf("Direccion: %s , %s, #%d,C.P %d\n"ev1.lugar.calle,ev1.lugar.col, ev1.lugar.numero, ev1.lugar.codPostal);
printf("Notas: %s", ev1.notas);

return 0; 
}
