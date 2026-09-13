#include <stdio.h>

int main(){

    int A[2][2], B[2][2], C[2][2], i, j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor da posicao [%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor da posicao [%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);

            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatriz resultante:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%4d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}