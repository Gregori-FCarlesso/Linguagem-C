#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
    float media;
} Aluno;

int filtrarAlunosAprovados(const Aluno turma[], int n, Aluno aprovados[], float media_minima);

int main(){
    int n, i, quantidade;
    float media_minima;

    printf("Quantos alunos tem? ");
    scanf("%d", &n);

    Aluno turma[n];
    Aluno aprovados[MAX];

    printf("Qual media minima? ");
    scanf("%f", &media_minima);

    for(i=0;i<n;i++){
        printf("\n--- Aluno %d ---\n", i+1);

        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);

        getchar();
        printf("Nome: ");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        turma[i].nome[strcspn(turma[i].nome, "\n")] = '\0';

        printf("Nota 1: ");
        scanf("%f", &turma[i].notas[0]);
        printf("Nota 2: ");
        scanf("%f", &turma[i].notas[1]);
        printf("Nota 3: ");
        scanf("%f", &turma[i].notas[2]);

        turma[i].media = (turma[i].notas[0] + turma[i].notas[1] + turma[i].notas[2]) / 3.0;
    }

    quantidade = filtrarAlunosAprovados(turma, n, aprovados, media_minima);

    printf("\nQuantidade de alunos aprovados: %d\n", quantidade);

    printf("\nAprovados:\n\n");
    for(i=0;i<quantidade;i++){
        printf("--- Aluno %d ---\n", i+1);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Nota 1: %.2f\n", aprovados[i].notas[0]);
        printf("Nota 2: %.2f\n", aprovados[i].notas[1]);
        printf("Nota 3: %.2f\n", aprovados[i].notas[2]);
        printf("Media: %.2f\n", aprovados[i].media);
    }

    return 0;
}

int filtrarAlunosAprovados(const Aluno turma[], int n, Aluno aprovados[], float media_minima){
    int i, qntaprovados=0;

    for(i=0;i<n;i++){
        if(turma[i].media >= media_minima){
            aprovados[qntaprovados] = turma[i];
            qntaprovados++;
        }
    }

    return qntaprovados;
}