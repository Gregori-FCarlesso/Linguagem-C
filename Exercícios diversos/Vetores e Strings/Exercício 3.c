#include <stdio.h>

int main(){
	
	int i, n[10], menor, maior;
	
	printf("Digite 10 valores:\n");
	for(i=0; i<10; i++){
		scanf("%d", &n[i]);
	}
	
	maior = n[0];
	menor = n[0];
	
	for(i=0; i<10; i++){
		if(n[i]>maior){
			maior = n[i];
		}
		
		if(n[i]<menor){
			menor = n[i];
		}
	}
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
}
	
	
	
	
