#include <stdio.h>

int main()
{
	int n,par;
	
	printf("Digite 10 numeros:\n");
	
	for(n=1;n<=10;n++)
	{
		printf("Digite o numero %d: ",n);
		scanf("%d",&n);
		
		if(n%2==0)
			par++;
	}
	
	printf("\nQuantidade de numeros ao quadrado: %d",par);
	
	return 0;
}
