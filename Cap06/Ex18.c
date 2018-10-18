#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que declare uma matriz de tamanho 5x5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na tela. */

int main() {
    int matriz[5][5];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }

        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
         printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}