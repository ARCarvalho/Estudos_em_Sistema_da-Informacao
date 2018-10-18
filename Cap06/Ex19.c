#include <stdio.h>
#include <stdlib.h>

/* Leia uma matriz de tamanho 4x4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui. */

int main() {
    double matriz[4][4];
    int contador, i, j;


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("\nDigite um valor para a posicao [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%lf", &matriz[i][j]);
        }
    }

    contador = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("\nEssa matriz possui %d valores maiores do que 10.", contador);

    return 0;
}