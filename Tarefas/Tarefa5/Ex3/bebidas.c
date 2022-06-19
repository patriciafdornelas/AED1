#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bebidas.h"
#define MAX 10

struct bebida{
    char nome[20];
    int volume;
    float preco;
};

struct lista{
    struct bebida Bebida[MAX];
    int Fim;
};

Lista cria_lista(){
    Lista lst;
    lst = (Lista)malloc(sizeof(struct lista));
    if(lst != NULL)
        lst->Fim = 0;
    return lst;
}

int lista_vazia(Lista lst){
    if(lst->Fim == 0)
        return 1;
    else
        return 0;
}

int lista_cheia(Lista lst){
    if(lst->Fim == MAX)
        return 1;
    else
        return 0;
}

int insere_elem(Lista lst, char *nome, int volume, float preco){
    struct bebida elem;
    strcpy(elem.nome,nome);
    elem.volume = volume;
    elem.preco = preco;
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;
    lst->Bebida[lst->Fim] = elem;
    lst->Fim++;
    return 1;
}

int remove_elem(Lista lst, char *nome){
    if(lst == NULL || lista_vazia(lst) == 1)
        return 0;
    int i,aux = 0;
    while(aux < lst->Fim && strcmp(lst->Bebida[aux].nome,nome) < 0)
        aux++;
    if(aux == lst->Fim)
        return 0;
    for(i = aux+1; i < lst->Fim; i++)
        lst->Bebida[i-1] = lst->Bebida[i];
    lst->Fim--;
    return 1;
}

void imprime(Lista lst){
    int i;
    if(lista_vazia(lst) == 1){
        printf("Lista vazia \n");
    }
    for (i = 0; i < lst->Fim; i++)
    {
        printf("Nome: %s  Volume: %d  Preco: %.2f \n", lst->Bebida[i].nome, lst->Bebida[i].volume, lst->Bebida[i].preco);
    }
    
}
