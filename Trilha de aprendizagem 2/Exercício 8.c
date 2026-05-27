#include <stdio.h>

int main(){
	
	int c1,c2,c3,vtotal;
	float p1,p2,p3;
	
	printf("Numeros de votos do canditado 1:\n");
	scanf("%d", &c1);
	printf("Numeros de votos do canditado 2:\n");
	scanf("%d", &c2);
    printf("Numeros de votos do canditado 3:\n");
	scanf("%d", &c3);
	
	vtotal = c1 + c2 + c3;
	p1 = ((float)c1/vtotal)*100;
	p2 = ((float)c2/vtotal)*100;
	p3 = ((float)c3/vtotal)*100;
	
	if(p1>50){
		printf("Candidato 1 ganhou a eleicao com %.2f%% dos votos.", p1);
	}
	else if(p2>50){
		printf("\nCandidato 2 ganhou a eleicao com %.2f%% dos votos.", p2);
	}
	else if(p3>50){
        printf("\nCandidato 3 ganhou a eleicao com %.2f%% dos votos.", p3);
	}
	else{
		printf("\nNecessidade de realizacao de segundo turno.");
	}
}
