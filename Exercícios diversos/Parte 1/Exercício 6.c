#include <stdio.h>

int main (){
	int n1, n2;
	
	printf("Digite um primeiro valor:\n");
	scanf("%d", &n1);
	printf("Digite um segundo valor:\n");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("Primeiro valor maior: %d.\n", n1);
	}
	else if(n2 > n1){
		printf("Segundo valor maior: %d.\n", n2);
	}
	else {
		printf("Valores iguais: %d.\n", n1);
	}
}
