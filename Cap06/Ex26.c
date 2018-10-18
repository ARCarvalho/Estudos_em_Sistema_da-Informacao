#include <stdio.h>
#include <stdlib.h>

int main() {
    double matriz[5][5];
    double soma;
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("\nDigite o valor [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%lf", &matriz[i][j]);

        }
    }

    soma = 0;
    for (i = 0; i < 5; i++) {
        for (j = i; j < 5; j++) {
            if (i != j) {
                soma = soma + matriz[i][j];
            }
        }

    }

    printf("\nA soma dos elementos que estao acima da diagonal principal eh %lf.\n", soma);
    return 0;
}