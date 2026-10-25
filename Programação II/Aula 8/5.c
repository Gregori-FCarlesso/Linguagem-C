#include <stdio.h>

typedef struct{
    int numero_conta;
    float saldo;
    char titular[30];
} ContaBancaria;

int realizarSaque(ContaBancaria *c, float valor);

int main(){

    ContaBancaria conta;
    float valor;

    printf("Digite o numero da conta: ");
    scanf("%d", &conta.numero_conta);

    printf("Digite o saldo da conta: ");
    scanf("%f", &conta.saldo);

    printf("Digite o nome do titular da conta: ");
    getchar();
    fgets(conta.titular, sizeof(conta.titular), stdin);

    printf("Digite o valor que voce quer sacar: ");
    scanf("%f", &valor);

    if(realizarSaque(&conta, valor) == 1){
        printf("\n\n --- Conta: %d ---", conta.numero_conta);
        printf("\ntitular: %s", conta.titular);
        printf("Saldo retirado com sucesso!\n");
        printf("Saldo total: %.2f\n", conta.saldo);
    }
    else
        printf("\nSaldo insuficiente!\n");
    
    return 0;
}

int realizarSaque(ContaBancaria *c, float valor){

    if(c->saldo >= valor){
        c->saldo = c->saldo - valor;
        return 1;
    }
    else
        return 0;
}