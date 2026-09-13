#include <stdio.h>

double calculoarea(double raio)
{
    double pi = 3.14;
    double area = pi * (raio)*(raio);
    return area;
}

int main()
{
    double raio;

    printf("Digite o raio do circulo: ");
    scanf("%lf",&raio);

    printf("\nArea do circulo: %.2lf",calculoarea(raio));
}