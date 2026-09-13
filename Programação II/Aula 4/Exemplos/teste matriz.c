#include <stdio.h>

int main(){

	int i, j, M[5][4];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Digite o valor da posicao %dx%d: ",i,j);
			scanf("%d",&M[i][j]);
		}	
	}
	
	printf("\n");

	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%8d",M[i][j]);
		}
		printf("\n");
	}
}
