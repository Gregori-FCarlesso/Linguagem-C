#include <stdio.h>
#define MAX 100

void removerCaracteres(char *str, char c);

int main(){
    char texto[MAX], c;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Qual caractere deseja remover? ");
    scanf(" %c", &c);

    removerCaracteres(texto, c);

    printf("Resultado: %s\n", texto);

}

void removerCaracteres(char *str, char c){
    int i, j=0;

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != c){
            str[j] = str[i];
            j++;
        } 
    }

    str[j] = '\0';
}