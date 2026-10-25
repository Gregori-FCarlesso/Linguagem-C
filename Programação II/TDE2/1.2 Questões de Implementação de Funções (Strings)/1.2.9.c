#include <stdio.h>
#include <string.h>
#define MAX 100

void trim(char *str);

int main(){

    char texto[MAX];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    trim(texto);

    printf("\nResultado: %s\n", texto);

    return 0;
}

void trim(char *str){
    int i, j, k;

    for(i=0; str[i]==' ' || str[i]=='\t' || str[i]=='\n'; i++);

    for(j=strlen(str)-1; j>=i && (str[j]==' ' || str[j]=='\t' || str[j]=='\n'); j--);

    for(k=0; i<=j; i++, k++){
        str[k] = str[i];
    }

    str[k] = '\0';
}
  