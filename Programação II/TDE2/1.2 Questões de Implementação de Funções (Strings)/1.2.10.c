#include <stdio.h>
#include <string.h>
#define MAX 100

void ordenarMatrizStrings(char lista[][100], int n);

int main(){
    int n, i;

    printf("Quantas strings tem? ");
    scanf("%d", &n);
    getchar();

    char lista[n][MAX];

    for(i=0;i<n;i++){
        printf("Stringh %d: ", i+1);
        fgets(lista[i], sizeof(lista[i]), stdin);
        lista[i][strcspn(lista[i], "\n")] = '\0';
    }

    ordenarMatrizStrings(lista, n);

    printf("\n");
    for(i=0;i<n;i++){
        printf("String %d: %s\n", i+1, lista[i]);
    }

    return 0;
}

void ordenarMatrizStrings(char lista[][100], int n){
    int i, j;
    char aux[MAX];

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(lista[j], lista[j+1]) > 0){
                strcpy(aux, lista[j+1]);
                strcpy (lista[j+1],lista[j]);
                strcpy (lista[j], aux);
            }
        }
    }
}