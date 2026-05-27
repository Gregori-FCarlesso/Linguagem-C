#include <stdio.h>

int main(){
	
	int navitorias, naempates, naderrotas, nbvitorias, nbempates, nbderrotas, atotal, btotal, ajogos, bjogos;
	
	printf("Digite quantas vitorias teve a equipe A:\n");
	scanf("%d", &navitorias);
	printf("Digite quantos empates teve a equipe A:\n");
	scanf("%d", &naempates);
	printf("Digite quantas derrotas teve a equipe A:\n");
	scanf("%d", &naderrotas);
	
	printf("Digite quantas vitorias teve a equipe B:\n");
	scanf("%d", &nbvitorias);
	printf("Digite quantos empates teve a equipe B:\n");
	scanf("%d", &nbempates);
	printf("Digite quantas derrotas teve a equipe B:\n");
	scanf("%d", &nbderrotas);
	
	ajogos = navitorias+naempates+naderrotas;
	bjogos = nbvitorias+nbempates+nbderrotas;
	
	if(ajogos==bjogos){
	 	navitorias = navitorias*3;
        naempates = naempates;
  	    atotal = navitorias+naempates;
	
	    nbvitorias = nbvitorias*3;
	    nbempates = nbempates;
  	    btotal = nbvitorias+nbempates;
  	    
		printf("Pontuacao equipe A: %d\n", atotal);
		printf("Pontuacao equipe B: %d\n", btotal);
		
		if(atotal>btotal){
			printf("A equipe A venceu.");
		}
		else if(atotal<btotal){
			printf("A equipe B venceu.");
		}
		else{
			printf("As equipes empataram na pontuacao.");
		}
	}
	else{
		printf("Faltam jogos a serem realizados.");
	}	
}
