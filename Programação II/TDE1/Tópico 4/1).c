#include <stdio.h>

int main(){

    int vet[10], chave, i, encontrado=0;

    printf("Digite 10 valores:\n");

    for(i=0;i<10;i++){
        printf("Valor %d: ",i+1);
        scanf("%d",&vet[i]);
    }

    printf("\nVetor = [");
    for(i=0;i<10;i++){
        printf("%3d ",vet[i]);
    }
    printf("]\n");

    printf("\nQual valor quer buscar? ");
    scanf("%d",&chave);

    for(i=0;i<10;i++){
        if(chave==vet[i]){
            printf("\nO valor %d esta no indice %d!",vet[i],i);
            encontrado=1;
        }
    }

    if(encontrado==0)
        printf("\nNao foi encontrado esse valor no vetor!\n");

    return 0;
}