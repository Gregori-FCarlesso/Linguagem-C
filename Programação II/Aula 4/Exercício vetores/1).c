#include <stdio.h>

int main(){

	int v[5],i;
	
	printf("Digite cinco numeros:\n");
	
	for (i=0;i<5;i++)
	{
    	scanf("%d", &v[i]);
	}

	printf("\nEm ordem: [ ");
	for (i = 0; i < 5; i++) {
    	printf("%d ", v[i]);
	}
	printf("]");
	
	printf("\nFora de ordem: [ ");
	for (i = 4; i >= 0; i--) {
    	printf("%d ", v[i]);
	}
	printf("]");

}
