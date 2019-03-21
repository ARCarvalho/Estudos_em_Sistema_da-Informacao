#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereco de cada posicao desse array. */

int main() {
    int i;
    float vetor[10] = {20, 12, -58, 44, 58, 36, 123, 236, 987, 10};
    float *pont1[10];

    for (i = 0; i < 10; i++) {
        pont1[i] = &vetor[i];
    }

    for (i = 0; i < 10; i++) {
        printf("\nO endereco de vetor[%i] com o conteudo %f eh: %p.", i + 1, vetor[i], pont1[i]);
    }

    return 0;
}