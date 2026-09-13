#include <stdio.h>

int main(){
	int pontos,maior=0,menor=7,rodmaior,rodmenor,rodada,nrodadas,total=0,abaixo=0,acima=0;
	float media;
	
	printf("Digite a quantidade de rodadas: ");
	scanf("%d",&nrodadas);
	printf("Digite os pontos de cada rodada\n");
	
	for(rodada=1;rodada<=nrodadas;rodada++){
		printf("Pontos da rodada %d: ",rodada);
		scanf("%d",&pontos);
		total=total+pontos;
		if(pontos<4){
			abaixo++;
		}
		else if(pontos>5){
		    acima++;	
		}
		
		if(pontos>maior){
			maior=pontos;
			rodmaior=rodada;
		}
		if(pontos<menor){
			menor=pontos;
			rodmenor=rodada;
		}
	}
	media = total/(float)nrodadas;
	printf("Total de pontos da equipe: %d\n",total);
	printf("Media de pontos: %.2f\n",media);
	printf("Rodadas abaixo da referencia: %d\n",abaixo);
	printf("Rodadas acima da referencia: %d\n",acima);
	printf("Pontos da melhor rodada: %d na rodada %d\n",maior,rodmaior);
	printf("Pontos da pior rodada: %d na rodada %d\n",menor,rodmenor);
}
