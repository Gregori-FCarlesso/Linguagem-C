#include <stdio.h>

int main()
{
    int idx,numero,vetor[5];
    int pesquisa,valor,achou;

    printf("Programa de procura de um valor\n");
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

     printf("\nPesquisar Dados no Vetor\n");
    printf("Alguma pesquisa [0 para NAO]? ");
    scanf("%d",&pesquisa);

    while(pesquisa!=0)
    {
        printf("\nQual valor que quer pesquisar? ");
        scanf("%d",&valor);

        achou=0;
        for(idx=0;idx<5;idx++)
        {
            if(valor==vetor[idx])
            {
                achou=1;
                printf("> Na posicao: %d\n",idx+1);
            }
        }
        if(achou==0)
            printf("Valor %d > NAO esta no vetor.\n",valor);

        printf("\nAlguma outra pesquisa de valor (0=NAO)? ");
        scanf("%d",&pesquisa);
    }
}