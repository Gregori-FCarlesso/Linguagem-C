#include <stdio.h>

int main (){
	float n;
	
	printf("Digite a nota do aluno:\n");
	scanf("%f", &n);
	
	if(n >= 6){
		printf("Aprovado");
	}
	else if(n >= 4 && n <= 6){
		printf("Recuperacao");
	}
	else {
		printf("Reprovado");
	}
}
