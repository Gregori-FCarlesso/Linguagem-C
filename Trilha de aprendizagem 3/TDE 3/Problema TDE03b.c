#include <stdio.h>

int main(){
	int n,avaliadores=20,nota,total=0,menor,maior,igualmaior,igualmenor;
	float media;
	
	for(n=1;n<=avaliadores;n++){
		
		do {
			printf("Digite a nota do avaliador %d (Entre 1 a 19): ",n);
			scanf("%d",&nota);
			
			if(nota<1 || nota>19)
		        printf("Entradas invalidas, verifique...\n");
			
		} while(nota<1 || nota>19);
		
		if(n==1){
		    menor=nota;
			maior=nota;
			igualmaior=1;
			igualmenor=1;
		}
		
		else{
			if(nota>maior){
			    maior=nota;
			    igualmaior=1;
		    }
		    else if(nota==maior)
		        igualmaior++;
		    
		    if(nota<menor){
			    menor=nota;
		        igualmenor=1;
		    }
		    else if(nota==menor)
		        igualmenor++;
		}	
		
	    total=total+nota;
	}
	media=(float)total/avaliadores;
	
	printf("\nMedia aritmetica: %.2f\n",media);
	printf("Menor nota: %d com %d ocorrencias\n",menor,igualmenor);
    printf("Maior nota: %d com %d ocorrencias\n",maior,igualmaior);
}
