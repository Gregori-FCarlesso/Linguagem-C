#include <stdio.h>

int main()
{
   int kminicial, kmfinal, tempomin;
   float velocidade;
    
   printf("KM inicial: ");
   scanf("%d", &kminicial);
   printf("KM final: ");
   scanf("%d", &kmfinal);
   printf("Tempo (minutos): ");
   scanf("%d", &tempomin);
   velocidade = (kmfinal-kminicial)/(tempomin/60);
   printf("Velocidade media = %.2fkm/h\n", velocidade);	
}
