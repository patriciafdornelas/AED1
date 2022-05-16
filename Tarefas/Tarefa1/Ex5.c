#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,cont = 1, m = 0;

    printf("Digite um numero positivo: ");
    scanf("%d",&n);

    for(int i = 1; i <= n;i++){
        for(int j = 0; j <= m; j++){
           printf("%d ",cont);
           cont++;
           
        }
        m++;
        printf("\n"); 
    }
    return 0;
} 