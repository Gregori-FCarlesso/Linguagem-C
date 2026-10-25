#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct{
    char nome[35];
    int vitorias;
    int empates;
    int derrotas;
    int pontos_totais;
} TimeFutebol;

void atualizarPontuacao(TimeFutebol *t); // *t = "tabela[]"

void ordenarTabela(TimeFutebol tabela[], int n); // times[] = tabela[]

int main(){

    int i, n;
    TimeFutebol times[MAX];

    printf("Quantos times de futebol tem? ");
    scanf("%d", &n);
    getchar();

    for(i=0;i<n;i++){
        printf("\n--- Time %d ---\n", i+1);
        printf("Nome: ");
        fgets(times[i].nome, sizeof(times[i].nome), stdin);
        times[i].nome[strcspn(times[i].nome, "\n")] = '\0';
        printf("Vitorias: ");
        scanf("%d", &times[i].vitorias);
        printf("Empates: ");
        scanf("%d", &times[i].empates);
        printf("Derrotas: ");
        scanf("%d", &times[i].derrotas);
        getchar();
    }

    for(i=0;i<n;i++){
        atualizarPontuacao(&times[i]);
    }

    ordenarTabela(times, n);

    return 0;
}

void atualizarPontuacao(TimeFutebol *t){
    t->pontos_totais = t->vitorias * 3 + t->empates;
}

void ordenarTabela(TimeFutebol tabela[], int n){
    int i, j, ordenado=0; 
    TimeFutebol aux;

    for(i=0;i<n && ordenado==0;i++){
        ordenado = 1;
        for(j=0;j<n-i-1;j++){
            if(tabela[j].pontos_totais<tabela[j+1].pontos_totais){
                aux = tabela[j+1];
                tabela[j+1] = tabela[j];
                tabela[j] = aux;
                ordenado = 0;
            }
        }
    }

    printf("\n\n---Times em ordem decrescente---\n");
    for(i=0;i<n;i++){
        printf("Time %d: %s com %d pontos totais\n", i+1, tabela[i].nome, tabela[i].pontos_totais);
    }
}