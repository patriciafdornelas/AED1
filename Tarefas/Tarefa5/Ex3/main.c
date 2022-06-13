#include <stdlib.h>
#include <stdio.h>
#include "bebidas.h"

int main()
{
    int op, n;
    Lista *lista;
    do{
        do{
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar registro\n");
            printf(" 2. Verificar registro vazio\n");
            printf(" 3. Verificar registro cheio\n");
            printf(" 4. Insere registro\n");
            printf(" 5. Apagar ultimo registro\n");
            printf(" 6. Imprimir registro\n");
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
                printf("\n\n Registro criado. \n\n");
                break;

            case 2:
               if (lista_vazia(lista) == 1){
                    printf("\n\n Registro vazio. \n\n");
                }else{
                    printf("\n\n Registro nao vazio. \n\n");
                }
               break;

            case 3:
                if (lista_cheia(lista) == 1)
                {
                    printf("\n\n Registro cheio. \n\n");
                }else{
                    printf("\n\n Registro nao cheio. \n\n");
                }
                break;

            case 4:
                int volume;
                float preco;
                char nome[20];
                printf("\n\n Qual registro deseja inserir: \n\n");
                scanf("\n\n %d", &n);
                insere_elem(lista, n);
                printf("\n\n Numero inserido \n\n");
                break;

            case 5:
                printf("\n\n Qual elemento deseja remover: \n\n");
                scanf("\n\n %d", &n);
                remove_elem(lista,n);
                if (remove_elem(lista,n) == 1)
                {
                    printf("\n\n Numero removido \n\n");
                }else{
                    printf("\n\n Numero nao encontrado \n\n");
                }
                break;

            case 6:
                obtem_valor_elem(lista);
                break;
        }
    } while(op != 7);

    return 0;
}