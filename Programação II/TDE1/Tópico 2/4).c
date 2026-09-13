#include<stdio.h>

float metrosporsegundo(float velocidade)
{
    float metrosporsegundo = velocidade / 3.6;
    return metrosporsegundo;
}

int main(){
    float velocidade;
    
    printf("Digite uma velocidade: ");
    scanf("%f",&velocidade);

    printf("\nEm metros por segundos: %.2f\n", metrosporsegundo(velocidade));
}