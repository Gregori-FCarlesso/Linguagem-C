#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat[3][3], i, j, soma;
	
	printf("Digite os valores da matriz:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &mat[i][j]);
			soma+=mat[i][j];
		}
	}
	printf("Soma dos valores: %d", soma);
}
