#include <stdio.h>

int main(){
	
	int n[5];
	int i;
	
	printf("Digite 5 valores:\n");
	
	for(i=0; i<5; i++){
		scanf("%d", &n[i]);
	}
	
	printf("Os valores digitados:\n");
	for(i=0; i<5; i++){
		printf("%d ", n[i]);
	}
}
