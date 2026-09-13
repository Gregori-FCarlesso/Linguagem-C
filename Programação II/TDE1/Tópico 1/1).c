#include<stdio.h>

int main(){
    float c, f;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &c);

    f = (c*(9.0/5.0)) + 32;

    printf("\nEm Fahrenheit: %.2f",f);

    return 0;
}