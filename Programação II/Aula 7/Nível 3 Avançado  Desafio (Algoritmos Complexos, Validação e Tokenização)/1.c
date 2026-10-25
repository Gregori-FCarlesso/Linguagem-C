#include <stdio.h>
#include <string.h>
#define TAM 50

int validarPlaca(char placa[]){

    if((((placa[0]>='a' && placa[0]<='z') || (placa[0]>='A' && placa[0]<='Z')) && ((placa[1]>='a' && placa[1]<='z') || (placa[1]>='A' && placa[1]<='Z')) && ((placa[2]>='a' && placa[2]<='z') || (placa[2]>='A' && placa[2]<='Z')) && ((placa[4]>='a' && placa[4]<='z') || (placa[4]>='A' && placa[4]<='Z'))) && (placa[3]>='0' && placa[3]<='9' && placa[5]>='0' && placa[5]<='9' && placa[6]>='0' && placa[6]<='9')){
        return 1;
    }
    else
        return 0;
}

int main(){

    char placa[TAM];

    printf("Digite uma placa no padrao mercosul: ");
    fgets(placa, sizeof(placa), stdin);

    if(validarPlaca(placa)==1)
        printf("Placa valida!\n");
    else
        printf("Placa invalida!\n");
}