#include<stdio.h>

float converterdolar(float reais, float cotacao);

int main(){

    float reais, cotacao;

    printf("Digite o valor em reais: ");
    scanf("%f",&reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f",&cotacao);

    printf("\nValor convertido para dolar: %.2f\n", converterdolar(reais,cotacao));

    return 0;
}

float converterdolar(float reais, float cotacao){

    return reais/cotacao;
}