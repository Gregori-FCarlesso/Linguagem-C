#include <stdio.h>
#include <string.h>
#define MAX 100

void comprimirString(const char *entrada, char *saida);

int main(){
    char entrada[MAX] = "aaabbc";
    char saida[MAX];

    comprimirString(entrada, saida);

    printf("Resultado: %s\n", saida);

    return 0;
}

void comprimirString(const char *entrada, char *saida){
    int i, j, k=0, quantidade;
    
    saida[0] = '\0';

    for(i=0; entrada[i] != '\0'; i++){
        quantidade = 0;
        
        for(j=i; entrada[j]!='\0' && entrada[j]==entrada[i]; j++){
            quantidade++;
        }

        saida[k] = entrada[i];
        k++;

        saida[k] = quantidade + '0'; // Armazena o caractere, transforma de numerico para caractere
        k++;

        saida[k] = '\0';

        i += quantidade - 1; // Aqui tem o -1 pois o no for ele já incrementa +1
    }
}