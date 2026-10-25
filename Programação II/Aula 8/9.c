#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct{
    float pressao_arterial;
    int nivel_prioridade;
} Triagem;

typedef struct{
    int id;
    char nome[25];
    Triagem dados_triagem;
} Paciente;

void listarPacientesPrioridade(const Paciente lista[], int n, int prioridade_alvo);

int main(){
    int i, n, prioridade_alvo = 3;
    Paciente lista[MAX];

    printf("Quantos pacientes tem? ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("--- Dados do paciente %d ---\n", i+1);

        printf("ID: ");
        scanf("%d", &lista[i].id);
        getchar();

        printf("Nome: ");
        fgets(lista[i].nome, sizeof(lista[i].nome), stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';

        printf("Pressao arterial: ");
        scanf("%f", &lista[i].dados_triagem.pressao_arterial);

        printf("Nivel de prioridade: ");
        scanf("%d", &lista[i].dados_triagem.nivel_prioridade);
    }

    listarPacientesPrioridade(lista, n, prioridade_alvo);

    
    return 0;
}

void listarPacientesPrioridade(const Paciente lista[], int n, int prioridade_alvo){
    int i;

    printf("\nProximos pacientes para atendimento: ");
    for(i=0;i<n;i++){
        if(lista[i].dados_triagem.nivel_prioridade == prioridade_alvo){
            printf("\n--- Paciente %s ---\n", lista[i].nome);
            printf("ID: %d\n", lista[i].id);
            printf("Pressao arterial: %.2f\n", lista[i].dados_triagem.pressao_arterial);
            printf("Nivel de prioridade: %d\n", lista[i].dados_triagem.nivel_prioridade);
        }
    }
}