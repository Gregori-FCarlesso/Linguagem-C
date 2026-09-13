#include <stdio.h>

int produtoImpar(int M[8][8]){
	
	int i, j, maior, coluna, linha, impar=0;

	for(i=0;i<8;i++){
		for(j=0;j<8;j++){

			if(M[i][j]%2!=0){

				if(impar==0){
					maior = M[i][j];
					linha = i;
					coluna = j;
					impar=1;
				}	

				else if(M[i][j]>maior){
					maior = M[i][j];
					linha = i;
					coluna = j;
				}
			}
		}
	}

	if(impar==1)
		return linha * coluna;
	else
		return -1;
}

int main(){
	
	int M[8][8];
	int i, j;
		
	printf("Digite os 64 valores da matriz: ");
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
		printf("Valor da posicao [%d][%d]: ",i+1,j+1);
		scanf("%d",&M[i][j]);
		}
	}

if(produtoImpar(M)!=-1){
	printf("\nProduto da matriz: %d\n",produtoImpar(M));
}

else{
	printf("\nMatriz nao possui valor impar\n");
}
	return 0;
}