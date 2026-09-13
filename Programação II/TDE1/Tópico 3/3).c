#include<stdio.h>

float desconto(float valor, float porcentagem);

int main(){
    float valor, porcentagem;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite a porcentagem do desconto: ");
    scanf("%f", &porcentagem);

    printf("\nValor com o desconto: %.2f\n",desconto(valor,porcentagem));
}

float desconto(float valor, float porcentagem){

    return valor - (valor * (porcentagem/100.0));
}