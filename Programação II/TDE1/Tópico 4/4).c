#include <stdio.h>

int main(){

    int V[8], menor, maior, i, soma=0;
    float media;

    for(i=0;i<8;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&V[i]);

        if(i==0){
            maior=V[i];
            menor=V[i];
        }

        if(V[i]>maior)
            maior=V[i];
        
        if(V[i]<menor)
            menor=V[i];

        soma += V[i];
    }

    media = soma/8.0;

    printf("\nMaior valor: %d",maior);
    printf("\nMenor valor: %d",menor);
    printf("\nMedia: %.2f",media);

    return 0;
}