#include <stdio.h>

int calculofatorial(int numero)
{
    int fatorial=1, n;
    for(n=1;n<=numero;n++)
    {
        fatorial = fatorial * n;
    }

    return fatorial;
}

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    printf("\nFatorial do numero: %d",calculofatorial(numero));
}