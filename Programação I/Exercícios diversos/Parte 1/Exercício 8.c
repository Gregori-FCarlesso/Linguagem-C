#include <stdio.h>

int main(){
	int n, resto;
	
	printf("Digite um valor:\n");
	scanf("%d", &n);
	
	resto = n % 2;
	
	if(resto == 0){
		printf("Par.\n");
	}
	else {
		printf("Impar.\n");
	}
	
}
