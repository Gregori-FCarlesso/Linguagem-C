#include <stdio.h>
#include <string.h>
#include <locale.h>

int soma(int num1, int num2){
	return num1 + num2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    int x, y, s;
    
    printf("Digite um valor:\n");
    scanf("%d", &x);
    printf("Digite outro valor:\n");
    scanf("%d", &y);
    
    s = soma(x, y);
    
    printf("O valor da soma é: %d", s);
}
