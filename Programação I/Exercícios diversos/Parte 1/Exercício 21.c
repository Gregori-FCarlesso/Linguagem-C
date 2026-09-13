#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat[3][3], soma= 0, i, j;
	
	puts("Digite os valores da matriz:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &mat[i][j]);
			if(i == j){
				soma += mat[i][j];
			}
		}
	}
	printf("A soma é: %d", soma);
}
