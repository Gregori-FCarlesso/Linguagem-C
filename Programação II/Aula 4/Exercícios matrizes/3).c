#include <stdio.h>

int main(){

    int M[3][3], i, j, encontrou=0;

    printf("Digite os valores da matriz:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&M[i][j]);
        }
    }

    if ( M[0][0]!=0 && M[0][0]==M[1][1] && M[1][1]==M[2][2]){
        printf("Alinhamento na diagonal principal!\n");
        encontrou = 1;
    }
    if (M[0][2]!=0 && M[0][2]==M[1][1] && M[1][1]==M[2][0]){
        printf("Alinhamento na diagonal secundaria!\n");
        encontrou = 1;
    }

    if (M[0][0]!=0 && M[0][0]==M[0][1] && M[0][1]==M[0][2]){
        printf("Alinhamento na primeira linha!\n");
        encontrou = 1;
    }

    if (M[1][0]!=0 && M[1][0]==M[1][1] && M[1][1]==M[1][2]){
        printf("Alinhamento na segunda linha!\n");
        encontrou = 1;
    }
    
    if (M[2][0]!=0 && M[2][0]==M[2][1] && M[2][1]==M[2][2]){
        printf("Alinhamento na terceira linha!\n");
        encontrou = 1;
    }

    if (M[0][0]!=0 && M[0][0]==M[1][0] && M[1][0]==M[2][0]){
        printf("Alinhamento na primeira coluna!\n");
        encontrou = 1;
    }
    
    if (M[0][1]!=0 && M[0][1]==M[1][1] && M[1][1]==M[2][1]){
        printf("Alinhamento na segunda coluna!\n");
        encontrou = 1;
    }

    if (M[0][2]!=0 && M[0][2]==M[1][2] && M[1][2]==M[2][2]){
        printf("Alinhamento na terceira coluna!\n");
        encontrou = 1;
    }

    if (encontrou==0)
        printf("Nao existem alinhamentos!\n");

    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%5d",M[i][j]);
        }
        printf("\n");
    }
}