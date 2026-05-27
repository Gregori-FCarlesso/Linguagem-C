#include <stdio.h>

int main(){
	int cod1=1,cod2=2,cod3=3,cod4=4,cod,pontuacao,difpontuacao;
	float indicadoraprovacao;
	
	printf("Digite a pontuacao do candidato: ");
	scanf("%d", &pontuacao);
	
	printf("Digite o codigo do candidato: ");
	scanf("%d", &cod);
	
	if(cod<1 || cod>4 || pontuacao>100 || pontuacao<0){
		printf("Erro na insercao do codigo ou pontuacao.");
		return 0;
	}
	
	if(cod==cod1){
		difpontuacao = pontuacao-60;
		if(difpontuacao>10){
			indicadoraprovacao= pontuacao*0.8;
	    }
	    else if(difpontuacao>0){
			indicadoraprovacao= pontuacao*0.5;
	    }
	    else{
			indicadoraprovacao= pontuacao*0.0;
	    }
	    printf("\nCargo analista\n");
		printf("Indicador de aprovacao: %.2f",indicadoraprovacao);
	}
	else if(cod==cod2){
		difpontuacao = pontuacao-75;
		if(difpontuacao>10){
			indicadoraprovacao= pontuacao*0.8;
	    }
	    else if(difpontuacao>0){
			indicadoraprovacao= pontuacao*0.5;
	    }
	    else{
			indicadoraprovacao= pontuacao*0.0;
	    }
	    printf("\nCargo projetista\n");
		printf("Indicador de aprovacao: %.2f",indicadoraprovacao);
	}
	else if(cod==cod3){
		difpontuacao = pontuacao-70;
		if(difpontuacao>10){
			indicadoraprovacao= pontuacao*0.8;
	    }
	    else if(difpontuacao>0){
			indicadoraprovacao= pontuacao*0.5;
	    }
	    else{
			indicadoraprovacao= pontuacao*0.0;
	    }
	    printf("\nCargo programador\n");
		printf("Indicador de aprovacao: %.2f",indicadoraprovacao);
	}
	else{
		difpontuacao = pontuacao-65;
		if(difpontuacao>10){
			indicadoraprovacao= pontuacao*0.8;
	    }
	    else if(difpontuacao>0){
			indicadoraprovacao= pontuacao*0.5;
	    }
	    else{
			indicadoraprovacao= pontuacao*0.0;
	    }
	    printf("\nCargo auditor\n");
		printf("Indicador de aprovacao: %.2f",indicadoraprovacao);
	}
}
