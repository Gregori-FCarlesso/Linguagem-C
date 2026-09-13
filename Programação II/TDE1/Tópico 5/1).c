#include <stdio.h>

int main(){

    int M[3][3], i, j, encontrou=0, busca, linha, coluna;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da posicao [%d][%d]: ",i,j);
            scanf("%d",&M[i][j]);
        }
    }

    printf("\nDigite um valor para ser buscado: ");
    scanf("%d",&busca);

    for(i=0;i<3 && encontrou==0;i++){
        for(j=0;j<3;j++){
            if(busca==M[i][j]){
                encontrou = 1;
                linha = i;
                coluna = j;
                break;
            }
        }
    }

    if(encontrou==1)
        printf("\nEsse valor esta na posicao [%d][%d]\n",linha,coluna);
    else
        printf("\nValor nao encontrado!\n");

    return 0;
}