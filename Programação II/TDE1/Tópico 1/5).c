#include<stdio.h>

#define PI 3.14

int main(){
    float raio, area, comprimento;

    printf("Digite o raio da circunferencia: ");
    scanf("%f",&raio);

    area = PI * (raio * raio);
    comprimento = 2 * PI * raio;

    printf("\nArea: %.2f\n",area);
    printf("Comprimento: %.2f\n",comprimento);

    return 0;
}