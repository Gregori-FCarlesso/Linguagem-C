#include <stdio.h>

int main()
{
	int horas,minutos,segundos;
	
	printf("Quantidade de segundos do evento universitario? ");
	scanf("%d",&segundos);
	
	horas = segundos/3600;
	segundos = segundos%3600;
	minutos = segundos/60;
	segundos = segundos%60;
	
	printf("\n%02d:%02d:%02d",horas,minutos,segundos);

	return 0;
}
