#include <stdio.h>

int main(){

	int temp[14],i,acima=0;
	float media,soma;
	
	printf("Digite a temperatura em cada dia: \n");
	
	for (i=0;i<14;i++)
	{
    	scanf("%d", &temp[i]);
    	soma += temp[i];
	}
	
	media = soma/14.0;
	
	
	for (i=0;i<14;i++)
	{
    	if(temp[i]>media)
    		acima++;
	}
	
	printf("\nAcima da media (%.2f): %d\n",media,acima);	

}
