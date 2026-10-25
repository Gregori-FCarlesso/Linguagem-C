#include <stdio.h>
#include <string.h>
#define tamanhomax 100

int main(){
	char palavra[tamanhomax];
	int espacos=0, i;
	
	printf("\nDigite uma palavra com no maximo %d caracteres: ", tamanhomax);
	fgets(palavra, sizeof(palavra), stdin);
	
	for(i=0;palavra[i]!='\0';i++){
		if(palavra[i]>='a'&& palavra[i]<='z')
			palavra[i] = palavra[i] - 32;
	}
	
	printf("\nPalavra em maiuscula: %s",palavra);
	return 0;
}
