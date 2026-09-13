#include <stdio.h>

int main(){
	
	int numero,chute,contador=0;
	
	do{
		printf("Digite um numero para tentarem advinhar (1 a 20): ");
		scanf("%d",&numero);
		
		if(numero<1 || numero>20){
			printf("\nDigite um numero entre 1 a 20:\n");
		}
	} while(numero<1 || numero>20);
	
	do{
		printf("Chute um numero: ");
	    scanf("%d",&chute);
	    
	    while(chute<1 || chute>20){
	    	printf("Digite um numero entre 1 a 20.\n");
	    	scanf("%d",&chute);
		}
		
	    contador++;
	    
	    if(chute>numero){
		    printf("Errado, o numero e menor que %d.\n",chute);
		}
		else if(chute<numero){
			printf("Errado, o numero e maior que %d.\n",chute);
		}
		
	} while(chute!=numero);
	
	printf("Acertou em %d tentativas.",contador);	
}
