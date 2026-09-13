#include <stdio.h>

int main(){
	
	int n, soma, contarn;
	
	printf("Digite um valor:\n");
	scanf("%d", &n);
	
	while(n != 0){
		soma += n;
		contarn++;
		
		printf("Digite outro valor:\n");
		scanf("%d", &n);	
	}
	printf("Soma = %d\n", soma);
	printf("Quantidade de numeros digitados = %d\n", contarn);
}
