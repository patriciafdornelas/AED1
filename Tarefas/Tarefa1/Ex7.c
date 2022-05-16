#include <stdlib.h>
#include <stdio.h>

int fatorial(int n){
    if(n){
        return n*fatorial(n-1);
    }else
        return 1;
    
}

int main(){
    printf("<< Fatorial >>");
    for(int i = 11; i <= 15; i++){
        printf("\n");
        printf("%d! = %d", i, fatorial(i));
    }

}

//Esse cálculo não é possível pois ele estoura, o tamanho não é mais compativel com a variavel a partir do fatorial de 13.