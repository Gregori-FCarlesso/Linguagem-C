#include <stdio.h>
#include <string.h>
#define MAX 100

int validarEmailSimples(const char *email);

int main(){

    char email[MAX];

    printf("Digite seu email: ");
    scanf("%s", email);
    email[strcspn(email, "\n")] = '\0';

    if(validarEmailSimples(email)==1)
        printf("\nEmail valido!\n");
    else
        printf("\nEmail invalido!\n");

    return 0;
}

int validarEmailSimples(const char *email){
    int i, valido1=0, quantidade=0, valido2=0, valido3=0;
    const char *posicao;

    for(i=0; email[i]!='\0'; i++){
        if(email[i]=='@')
            quantidade++;
    }
    if((quantidade==1))
        valido1 = 1;
    else
        valido1 = 0;

    if((strlen(email) > 0) && (email[0]=='@' || email[strlen(email)-1]=='@')) //usar -1 pois senão ele compara com o '\0'
        valido2 = 0;
    else
        valido2 = 1;

    posicao = strchr(email, '@');

    if(posicao != NULL){
        for(i=(posicao-email)+1; email[i]!='\0' && valido3==0; i++){
            if(email[i]=='.')
                valido3 = 1;
            else
                valido3 = 0;
        }
    }
    else
        valido3 = 0;

    if(valido1==1 && valido2==1 && valido3==1)
        return 1;
    else
        return 0;
}