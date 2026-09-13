#include <stdio.h>

int main(){
	int votantes,votante,voto,sim=0,nao=0;
	float percentualsim,percentualnao;
	
	printf("Digite a quantidade de votantes: ");
	scanf("%d",&votantes);
	return 0;
	if(votantes>=1){
		for(votante=1;votante<=votantes;votante++){
			do{
				printf("Votante %d digite seu voto (Sim=1 ou Nao=0): ",votante);
			    scanf("%d",&voto);
			    if(voto!=0 && voto!=1){
			    	printf("Digite 1 para votar (sim) ou 0 para votar (nao).\n");
				}
			}while(voto!=0 && voto!=1);
			
			if(voto==0){
				nao++;
			}
			else{
				sim++;
			}
		}
		percentualsim=((float)sim/votantes)*100.0;
		percentualnao=((float)nao/votantes)*100.0;
		printf("\nA quantidade de votos SIM: %d e o percentual de votos SIM: %.2f%%\n",sim,percentualsim);
		printf("A quantidade de votos NAO: %d e o percentual de votos NAO: %.2f%%\n",nao,percentualnao);
		
		if(percentualsim>50){
			printf("Candidato aprovado.");
		}
		else if(percentualsim<50){
			printf("Candidato nao aprovado.");
		}
		else{
			printf("Empate na votacao.");
		}
	}
	else{
		printf("Sem votantes para realizar a votacao.");
	}
}
