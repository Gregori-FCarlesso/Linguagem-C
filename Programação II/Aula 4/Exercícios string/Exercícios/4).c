#include <stdio.h>
#include <string.h>
#define tamanhomax 100

int main(){
	char nomecompleto[tamanhomax], nome1[tamanhomax];
	int i;
	
    printf("Digite seu nome completo: ");
    fgets(nomecompleto, sizeof(nomecompleto), stdin);

    for(i=0;nomecompleto[i]!=' ';i++){
        nome1[i] = nomecompleto[i];
    }
	
    nome1[i] = '\0';

    printf("\nSeu primeiro nome: %s\n",nome1);

	return 0;
}