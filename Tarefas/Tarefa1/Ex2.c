#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,y;
    float distancia;
    printf("Digite a coordenada x: ");
    scanf("%d",&x);
    printf("Digite a coordenada y: ");
    scanf("%d",&y);
    distancia = sqrt((x*x)+(y*y));
    printf("<< Distancia >>\n");
    printf("Entre com a coordenada x: %d\n",x);
    printf("Entre com a coordenada y: %d\n",y);
    printf("A distancia entre os pontos (%d,%d) e (0,0) e %.1f",x,y,distancia);

}