#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){

    char frase[TAM], caracter;
    int i=0, ocorrencias=0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);
    
    while(frase[i] != '\0'){
        if(frase[i] == caracter){
            ocorrencias++;
        }
        i++;
    }

    printf("Quantidade de vezes que o caracter escolhido foi encontrado: %d\n", ocorrencias);

    return 0;
}