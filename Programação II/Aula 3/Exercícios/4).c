#include <stdio.h>
int pariedade(int n)
{
	if(n%2 == 0)
		return 1;
	else
		return 0;
}

int main(){
	int n,resultado;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	resultado = pariedade(n);
	
	if(resultado==1)
		printf("\nSeu numero e par!");
	else
		printf("\nSeu numero e impar!");
	
	return 0;
}
