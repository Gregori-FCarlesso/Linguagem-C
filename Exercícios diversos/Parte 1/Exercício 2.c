#include <stdio.h>

int main(){
	int soma, subt, multi, n1, n2;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	subt = n1 - n2;
	multi = n1 * n2;
	
	printf("\nA soma: %d.\n", soma);
	printf("A subtracao: %d.\n", subt);
	printf("A multiplicacao: %d.\n", multi);
	
}
