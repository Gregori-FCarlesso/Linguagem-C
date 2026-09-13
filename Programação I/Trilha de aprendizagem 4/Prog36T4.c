#include <stdio.h>

int main()
{
    int idx,numero,vetor[5];
    int consulta,posicao;

    printf("Programa de consulta de vetor\n");
    printf("Digite os valores:\n\n");

    for(idx=0;idx<5;idx++)
    {
        printf("Posicao %d: ",idx+1);
        scanf("%d",&numero);
        vetor[idx]=numero;
    }
    
    printf("\nVetor: [ ");
    for(idx=0;idx<5;idx++)
    {
        printf("%2d ",vetor[idx]);
    }
    printf("]\n");

    printf("  Idx: [ ");
    for(idx=0;idx<5;idx++)
    {
        printf("%2d ",idx);
    }
    printf("]\n");

    printf("\nAlguma consulta de dado (0=NAO)? ");
    scanf("%d",&consulta);

    while(consulta!=0)
    {
        printf("\nQual posicao quer consultar? ");
        scanf("%d",&posicao);

        while(posicao<1 || posicao>5)
        {
            printf("Verificar intervalo correto... Qual posicao? ");
            scanf("%d",&posicao);
        }
        printf("Valor da posicao %d: %d\n",posicao,vetor[posicao-1]);

        printf("\nAlguma outra consulta de dado (0=NAO)? ");
        scanf("%d",&consulta);

    }
}