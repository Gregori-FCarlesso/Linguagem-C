#include <stdio.h>
#include <string.h>
#define tamanhomax 100

int main(){
	char nome[tamanhomax];
	int tamanho = 0;
	
	printf("\nDigite seu nome com no maximo %d caracteres: ", tamanhomax);
	fgets(nome, sizeof(nome), stdin);
	
	printf("\nVoce digitou: %s", nome);
	
	tamanho = strlen(nome);
	printf("\nO nome tem %d caracteres", tamanho-1);
	
	printf("\nEscrito de tras para frente, o nome fica: ");
	while(tamanho > 0){
		tamanho--;
		printf("%c", nome[tamanho]);
	}
	printf("\nFim.\n");
	return 0;
}
