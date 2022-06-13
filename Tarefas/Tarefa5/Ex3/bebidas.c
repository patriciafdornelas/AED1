#include <stdlib.h>
#include <stdio.h>
#include "bebidas.h"
#define MAX 20

struct bebidas
{
    char Nome[20];
    int Volume;
    float Preco;
};

struct lista
{
    int Fim;
    struct bebidas Bebidas[MAX];
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

int insere_elem(Lista* lista, struct bebidas Beb){
    if (lista == NULL || lista_cheia(lista) == 1){
        return 0;
    }
    lista -> Bebidas[lista->Fim] = Beb;
    lista->Fim++;
    return 1;
}

int remove_elem(Lista* lista, char n){
    if (lista == NULL ||lista_vazia(lista) == 1){
        return 0;
    }
    int i, Aux = 0;
    lista->Fim--;
    return 1;
}

void obtem_valor_elem(Lista* lista){
    if (lista == NULL ||lista_vazia(lista) == 1){
        printf("\n\nLista vazia!\n\n");
    }
    printf("\n\n Numeros na lista \n\n");
    for (int i = 0; i < lista->Fim; i++){
        printf("%d \t", lista->Bebidas[i]);
    }
    printf("\n\n");
}