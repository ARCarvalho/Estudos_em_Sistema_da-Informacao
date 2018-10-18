#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int vetor[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nDigite um valor para a posicao [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

        }
    }

    for (i = 0; i < 3; i++) {
        vetor[i] = 0;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 0) {
                vetor[j] = vetor[j] + matriz[i][j];
            } else if (j == 1) {
                vetor[j] = vetor[j] + matriz[i][j];
            } else if (j == 2) {
                vetor[j] = vetor[j] + matriz[i][j];
            }
        }
    }

    printf("\n\n");

    printf("A soma dos valores de cada coluna eh: ");

    for (i = 0; i < 3; i++) {
        printf("%6d", vetor[i]);
    }

    return 0;
}