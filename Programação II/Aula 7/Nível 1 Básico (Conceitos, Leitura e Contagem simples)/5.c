#include <stdio.h>
#include <string.h>
#define tamanhomax 50

int main(){
	char palavra[tamanhomax];
	int i, tamanho;
	
	printf("\nDigite uma palavra com no maximo %d caracteres: ", tamanhomax);
	fgets(palavra, sizeof(palavra), stdin);
	
	tamanho = strlen(palavra);
	
	for(i=tamanho-1;i>=0;i--){
		if(palavra[i]!='\n')
			printf("%c",palavra[i]);
	}
	
	return 0;
}
