#include <stdio.h>

typedef struct{
    int horas;
    int minutos;
    int segundos;
} Horario;

int horarioParaSegundos(Horario h);

int main(){

    Horario calculo_totalsegundos;

    printf("Digite o horario no formato (HH:MM:SS): ");
    scanf("%2d:%2d:%2d", &calculo_totalsegundos.horas, &calculo_totalsegundos.minutos,
    &calculo_totalsegundos.segundos);

    printf("Total de segundos: %d\n", horarioParaSegundos(calculo_totalsegundos));

    return 0;
}

int horarioParaSegundos(Horario h){

    return h.horas*3600 + h.minutos * 60 + h.segundos;
}