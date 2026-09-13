#include <stdio.h>

int main(){
	int classificacao[6];
	int colocacao,colocado,contador;
	int semana, idx;
	
	printf("Classificacao do filme nas semanas\n");
	
	for(semana=1;semana<=6;semana++)
	{
		printf("Semana %d - Colocacao? ",semana);
		scanf("%d",&colocacao);
		classificacao[semana-1]=colocacao;
	}
	
	printf("\nNo VETOR...\n");
	for(idx=0;idx<6;idx++)
	printf("Idx %d [%2d]\n",idx,classificacao[idx]);
	
	printf("\nQuantas semanas o filme ficou na colocacao? ");
	scanf("%d",&colocado);
	contador=0;
	for(idx=0;idx<12;idx++)
	{
		if(classificacao[idx]==colocado)
		{
		    printf("\nNa semana %d",idx+1);
		    contador=contador+1;
		}
	}
	if(contador==0)
	    printf("\n> Nenhuma semana.");
	else
	    printf("\n> Em %d semanas",contador);
}
