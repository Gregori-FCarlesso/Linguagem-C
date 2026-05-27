#include <stdio.h>

int main(){
    int n,termos,a=1,b=1,soma;
    
    printf("Digite a quantidade de termos: ");
    scanf("%d",&termos);
    
    printf("\nUtilizando o FOR:\n");
    
    for(n=0;n<termos;n++){
	    soma=a+b;
    	printf("%d, ",a);
    		
    	a=b;
    	b=soma;
	}
	
	printf("\n\nUtilizando o While:\n");
	
	n=0;
	a=1;
	b=1;
	
	while(n<termos){
		soma=a+b;
		printf("%d, ",a);
		
		a=b;
		b=soma;
		n++;
	}
	
	printf("\n\nUtilizando o Do While:\n");
	
	n=0;
	a=1;
	b=1;
	
	if(termos>=1){
		do{
		    soma=a+b;
			printf("%d, ",a);
			
			a=b;
			b=soma;
			n++;
		} while(n<termos);
	}
}

