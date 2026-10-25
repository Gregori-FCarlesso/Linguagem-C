#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){
    char alunos[10][50], nome[50];
    int i=0, opcao, encontrou=0, total_alunos=0;

    do{
        printf("\n--- Menu interativo ---\n");
        printf("(1) Cadastrar Aluno; (2) Listar Todos os Alunos; (3) Buscar Aluno por Nome; (4) Sair\n");
        scanf("%d", &opcao);
        getchar();

        if(opcao==1){
            if(total_alunos < 10){
                printf("Aluno %d: ", total_alunos + 1);
                fgets(alunos[total_alunos], sizeof(alunos[total_alunos]), stdin);
                alunos[total_alunos][strcspn(alunos[total_alunos], "\n")] = '\0';
                total_alunos++;
            }
            else
                printf("Limite maximo de alunos cadastrados!");
        }

        else if(opcao==2){
            for(i=0;i<total_alunos;i++){
                printf("Aluno %d: %s\n", i+1, alunos[i]);
            }
        }

        else if(opcao==3){
            printf("Qual e o nome do aluno que voce quer buscar? ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            encontrou = 0;
            for(i=0;i<total_alunos;i++){
                if(strstr(alunos[i], nome) != 0){
                    printf("Nome do aluno: %s\n", alunos[i]);
                    encontrou = 1;
                }
            }

            if(encontrou == 0){
                printf("Nenhum aluno encontrado com esse nome.\n");
            }
        }

        else if(opcao==4){
            break;
        }

        else{
            printf("Digite um numero entre o intervalo passado!");
        }

    } while(opcao!=4);

    return 0;
}