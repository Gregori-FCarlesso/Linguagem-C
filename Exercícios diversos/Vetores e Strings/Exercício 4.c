#include <stdio.h>

int main(){
	int n[8], i, pares=0, impares=0, resto=0;
	
	printf("Digite 8 valores:\n");
	for(i=0; i<8; i++){
		scanf("%d", &n[i]);
		
		resto = n[i] % 2;
		
		if(resto==0){
			pares++;
		}
		else {
			impares++;
		}
	}
	printf("Quantidade de pares: %d\n", pares);
	printf("Quantidade de impares: %d\n", impares);
}
