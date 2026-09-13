#include <stdio.h>
#include <string.h>
#define tamanhomax 100

void tirarvogais(char frase[tamanhomax]){
    int i;
    int tamanho;

    tamanho = strlen(frase);

    for(i=0;i<tamanho;i++){
        if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u' ||
        frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U')
            frase[i] = '_';
    }

}

int main(){
	char frase[tamanhomax];
	
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tirarvogais(frase);

    printf("\nResultado final: %s\n",frase);

	return 0;
}