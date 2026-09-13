#include <stdio.h>

int main(){
   int hinicio,minicio,sinicio;
   int hfim,mfim,sfim;
   int total,segundos,horas,minutos;
    
   printf("Horario inicio (HH:MM:SS): ");
   scanf("%d:%d:%d",&hinicio,&minicio,&sinicio);
   printf("Horario termino (HH:MM:SS): ");
   scanf("%d:%d:%d",&hfim,&mfim,&sfim);
   total = (hfim*3600+mfim*60+sfim) - (hinicio*3600+minicio*60+sinicio);
   horas = total/3600;
   total = total%3600;
   minutos = total/60;
   segundos = total%60;
   printf("Tempo de prova = %02d:%02d:%02d\n",horas,minutos,segundos);
}
