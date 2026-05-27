#include <stdio.h>

int main()
{
   int numero, chute;
   int contador;
	
   do {
      printf("Numero? ");
      scanf("%d",&numero);
      if(numero<1 || numero>20)
        printf("> Numero entre 1 e 20, repita a entrada.\n");
   } while(numero<1 || numero>20);
   contador=0;
   do {
       printf("\nChuta um numero? ");
       scanf("%d",&chute);
       while(chute<1 || chute>20)
       {
          printf("Chuta um numero entre 1 e 20: ");
          scanf("%d",&chute);
       }
       contador=contador+1;
       if(chute<numero)
          printf("... o numero eh maior que %d.\n",chute);
       else
          if(chute>numero)
            printf("... o numero eh menor que %d.\n",chute);
   } while(chute!=numero);
   printf("\nAcetou em %d tentativas!",contador);
}
