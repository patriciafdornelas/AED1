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
    for(int i = 1; i <= 10; i++){
        printf("\n");
        printf("%d! = %d", i, fatorial(i));
    }

}