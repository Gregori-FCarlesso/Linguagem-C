#include <stdio.h>
#include <string.h>
#define TAM 50

typedef struct{
    float altura;
    float largura;
} retangulo;

float calcularAreaRetangulo(retangulo r);

float calcularPerimetroRetangulo(retangulo r);

int main(){

    retangulo calculo_retangulo;

    printf("Digite a altura do retangulo: ");
    scanf("%f", &calculo_retangulo.altura);

    printf("Digite a largura do retangulo: ");
    scanf("%f", &calculo_retangulo.largura);

    printf("Area do retangulo: %.2f\n", calcularAreaRetangulo(calculo_retangulo));
    printf("Perimetro do retangulo: %.2f\n", calcularPerimetroRetangulo(calculo_retangulo));
}

float calcularAreaRetangulo(retangulo r){

    return (r.altura * r.largura);
}

float calcularPerimetroRetangulo(retangulo r){

    return 2*(r.altura + r.largura);
}