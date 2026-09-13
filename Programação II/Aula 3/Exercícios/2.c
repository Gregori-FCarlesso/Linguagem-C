#include <stdio.h>
void calculohorario(int totalsegundos)
{
	int horas = totalsegundos/3600;
	int minutos = (totalsegundos%3600)/60;
	int segundos = totalsegundos%60;
	printf("%02d:%02d:%02d",horas,minutos,segundos);
}

int main(){
	int tempo1 = 4763, tempo2 = 5648;
	
	printf("Teste 1 (%d segundos): ",tempo1);
	calculohorario(tempo1);
	
	printf("\nTeste 2 (%d segundos): ",tempo2);
	calculohorario(tempo2);
	
	return 0;
}
