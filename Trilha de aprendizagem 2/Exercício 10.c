#include <stdio.h>

int main(){
	
	int n1,n2,n3,n4,total;
	float indice,sapercentual,insapercentual;
	 
	printf("Digite a quantidade de notas 1:\n");
	scanf("%d", &n1);
	printf("Digite a quantidade de notas 2:\n");
	scanf("%d", &n2);
	printf("Digite a quantidade de notas 3:\n");
	scanf("%d", &n3);
	printf("Digite a quantidade de notas 4:\n");
	scanf("%d", &n4);
	
	total = n1+n2+n3+n4;
	
	if(total>=20){
		indice = (1*n1 + 2*n2 + 3*n3 + 4*n4)/(float)total;
		sapercentual = ((float)(n3+n4)/total)*100;
		insapercentual = ((float)(n1+n2)/total)*100;
		
		printf("Indice medio = %.2f\n", indice);
        printf("Percentual de satisfacao = %.2f%%\n", sapercentual);
        printf("Percentual de insatisfacao = %.2f%%\n", insapercentual);
        
        if(sapercentual>50){
        	printf("Avaliacao satisfatoria.\n");
		}
		else{
			printf("Avaliacao nao satisfatoria.\n");
		}
		}
	else{
		printf("Quantidade insuficiente de avaliacoes.\n");
	}
}
