#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){

    int i, tam, contador=0;
    char frase[TAM];

    printf("Digite uma frase: ");
    scanf("%s", frase);

    tam = strlen(frase);

    for(i=0;i<tam;i++){

        if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='u' ||
           frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' ||
           frase[i]=='U')
            contador++;
    }

    printf("\nA frase possui %d vogais!", contador);

    return 0;
}