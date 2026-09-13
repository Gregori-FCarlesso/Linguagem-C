#include <stdio.h>

int main()
{
	float altura, largura, comprimento;
    float superficie, volume;

    printf("Digite a altura da caixa: ");
    scanf("%f", &altura);

    printf("Digite a largura da caixa: ");
    scanf("%f", &largura);

    printf("Digite o comprimento da caixa: ");
    scanf("%f", &comprimento);

    volume = altura*largura*comprimento;
    superficie = 2*(altura*largura + altura*comprimento + largura*comprimento);

    printf("Volume da caixa: %.2f\n",volume);
    printf("Superficie da caixa: %.2f\n",superficie);
}