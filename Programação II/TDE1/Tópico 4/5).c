#include <stdio.h>

int main(){

    int V[10], busca, meio, inicio, fim, posicao, encontrou=0;

    V[0]=2; V[1]=3; V[2]=4; V[3]=5; V[4]=6; V[5]=7; V[6]=8; V[7]=9; V[8]=10; V[9]=11;

    printf("Digite o valor para buscar: ");
    scanf("%d",&busca);
    
    inicio = 0;
    fim = 9;
    while(inicio<=fim){
        meio = (inicio+fim)/2;

        if(V[meio]==busca){
            posicao=meio;
            encontrou=1;
            break;
        }
        else if(busca>V[meio])
            inicio = meio+1;
        else
            fim = meio-1;
    }

    if(encontrou==1)
        printf("\nEsse valor esta na posicao %d!\n",posicao+1);
    else
        printf("\nNao tem esse valor no vetor!\n");

    return 0;
}