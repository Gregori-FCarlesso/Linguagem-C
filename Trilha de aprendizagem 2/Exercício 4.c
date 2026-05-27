#include <stdio.h>
#include <conio.h>

int main()
{

// Declaração de variáveis 

    int av1,av2,av3,conceitofinal;
    float mediafinal;

// Instruções do programa

    printf("Calculo da Media\n");
    printf("Nota da Av1: ");
    scanf("%d",&av1);
    printf("Nota da Av2: ");
    scanf("%d",&av2);
    printf("Nota da Av3: ");
    scanf("%d",&av3);

    mediafinal = 6 / (1.0/av1 + 2.0/av2 + 3.0/av3);

    printf("\nMedia Final = %.2f",mediafinal);
    
// Verifica se aluno está aprovado...

    if(mediafinal>=6.0)
       printf("... APROVADO!");
    else
       printf("... reprovado.");
       
// ... e informa o conceito final

    if(mediafinal>9.0){
   	conceitofinal=4;
    }
    else if(mediafinal>8.0){
   	conceitofinal=3;
    } 
    else if(mediafinal>7.0){
    conceitofinal=2;
	}   
    else if(mediafinal>6.0){
    conceitofinal=1;
	}  
    else{
    conceitofinal=0;	
	}
			
    printf("\nConceito Final: %d",conceitofinal);       
    getch(); //... aguarda teclar algo antes de encerrar
}
