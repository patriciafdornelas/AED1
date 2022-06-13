#include <stdlib.h>
#include <stdio.h>
#include "listaord.h"

int main()
{
    int op, n;
    Lista *lista;
    do{
        do{
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Verificar lista cheia\n");
            printf(" 4. Inserir elemento\n");
            printf(" 5. Excluir elemento\n");
            printf(" 6. Imprimir lista\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 7)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while((op < 1) || (op > 7));

        switch(op)
        {   
            case 1:
                lista = cria_lista();
                printf("\n\n Lista criada. \n\n");
                break;

            case 2:
               if (lista_vazia(lista) == 1){
                    printf("\n\n Lista vazia. \n\n");
                }else{
                    printf("\n\n Lista nao vazia. \n\n");
                }
               break;

            case 3:
                if (lista_cheia(lista) == 1)
                {
                    printf("\n\n Lista cheia. \n\n");
                }else{
                    printf("\n\n Lista nao cheia. \n\n");
                }
                break;

            case 4:
                printf("\n\n Qual elemento deseja inserir: \n\n");
                scanf("\n\n %d", &n);
                insere_elem(lista, n);
                printf("\n\n Numero inserido \n\n");
                break;

            case 5:
                printf("\n\n Qual elemento deseja remover: \n\n");
                scanf("\n\n %d", &n);
                remove_elem(lista,n);
                if (remove_elem(lista,n) == 1)
                    printf("\n\n Numero removido \n\n");
                break;

            case 6:
                obtem_valor_elem(lista);
                break;
        }
    } while(op != 7);

    return 0;
}