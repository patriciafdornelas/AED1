typedef struct lista Lista;
Lista* cria_lista();
int lista_vazia(Lista* lista);
int lista_cheia(Lista* lista);
int insere_elem(Lista* lista, int elem);
int remove_elem(Lista* lista, int elem);
void obtem_valor_elem(Lista* lista);