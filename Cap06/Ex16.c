#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia uma matriz de tamanho 3x3. Imprima na tela o menor valor contido nessa matriz. */

int main() {
    double matriz[3][3];
    double menor;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nDigite um valor para a posicao [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%lf", &matriz[i][j]);

        }
    }

    menor = 99999999;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("\n O menor valor dessa matriz eh: %lf.\n", menor);
    return 0;
}