#include <stdio.h>
#include <stdlib.h>
#include "din_enc_dupl.h"

struct no{
    int info;
    struct no *prox;
    struct no *ant;
};

Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista lst){
    if(lst == NULL)
        return 1;
    else 
        return 0;
}

int insere_ord(Lista *lst, int elem){ //ERRADO
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL) {return 0;}
    N->info = elem;
    if (lista_vazia(*lst) || elem <= (*lst)->info)
    {
        N->prox = *lst;
        N->ant = NULL;
        *lst = N;
        return 1;
    }
    Lista aux = *lst;
    while (aux->prox != NULL && aux->prox->info < elem){
        aux = aux ->prox;
    }
    N->prox = aux->prox;
    aux->prox = N;
    return 1; 
}

int remove_ord(Lista *lst,int elem){ //ERRADO
    if(lista_vazia(*lst) == 1 || elem < (*lst)->info)
        return 0;
    Lista aux = *lst;
    if(elem == (*lst)->info){
        *lst = aux->prox;
        free(aux);
        return 1;
    }
    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;
    if(aux->prox == NULL || aux->prox->info > elem)
        return 0;
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

void imprime(Lista lst){
    for(lst; lst != NULL; lst = lst->prox)
        printf("%d ",lst->info);
}

int tamanho(Lista lst){
    if(lst == NULL)
        return 0;
    int i = 0;
    while(lst != NULL){
        i++;
        lst = lst->prox;
    }
    return i;
}

double media(Lista lst){
    int tam = tamanho(lst);
    double med,soma = 0;
    for(lst; lst != NULL; lst = lst->prox)
        soma = soma + lst->info;
    med = soma/tam;
    return med;
}

int iguais(Lista lst, Lista lst1){
    if(lista_vazia(lst) == 1 && lista_vazia(lst1) == 1)
        return -1;
    if(tamanho(lst) != tamanho(lst1))
        return 0;
    else{
        while(lst != NULL){
            if(lst->info != lst1->info)
                return 0;
            else{
                lst = lst->prox;
                lst1 = lst1->prox;
            }
        }
        return 1;
    }
}

int remover_todos(Lista *lst){
    Lista aux = *lst;
    if(aux == NULL) return 0;
    (*lst)->prox = NULL;
    (*lst)->ant = NULL;
    free(aux);
    return 1;
}

int remover_maior(Lista lst){ //ERRO
    Lista aux = lst;
    if(aux == NULL) return 0;
    if(lista_vazia(lst) == 1)
        return 0;
    while((lst) != NULL){
        if((lst)->prox == NULL)
            remove_ord(&lst,(lst)->info);
        (lst) = (lst)->prox;
    }
    free(aux);
    return 1;
}

void multiplos_de_3(Lista lst){
    Lista L2 = cria_lista();
    if(lista_vazia(lst) == 1)
        printf("Erro, lista vazia! \n");
    while(lst != NULL){
        if(lst->info % 3 == 0)
            insere_ord(&L2,lst->info);
        lst = lst->prox;
        L2 = L2->prox;
    }
    imprime(L2);
}


    
    
    
    
     

