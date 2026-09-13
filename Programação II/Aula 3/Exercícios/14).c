#include <stdio.h>

short int dataValida(short int dia, short int mes, short int ano)
{
    int maxdias;
    if(mes<1 || mes>12 || ano<=0)
        return 0;

    if(mes==2){
        if((ano%4==0 && ano%100!=0) || ano%400==0)
            maxdias = 29;
        else
            maxdias = 28;
    }

    else if(mes==4 || mes==6 || mes==9 || mes==11)
        maxdias = 30;

    else
        maxdias = 31;

    if(dia>=1 && dia<=maxdias)
        return 1;
    else
        return 0;
}

int main()
{
    short int dia, mes, ano;

    printf("Digite uma data para ser validada: ");
    scanf("%hd/%hd/%hd",&dia,&mes,&ano);

    if(dataValida(dia,mes,ano)==1)
        printf("\nSua data e valida!");
    else
        printf("\nSua data nao e valida!");
}