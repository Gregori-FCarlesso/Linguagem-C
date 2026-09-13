#include <stdio.h>

int calculobissexto(int ano)
{
    if((ano%4==0 && ano%100!=0) || ano%400==0)
        return 1;
    else
        return 0;
}

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d",&ano);

    if(calculobissexto(ano)==1)
        printf("\nSeu ano e bissexto");
    else
        printf("\nNao e ano bissexto!");
}