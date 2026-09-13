#include <stdio.h>

int main(){
	
	int taxad,dias,km,desconto;
	float descontot,valorkm,valorkmtotal,total,totaldiariasd,totaldiariacd;
	
	printf("Digite a quantidade de dias que o carro foi usado:\n");
	scanf("%d", &dias);
	printf("Digite a quantidade de km rodados durante o contrato:\n");
	scanf("%d", &km);
	printf("Digite o preco da taxa diaria:\n");
	scanf("%d", &taxad);
	printf("Digite o percentual de desconto aplicado:\n");
	scanf("%d", &desconto);
	printf("Digite o valor por km rodado:\n");
	scanf("%f", &valorkm);
	
	
	descontot = (dias*taxad) * (desconto/100.0);
	totaldiariasd = ((float)dias*taxad);
	totaldiariacd = ((float)dias*taxad) - descontot;
	valorkmtotal = km * valorkm;
	
	total = totaldiariacd + valorkmtotal;
	
	printf("\nExtrato de Locacao\n");
	printf("Quantidade de dias: %d\n", dias);
	printf("Valor total das diarias (sem desconto): %.2f\n",totaldiariasd);
	printf("Desconto aplicado: %.2f (%d%%)\n", descontot,desconto);
	printf("KM rodados: %dkm (R$%.2f por km) \n", km,valorkm);
	printf("Valor Total do Aluguel = R$%.2f\n", total);
	
}
