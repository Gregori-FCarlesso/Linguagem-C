#include <stdio.h>
#define TAM 100

int main(){

    char frase[TAM], resultado[TAM];
    int i, j=0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(i=0; frase[i]!='\0'; i++){

        if((frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u') ||
           (frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U')){
           }

        else{
            resultado[j] = frase[i];
            j++;
        }
    }

    resultado[j] = '\0';

    printf("\nResultado: %s\n", resultado);
}