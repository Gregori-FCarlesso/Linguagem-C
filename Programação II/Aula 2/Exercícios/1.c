#include <stdio.h>

int main()
{
	int idade;
	
	printf("Qual sua idade? ");
	scanf("%d",&idade);
	
	if(idade>=18)
		printf("\nVoce e maior de idade!");
	else
		printf("Voce nao e maior de idade");
}