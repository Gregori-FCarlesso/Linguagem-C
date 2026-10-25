#include <stdio.h>
#include <string.h>
#define TAM 100
#define N 5

int main(){
	char nomes[N][TAM], aux[N][TAM];
	int i, j, ordenado=0;
	
	printf("Digite 5 nomes: ");
    for(i=0;i<N;i++){
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
	
	for(i=0;i<N && ordenado==0;i++){
        ordenado = 1;
        for(j=0;j<N-i-1;j++){
            if(strcmp(nomes[j], nomes[j+1]) > 0){
                strcpy(aux[j], nomes[j+1]);
                strcpy(nomes[j+1], nomes[j]);
                strcpy(nomes[j], aux[j]);
                ordenado = 0;
            }
        }
    }

    printf("\nlista de nomes:\n");
    for(i=0;i<N;i++){
        printf("%s\n",nomes[i]);
	}

    return 0;
}