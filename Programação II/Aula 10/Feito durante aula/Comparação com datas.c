#include <stdio.h>
#define N 3

typedef struct{
	int dia;
	int mes;
	int ano;
} Data;

typedef struct{
	char nome[30];
	Data dataCadastro;
	Data dataNascimento;
} Cliente;

int datacmp(Data d1, Data d2){
	if(d1.ano<d2.ano) return(-1);
	if(d1.ano>d2.ano) return(1);
	if(d1.mes<d2.mes) return(-1);
	if(d1.mes>d2.mes) return(1);
	if(d1.dia<d2.dia) return(-1);
	if(d1.dia>d2.dia) return(1);
	return 0;
}

void listarCliIntervalo(Cliente listaCli[], Data dataInicio, Data dataFim){
	int i;
	
	for(i=0;i<N;i++){
	if(datacmp(listaCli[i].dataCadastro, dataInicio) >= 0 && datacmp(listaCli[i].dataCadastro, dataFim) <= 0)
		printf("%s\n", listaCli[i].nome);
	}
}

int main(){
	Cliente listaCli[N] = {
		{"Joao", {9, 10, 2026}, {7, 10, 2005}},
		{"Maria", {30, 9, 2025}, {12, 1, 2006}},
		{"Daniel", {21, 3, 2026}, {28, 7, 1980}}
	};

	Data dataInicio = {1, 1, 2026};
	Data dataFim = {31, 12, 2026};
	
	listarCliIntervalo(listaCli, dataInicio, dataFim);
}
