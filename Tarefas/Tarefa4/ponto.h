typedef struct ponto Ponto;
Ponto * gera_pto();
float set_pto(Ponto *p, float x1, float y1);
float get_pto(Ponto *p, float *x1, float *y1);
void libera_pto(Ponto **p);
float distancia_pto(Ponto *p, Ponto *pto);