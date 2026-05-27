#include <stdio.h>

int main(){
	
	int hentrada,mentrada,hsaida,msaida,horas,minutos,hexcedente,hexcedentemetade;
	float tarifafixa,tarifaex,total;
	
	printf("Digite o horario de entrada: ");
	scanf("%d:%d",&hentrada,&mentrada);
	printf("Digite o horario de saida: ");
	scanf("%d:%d",&hsaida,&msaida);
	
	printf("Digite a tarifa fixa (em reais): ");
	scanf("%f",&tarifafixa);
	printf("Digite o valor por hora excedente (em reais): ");
	scanf("%f",&tarifaex);
	
	minutos = (hsaida*60+msaida)-(hentrada*60+mentrada);
	horas = minutos/60;
	minutos = minutos%60;
	hexcedente=0;
	hexcedentemetade=0;
	
	if(horas<=2){
	}
	else if(horas<=4){
		hexcedente = horas-2;
	}
	else{
		hexcedente = 2;
		hexcedentemetade = horas-4;
	}
	
	total = tarifafixa+(hexcedente*tarifaex)+(hexcedentemetade*(tarifaex/2));

	printf("\nPagamento de Estacionamento\n");
	printf("Horario de entrada: %02d:%02d\n",hentrada,mentrada);
	printf("Horario de saida: %02d:%02d\n",hsaida,msaida);
	printf("Tempo de permanencia: %02d:%02d\n",horas,minutos);
	printf("Valores = R$%.2f (ate 2 horas)\n",tarifafixa);
	printf("+ R$%.2f (por hora excedente)\n",tarifaex);
	printf("Valor Total = R$%.2f",total);
	
}
