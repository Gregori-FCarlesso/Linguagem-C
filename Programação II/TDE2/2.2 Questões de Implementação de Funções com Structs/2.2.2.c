#include <stdio.h>
#include <string.h>

typedef struct { 
    int codigo; 
    char nome[50]; 
    float preco; 
    int quantidade; 
} Produto;

int buscarProdutoPorCodigo(const Produto estoque[], int n, int codigo);

int main(){
    int n, i, codigo, indice;

    printf("Quantos produtos tem? ");
    scanf("%d", &n);

    Produto estoque[n];

    for(i=0;i<n;i++){
        printf("\n--- Produto %d ---\n", i+1);

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

    printf("\nDigite o codigo do produto que deseja buscar? ");
    scanf("%d", &codigo);

    indice = buscarProdutoPorCodigo(estoque, n, codigo);

    if(indice == -1)
        printf("\nProduto nao encontrado!\n");
    else
        printf("\nIndice do produto: %d\n", indice);

    return 0;
}

int buscarProdutoPorCodigo(const Produto estoque[], int n, int codigo){
    int i;

    for(i=0;i<n;i++){
        if(estoque[i].codigo == codigo)
            return i;
    }

    return -1;
}