#include <stdio.h>

int main(){
	
	float fahrenheit, celsius;
	
	printf("Digite a temperatura em fahrenheit:\n");
	scanf("%f", &fahrenheit);
	printf("Qual a referencia de temperatura em celsius?\n");
	scanf("%f", &celsius);
	
	fahrenheit=5.0*(fahrenheit-32.0)/9.0;
	printf("Temperatura = %.2f graus celsius\n", fahrenheit);
	
	if(fahrenheit==celsius){
		printf("Temperatura de acordo com o indice de referencia.");
	}
	else{
		printf("Alerta: temperatura fora do indice de referencia!\n");
        printf("Executar o procedimento de regulagem de temperatura.");
	}
	
}
