#include <stdio.h>

int calculodivisores(int numero)
{
    int divisores=0,n;

    for(n=1;n<=numero;n++)
    {
        if(numero%n==0)
            divisores++;
    }
    return divisores;
}

int main()
{
    int numero;

    do {

    printf("Digite um numero positivo: ");
    scanf("%d",&numero);

    if(numero <= 0)
        printf("O numero precisa ser positivo!\n");

    } while(numero <= 0);

    printf("Quantidade de divisores: %d",calculodivisores(numero));
}