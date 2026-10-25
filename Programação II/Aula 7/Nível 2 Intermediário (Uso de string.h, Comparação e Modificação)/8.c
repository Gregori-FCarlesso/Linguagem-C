#include <stdio.h>
#include <string.h>
#define TAM 50

void limparQuebraLinha(char frase[]){

    int i;

    for(i=0;frase[i]!='\0';i++){

        if(frase[i]=='\n')
            frase[i] = '\0';
    }
}

int main(){

    char frase[TAM];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    limparQuebraLinha(frase);

    printf("Resultado: %s\n", frase);
}