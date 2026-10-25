#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
    float media;
} Aluno;

void media_turma(Aluno alunos[], float media_minima, int n);

int main(){
    int i, n;
    float media_minima;

    printf("Digite a media minima para passar: ");
    scanf("%f", &media_minima);

    printf("Quantos alunos tem? ");
    scanf("%d", &n);

    if(n < 1 || n > 30){
        printf("\nQuantidade invalida!\n");
        return 1;
    }

    Aluno alunos[n];

    printf("Digite os dados dos alunos:\n");
    for(i=0;i<n;i++){
        printf("\n--- Aluno %d ---\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        getchar();
        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Nota 1: ");
        scanf("%f", &alunos[i].notas[0]);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].notas[1]);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].notas[2]);

        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3.0;
    }

    media_turma(alunos, media_minima, n);

    return 0;
}

void media_turma(Aluno alunos[], float media_minima, int n){
    int i, indice_alunomelhor;
    float maior_media, soma=0, media_geral;

    printf("\nResultado do ano letivo:\n");
    for(i=0;i<n;i++){
        if(i==0){
                maior_media = alunos[i].media;
                indice_alunomelhor = i;
            }
            else{
                if(alunos[i].media > maior_media){
                    indice_alunomelhor = i;
                    maior_media = alunos[i].media;
                }
            }
        printf("\nMatricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota 1: %.2f\n", alunos[i].notas[0]);
        printf("Nota 2: %.2f\n", alunos[i].notas[1]);
        printf("Nota 3: %.2f\n", alunos[i].notas[2]);
        printf("Media: %.2f\n", alunos[i].media);
        
        if(alunos[i].media >= media_minima){
            printf("Situacao: APROVADO\n");
        }
        else
            printf("Situacao: REPROVADO\n");

        soma += alunos[i].media;
    }

    media_geral = (float)soma/n;

    printf("\nMedia geral da turma: %.2f\n", media_geral);
    printf("Melhor aluno %s - Media: %.2f\n", 
        alunos[indice_alunomelhor].nome, 
        alunos[indice_alunomelhor].media);
}