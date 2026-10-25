#include <stdio.h>
#include <string.h>
#define TAM 50

int verifica_palindromo(char palavra[TAM]){

    int inicio, fim;

    fim = strlen(palavra) - 1;

    for(inicio=0; inicio<fim; inicio++){

        if(palavra[inicio]!=palavra[fim])
            return 0;

        fim--;
    }

    return 1;
}

int main(){

    char palavra[TAM];

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    if(verifica_palindromo(palavra)==1)
        printf("Sua palavra e um palindromo!");

    else
        printf("Sua palavra nao e um palindromo!");
}