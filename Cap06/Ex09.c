#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba do usuario dois arrays, A e B, com 10 numeros inteiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C. */

int main() {
    int A[10], B[10], C[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um valor inteiro para uma das posicoes do array A: ");
        scanf("%d", &A[i]);
    }

    printf("\n\n");

    for (i = 0; i < 10; i++) {
        printf("Digite um valor inteiro para uma das posicoes do array B: ");
        scanf("%d", &B[i]);
    }

    printf("\n\n");

    for (i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
        printf("C[%d] eh %d.\n", i, C[i]);
    }
    return 0;
}