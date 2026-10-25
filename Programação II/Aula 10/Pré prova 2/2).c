#include <stdio.h>
#include <string.h>

void easterEgg(){
	printf("Easter Egg ativado com sucesso!\n");
}

int main(){
	
	char senhaDigitada[21];
	
	printf("Digite uma senha: ");
	scanf("%s", senhaDigitada);
	
	if(strcmp(senhaDigitada, "ovoDePasco@") == 0){
		easterEgg();
	}
	
	return 0;
}
