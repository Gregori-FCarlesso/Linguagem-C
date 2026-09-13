#include <stdio.h>

int main(){

    int A[4], B[4], C[8], i, j, k;

    printf("Digite os valores ordenados do vetor A:\n");
    for(i=0;i<4;i++){
        printf("Valor %d: ",i+1);
        scanf("%d",&A[i]);
    }

    printf("Digite os valores ordenados do vetor B:\n");
    for(i=0;i<4;i++){
        printf("Valor %d: ",i+1);
        scanf("%d",&B[i]);
    }

    i=0;
    j=0;
    k=0;

   for(k=0;i<4 && j<4;k++){
        if(A[i]<B[j]){
            C[k] = A[i];
            i++;
        }
        else{
            C[k] = B[j];
            j++;
        }
    }

    for(;i<4;i++){
        C[k] = A[i];
        k++;
    }

    for(;j<4;j++){
        C[k] = B[j];
        k++;
    }

    printf("\nVetor ordenado: [ ");
    for(k=0;k<8;k++)
        printf("%3d ",C[k]);
    printf("]\n");

    return 0;
}