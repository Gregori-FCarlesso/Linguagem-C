#include <stdio.h>
#include <string.h>
#define MAX 100

int contaSequenciaNumerica(char linha[]);

int main(){
	
	char texto[MAX];
	
	printf("Digite um texto: ");
	fgets(texto, sizeof(texto), stdin);
	
	printf("\nSeu texto possui %d sequencias numericas!", contaSequenciaNumerica(texto));
	
	return 0;
}

int contaSequenciaNumerica(char linha[]){
	int i, sequencia_ativa=0, ehnumero=0, sequencias=0, virgula=0;
	
	for(i=0; linha[i]!='\0'; i++){
		if((linha[i]>='0' && linha[i]<='9')){
			ehnumero = 1;
		}
		else
			ehnumero = 0;

		
		if((ehnumero==1) && (sequencia_ativa==0)){
			sequencias++;
			virgula = 0;

			if(linha[i+1]>='0' && linha[i+1]<='9'){
				sequencia_ativa = 1;
			}

			else if(linha[i+1]==',' && (linha[i+2]>='0' && linha[i+2]<='9')){
				sequencia_ativa = 1;
				virgula = 1;
			}

			else
				sequencia_ativa = 0;

		}

		else if((sequencia_ativa==1)){
			if(linha[i+1]>='0' && linha[i+1]<='9'){
				sequencia_ativa = 1;
			}

			else if(linha[i+1]==',' && (linha[i+2]>='0' && linha[i+2]<='9') && virgula==0){
				sequencia_ativa = 1;
				virgula = 1;
			}

			else if(ehnumero==1){
				sequencia_ativa = 0;
				virgula = 0;
			}
		}
		
	}
	
	return sequencias;
}
