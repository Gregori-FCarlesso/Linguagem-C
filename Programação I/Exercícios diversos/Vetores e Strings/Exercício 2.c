#include <stdio.h>

int main(){
	
	int i, n[6], soma=0;
	
	printf("Digite seis valores:\n");
	for(i=0; i<6; i++){
		scanf("%d", &n[i]);
		soma += n[i];
	}
	printf("O valor da soma total: %d\n", soma);
}
