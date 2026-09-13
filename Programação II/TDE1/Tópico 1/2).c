#include<stdio.h>

int main(){
    char nome[21];
    int idade;
    float altura;

    printf("Digite o nome do atleta: ");
    scanf("%s",nome);

    printf("Digite a idade do atleta: ");
    scanf("%d",&idade);

    printf("Digite a altura do atleta: ");
    scanf("%f",&altura);

    printf("\nO atleta %s tem %d anos e %.2f de altura",nome,idade,altura);

    return 0;
}