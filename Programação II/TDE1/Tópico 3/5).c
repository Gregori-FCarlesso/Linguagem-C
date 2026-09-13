#include <stdio.h>

int calcularIdade(int anoatual, int anonascimento);

int main(){

        int ano1, ano2;

        printf("Digite o ano atual: ");
        scanf("%d",&ano1);

        printf("Digite o ano que voce nasceu: ");
        scanf("%d",&ano2);

        printf("\nSua idade: %d\n", calcularIdade(ano1, ano2));
}

int calcularIdade(int anoatual, int anonascimento){

        return anoatual - anonascimento;
}