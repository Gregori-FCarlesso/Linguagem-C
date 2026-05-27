#include <stdio.h>

int main()
{
    int menor, maior;
    int aux;  // variável auxiliar para trocar os valores

    printf("Digitar menor: ");
    scanf("%d",&menor);
    printf("Digitar maior: ");
    scanf("%d",&maior);
    
    if(menor<maior){
    	printf("Entrada OK.");
	}
    else if(menor==maior){
    	printf("Numeros iguais.");
	} 
      else{  // trocar os valor entre 'maior' e 'menor'
         aux = maior;
		 maior = menor;
         menor = aux;
         printf("Troca valores: %d < %d.",menor,maior);
      } 
}
