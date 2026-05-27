#include <stdio.h>

int main(){
	
	int horaini, minuini, segini, tempoprovas, horasp, minup, segp, finalprovaseg, distancia, horas, minutos, segundos, velocidade;
	
	printf("Digite o horario inicial:\n");
	scanf("%d:%d:%d", &horaini, &minuini, &segini);
	printf("Digite o tempo da prova em segundos:\n");
	scanf("%d", &tempoprovas);
	printf("Digite a distancia percorrida:\n");
	scanf("%d", &distancia);
	
	finalprovaseg = (horaini*3600+minuini*60+segini) + tempoprovas;
	
	horas = finalprovaseg/3600;
	finalprovaseg = finalprovaseg%3600;
	minutos = finalprovaseg/60;
	finalprovaseg = finalprovaseg%60;
	segundos = finalprovaseg;
	
	velocidade = distancia/(tempoprovas/60);
	
	horasp = tempoprovas/3600;
	tempoprovas = tempoprovas%3600;
	minup = tempoprovas/60;
	tempoprovas = tempoprovas%60;
	segp = tempoprovas;
	
	printf("Tempo de prova = %02d:%02d:%02d\n", horasp, minup, segp);
	printf("Velocidade media = %d m/min\n", velocidade);
	printf("Horario de chegada = %02d:%02d:%02d", horas, minutos, segundos);	
	
	
}
