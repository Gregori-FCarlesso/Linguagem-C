#include <stdio.h>
#include <string.h>
#define tamanhomax 100

void maiusculo(char texto[tamanhomax]){
	int i;
	
	for(i=0; texto[i]!='\0'; i++){
		if(texto[i]>='a' && texto[i]<='z'){
			texto[i] = texto[i] - 32;
		}
	}
}


int main(){
	char texto[tamanhomax];
	
	printf("Digite um caracter: ");
	fgets(texto, sizeof(texto), stdin);
	
	maiusculo(texto);
	
	printf("\nO caractere agora e %s\n",texto);
	return 0;
}
