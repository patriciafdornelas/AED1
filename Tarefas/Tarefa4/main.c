#include <stdlib.h>
#include <stdio.h>
#include "ponto.h"
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-BR");
    Ponto *p1,*p2;
    p1 = gera_pto();
    p2 = gera_pto();
    float x1, x2, y1, y2;
    float resultado;

    if (p1 == NULL || p2 == NULL){
        printf("Erro");
        return 0;
    }
    
    printf("Digite a coordenada x do primeiro ponto: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y do primeiro ponto: ");
    scanf("%f", &x2);

    printf("Digite a coordenada x do segundo ponto: ");
    scanf("%f", &y1);
    printf("Digite a coordenada y do segundo ponto: ");
    scanf("%f", &y2);

    set_pto(p1,x1,x2);

    set_pto(p2,y1,y2);

    resultado = distancia_pto(p1,p2);
    printf("A distancia e %f ", resultado);

    libera_pto(&p1);
    libera_pto(&p2);

    
    
}