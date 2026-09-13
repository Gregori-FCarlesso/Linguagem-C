#include <stdio.h>
#include <string.h>
#include <locale.h>

int parim(int num1){
	if(num1 % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	setlocale(LC_ALL, "Portuguese");
    int n, parimv;
    
    printf("Digite um valor:\n");
    scanf("%d", &n);
    
    parimv = parim(n);
    
    printf("Valor: %d", parimv);
}
