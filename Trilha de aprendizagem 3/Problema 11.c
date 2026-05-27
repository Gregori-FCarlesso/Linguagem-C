#include <stdio.h>

int main(){
    long int matricula,aux;
    int digito,posicao,dv,dv1,dv2;
    
    printf("Digite a matricula: ");
    scanf("%ld",&matricula);
    aux=matricula;
    dv=0;
    
    for(posicao=1;aux>0;posicao++){
    	digito=aux%10;
    	
    	if(posicao%2==0)
    		dv=dv+(digito*2);
		else
		    dv=dv+digito;
		
		aux=aux/10;
	}
	dv2=dv%10;
	dv1=(dv/10)%10;
	printf("\nMatricula com DV: %ld-%d%d",matricula,dv1,dv2);
}

