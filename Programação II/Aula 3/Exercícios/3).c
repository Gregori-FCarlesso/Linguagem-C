#include <stdio.h>
int maiornumero(int numero1, int numero2)
{
	if(numero1>numero2)
		return numero1;
	else
		return numero2;
}

int main(){
	int n1,n2,resultado;
	
	printf("Digite o numero 1: ");
	scanf("%d",&n1);
	
	printf("Digite o numero 2: ");
	scanf("%d",&n2);
	
	resultado = maiornumero(n1,n2);
	
	printf("Maior numero: %d",resultado);
	
	return 0;
}
