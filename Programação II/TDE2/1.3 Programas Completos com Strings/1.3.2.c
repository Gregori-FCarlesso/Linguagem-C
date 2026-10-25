#include <stdio.h>
#include <string.h>
#define MAX 200

void frequencia_letras(char frase[MAX]);

int main(){

    char frase[MAX];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    frequencia_letras(frase);

    return 0;
}

void frequencia_letras(char frase[MAX]){
    int contador[26] = {0}, i, j;

    for(i=0;frase[i]!='\0';i++){
        if(frase[i]>='A' && frase[i]<='Z')
            contador[frase[i] - 'A']++;
        else if(frase[i]>='a' && frase[i]<='z')
            contador[frase[i] - 'a']++;
    }

    for(i=0;i<26;i++){
        if(contador[i]>0)
            printf("Letra %c: %d vezes\n", i + 'A', contador[i]);
    }
}