#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
    char nomes[8][TAM], aux[TAM];
    int i, j;

    printf("Digite 8 nomes de alunos: ");
    for(i=0;i<8;i++){
        printf("\nDigite o nome do aluno %d: ",i+1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
    }

    for(i=0;i<7;i++){
        for(j=0;j<7-i;j++){
            if(strcmp(nomes[j], nomes[j+1]) > 0){
                strcpy(aux, nomes[j]);            
                strcpy(nomes[j], nomes[j+1]);
                strcpy(nomes[j+1], aux);
            }
        }
    }

    printf("\nNomes em ordem alfabetica:\n");

    for(i=0;i<8;i++){
        printf("%s", nomes[i]);
    }

    return 0;
}