#include <stdio.h>

int main(){
	int voto,votosim=0,votonao=0,votantes,total=0;
	float percentualsim,percentualnao;
	
	printf("Inicio da votacao\n");
	printf("Tem algum votante (Nao=0 e sim=1)? ");
	scanf("%d",&votantes);
	
	while(votantes!=0 && votantes!=1){
	        printf("Digite as opcoes corretas: (Nao=0 e sim=1)?");
	        scanf("%d",&votantes);
			}
	
	if(votantes==1){
			total++;
		}		
			
	if(total==0){
	    	printf("Sem nenhum votante. Votacao encerrada!");
	    	return 0;
		}		
	
	do{	
			
		printf("Votou sim=1 ou nao=0? ");
		scanf("%d",&voto);
		
		while(voto!=0 && voto!=1){
	        printf("Digite as opcoes corretas: (Nao=0 e sim=1)?");
	        scanf("%d",&voto);
			}
			
		if(voto==1){
			votosim++;
		}
		else{
	        votonao++;
		}
	    
	    printf("\nTem ainda algum votante (Nao=0 e sim=1)? ");
	    scanf("%d",&votantes);
	    
	    while(votantes!=0 && votantes!=1){
	        printf("Digite as opcoes corretas: (Nao=0 e sim=1)?");
	        scanf("%d",&votantes);
			}
			
	    if(votantes==1){
			total++;
		}
		
	} while(votantes==1);
	
	percentualsim = ((float)votosim/total)*100;
	percentualnao = ((float)votonao/total)*100;
	
	printf("\nQuantidade de votos sim: %d com um percentual de %.2f%%\n",votosim,percentualsim);
	printf("Quantidade de votos nao: %d com um percentual de %.2f%%\n",votonao,percentualnao);
	
    if(percentualsim>50)
        printf("Candidato aprovado!");
	else if(percentualsim<50)
	    printf("Candidato nao aprovado!");
	else
	    printf("Empate nos votos");
}
