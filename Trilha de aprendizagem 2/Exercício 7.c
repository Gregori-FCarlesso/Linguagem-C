#include <stdio.h>

int main()
{
   int hinicio,minicio,sinicio;
   int hfim,mfim,sfim;
   int segundos,horas,minutos;
    
   printf("Horario inicio (HH:MM:SS): ");
   scanf("%d:%d:%d",&hinicio,&minicio,&sinicio);
   printf("Horario termino (HH:MM:SS): ");
   scanf("%d:%d:%d",&hfim,&mfim,&sfim);
   segundos = (hfim*3600+mfim*60+sfim)-(hinicio*3600+minicio*60+sinicio);
   if(segundos<0)
   {
      printf("Horario de termino anterior ao inicio.\n");
      printf("Calculando tempo com cronometro regressivo... ");
      segundos = -segundos;
   }
   horas = (int)segundos/3600;
   segundos = segundos%3600;
   minutos = (int)segundos/60;
   segundos = segundos%60;
   printf("Tempo de prova = %d:%02d:%02d\n",horas,minutos,segundos);
}
