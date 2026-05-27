#include <stdio.h>

int main(){
	
	int i, n[6];
	float media, soma;
	
	printf("Digite as 6 notas do aluno:\n");
	for(i=0; i<6; i++){
		scanf("%d", &n[i]);
		soma += n[i];
	}
	media = soma / 6;
	printf("Media das notas: %.2f\n", media);
}
