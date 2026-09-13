#include <stdio.h>

int main()
{
	int n, nota=0, soma=0, qtdnotas=0;
    float media;

    printf("Digite as notas para ser feita a media aritmetica:\n");
    printf("Valores entre 1 e 100 (-1 para finalizar)\n");

    for(n=1;nota!=-1;n++)
    {
        printf("\nDigite a nota %d: ",n);
        scanf("%d", &nota);

        if(nota == -1)
            break;

        if(nota>=1 && nota<=100)
        {
            soma+=nota;
            qtdnotas++;
        }
        else
            printf("Valores fora do limite exigido!\n");
    }

    media = (float)soma/qtdnotas;
    printf("\nMedia aritmetica das notas: %.2f", media);
	
	return 0;
}