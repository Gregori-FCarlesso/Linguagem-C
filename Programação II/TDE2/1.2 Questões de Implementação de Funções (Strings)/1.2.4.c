#include <stdio.h>
#include <string.h>
#define MAX 100

void inverteCaixa(char *str);

int main(){

    char frase[MAX];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    inverteCaixa(frase);

    printf("\nResultado: %s\n", frase);

    return 0;
}

void inverteCaixa(char *str){
    int i;

    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 32;
        else if(str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 32;
    }
}