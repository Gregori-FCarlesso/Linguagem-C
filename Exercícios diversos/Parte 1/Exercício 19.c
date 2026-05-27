#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int mat[2][2], i, j;
	
	printf("Digite os valores da matriz:\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &mat[i][j]);
		}
	}
    printf("Os valores são:\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ", mat[i][j]);
		}
	}
	
}
