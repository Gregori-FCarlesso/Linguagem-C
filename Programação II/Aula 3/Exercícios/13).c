#include <stdio.h>

unsigned int calculaDigitoSomaSimples(unsigned int valor)
{
   unsigned int soma=0, digito, resultado;
    while(valor!=0){
        digito = valor%10;
        soma += digito;
        valor = valor/10;
    }
    resultado = soma%10;
    return resultado;
}

int main()
{
    unsigned int valor;

    printf("Digite um valor: ");
    scanf("%u",&valor);

    printf("\nSeu codigo verificador: %u",calculaDigitoSomaSimples(valor));
}