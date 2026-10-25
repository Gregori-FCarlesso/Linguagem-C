#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){

    char frase[TAM], busca[TAM], *p;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite uma palavra para ser buscada: ");
    scanf("%s", busca);

    if((p = strstr(frase, busca)) == NULL)
        printf("Nao tem essa palavra!");

    else
        printf("Essa palavra esta na posicao: %d", p - frase);
}