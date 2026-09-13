#include <stdio.h>

int main()
{
	int n,resto,par,divisao;
	
	printf("Numeros pares entre 1 e 150:\n");
	
	for(n=1;n<=150;n++)
	{
		divisao = n % 2;
		if(divisao==0)
			printf("O numero %d e par.\n",n);
	}
}
