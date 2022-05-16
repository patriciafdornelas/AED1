#include <stdio.h>
#include <stdlib.h>

int main(){
    float massa, altura, imc;

    printf("Digite a altura: ");
    scanf("%d",&altura);
    setbuf(stdin, NULL);
    printf("Digite a massa: ");
    scanf("%d",&massa);

    imc = massa/altura;

    if(imc < 18.5){
        printf("Magreza");
    }else if(imc > 18.5 && imc < 24.9){
        printf("Saudavel");
    }else if(imc > 25.0 && imc < 29.9){
        printf("Sobrepeso");
    }else if(imc > 30.0 && imc < 34.9){
        printf("Obesidade Grau I");
    }else if(imc > 35.0 && imc < 39.9){
        printf("Obesidade Grau II (severa)");
    }else{
        printf("Obesidade Grau III (morbida)");
    }
}