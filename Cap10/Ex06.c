#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array contendo cinco elementos inteiros. Leia esse array do teclado e imprima o endereco das posicoes contendo valores pares. */

int main() {
    int vetor[5];
    int i;
    int *ponteiro[5];

    for (i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
        ponteiro[i] = &vetor[i];
    }

    for (i = 0; i < 5; i++) {
        if (*ponteiro[i] % 2 == 0) {
            printf("Endereco da posicao[%d]: %p\n", i + 1, ponteiro[i]);
        }
    }

    return 0;
}