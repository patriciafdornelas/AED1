#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"

struct ponto{
    float x,y;
};
typedef struct ponto Ponto;

Ponto * gera_pto(){
    Ponto *p;
    p = (Ponto *)malloc(sizeof(Ponto));    
    return p;
}

float set_pto(Ponto *p, float x1, float y1){
    if(p == NULL){
        return 0;
    }
    p -> x = x1;
    p -> y = y1;

    return 1;
}

float get_pto(Ponto *p, float *x1, float *y1){
    if(p == NULL){
        return 0;
    }
    *x1 = p -> x; 
    *y1 = p -> y;

    return 1; 
}

void libera_pto(Ponto **p){
    free(*p);
    *p = NULL;
}

float distancia_pto(Ponto *p, Ponto *pto){
    float dist;
    dist =  sqrt(pow(((pto -> x) - (p -> x)),2) + pow(((pto -> y) - (p -> y)),2));

    return dist;  
}



