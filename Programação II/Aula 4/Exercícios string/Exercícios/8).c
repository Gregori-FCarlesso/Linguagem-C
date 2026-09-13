#include <stdio.h>
#define TAM 8

int placaValida(char placa[TAM]);

int main(){

    char placa[TAM];

    printf("Digite a placa de um carro no padrao mercosul: ");
    fgets(placa, sizeof(placa), stdin);

    if(placaValida(placa)==1)
        printf("\nPlaca valida!\n");
    else
        printf("\nPlaca nao valida!\n");
}

int placaValida(char placa[TAM]){

    int i=0;

    if(((placa[i]>='a' && placa[i]<='z') || (placa[i]>='A' && placa[i]<='Z')) &&
       ((placa[i+1]>='a' && placa[i+1]<='z') || (placa[i+1]>='A' && placa[i+1]<='Z')) &&
       ((placa[i+2]>='a' && placa[i+2]<='z') || (placa[i+2]>='A' && placa[i+2]<='Z')) &&
       ((placa[i+4]>='a' && placa[i+4]<='z') || (placa[i+4]>='A' && placa[i+4]<='Z')) &&
       ((placa[i+3]>='0' && placa[i+3]<='9') && (placa[i+5]>='0' && placa[i+5]<='9') && 
       (placa[i+6]>='0' && placa[i+6]<='9')))
        return 1;

    else
        return 0;
}