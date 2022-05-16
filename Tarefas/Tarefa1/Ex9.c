#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char nome[10];
    printf("Digite um nome: ");
    setbuf (stdin,NULL);
    gets(nome);

    for (int i = 0; i < strlen(nome); i++)
    {
        printf("%c", toupper(nome[i]));
    }
}