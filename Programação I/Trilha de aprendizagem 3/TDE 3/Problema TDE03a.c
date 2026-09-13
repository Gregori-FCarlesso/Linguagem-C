#include <stdio.h>

int main(){
	float pesodiarioA,pesodiarioB,totalA=0,totalB=0,total,meta,media;
	int dias=0;
	
	printf("Qual a meta de arrecadacao: ");
	scanf("%f",&meta);
	
	do{
		dias++;
		printf("\nArrecadacao diaria da equipe A no dia %d: ",dias);
		scanf("%f",&pesodiarioA);
		printf("Arrecadacao diaria da equipe B no dia %d: ",dias);
		scanf("%f",&pesodiarioB);
		
		totalA=totalA+pesodiarioA;
		totalB=totalB+pesodiarioB;
		
		if(totalA<=meta && totalB<=meta)
		    printf("Meta nao atingida... Proximo dia!\n");
		    
		if(totalA>meta || totalB>meta)
		    printf("Meta atingida!\n");
		
	} while(totalA<=meta && totalB<=meta);
	
	total = totalA+totalB;
	media = total/dias;
	
	printf("\nTotal arrecadado pela equipe A: %.2f\n",totalA);
	printf("Total arrecadado pela equipe B: %.2f\n",totalB);
	printf("Total geral arrecadado: %.2f\n",total);
	printf("Dias de campanha: %d\n",dias);
	printf("Media de arrecadacao diaria: %.2f\n",media);
	if(totalA>totalB)
	    printf("Equipe A arrecadou mais alimentos!");
	else if(totalA<totalB)
	    printf("Equipe B arrecadou mais alimentos!");
	else
	    printf("Empate na quantidade de arrecadacao!");
}
