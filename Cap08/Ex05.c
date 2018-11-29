#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

struct Retangulo {
    struct Ponto ponto_superior_esquerdo;
    struct Ponto ponto_inferior_direito;
};


int main() {
    struct Ponto ponto;
    struct Retangulo ret;

    printf("Digite a posicao no eixo X do ponto superior esquerdo: ");
    scanf("%d", &ret.ponto_superior_esquerdo.x);

    printf("Digite a posicao no eixo Y do ponto superior esquerdo: ");
    scanf("%d", &ret.ponto_superior_esquerdo.y);

    printf("Digite a posicao no eixo X do ponto inferior direito: ");
    scanf("%d", &ret.ponto_inferior_direito.x);

    printf("Digite a posicao no eixo Y do ponto inferior direito: ");
    scanf("%d", &ret.ponto_inferior_direito.y);

    printf("\n\n");

    printf("Digite a posicao no eixo X do ponto escolhido: ");
    scanf("%d", &ponto.x);
    printf("Digite a posicao no eixo Y do ponto escolhido: ");
    scanf("%d", &ponto.y);

    printf("\n\n");

    if ((ponto.x >= ret.ponto_superior_esquerdo.x) && (ponto.x <= ret.ponto_inferior_direito.x) && (ponto.y <= ret.ponto_superior_esquerdo.y) && (ponto.y >= ret.ponto_inferior_direito.y)) {
        printf("O ponto escolhido esta dentro do retangulo!");
    } else {
        printf("O ponto escolhido nao esta dentro do retangulo!");
    }

    return 0;
}