#include <stdio.h>

int main(){
	
	char nome[30];
	
	puts("Digite um nome:");
	fgets(nome, 30, stdin);
	
	puts("Nome digitado:");
	puts(nome);
	
}
