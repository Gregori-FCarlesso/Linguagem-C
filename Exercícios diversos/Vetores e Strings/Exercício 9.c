#include <stdio.h>

int main(){
	
	int i=0, vogais=0;
	char n[30];
	
	printf("Digite uma palavra:\n");
	fgets(n, 30, stdin);
	
	while(n[i] != '\0' && n[i] != '\n'){
		if(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' 
		|| n[i] == 'A' || n[i] == 'E' || n[i] == 'I' || n[i] == 'O' || n[i] == 'U'){
			vogais++;
		}
		i++;
	}
	printf("Vogais: %d", vogais);
}
