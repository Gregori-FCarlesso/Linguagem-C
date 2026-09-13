#include <stdio.h>
#include <string.h>
#define tamanhomax 100

int main(){
	char nome[tamanhomax];
	int tamanho=0, espacos=0, i;
	
	printf("\nDigite seu nome com no maximo %d caracteres: ", tamanhomax);
	fgets(nome, sizeof(nome), stdin);
	
	tamanho = strlen(nome);

	for(i=0;i<tamanho;i++){
		if(nome[i] == ' ')
			espacos++;
	}
	
	printf("\nQuantidade de espacos: %d",espacos);
	printf("\nFim.\n");
	return 0;
}
