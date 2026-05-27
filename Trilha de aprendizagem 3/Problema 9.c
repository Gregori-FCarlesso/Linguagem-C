#include <stdio.h>

int main(){
	int dedosA=0,dedosB=0,total;
	int jogos=0,pontosA=0,pontosB=0;
	
	printf("Jogo de par ou impar (A x B)\n");
	
	do{
		total=0;
		jogos++;
		printf("Jogo %d: ",jogos);
		scanf("%dx%d",&dedosA,&dedosB);
		while(dedosA<0 || dedosA>5 || dedosB<0 || dedosB>5){
			printf("Verifique as entradas. Nao eh possivel colocar menos de 0 dedos ou mais de 5 dedos em cada mao!\n");
			printf("Digite novamente (A x B): ");
			scanf("%dx%d",&dedosA,&dedosB);
		}
		
		total=dedosA+dedosB;
		
		if(total%2 == 0){
			pontosA++;
			printf("+1 ponto pro A\n\n");
		}
		else{
			pontosB++;
			printf("+1 ponto pro B\n\n");
		}
		
	} while(pontosA<6 && pontosB<6);
	
	printf("Total de jogos: %d\n",jogos);
	
	if(pontosA>pontosB)
	    printf("Jogador A ganhou com %d pontos!",pontosA);
	else
	    printf("Jogador B ganhou com %d pontos!",pontosB);
}
