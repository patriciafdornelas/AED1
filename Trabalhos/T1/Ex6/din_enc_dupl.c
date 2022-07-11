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

int insere_ord(){

}

int remove_ord(){
    
}