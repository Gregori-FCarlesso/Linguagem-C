#include <stdio.h>

typedef struct{
    char nickname[25];
    int pontos;
    int nivel;
} Jogador;

void adicionarPontos(Jogador *j, int pontos_ganhos);

int main(){

    Jogador jogador1; // j = jogador1
    int pontos = 900;

    printf("Digite o nome do jogador: ");
    fgets(jogador1.nickname, sizeof(jogador1.nickname), stdin);

    printf("Pontos atuais: %d\n", jogador1.pontos);

    printf("Digite a quantidade de pontos que o jogador ganhou: ");
    scanf("%d", &pontos);

    adicionarPontos(&jogador1, pontos);
    
    printf("--- Jogador: %s ---\n", jogador1.nickname);
    printf("Pontos totais: %d\n", jogador1.pontos);
    printf("Nivel: %d\n", jogador1.nivel);

    return 0;
}

void adicionarPontos(Jogador *j, int pontos_ganhos){
    j->pontos += pontos_ganhos;
    j->nivel = pontos_ganhos / 1000;
}