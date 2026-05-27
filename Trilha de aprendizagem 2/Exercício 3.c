#include <stdio.h>

int main(){
	
	float peso, altura, imc;
	
	printf("Digite seu peso (kg):\n");
	scanf("%f", &peso);
	printf("Digite sua altura (m):\n");
	scanf("%f", &altura);

    imc = peso/(altura*altura);
    printf("IMC = %.2f\n", imc);
    
    if(imc>=18.5 && imc<25.0){
    	printf("Peso normal.");
	}
	else if(imc<18.5){
		printf("Peso abaixo do normal.");
	}
	else{
		printf("Peso acima do normal.");
	}
	}
	
	
