#include <stdio.h>

int main(){
	int ingresso, ns, lo;
	
	printf("Digite os numeros do ingresso: \n");
	scanf("%d", &ingresso);
	
	ns = (ingresso/1000000) % 10;
	lo = (ingresso/10000) % 100;
	
	printf("Numero da sala: %d\n", ns);
	printf("Numero do lugar de ocupacao: %d\n", lo);
	
	if (ns%2==0){
		printf("Sala localizada no bloco A (Salas pares)");
	}
	else {
		printf("Sala localizada no bloco B (Salas impares)");
	}
}
