#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bebidas.h"

int main()
{
    int op,volume, x = 0;
    char nome[20];
    float preco;
    do{
        do{
            printf(" \n--- REGISTRO BEBIDAS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Verificar lista cheia\n");
            printf(" 4. Inserir registro \n");
            printf(" 5. Excluir registro \n");
            printf(" 6. Imprimir registro\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 7)) {

                printf("Opcao Invalida! Tente novamente... \n");
            }
        } while((op < 1) || (op > 7));

        switch(op)
        {
            case 1:
                Lista lista = cria_lista();
                if (lista != NULL){
                    printf("Lista criada! \n");
                }else{
                    printf("Lista nao criada! \n");
                }
                x = 1;
                break;

            case 2:
                if (x != 1)
                {
                    printf("Lista nao criada! \n");
                }else{
                    if(lista_vazia(lista) == 1){
                        printf("Lista vazia! \n");
                    }else{
                        printf("Lista nao vazia! \n");
                    }
                }
                break;

            case 3:
                if (x != 1)
                {
                    printf("Lista nao criada! \n");
                }else{
                    if(lista_cheia(lista) == 1){
                        printf("Lista cheia! \n");
                    }else{
                        printf("Lista nao cheia! \n");
                    }
                }
                break;

            case 4:
                if (x != 1){
                    printf("Lista nao criada! \n");
                }else{
                    setbuf(stdin,NULL);
                    printf("Qual o nome do registro que deseja inserir? \n");
                    scanf("%s", &nome);
                    setbuf(stdin,NULL);
                    printf("Qual o volume(ml)? \n");
                    scanf("%d", &volume);
                    setbuf(stdin,NULL);
                    printf("Qual o preco? \n");
                    scanf("%f", &preco);
                    setbuf(stdin,NULL);
                    if (insere_elem(lista,nome,volume,preco) == 1)
                    {
                        printf("Registro inserido! \n");
                    }else{
                        printf("Registro nao inserido! \n");
                    }
                }
                break;

            case 5:
                if (x != 1){
                    printf("Lista nao criada! \n");
                }else{
                    printf("Qual o nome da bebida que deseja remover? \n");
                    scanf("%s", &nome);
                    if (remove_elem(lista,nome) == 1)
                    {
                        printf("Registro removido! \n");
                    }else{
                        printf("Registro nao removido! \n");
                    }
                    break;
                }
            case 6:
                if (x != 1) {
                    printf("Lista nao criada! \n");
                }else{
                    imprime(lista);
                }
                break;
        }
    } while(op != 7);

    return 0;
}
