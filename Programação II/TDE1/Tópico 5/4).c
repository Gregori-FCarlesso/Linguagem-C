#include <stdio.h>

int main(){

    int M[3][2], N[2][3], i, j;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor da posicao [%d][%d]: ",i,j);
            scanf("%d",&M[i][j]);

            N[j][i] = M[i][j];
        }
    }

    printf("\nResultado\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%4d ",N[i][j]);
        }
        printf("\n");
    }

    return 0;
}