#include <stdio.h>

int main(){
	int n[5], i;
	
	printf("Digite 5 valores:\n");
	for(i=0; i<5; i++){
		scanf("%d", &n[i]);
	}
	
	for(i=4; i>=0; i--){
		printf("%d ", n[i]);
	}
}
