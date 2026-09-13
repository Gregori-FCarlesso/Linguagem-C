#include <stdio.h>
#include <string.h>
#define TAM 9

int placaValida(char placa[TAM]);

int main(){

    char placa1[TAM], placa2[TAM];

    printf("Digite a primeira placa no padrao mercosul: ");
    fgets(placa1, sizeof(placa1), stdin);

    printf("Digite a segunda placa no padrao mercosul: ");
    fgets(placa2, sizeof(placa2), stdin);

    if(placaValida(placa1)==1 && placaValida(placa2)==1){
        if(strcmp(placa1, placa2)<0)
            printf("\nA placa que vem primeiro: %s\n",placa1);
        else if(strcmp(placa1, placa2)>0)
            printf("\nA placa que vem primeiro: %s\n",placa2);
        else
            printf("\nAs placas são iguais!\n");
    }
    else
        printf("\nAlguma das placas e invalida!\n");
}

int placaValida(char placa[TAM]){

    int i=0;

    if(((placa[i]>='a' && placa[i]<='z') || (placa[i]>='A' && placa[i]<='Z')) &&
       ((placa[i+1]>='a' && placa[i+1]<='z') || (placa[i+1]>='A' && placa[i+1]<='Z')) &&
       ((placa[i+2]>='a' && placa[i+2]<='z') || (placa[i+2]>='A' && placa[i+2]<='Z')) &&
       ((placa[i+4]>='a' && placa[i+4]<='z') || (placa[i+4]>='A' && placa[i+4]<='Z')) &&
       ((placa[i+3]>='0' && placa[i+3]<='9') && (placa[i+5]>='0' && placa[i+5]<='9') && (placa[i+6]>='0' && placa[i+6]<='9')))
        return 1;

    else
        return 0;
}