#include <stdio.h>

int main()
{
	int area,lado;
	
	printf("Digite o lado do quadrado: ");
	scanf("%d",&lado);
	
	area = lado * lado;
	
	printf("Area do quadrado: %d",area);
	
	return 0;
}
