#include <stdio.h>
#include <string.h>
#define tamanhomax 100

int main(){
	char palavra[tamanhomax];
	int i;
	
	printf("\nDigite uma palavra com no maximo %d caracteres: ", tamanhomax);
	fgets(palavra, sizeof(palavra), stdin);
	
	printf("\n");
	for(i=0;palavra[i]!='\0';i++){
		if(palavra[i]!='\n')
			printf("%c\n",palavra[i]);
	}
	return 0;
}
