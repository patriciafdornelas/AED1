#include <stdlib.h>
#include <stdio.h>
#include "din_enc_no_ord.h"


struct no{
    int info;
    struct no * prox;
};

Lista cria_lista(){
    Lista cab;
    cab = (Lista)malloc(sizeof(struct no));
    if(cab != NULL){
        cab->prox = NULL;
        cab->info = 0;
    }
    return cab;
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 1;
    else
        return 0;
}

int insere_elem(Lista *lst, int elem){
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL)
        return 0;
    N->info = elem;
    Lista aux = *lst;
    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;
    N->prox = aux->prox;
    aux->prox = N;
    (*lst)->info++;
    return 1;
}

int remove_elem(Lista *lst, int elem){
    if(lista_vazia(*lst) == 1)
        return 0;
    Lista aux = *lst;
    while(aux -> prox != NULL && aux->prox->info != elem)
        aux = aux->prox;
    if(aux->prox == NULL || aux->prox->info > elem)
        return 0;
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    (*lst)->info--;
    return 1;
}

void imprime(Lista lst){
    int i = 0;
    if (lista_vazia(lst) == 1){
        printf("Erro! Lista vazia! \n");
    }else{
        for (lst;lst != NULL; lst = lst->prox){
            if(i == 0)
                printf("");
            else
                printf("%d \n", lst->info);
            i++;
        }
    }
    
}

