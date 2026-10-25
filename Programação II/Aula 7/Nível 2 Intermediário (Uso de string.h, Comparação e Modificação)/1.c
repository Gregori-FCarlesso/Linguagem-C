#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){

    char senha[TAM], senhapred[TAM]="Universidade123";

    printf("Digite uma senha: ");
    scanf("%s", senha);

    if(strcmp(senha, senhapred)==0)
        printf("Acesso Permitido!");
    else
        printf("Acesso Negado!");

    return 0;
}