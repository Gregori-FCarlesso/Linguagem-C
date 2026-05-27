#include <stdio.h>
#include <string.h>
#include <locale.h>

float media(int x[5]){
	int i, soma = 0;
	for(i=0; i<5; i++){
		soma += x[i];
	}
	return soma / 5.0;
}
int main(){
	setlocale(LC_ALL, "Portuguese");
    int i, j[5];
    float n;
    
    puts("Digite 5 valores:");
    for (i=0; i<5; i++){
    	scanf("%d", &j[i]);
	}
	
	n = media(j);
	
	printf("A média é: %.2f", n);
}
