#include <stdio.h>

int main(){

    int M[5][5], i, j;

    printf("Digite 0 ou 1: ");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            do{
                scanf("%d",&M[i][j]);

                if(M[i][j]!=0 && M[i][j]!=1)
                    printf("Valores invalidos!\n");

            } while(M[i][j]!=0 && M[i][j]!=1);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(M[i][j]==0)
                printf("X  ");
            else
                printf("O  ");
        }
        printf("\n");
    }
}
