#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,d,e, media, desvio;
    
    printf("Digite o valor 1: ");
    scanf("%f", &a);
    printf("Digite o valor 2: ");
    scanf("%f", &b);
    printf("Digite o valor 3: ");
    scanf("%f", &c);
    printf("Digite o valor 4: ");
    scanf("%f", &d);
    printf("Digite o valor 5: ");
    scanf("%f", &e);

    media = (a+b+c+d+e)/5;
    desvio = sqrt((pow((a-media),2) + pow((b-media),2) + pow((c-media),2) + pow((d-media),2) + pow((e-media),2))/4);
    
    printf("<<Media e desvio-padrao>>\n");
    printf(" A media e %.0f e o desvio padrao e %f",media,desvio);
}