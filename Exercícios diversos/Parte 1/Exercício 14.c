#include <stdio.h>

int main(){
	
	int i, n, fatorial=1;
	
	printf("Digite um valor:\n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		fatorial *= i;
		printf("Fatorial: %d\n", fatorial);
	}
}
