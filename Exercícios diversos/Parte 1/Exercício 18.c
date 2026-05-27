#include <stdio.h>

int main(){
	
	int i, n[8], pares=0, impares=0, resto;
	
	printf("Digite 8 valores:\n");
	for(i=0; i<8; i++){
		scanf("%d", &n[i]);
		resto = n[i] % 2;
		
		if(resto == 0){
			pares++;
		}
		else {
			impares++;
		}
	}
	printf("Quantidade de valores impares: %d\n", impares);
	printf("Quantidade de valores pares: %d\n", pares);
}
