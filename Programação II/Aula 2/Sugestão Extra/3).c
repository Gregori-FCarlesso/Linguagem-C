#include <stdio.h>

int main()
{
    int horas, minutos;

    do{
        printf("\nDigite o horario (HH:MM): ");
        scanf("%d:%d", &horas, &minutos);

        if(horas<0 || horas>23 || minutos<0 || minutos>59)
        {
            printf("\nHorario invalido!");
            printf("\nRepita a entrada\n");
        }
        else
            printf("\nHorario: %02d:%02d", horas, minutos);

    } while(horas<0 || horas>23 || minutos<0 || minutos>59);
}