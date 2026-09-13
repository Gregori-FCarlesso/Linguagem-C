#include <stdio.h>

int main()
{
   int numero, chute;
   int contador;
	
   printf("Numero? ");
   scanf("%d",&numero);
   contador=0;
   do {
      printf("\nChuta um numero? ");
      scanf("%d",&chute);
      contador=contador+1;
      if(chute!=numero)
        printf("... errou.");
   } while(chute!=numero);
   printf("\nAcetou em %d tentativas!",contador);
}
