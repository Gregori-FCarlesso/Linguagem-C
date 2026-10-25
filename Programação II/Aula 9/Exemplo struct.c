#include <stdio.h>
#include <string.h>
#define N 2

int main(){
	int i;

	struct frotas {
			char nomeveiculo[20];
			char placa[8];
			int km; } frota[N];
	
	for(i=0;i<N;i++){
		printf("Digite o nome do veiculo: ");
		fgets(frota[i].nomeveiculo, sizeof(frota[i].nomeveiculo), stdin);
		frota[i].nomeveiculo[strcspn(frota[i].nomeveiculo, "\n")] = '\0';
		
		printf("Digite a placa do veiculo: ");
		fgets(frota[i].placa, sizeof(frota[i].placa), stdin);
		frota[i].placa[strcspn(frota[i].placa, "\n")] = '\0';
		
		printf("Digite os KM do veiculo: ");
		scanf("%d",&frota[i].km);
		
		while (getchar() != '\n'); 
	}
	
	printf("===RELATORIO DE FROTAS===\n");
	
	for(i=0;i<N;i++){
		printf("Veiculo %d -> nome: %s | placa: %s | Km: %d\n", i+1, frota[i].nomeveiculo, frota[i].placa, frota[i].km);
	}
	
	printf("\n");
    return 0;
}
