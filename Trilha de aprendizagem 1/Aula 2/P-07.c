#include <stdio.h>

int main(){
	
	int notas, reais, centavos;
	float valor;
	
	printf("Digite o valor total:\n");
	scanf("%f", &valor);
	
	reais = (int) valor;
	centavos = ((valor-reais)*100);
	printf("Reais = %d\n", reais);
	printf("Centavos = %d\n", centavos);
	
	notas = reais;
	notas = reais/100;
	printf("Quantidade de notas de 100: %d\n", notas);
	reais = reais%100;
	notas = reais/50;
	printf("Quantidade de notas de 50: %d\n", notas);
	reais = reais%50;
	notas = reais/20;
	printf("Quantidade de notas de 20: %d\n", notas);
	reais = reais%20;
	notas = reais/10;
	printf("Quantidade de notas de 10: %d\n", notas);
	reais = reais%10;
	notas = reais/5;
	printf("Quantidade de notas de 5: %d\n", notas);
	reais = reais%5;
	notas = reais/2;
	printf("Quantidade de notas de 2: %d\n", notas);
}
