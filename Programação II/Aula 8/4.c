#include <stdio.h>

typedef struct{
    int id;
    float temperatura;
    char status;
} SensorTemp;

float calcularMediaAtivos(const SensorTemp sensores[], int n);

int main(){

    SensorTemp sensor[100];
    int i, n;

    printf("Digite quantos sensores serao cadastrados: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("--- SENSOR %d ---", i+1);
        printf("ID: ");
        scanf("%d",&sensor[i].id);
        printf("Temperatura: ");
        scanf("%f",&sensor[i].temperatura);
        printf("Status: ");
        scanf(" %c",&sensor[i].status);
    }

    printf("\nMedia dos sensores ativos: %.2f\n", calcularMediaAtivos(sensor, n));
    
    return 0;
}

float calcularMediaAtivos(const SensorTemp sensores[], int n){
    int i, n_ativos=0;
    float soma=0;

    for(i=0;i<n;i++){
        if(sensores[i].status == 'A'){
            n_ativos++;
            soma += sensores[i].temperatura;
        }
    }

    return soma/n_ativos;
}