#include <stdio.h>

int main()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	if(numero>0)
		printf("Seu numero e positivo!");
		
	else if(numero==0)
		printf("Seu numero e o 0!");
	
	else
		printf("Seu numero e negativo");
}
