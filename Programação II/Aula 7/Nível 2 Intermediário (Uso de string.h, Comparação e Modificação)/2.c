#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){

    char nome[TAM], sobrenome[TAM], resultado[TAM];

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    getchar();
    fgets(sobrenome, sizeof(sobrenome), stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';

    strcpy(resultado, sobrenome);
    strcat(resultado, ", ");
    strcat(resultado, nome);

    printf("Seu nome em formato \"Sobrenome, Nome\": %s", resultado);

    return 0;
}