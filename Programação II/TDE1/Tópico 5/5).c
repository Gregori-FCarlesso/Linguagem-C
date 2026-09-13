#include <stdio.h>

int main(){

    int M[3][3], i, j, maior, menor, menorcoluna, menorlinha, maiorcoluna, maiorlinha;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da posicao [%d][%d]: ",i,j);
            scanf("%d",&M[i][j]);

            if(i==0 && j==0){
                maior = M[i][j];
                menor = M[i][j];
                menorcoluna = j;
                menorlinha = i;
                maiorcoluna = j;
                maiorlinha = i;
            }

            if(M[i][j]>maior){
                maior = M[i][j];
                maiorcoluna = j;
                maiorlinha = i;
            }

            if(M[i][j]<menor){
                menor = M[i][j];
                menorcoluna = j;
                menorlinha = i;
            }
        }
    }

    printf("\nMaior valor: %d -> posicao[%d][%d]",maior,maiorlinha,maiorcoluna);
    printf("\nMenor valor: %d -> posicao[%d][%d]",menor,menorlinha,menorcoluna);

    return 0;
}