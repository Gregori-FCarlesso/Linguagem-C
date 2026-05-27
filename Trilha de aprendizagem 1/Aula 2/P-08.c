#include <stdio.h>

int main(){
	
	int n1, n2, n3, n4, soma, digito;
	
	printf("Digite um digito de ate 4 algarismos: \n");
	scanf("%d", &digito);
	
	n1 = digito/1000;
	digito = digito%1000;
	n2 = digito/100;
	digito = digito%100;
	n3 = digito/10;
	digito = digito%10;
	n4 = digito;	
	
	soma = n1+n2+n3+n4;
	printf("Soma dos digitos: %d", soma);	
	
	
}
