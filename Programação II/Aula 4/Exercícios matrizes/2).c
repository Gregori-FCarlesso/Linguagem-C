#include <stdio.h>

int main(){

    int M[10][4], i, j, m;

    printf("Digite um numero multiplicador: ");
    scanf("%d", &m);

    M[0][0] = 1; M[0][1] = 2; M[0][2] = 3; M[0][3] = 4;
    
    for(i=1;i<10;i++){
        for(j=0;j<4;j++){
            M[i][j] = M[i-1][j] * m;
        }
    }

    printf("\n");
    for(i=0;i<10;i++){
        for(j=0;j<4;j++){
           printf("%5d",M[i][j]);
        }
        printf("\n");
    }

    return 0;
}