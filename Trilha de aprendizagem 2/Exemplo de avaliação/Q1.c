#include <stdio.h>

int main(){
	
	int codigo,cargo,matricula,resto;
	
	printf("Digite o codigo do aluno:\n");
	scanf("%d",&codigo);
	
	cargo = (codigo/10000000)%10;
	matricula = (codigo/1000)%1000;
	
	printf("Codigo do curso: %d\n",cargo);
	printf("Matricula do curso: %d",matricula);
}
