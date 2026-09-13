#include<stdio.h>

float media(float nota1, float nota2, float nota3)
{
    return (nota1+nota2+nota3) / 3.0;
}

int main(){
    float nota1, nota2, nota3;

    printf("Digite a nota 1: ");
    scanf("%f",&nota1);

    printf("Digite a nota 2: ");
    scanf("%f",&nota2);

    printf("Digite a nota 3: ");
    scanf("%f",&nota3);

    printf("Media aritmetica: %.2f", media(nota1,nota2,nota3));
}