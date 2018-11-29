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
    struct Retangulo ret;
    double diagonal;
    int perimetro, area;

    printf("Digite a posicao no eixo X do ponto superior esquerdo: ");
    scanf("%d", &ret.ponto_superior_esquerdo.x);

    printf("Digite a posicao no eixo Y do ponto superior esquerdo: ");
    scanf("%d", &ret.ponto_superior_esquerdo.y);

    printf("Digite a posicao no eixo X do ponto inferior direito: ");
    scanf("%d", &ret.ponto_inferior_direito.x);

    printf("Digite a posicao no eixo Y do ponto inferior direito: ");
    scanf("%d", &ret.ponto_inferior_direito.y);


    diagonal = sqrt(pow((ret.ponto_superior_esquerdo.x - ret.ponto_inferior_direito.x), 2) + pow((ret.ponto_superior_esquerdo.y - ret.ponto_inferior_direito.y), 2));

    perimetro = ((ret.ponto_inferior_direito.x - ret.ponto_superior_esquerdo.x) * 2) + ((ret.ponto_superior_esquerdo.y - ret.ponto_inferior_direito.y) * 2);

    area = (ret.ponto_inferior_direito.x - ret.ponto_superior_esquerdo.x) * (ret.ponto_superior_esquerdo.y - ret.ponto_inferior_direito.y);

    printf("A area do retangulo formado pelos pontos A(%d,%d) e B(%d,%d) eh %d, o seu perimetro eh %d e a diagonal eh %lf.", ret.ponto_superior_esquerdo.x, ret.ponto_superior_esquerdo.y, ret.ponto_inferior_direito.x, ret.ponto_inferior_direito.y, area, perimetro, diagonal);

    return 0;
}