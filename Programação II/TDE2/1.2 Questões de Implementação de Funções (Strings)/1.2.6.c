#include <stdio.h>
#include <string.h>
#define MAX 100

int substituirPalavra(char *texto, const char *busca, const char *subst);

int main(){

    char texto[MAX], busca[MAX], substituidor[MAX];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("Digite a palavra que deseja buscar: ");
    fgets(busca, sizeof(busca), stdin);
    busca[strcspn(busca, "\n")] = '\0';

    printf("Digite a palavra substituta: ");
    fgets(substituidor, sizeof(substituidor), stdin);
    substituidor[strcspn(substituidor, "\n")] = '\0';

    if(substituirPalavra(texto, busca, substituidor)==1){
        printf("\nResultado: %s\n", texto);
    }
    else{
        printf("\nPalavra nao encontrada.\n");
    }

    return 0;
}

int substituirPalavra(char *texto, const char *busca, const char *subst){
    char *encontrou, resto[MAX];

    encontrou = strstr(texto, busca);

    if(encontrou != NULL){
        strcpy(resto, encontrou + strlen(busca)); // colocando dentro do "resto" o que tem após a palavra "buscada"
        strcpy(encontrou, subst); // coloca dentro de "encontrou" a palavra que vai substituir
        strcat(encontrou, resto); // anexa o conteúdo do "resto" junto ao "encontrou"

        return 1;
    }
    return 0;
}