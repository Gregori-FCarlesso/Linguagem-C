#include <stdio.h>

int main()
{
    int idx,vetor[5];
     
    printf("\nManipulacao de um vetor\n");
    printf("Entrada de dados do vetor\n");

    for(idx=0;idx<5;idx++)
    {
        printf("Digite o valor do vetor: ");
        scanf("%d",&vetor[idx]);
        printf("\n> Valor (%d) armazenado na posicao %d e idx = %d\n\n",vetor[idx],idx+1,idx);
    }

    printf("Dados do codigo\n");
    for(idx=0;idx<5;idx++)
    {
        printf("\nPosicao %d com valor: %d (idx = %d)\n",idx+1,vetor[idx],idx);
    }
    
}