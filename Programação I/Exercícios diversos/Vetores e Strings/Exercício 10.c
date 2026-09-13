#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char n[30], n1[30];
	int i=0;
	
	printf("Digite uma palavra:\n");
	fgets(n, 30, stdin);
	
	printf("Digite outra palavra:\n");
	fgets(n1, 30, stdin);
	
	if (strcmp(n, n1) == 0){
		printf("São iguais");
	}
	else {
		printf("São diferentes");
	}	
}
