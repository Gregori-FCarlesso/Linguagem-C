#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){

    int i, j, espaco_anterior=0;
    char frase[TAM], resultado[TAM];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    j = 0;

    for(i=0;(frase[i]!='\0');i++){

        if((frase[i]!=' ') || (frase[i]==' ' && espaco_anterior==0)){
            resultado[j] = frase[i];
            j++;
        }

        if(frase[i]==' ')
            espaco_anterior = 1;
        else
            espaco_anterior = 0;
    }

    printf("Resultado: %s\n", resultado);
}