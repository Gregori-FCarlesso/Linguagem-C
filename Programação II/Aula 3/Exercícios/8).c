#include <stdio.h>

char letramaiuscula(char letra)
{
    if(letra>='a' && letra<='z')
        letra = letra - 'a' + 'A';

    return letra;
}

int main()
{
    char letra;

    printf("Digite uma letra: ");
    scanf("%c",&letra);

    printf("\nLetra maiuscula: %c",letramaiuscula(letra));
}