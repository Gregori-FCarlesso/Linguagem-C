#include <stdio.h>

int main(){
	int n1,n2,n3,n4,total,codigo;
	float p1,p2,p3,p4,dporcento,fporcento,indicemedio;
	
	printf("Digite o codigo do cargo:\n");
	scanf("%d",&codigo);
	
	printf("Digite a quantidade de notas 1:\n");
	scanf("%d",&n1);
	printf("Digite a quantidade de notas 2:\n");
	scanf("%d",&n2);
	printf("Digite a quantidade de notas 3:\n");
	scanf("%d",&n3);
	printf("Digite a quantidade de notas 4:\n");
	scanf("%d",&n4);
	
	total = n1+n2+n3+n4;
	
	if(total>=20){
		indicemedio = (float)(n1*1+n2*2+n3*3+n4*4)/total;
		dporcento = ((float)(n3+n4)/total)*100;
		fporcento = ((float)(n1+n2)/total)*100;
		p1 = ((float)n1/total)*100;
		p2 = ((float)n2/total)*100;
		p3 = ((float)n3/total)*100;
		p4 = ((float)n4/total)*100;
		
		printf("Codigo do cargo: %d\n",codigo);
		printf("Indice medio das notas: %.2f\n",indicemedio);
		printf("Porcentagem p1: %.2f%%\n",p1);
		printf("Porcentagem p2: %.2f%%\n",p2);
		printf("Porcentagem p3: %.2f%%\n",p3);
		printf("Porcentagem p4: %.2f%%\n",p4);
		
		if(dporcento>50){
			printf("Prova considerada dificil (%.2f%%)",dporcento);
		}
		else{
			printf("Prova nao dificil (%.2f%%)",fporcento);
		}
	}
	else{
		printf("Pesquisa descartada pois tem menos de 20 avaliacoes.");
	}
}
