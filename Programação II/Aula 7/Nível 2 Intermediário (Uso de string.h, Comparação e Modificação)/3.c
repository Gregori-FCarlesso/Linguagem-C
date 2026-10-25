#include <stdio.h>
#include <string.h>
#define TAM 50

void tirarvogais(char frase[TAM], char semconsoante[TAM]){
    int i, j;
    j = 0;

    for(i=0;frase[i]!='\0';i++){
        if(frase[i]!='a' && frase[i]!='e' && frase[i]!='i' && frase[i]!='o' && frase[i]!='u' &&
            frase[i]!='A' && frase[i]!='E' && frase[i]!='I' && frase[i]!='O' && frase[i]!='U'){
                semconsoante[j] = frase[i];
                j++;
        }
    }
    semconsoante[j] = '\0';
}


int main(){

    char frase[TAM], semconsoante[TAM];

    printf("Digite uma frase: ");
    scanf("%s", frase);

    tirarvogais(frase, semconsoante);

    printf("Resultado da frase: %s", semconsoante);

    return 0;
}