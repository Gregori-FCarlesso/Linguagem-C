#include <stdio.h>

float calculoimc(float peso, float altura)
{
    float imc = peso / ((altura)*(altura));

    return imc;
}

int main()
{
    float peso, altura;

    printf("Digite seu peso: ");
    scanf("%f",&peso);

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    printf("\nIMC: %.2f",calculoimc(peso,altura));
}