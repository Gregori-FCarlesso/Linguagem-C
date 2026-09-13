#include <stdio.h>

int main()
{
    int horas, minutos;

    printf("Digite o horario (HH:MM): ");
    scanf("%d:%d", &horas, &minutos);

    if(horas<0 || horas>23 || minutos<0 || minutos>59)
        printf("\nHorario invalido!");
    else
        printf("\nHorario: %02d:%02d", horas, minutos);
}