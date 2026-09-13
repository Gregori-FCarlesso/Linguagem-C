#include <stdio.h>

float mediaRestrita(float vet[12]);

int main(){
	
	float vet[12];
	int i, j;
		
	printf("Digite os 12 valores do vetor: ");
	for(i=0;i<12;i++){
		do{
		printf("Digite o valor %d: ",i+1);
		scanf("%f",&vet[i]);
		
		if(vet[i]<-10 || vet[i]>10)
			printf("\nIntervalo errado!\n");
		} while(vet[i]<-10.0 || vet[i]>10.0);
	}
	
	printf("\nMedia: %.2f\n", mediaRestrita(vet));
	
	return 0;
}

float mediaRestrita(float vet[12]){
	
	float media, aux, soma=0;
	int i, j, ordenado = 0;
	
	for(i=0;i<11 && ordenado==0;i++){
		
		ordenado = 1;
		
		for(j=0;j<11-i;j++){
			
			if(vet[j]>vet[j+1]){
				aux = vet[j+1];
				vet[j+1] = vet[j];
				vet[j] = aux;
				ordenado = 0;
			}
		}
	}
	
	for(i=3;i<9;i++){
		soma += vet[i];
	}
	
	media = soma / 6.0;
	return media;
}
