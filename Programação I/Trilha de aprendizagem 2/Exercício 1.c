#include <stdio.h>

int main(){
	
	int kminicial, kmfinal, tempomin;
	float velocidade, limite;
	
	printf("Digite o km inicial:\n");
	scanf("%d", &kminicial);
	printf("Digite o km final:\n");
	scanf("%d", &kmfinal);
	printf("Digite tempo em minutos:\n");
	scanf("%d", &tempomin);
	printf("Digite o limite da via:\n");
	scanf("%f", &limite);
	
	velocidade = (kmfinal-kminicial)/(tempomin/60);
	
	if(velocidade>limite){
		printf("Velocidade do carro acima do limite da via: %.2f km/h", velocidade);
	}
	else{
		printf("Velocidade do carro dentro do limite da via: %.2f km/h", velocidade);
	}
}
