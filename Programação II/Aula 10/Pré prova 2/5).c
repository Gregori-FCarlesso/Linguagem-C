#include <stdio.h>
#include <string.h>
#define MAX 100

void invertepalavras(char frase[MAX], char resultado[MAX]);

int main(){
	
	char frase[MAX], resultado[MAX];
	
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
	
    invertepalavras(frase, resultado);

	printf("\nResultado: %s", resultado);
	
	return 0;
}

void invertepalavras(char frase[MAX], char resultado[MAX]){
    int i, j, k=0, tamanho;
    char aux[MAX];
    tamanho = strlen(frase);

    resultado[0] = '\0';


    for(i=0; i <= tamanho; i++){
        
        if(frase[i]==' ' || frase[i]=='\0'){
            k = 0;
            for(j=i-1; j>=0 && frase[j]!=' '; j--){
                    aux[k] = frase[j];
                    k++;
            }
            aux[k] = '\0';

            strcat(resultado, aux);

            if(frase[i] == ' ')
                strcat(resultado, " ");
        }
    }
}
