#include <stdio.h>
#include <string.h>
#include <locale.h>

float media(float x[5]){                                     
	int i;
	float soma=0;
	
	for(i=0; i<5; i++){
		soma += x[i];
	}
	return soma / 5.0;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i; 
    float m, g[5];
    
    puts("Digite as 5 notas do aluno:");
	for(i=0; i<5; i++){
		scanf("%f", &g[i]);
	}
	
	m = media(g);
	
	if(m>=7){
		printf("Aprovado com média: %.2f", m);
	}
	else if(m<7 && m>=4){
		printf("Recuperação com média: %.2f", m);
	}
	else{
		printf("Reprovado com média: %.2f", m);
	}
}
