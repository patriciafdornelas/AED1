#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,conversao;

    printf("Digite o bit 1: \n");
    scanf("%d",&a);
    printf("Digite o bit 2: \n");
    scanf("%d",&b);
    printf("Digite o bit 3: \n");
    scanf("%d",&c);
    printf("Digite o bit 4: \n");
    scanf("%d",&d);

    conversao = (a*(pow(2,3)) + b*(pow(2,2)) + c*(pow(2,1)) + d*(pow(2,0)));

    printf("Conversao: %d",conversao);

}