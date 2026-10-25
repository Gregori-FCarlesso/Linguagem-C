#include <stdio.h>
#include <string.h>
#define MAX 100

void criptografar(char frase[MAX], int k);
void descriptografar(char frase[MAX], int k);

int main(){

    char frase[MAX];
    int k;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite uma chave para criptografar: ");
    scanf("%d", &k);

    criptografar(frase, k);
    printf("\nCriptografada: %s\n", frase);

    descriptografar(frase, k);
    printf("\nDescriptografada: %s\n", frase);

    return 0;
}

void criptografar(char frase[MAX], int k){
    int i;

    for(i=0;frase[i]!='\0';i++){
        if(frase[i]>='A' && frase[i]<='Z'){
            frase[i] = ((frase[i] - 'A' + k) % 26) + 'A';
        }
        else if(frase[i]>='a' && frase[i]<='z'){
            frase[i] = ((frase[i] - 'a' + k) % 26) + 'a';
        }
    }
}

void descriptografar(char frase[MAX], int k){
    int i;

    for(i=0;frase[i]!='\0';i++){
        if(frase[i]>='A' && frase[i]<='Z'){
            frase[i] = (((frase[i] - 'A' - k)%26 + 26) % 26) + 'A';
        }
        else if(frase[i]>='a' && frase[i]<='z'){
            frase[i] = (((frase[i] - 'a' - k)%26 + 26) % 26) + 'a';
        }
    }
}