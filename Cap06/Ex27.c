#include <stdio.h>
#include <stdlib.h>

int main() {
    double matriz[6][6];
    double soma;
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("\nDigite o valor [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%lf", &matriz[i][j]);

        }
    }

    soma = 0;
    for (i = 0; i < 6; i++) {
        for (j = i; j < 6; j++) {
            if (i != j) {
                soma = soma + matriz[j][i];
            }
        }

    }

    printf("\nA soma dos elementos que estao abaixo da diagonal principal eh %lf.\n", soma);
    return 0;
}