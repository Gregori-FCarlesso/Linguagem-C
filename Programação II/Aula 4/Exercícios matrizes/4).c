#include <stdio.h>

int main(){

    float M[7][4], media[7], soma;
    int i, j;

    printf("Digite as 4 temperaturas dos 7 dias: \n");

    for(i=0;i<7;i++){
        for(j=0;j<4;j++){
            scanf("%f",&M[i][j]);
        }
    }

    for(i=0;i<7;i++){
        soma = 0;
        for(j=0;j<4;j++){
            soma += M[i][j];
        }
        media[i] = soma/4.0;
    }

    for(i=0;i<7;i++){
        for(j=0;j<4;j++){
            printf("%10.2f",M[i][j]);
        }
        printf("\n");
    }

    printf("\nMedia diarias: ");
    for(i=0;i<7;i++){
        printf("%.2f, ", media[i]);
    }
    printf("\n");
}