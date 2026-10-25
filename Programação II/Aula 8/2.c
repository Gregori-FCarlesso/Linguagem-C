#include <stdio.h>
#include <string.h>
#define TAM 50

typedef struct{
    float x;
    float y;
    float z;
} Ponto3D;

void moverPonto(Ponto3D *p, Ponto3D delta);

int main(){

    Ponto3D p;
    Ponto3D delta;

    printf("Digite as coordenadas do ponto original: ");
    printf("Cordenada X: "); 
    scanf("%f", &p.x);
    printf("Cordenada Y: "); 
    scanf("%f", &p.y);
    printf("Cordenada Z: "); 
    scanf("%f", &p.z);

    printf("Digite os deslocamento nas coordenadas: ");
    printf("Cordenada X: "); 
    scanf("%f", &delta.x);
    printf("Cordenada Y: "); 
    scanf("%f", &delta.y);
    printf("Cordenada Z: "); 
    scanf("%f", &delta.z);

    moverPonto(&p, delta);

    printf("Coordenadas finais: [%.2f, %.2f, %.2f]\n", p.x, p.y, p.z);
}

void moverPonto(Ponto3D *p, Ponto3D delta){
    p->x = p->x + delta.x;
    p->y = p->y + delta.y;
    p->z = p->z + delta.z;
}