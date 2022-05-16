#include <stdlib.h>
#include <stdio.h>

int main(){
    float jogador1, jogador2, jogador3;
    float premio;
    float divPremio;
    printf("Digite o valor do premio: ");
    scanf("%f",&premio);
    printf("Digite o valor do jogador 1: ");
    scanf("%f",&jogador1);
    printf("Digite o valor do jogador 2: ");
    scanf("%f",&jogador2);
    printf("Digite o valor do jogador 3: ");
    scanf("%f",&jogador3);

    divPremio = ((jogador1 + jogador2 + jogador3)/100);

    printf("<< Loteria >>\n");
    printf("Bolao jogador 1 R$: %1.f\n", jogador1);
    printf("Bolao jogador 2 R$: %1.f\n", jogador2);
    printf("Bolao jogador 3 R$: %1.f\n", jogador3);
    printf("Informe o valor do premio: %1.f\n", premio);
    printf("Jogador 1 recebera %.1f\n", (divPremio*jogador1)*premio);
    printf("Jogador 2 recebera %.1f\n", (divPremio*jogador2)*premio);
    printf("Jogador 3 recebera %.1f\n", (divPremio*jogador3)*premio);

}