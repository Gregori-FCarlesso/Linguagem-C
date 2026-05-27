#include <stdio.h>

int main(){
	int primeiro,ultimo,divisor,divisores=0,num;
	
	printf("Digite o primeiro e o ultimo numero do teste de numeros primos (numeros naturais): ");
	scanf("%d %d",&primeiro,&ultimo);
	
	while(primeiro<0 || ultimo<0 || primeiro>ultimo){
		if(primeiro<0 || ultimo<0){
			printf("Ops! Os numeros devem ser naturais. Entrar novamente...\n");
			scanf("%d %d",&primeiro,&ultimo);
		}
		if(primeiro>ultimo){
			printf("Observar intervalo numerico (inicio e fim). Entrar novamente...\n");
			scanf("%d %d",&primeiro,&ultimo);
		}
	}
	
	for(num=primeiro;num<=ultimo;num++){
		if(num < 2) continue;
		divisores=0;
		for(divisor=2;divisor<num;divisor++){
			if(num%divisor==0)
			    divisores++;
		}
	    if(divisores==0)
		    printf("o numero %d eh primo.\n",num);
	}
}
