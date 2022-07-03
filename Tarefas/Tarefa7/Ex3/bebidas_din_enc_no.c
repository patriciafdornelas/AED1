#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "bebidas_din_enc_no.h"

struct bebidas{
    char nome[20];
    int volume;
    float preco;
};

struct no{
    struct bebidas Bebidas;
    struct no *prox;
};

Lista cria_lista(){
    Lista cab;
    cab = (Lista)malloc(sizeof(struct no));
    if(cab != NULL){
        cab->prox = NULL;
    }
    return cab;
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 1;
    else
        return 0;
}

int insere_elem(Lista lst, char *nome, int volume, float preco){
    Lista N = (Lista)malloc(sizeof(struct no)); //olhar
    if(N == NULL)
        return 0;
    strcpy(N->Bebidas.nome,nome);
    N->Bebidas.volume = volume;
    N->Bebidas.preco = preco;
    N->prox = lst->prox;
    lst->prox = N;
    return 1;
    
}

int remove_elem(Lista *lst, char *nome){
    if(lista_vazia(*lst) == 1)
        return 0;
    Lista aux = *lst;
    while (aux->prox != NULL && strcmp(aux->prox->Bebidas.nome,nome) < 0)
        aux = aux->prox;
    if(aux->prox == NULL)
        return 0;
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

void imprime(Lista lst){
    int i = 0;
    if(lista_vazia(lst) == 1){
        printf("Lista vazia!\n");
    }else{
        for (lst; lst != NULL; lst = lst->prox)
        {   
            if(i == 0)
                printf("");
            else
                printf("Nome: %s Volume: %d Preco: %.2f \n", lst->Bebidas.nome, lst->Bebidas.volume, lst->Bebidas.preco);
            i++;
        }
        
    }
}