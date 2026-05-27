#include <stdio.h>

int main(){
	
	char n[30];
	int i=0;
	
	puts("Digite uma palavra");
	fgets(n, 30, stdin);
	
	for(i = 0; n[i] != '\0' && n[i] != '\n'; i++){
		
	}
	printf("%d", i);
}
