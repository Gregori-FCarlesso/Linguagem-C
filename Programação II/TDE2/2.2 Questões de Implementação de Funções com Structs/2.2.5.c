#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int compararDatas(Data d1, Data d2);

int main(){
    int resultado;
    Data d1, d2;

    printf("Digite a data 1 (no formato dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);

    printf("Digite a data 2 (no formato dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);

    resultado = compararDatas(d1, d2);

    if(resultado == -1)
        printf("\nA data 1 e anterior a data 2!\n");
    else if(resultado == 1)
        printf("\nA data 1 e posterior a data 2!\n");
    else
        printf("\nAs datas sao iguais!\n");

    return 0;
}

int compararDatas(Data d1, Data d2){

    if(d1.ano < d2.ano)
        return -1;
    else if(d1.ano > d2.ano)
        return 1;
    else if(d1.mes < d2.mes)
        return -1;
    else if(d1.mes > d2.mes)
        return 1;
    else if(d1.dia < d2.dia)
        return -1;
    else if(d1.dia > d2.dia)
        return 1;
    else
        return 0;
}