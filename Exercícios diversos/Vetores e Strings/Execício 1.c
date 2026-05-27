#include <stdio.h>

int main(){
	
	int i, n[5];
	
	printf("Digite cinco valores: \n");
	for(i=0; i<5; i++){
		scanf("%d", &n[i]);
	}
	printf("Valores digitados:\n");
	for(i=0; i<5; i++){
		printf("%d ", n[i]);
	}
}
