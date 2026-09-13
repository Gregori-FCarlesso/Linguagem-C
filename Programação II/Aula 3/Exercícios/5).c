#include <stdio.h>
float conversor(float c)
{
	float f = c * 1.8 + 32;
	return f;
}

int main(){
	float c;
	
	printf("Digite a temperatura: ");
	scanf("%f",&c);
	
	printf("\nTemperatura em Fahrenheit: %.2f",conversor(c));
	
	return 0;
}
