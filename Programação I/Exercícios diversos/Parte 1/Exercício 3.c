#include <stdio.h>

int main(){
	float n, dobro;
	printf("Digite um valor:\n");
	scanf("%f", &n);
	
	dobro = n * 2;
	
	printf("O valor digitado: %.2f.\n", n);
	printf("O dobro do valor digitado: %.2f.\n", dobro);
	
}
