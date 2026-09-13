#include <stdio.h>

int calcularCubo(int lado);

int main(){

        int lado;

        printf("Digite o lado do cubo: ");
        scanf("%d",&lado);

        printf("\nVolume do cubo: %d\n",calcularCubo(lado));
}

int calcularCubo(int lado){

        return lado * lado * lado;
}