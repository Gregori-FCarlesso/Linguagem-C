#include<stdio.h>
#include <string.h>

int soma(int numero1, int numero2)
{
    int soma = numero1 + numero2;
    return soma;
}

int subtrair(int numero1, int numero2)
{
    int subtrair = numero1 - numero2;
    return subtrair;
}

int multiplicar(int numero1, int numero2)
{
    int multiplicar = numero1 * numero2;
    return multiplicar;
}

float dividir(float numero1, float numero2)
{
    float dividir = numero1 / numero2;
    return dividir;
}

int main(){
    int numero1, numero2;
    char n[20];

    printf("Digite o numero 1: ");
    scanf("%d", &numero1);

    printf("Digite o numero 2: ");
    scanf("%d", &numero2);

    printf("Digite somar, subtrair, multiplicar, dividir: ");
    scanf("%s",n);

    if(strcmp(n,"somar")==0)
        printf("\nSoma: %d\n",soma(numero1, numero2));
    else if(strcmp(n,"subtrair")==0)
        printf("\nSubtracao: %d\n",subtrair(numero1, numero2));
    else if(strcmp(n,"multiplicar")==0)
        printf("\nMultiplicacao: %d\n",multiplicar(numero1, numero2));
    else if(strcmp(n,"dividir")==0)
    {
        if(numero2!=0)
            printf("\nDivisao: %.2f\n",dividir(numero1, numero2));
        else
            printf("\nNao existe divisao por zero!\n");
    }
    else
        printf("\nOpcao invalida!\n");
}