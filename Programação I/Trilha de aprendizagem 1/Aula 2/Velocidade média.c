#include <stdio.h>

int main(){
	
	int hsaida, msaida, hchegada, mchegada, tempo, kminicial, kmfinal, distancia;
	float velocidade;
	float custoporlitro, litros, sobra, custoporkm, valor;
	
	printf("Calculo de Velocidade e Consumo\n\n");
	  
    printf("Km Inicial? ");
    scanf("%d",&kminicial);
    printf("Horario saida (HH:MM)? ");
    scanf("%d:%d",&hsaida,&msaida);
   
    printf("Litros de combustivel? ");
    scanf("%f",&litros);
    printf("Valor pago no abastecimento? ");
    scanf("%f",&valor);
   
    printf("\nKm Final? ");
    scanf("%d",&kmfinal);
    printf("Horario chegada (HH:MM)? ");
    scanf("%d:%d",&hchegada,&mchegada);
    
    printf("Quantos litros sobraram? ");
    scanf("%f",&sobra);
    
    distancia = kmfinal - kminicial;
    tempo = (hchegada*60+mchegada)-(hsaida*60+msaida);
    velocidade = (float)distancia/(float)(tempo/60.0);
	
	custoporlitro = valor / litros;
	litros = litros - sobra;
	custoporkm = (litros/distancia)*custoporlitro;
	
	printf("Velocidade: %.2f\n", velocidade);
    printf("Custo por km: %.2f", custoporkm);
   

}
