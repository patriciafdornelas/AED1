#include <stdlib.h>
#include <stdio.h>
#include "din_enc_no_ord.h"

int main()
{
    Lista lista;
    int op,elem, x = 0;
    do{
        do{
            printf(" --- LISTAS DINAMICA ENCADEADA NO CABECALHO ORDENADA--- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia \n");
            printf(" 3. Inserir elemento ordenado \n");
            printf(" 4. Excluir elemento ordenado \n");
            printf(" 5. Imprimir lista \n");
            printf(" 6. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 6)) {

                printf("Opcao Invalida! Tente novamente... \n");
            }
        } while((op < 1) || (op > 6));

        switch(op)
        {
            case 1:
                lista = cria_lista();
                if (lista != NULL){
                    printf("Lista criada! \n");
                }else{
                    printf("Lista nao criada! \n");
                }
                x = 1;
                break;

            case 2:
                if(lista_vazia(lista) == 1){
                    printf("Lista vazia! \n");
                }else{
                    printf("Lista nao vazia! \n");
                }
                break;

            case 3:
                if (x != 1){
                    printf("Lista nao criada! \n");
                }else{
                    printf("Qual elemento deseja inserir? \n");
                    scanf("%d", &elem);
                    if (insere_elem(&lista,elem) == 1)
                    {
                        printf("Elemento inserido! \n");
                    }else{
                        printf("Elemento nao inserido! \n");
                    }
                }
                break;
            case 4:
                printf("Qual elemento deseja excluir? \n");
                scanf("%d", &elem);
                if (remove_elem(&lista,elem) == 1)
                {
                    printf("Elemento removido! \n");
                }else{
                    printf("Elemento nao removido! \n");
                }
                break;

            case 5:
                imprime(lista);
                break;
        }
    } while(op != 6);

    return 0;
}
