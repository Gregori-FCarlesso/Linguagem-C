#include <stdio.h>
#define N 5

typedef struct{
    char fileira;
    int poltrona;
    float preco;
    int ocupado;
} Ingresso;

float calcularFaturamentoSala(Ingresso sala[N]); // sala[N] = sala1[N] da main

int main(){
    int i;
    Ingresso sala1[N]; // sala1 é uma única sala, mas o "N" são os ingressos dentro dessa sala

    for(i=0;i<N;i++){
        printf("Qual fileira? ");
        scanf(" %c", &sala1[i].fileira);

        printf("Qual poltrona? ");
        scanf("%d", &sala1[i].poltrona);

        printf("Qual e o preco? ");
        scanf("%f", &sala1[i].preco);

        printf("Esta ocupado (NAO=0 SIM=1): ");
        scanf("%d", &sala1[i].ocupado);
    }
    
    printf("\nTotal de faturamento: %.2f \n", calcularFaturamentoSala(sala1));
    return 0;
}

float calcularFaturamentoSala(Ingresso sala[N]){
    int i;
    float soma=0;

    for(i=0;i<N;i++){
        if(sala[i].ocupado==1){
            soma += sala[i].preco;
        }
    }
    return soma;
}