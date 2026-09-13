#include <stdio.h>

int g_contador = 10;

void mostraGlobal(){
    printf("Global: %d\n", g_contador);
}

int main(){

    g_contador = 20;

    int g_contador = 30;

    printf("Local: %d\n", g_contador);
    mostraGlobal();

    return 0;
}