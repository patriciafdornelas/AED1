#include <stdlib.h>
#include <stdio.h>
#include "lista_din_enc.h"

struct no{
    int info;
    struct no *prox;
};

Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista *lst){
    if(lst == NULL)
        return 1;
    else
        return 0;
}

int insere_elem (Lista *lst, int elem){
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL) {return 0;}
    N->info = elem;
    N->prox = *lst;
    *lst = N;
    return 1;
}

int remove_elem(Lista *lst, int elem){
    if(lista_vazia(lst) == 1)
        return 0;
    Lista aux = *lst;
    if(elem == (*lst)->info){
        *lst = aux->prox;
        free(aux);
        return 1;
    }
    while (aux->prox != NULL && aux->prox->info != elem){
        aux = aux->prox;
    }
    if(aux->prox == NULL){
        return 0;
    }
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

void imprime(Lista lst){
    if (lista_vazia(&lst) == 1){
        printf("Erro! Lista vazia! \n");
    }
    for (lst;lst != NULL; lst = lst->prox){
        printf("%d \n", lst->info);
    }
}
