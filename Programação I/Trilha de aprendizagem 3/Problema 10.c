#include <stdio.h>

int main(){
	int fatorial=1, nfatorial, n;
	
	printf("Digite um numero para ser feito o fatorial: ");
	scanf("%d",&nfatorial);
	printf("Produtorio:");
	
	for(n=1;n<=nfatorial;n++){
		fatorial = fatorial * n;
		printf(" .%d",n);
	}
	printf("\nFatorial de %d!: %d",nfatorial,fatorial);
}
