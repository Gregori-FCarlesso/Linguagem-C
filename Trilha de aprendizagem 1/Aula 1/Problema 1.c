#include <stdio.h>

int main(){
	int kmini, kmfim, horaini, minuini, segini, horafim, minufim, segfim, total, horas, minutos, segundos;
	float velocidade;
	
	printf("Digite o km inicial: ");
	scanf("%d", &kmini);
	printf("Digite o km final: ");
	scanf("%d", &kmfim);
	printf("Horario inicio (HH:MM:SS): ");
	scanf("%d:%d:%d", &horaini, &minuini, &segini);
	printf("Horario final (HH:MM:SS): ");
	scanf("%d:%d:%d", &horafim, &minufim, &segfim);
	
	total = (horafim*3600+minufim*60+segfim) - (horaini*3600+minuini*60+segini);
    velocidade = (kmfim - kmini) / (total/3600);
    
	horas = total/3600;
    total = total%3600;
    minutos = total/60;
    segundos = total%60;
	
	printf("Velocidade media: %.2f\n", velocidade);
	printf("Tempo de percorrido: %02d:%02d:%02d", horas, minutos, segundos);
}
