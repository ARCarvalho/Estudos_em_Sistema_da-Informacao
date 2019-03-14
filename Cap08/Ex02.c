#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distancia dele ate a origem das coordnadas, isto eh, a posicao (0,0). */

struct coordenadas {
    int x;
    int y;
};

int main() {
    struct coordenadas cdn;
    double distancia_origem;

    printf("Digite a posicao no eixo X: ");
    scanf("%d", &cdn.x);


    printf("Digite a posicao no eixo Y: ");
    scanf("%d", &cdn.y);

    distancia_origem = sqrt(pow(cdn.x, 2) + pow(cdn.y, 2));

    printf("\n\nA distancia do ponto de posicao (%d,%d) ate a origem (0,0) eh: %lf", cdn.x, cdn.y, distancia_origem);

    return 0;
}