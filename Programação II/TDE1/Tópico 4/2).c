#include <stdio.h>

int main(){

    float vet[6], aux;
    int i, j, ordenado=0;

    printf("Digite 6 valores para serem ordenados:\n");
    for(i=0;i<6;i++){
        printf("Valor %d: ",i+1);
        scanf("%f",&vet[i]);
    }

    printf("\nVetor = [ ");
    for(i=0;i<6;i++){
        printf("%3f ",vet[i]);
    }
    printf("]\n");

    for(i=0; i<5 && ordenado==0 ;i++){
        ordenado = 1;
        for(j=0;j<5-i;j++){
            if(vet[j]>vet[j+1]){
                aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
                ordenado = 0;
            }
        }
    }

    printf("\nVetor ordenado = [ ");
    for(i=0;i<6;i++){
        printf("%3.2f ",vet[i]);
    }
    printf("]\n");

    return 0;
}