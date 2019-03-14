#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posicoes X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distancia entre eles. */

struct coordenadas {
    int x;
    int y;
};

int main() {
    struct coordenadas cdn1, cdn2;
    double distancia_entre_pontos;

    printf("Digite a posicao no eixo X do ponto A: ");
    scanf("%d", &cdn1.x);

    printf("Digite a posicao no eixo Y do ponto A: ");
    scanf("%d", &cdn1.y);

    printf("Digite a posicao no eixo X do ponto B: ");
    scanf("%d", &cdn2.x);

    printf("Digite a posicao no eixo Y do ponto B: ");
    scanf("%d", &cdn2.y);

    distancia_entre_pontos = sqrt(pow((cdn1.x - cdn2.x), 2) + pow((cdn1.y - cdn2.y), 2));

    printf("\n\nA distancia do ponto de posicao A(%d,%d) ate o ponto B(%d,%d) eh: %lf", cdn1.x, cdn1.y, cdn2.x, cdn2.y, distancia_entre_pontos);

    return 0;
}