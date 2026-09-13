#include <stdio.h>
#define TAM 100

int main(){

    char frase[TAM];
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(i=0; frase[i]!='\0'; i++){

        if((frase[i]=='m' && frase[i+1]=='a' && frase[i+2]=='l') ||
           (frase[i]=='M' && frase[i+1]=='A' && frase[i+2]=='L')){

            frase[i] = '*';
            frase[i+1] = '*';
            frase[i+2] = '*';
        }
    }

    printf("\nResultado: %s\n", frase);
}