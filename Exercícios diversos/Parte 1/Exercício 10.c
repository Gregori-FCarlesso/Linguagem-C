#include <stdio.h>

int main(){
	int n1, n2, soma, subt, mult, divi;
	char op;
	
	printf("Digite um primeiro valor:\n");
	scanf("%d", &n1);
	printf("Digite um segundo valor:\n");
	scanf("%d", &n2);
	printf("Digite a operação desejada (+, -, *, /):\n");
	scanf(" %c", &op);
	
	switch(op){
		case '+':
			soma = n1 + n2;
			printf("%d", soma);
			break;
		case '-':
			subt = n1 - n2;
			printf("%d", subt);
			break;
		case '*':
			mult = n1 * n2;
			printf("%d", mult);
			break;
		case '/':
			if(n2 != 0){
				divi = n1 / n2;
			    printf("%d", divi);
			}
			else {
				printf("Erro: divisao por zero.\n");
			}
			break;
	}
}
