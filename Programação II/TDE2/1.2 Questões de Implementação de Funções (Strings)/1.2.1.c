#include <stdio.h>
#define MAX 100

int contarPalavras(const char *str);

int main(){
    char texto[MAX];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Seu texto tem %d palavras!\n", contarPalavras(texto));

}

int contarPalavras(const char *str){
    int i, palavras=0, dentropalavra=0;

    for(i = 0; str[i] != '\0'; i++){
        if((str[i]=='\n') || (str[i]==' ') || (str[i]=='\t')){
            dentropalavra = 0;
        }
        else if(dentropalavra == 0){
            palavras++;
            dentropalavra = 1;
        }
    }
    return palavras;
}