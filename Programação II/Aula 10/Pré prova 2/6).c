#include <stdio.h>
#include <string.h>
#define MAX 3

typedef struct {
 int codigo;
 int tipo; // 1 = casa, 2 = apto, 3 = terreno, 4 = sala térrea, 5 = pavilhão industrial
 float area; // em metros quadrados
 float valorAluguel; // em reais
 char bairro[40];
 } Imoveis; 

 int main(){
    Imoveis imoveis[MAX], aux;
    int i, j;

    for(i=0;i<MAX;i++){
        printf("\n---Imovel %d---\n", i+1);
        printf("Digite o codigo do imovel: ");
        scanf("%d", &imoveis[i].codigo);

        printf("Digite o tipo do imovel: ");
        scanf("%d", &imoveis[i].tipo);

        printf("Digite a area do imovel: ");
        scanf("%f", &imoveis[i].area);
        
        printf("Digite o valor do aluguel: ");
        scanf("%f", &imoveis[i].valorAluguel);

        getchar();
        printf("Digite o nome do bairro: ");
        fgets(imoveis[i].bairro, sizeof(imoveis[i].bairro), stdin);
        imoveis[i].bairro[strcspn(imoveis[i].bairro, "\n")] = '\0';
    }

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX-i-1;j++){
            if(imoveis[j].valorAluguel > imoveis[j+1].valorAluguel){
                aux = imoveis[j+1];
                imoveis[j+1] = imoveis[j];
                imoveis[j] = aux;
            }
        }
    }

    for(i=0;i<MAX;i++){
        if((imoveis[i].tipo == 2) && (imoveis[i].area > 60) && (imoveis[i].valorAluguel < 4500)){
            printf("\n--- Imovel %d ---\n", i+1);
            printf("Codigo do imovel: %d\n", imoveis[i].codigo);
            printf("Tipo do imovel: Apto\n");
            printf("Area do imovel: %.2f\n", imoveis[i].area);
            printf("Valor do aluguel: %.2f\n", imoveis[i].valorAluguel);
            printf("Nome do bairro: %s\n", imoveis[i].bairro);
        }
    }
    return 0;
 }