#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char n[100];
	
	printf("Digite uma frase:\n");
	fgets(n, 100, stdin);
	puts("");
	
	puts("Sua frase digitada:");
	puts(n);
}
