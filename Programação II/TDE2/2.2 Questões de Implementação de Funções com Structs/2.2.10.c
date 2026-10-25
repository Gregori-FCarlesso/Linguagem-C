#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

Data somarDias(Data d, int dias);

int main(){
    int dias;
    Data d;

    printf("Digite uma data (no formato dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);

    printf("Digite uma quantidade de dias para somar: ");
    scanf("%d", &dias);

    d = somarDias(d, dias);
 
    printf("\nNova data: %02d/%02d/%04d\n", d.dia, d.mes, d.ano);

    return 0;
}

Data somarDias(Data d, int dias){
    int soma;

    soma = (d.dia - 1) + (d.mes - 1) * 30  + (d.ano * 360) + dias;

    d.ano = soma/360;
    soma = soma%360;
    d.mes = soma/30 + 1;
    d.dia = soma%30 + 1;

    return d;
}