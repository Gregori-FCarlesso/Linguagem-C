#include <stdio.h>

int main()
{
  int pontos;
  int rodada, total;
  float media;

  total=0;
  rodada=0;
  while(total<12)
  {
     rodada=rodada+1;
     printf("Rodada %d: Quantos pontos? ",rodada);
     scanf("%d",&pontos);
     total=total+pontos;
  }
  media = (float)total/rodada;
  printf("\nTotal de Pontos = %d\n",total);
  printf("Total de Rodadas = %d\n",rodada);
  printf("Media de pontuacao = %.2f\n",media);
}
