#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){

    char frase[TAM], tam;
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tam = strlen(frase);
    for(i=0;i<tam;i++){

        if(frase[i]=='a' || frase[i]=='A')
            frase[i] = '*';
    }

    printf("Resultado: %s\n", frase);
}