#include <stdio.h>
#include <string.h>
#define MAX 100

int contaNumericos(char linha[]);

int main(){
	
	char texto[MAX];
	
	printf("Digite um texto: ");
	scanf("%s", texto);
	
	printf("\nSeu texto possui %d digitos numericos!", contaNumericos(texto));
	
	return 0;
}

int contaNumericos(char linha[]){
	int i, caracteres=0;
	
	for(i=0; linha[i]!='\0'; i++){
		if(linha[i] >= '0' && linha[i] <= '9')
			caracteres++;
	}
	return caracteres;
}
