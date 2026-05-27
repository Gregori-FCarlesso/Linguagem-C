#include <stdio.h>

int main(){
	
	int i, n, resultado;
	
	printf("Digite um valor:\n");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++){
	    resultado = n * i;
	    printf("%d ", resultado);
	}
}
