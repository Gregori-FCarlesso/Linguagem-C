#include <stdio.h>

int main()
{
    int idx,numero,vetor[5];
    int alteracao,valor,posicao;

    printf("Programa de manipulacao de vetor\n");
    printf("Digite os valores:\n\n");

    for(idx=0;idx<5;idx++)
    {
        printf("Posicao %d: ",idx+1);
        scanf("%d",&numero);
        vetor[idx]=numero;
    }
    
    printf("\nVetor: [ ");
    for(idx=0;idx<5;idx++)
        printf("%2d ",vetor[idx]);
    printf("]\n");

    printf("  Idx: [ ");
    for(idx=0;idx<5;idx++)
        printf("%2d ",idx);
    printf("]\n\n");

    printf("Alguma alteracao de valor? ");
    scanf("%d",&alteracao);

    while(alteracao!=0)
    {
        printf("Qual posicao (1 a 5? ");
        scanf("%d",&posicao);
        while(posicao<1 || posicao>5)
        {
            printf("Verifique o intervalo das posicoes...\n");
            printf("Qual posicao (1 a 5? ");
            scanf("%d",&posicao);
        }
        printf("Qual valor? ");
        scanf("%d",&valor);
        vetor[posicao-1]=valor;

        printf("\nVetor: [ ");
        for(idx=0;idx<5;idx++)
            printf("%2d ",vetor[idx]);
        printf("]\n");

        printf("  Idx: [ ");
        for(idx=0;idx<5;idx++)
            printf("%2d ",idx);
        printf("]\n\n");

        printf("Mais alguma alteracao de valor? ");
        scanf("%d",&alteracao);
    }
}