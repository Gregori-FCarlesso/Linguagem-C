#include <stdio.h>

int main(){
	
	int tempoprovamin,hentrada,mentrada,hsaida,msaida,totalmin,horas,minutos;
	float porcento;
	
	printf("Digite o tempo de prova total disponivel em minutos:\n");
	scanf("%d",&tempoprovamin);
	printf("Digite o horario de entrada:\n");
	scanf("%d:%d",&hentrada,&mentrada);
	printf("Digite o horario de saida:\n");
	scanf("%d:%d",&hsaida,&msaida);
	
	if((hsaida*60+msaida)>(hentrada*60+mentrada)){
		totalmin = (hsaida*60+msaida)-(hentrada*60+mentrada);
	    horas = totalmin/60;
	    minutos = totalmin%60;
	}
	else{
		totalmin = (hsaida*60+msaida)-(hentrada*60+mentrada);
		totalmin = totalmin * (-1);
	    horas = totalmin/60;
	    minutos = totalmin%60;
	}
	
	porcento = ((float)totalmin/tempoprovamin)*100;
	
	printf("Tempo de permanencia: %02d:%02d\n",horas,minutos);
	
	if(porcento>100){
		printf("Necessario desconto de pontuacao (%.2f%%)",porcento);
	}
	else if(porcento>30){
		printf("Tempo de acordo (%.2f%%)",porcento);
	}
	else{
		printf("Candidato desclassificado (%.2f%%)",porcento);
	}	
}
