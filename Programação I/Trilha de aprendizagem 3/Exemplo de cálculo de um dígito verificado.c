#include <stdio.h>

int main(){
	int numero,aux,digito;
	int dverificador,posicao;
	
	printf("Numero: ");
	scanf("%d",&numero);
	aux=numero;
	dverificador=0;
	
	printf("\nPos Dig - Resultado\n");
	
	for(posicao=1;aux>0;posicao++){
		digito = aux%10;
		dverificador = dverificador+(digito*posicao);
		printf("%2d %3d  - %4d\n",posicao,digito,digito*posicao);
		aux = aux/10;
	}
	printf("\nDigito verificador: %d\n",dverificador);
	dverificador = dverificador%10;
	printf("Numero com DV: %d-%d",numero,dverificador);
}
