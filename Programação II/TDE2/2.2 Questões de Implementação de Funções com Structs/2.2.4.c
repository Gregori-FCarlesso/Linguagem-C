#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
    float media;
} Aluno;

Aluno obterMelhorAluno(const Aluno turma[], int n);

int main(){
    int n, i;

    printf("Quantos alunos tem? ");
    scanf("%d", &n);

    Aluno turma[n];
    Aluno aluno_melhor;

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

    aluno_melhor = obterMelhorAluno(turma, n);

    printf("\nDados do aluno com maior media:\n\n");
    printf("Matricula: %d\n", aluno_melhor.matricula);
    printf("Nome: %s\n", aluno_melhor.nome);
    printf("Nota 1: %.2f\n", aluno_melhor.notas[0]);
    printf("Nota 2: %.2f\n", aluno_melhor.notas[1]);
    printf("Nota 3: %.2f\n", aluno_melhor.notas[2]);
    printf("Media: %.2f\n", aluno_melhor.media);

    return 0;
}

Aluno obterMelhorAluno(const Aluno turma[], int n){
    int i;
    Aluno turma_maiorMedia;

    for(i=0;i<n;i++){
        if(i==0)
            turma_maiorMedia = turma[i];

        if(turma[i].media > turma_maiorMedia.media)
            turma_maiorMedia = turma[i];
    }

    return turma_maiorMedia;
}