#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

void ordenarProdutosPorPreco(Produto estoque[], int n);

int main(){
    int i, n;

    printf("Quantos produtos tem? ");
    scanf("%d", &n);
    Produto estoque[n];

    for(i=0;i<n;i++){
        printf("--- Produto %d ---\n", i+1);
        
        printf("Codigo: ");
        scanf("%d", &estoque[i].codigo);

        getchar();
        printf("Nome: ");
        fgets(estoque[i].nome, sizeof(estoque[i].nome), stdin);
        estoque[i].nome[strcspn(estoque[i].nome, "\n")] = '\0';

        printf("Preco: ");
        scanf("%f", &estoque[i].preco);

        printf("Quantidade: ");
        scanf("%d", &estoque[i].quantidade);
    }

    ordenarProdutosPorPreco(estoque, n);

    printf("\nProduto em ordem crescente de precos: \n");
    for(i=0;i<n;i++){
        printf("\n--- Produto %d ---\n", i+1);
        printf("Codigo: %d\n", estoque[i].codigo);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Preco: %.2f\n", estoque[i].preco);
        printf("Quantidade: %d\n", estoque[i].quantidade);
    }

    return 0;
}

void ordenarProdutosPorPreco(Produto estoque[], int n){
    int i, j;
    Produto aux;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(estoque[j].preco > estoque[j+1].preco){
                aux = estoque[j+1];
                estoque[j+1] = estoque[j];
                estoque[j] = aux;
            }
        }
    }
}