#include <stdio.h>

int main(){

	int v[10], i;
	
	printf("Digite dez numeros:\n");
	
	for (i=0;i<10;i++)
	{
    	scanf("%d", &v[i]);
	}

	printf("\nResultado: [ ");
	for (i = 0; i < 10; i++) {
    	printf("%d ", v[i]);
	}
	printf("]");

}
