#include <stdio.h>

int triangulovalido(int lado1, int lado2, int lado3)
{
    if(lado1>=(lado2+lado3))
        return 0;
    else if (lado2>=(lado1+lado3))
        return 0;
    else if (lado3>=(lado1+lado2))
        return 0;
    else
        return 1;
}

int main()
{
    int lado1, lado2 , lado3;

    printf("Digite o lado 1: ");
    scanf("%d",&lado1);

    printf("Digite o lado 2: ");
    scanf("%d",&lado2);

    printf("Digite o lado 3: ");
    scanf("%d",&lado3);

    if(triangulovalido(lado1,lado2,lado3)==1)
        printf("\nSeu triangulo e valido!");
    else
        printf("\nSeu triangulo nao e valido!");
}