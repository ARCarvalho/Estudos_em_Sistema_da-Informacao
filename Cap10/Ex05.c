#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array de inteiros contendo cinco elementos. Utilizando apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido. */

int main() {
    int vetor[5], aux[5];
    int i;
    int *ponteiro[5];

    for (i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
        ponteiro[i] = &vetor[i];
        aux[i] = vetor[i];
    }

    for (i = 0; i < 5; i++) {
        printf("O dobro de %d eh %d.\n", aux[i], *ponteiro[i] = (*ponteiro[i] * 2));
    }

    return 0;
}