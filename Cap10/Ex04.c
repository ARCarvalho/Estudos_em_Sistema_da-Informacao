#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha uma matriz de float contendo tres linhas e tres colunas. Imprima o endereco de cada posicao dessa matriz. */

int main() {
    int i, j;
    float matriz[3][3] = {20, 12, -58, 44, 58, 36, 123, 236, 987};
    float *pont1[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            pont1[i][j] = &matriz[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nO endereco da matriz[%d][%d] com o conteudo %f eh: %p.", i + 1, j +1, matriz[i][j], pont1[i][j]);
        }
    }

    return 0;
}