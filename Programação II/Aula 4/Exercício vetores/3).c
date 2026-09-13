#include <stdio.h>

int main(){

	int idade[19] , i, maisnovas, qntnovas=0, maisvelhas, qntvelhas=0, aux, ordenado=0, n;
	
	printf("Digite a idade de cada pessoa da sala: ");
	
	for (i=0;i<19;i++)
	{
    	scanf("%d", &idade[i]);
    	
    	if(i==0)
    	{
    		maisnovas = idade[i];
    		maisvelhas = idade[i];
    		qntnovas=1;
    		qntvelhas=1;
		}
		
		else{
			
			if(maisnovas>idade[i])
			{
				maisnovas = idade[i];
				qntnovas=1;
			}
		
			else if(maisnovas==idade[i])
			{
				qntnovas++;
			}
			
			if(maisvelhas<idade[i]){
		
				maisvelhas = idade[i];
				qntvelhas=1;
			}
		
			else if(maisvelhas==idade[i]){
		
				qntvelhas++;
			}
		}
	}
		
	printf("\nA idade mais nova: %d com %d pessoas tendo a mesma idade\n",maisnovas,qntnovas);
	printf("\nA idade mais velha: %d com %d pessoas tendo a mesma idade\n",maisvelhas,qntvelhas);
	
	for(i=0;i<19-1 && ordenado==0;i++)
	{
		ordenado = 1;
		for(n=0;n<19-1-i;n++)
		{
			if(idade[n]>idade[n+1])
			{
				aux = idade[n+1];
				idade[n+1] = idade[n];
				idade[n] = aux;
				ordenado = 0;
			}
		}
	}
	printf("\nMediana: %d\n",idade[9]);
}