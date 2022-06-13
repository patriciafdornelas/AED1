struct bebidas;
typedef struct lista Lista;
Lista* cria_lista();
int lista_vazia(Lista* lista);
int lista_cheia(Lista* lista);
int insere_elem(Lista* lista, , int volume, float preco,char nome[20]);
int remove_elem(Lista* lista, char n);
void obtem_valor_elem(Lista* lista, int *volume, float *preco,char *nome[20]);
