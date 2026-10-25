#include <stdio.h>
#include <string.h>
#define tamanhomax 100

int main(){
	char frase[tamanhomax];
	int espacos=0, i;
	
	printf("\nDigite uma frase com no maximo %d caracteres: ", tamanhomax);
	fgets(frase, sizeof(frase), stdin);
	
	for(i=0;frase[i]!='\0';i++){
		if((frase[i]==' '))
			espacos++;
	}
	
	printf("\nQuantidade de espacos: %d",espacos);
	return 0;
}
