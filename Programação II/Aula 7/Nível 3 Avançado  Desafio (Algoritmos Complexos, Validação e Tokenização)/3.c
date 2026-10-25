#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
	char frase[TAM];
	int i, campo=0;
	
	printf("Digite a lista de dados separados por virgula: ");
	fgets(frase, sizeof(frase), stdin);
	
	frase[strcspn(frase, "\n")] = '\0';
	
	printf("Nome: ");
	for(i=0;frase[i]!='\0';i++){
		if(frase[i]==','){
			printf("\n");
			campo++;
			
			if(campo==1){
				printf("Idade: ");
			}
			else if(campo==2){
				printf("Curso: ");
			}
			else
				printf("Cidade: ");
		}
		else
			printf("%c",frase[i]);
	}
	
	printf("\n");
    return 0;
}
