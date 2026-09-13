#include <stdio.h>

float calcularAreaTriangulo(float altura, float base);

int main(){

        float altura, base;

        printf("Digite a altura do triangulo: ");
        scanf("%f",&altura);

        printf("Digite a base do triangulo: ");
        scanf("%f",&base);

        printf("\nArea do triangulo: %.2f\n", calcularAreaTriangulo(altura, base));
}

float calcularAreaTriangulo(float altura, float base){

        return (altura*base)/2;
}