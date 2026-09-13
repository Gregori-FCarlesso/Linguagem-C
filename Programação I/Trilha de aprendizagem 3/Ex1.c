#include <stdio.h>

int main()
{
  int pontos;
  int rodada, total;
  float media;

  total=0;
  for(rodada=1; rodada<=6; rodada++)
  {
     printf("Rodada %d: Quantos pontos? ",rodada);
     scanf("%d",&pontos);
     total=total+pontos;
  }
  media = (float)total/6;
  printf("\nTotal de Pontos = %d\n",total);
  printf("Media de pontuacao = %.2f\n",media);
}

