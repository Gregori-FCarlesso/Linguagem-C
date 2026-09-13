#include <stdio.h>
#include <string.h>
#define tamanhomax 100

int main(){
	char frase[tamanhomax];
	int tamanho=0, i;
	
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	
	tamanho = strlen(frase);
	
	for(i=0;i<tamanho;i++){
		
		if(frase[i]=='z')
			frase[i]='a';
		
		else if(frase[i]=='Z')
			frase[i]='A';
		
		else if((frase[i]>='a' && frase[i]<='z') || (frase[i]>='A' && frase[i]<='Z'))
			frase[i] = frase[i] + 1;
	}
	
	printf("\n%s",frase);
	
	return 0;
}
