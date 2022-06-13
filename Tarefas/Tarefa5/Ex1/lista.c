#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define MAX 3

struct lista{
    int num[MAX];
    int Fim;
};

Lista* cria_lista(){
    Lista *lista;
    lista = (Lista*)malloc(sizeof(struct lista));

    if (lista != NULL){
        lista -> Fim = 0;
    }
    return lista;
}

int lista_vazia(Lista* lista){
    if(lista->Fim == 0){
        return 1;
    }else{
        return 0;
    }
}

int lista_cheia(Lista* lista){
    if (lista->Fim == MAX){
        return 1;
    }else{
        return 0;
    }
}

int insere_elem(Lista* lista, int elem){
    if (lista == NULL || lista_cheia(lista) == 1){
        return 0;
    }
    lista -> num[lista->Fim] = elem;
    lista->Fim++;
    return 1;
}

int remove_elem(Lista* lista, int elem){
    if (lista == NULL ||lista_vazia(lista) == 1){
        return 0;
    }
    int i, Aux = 0;
    while (Aux < lista ->Fim && lista->num[Aux] != elem){
        Aux++;
    }
    if (Aux == lista->Fim){
        return 0;
    }
    for (i = Aux + 1; i < lista->Fim; i++){
        lista->num[i-1] = lista->num[i];
    }
    lista->Fim--;
    return 1;
}

void obtem_valor_elem(Lista* lista){
    if (lista == NULL ||lista_vazia(lista) == 1){
        printf("\n\nLista vazia!\n\n");
    }
    printf("\n\n Numeros na lista \n\n");
    for (int i = 0; i < lista->Fim; i++){
        printf("%d \t", lista->num[i]);
    }
    printf("\n\n");
}


