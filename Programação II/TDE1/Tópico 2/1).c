#include<stdio.h>

int ehPar(int numero)
{
    if(numero%2==0)
    {
        return 1;
    }
    else
        return 0;
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(ehPar(numero)==1)
        printf("\nNumero par!\n");
    else
        printf("\nNumero impar!\n");
}