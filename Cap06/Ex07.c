#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba do usuario um vetor X com 10 posicoes. Em seguida deverao ser impressos o maior e o menor elemento desse vetor. */

int main() {
    double X[10];
    double maior, menor;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%lf", &X[i]);
    }

    maior = X[0];
    menor = X[0];
    for (i = 0; i < 10; i++) {
        if (maior < X[i]) {
            maior = X[i];
        }
        if (menor > X[i]) {
            menor = X[i];
        }
    }

    printf("\nO maior valor digitado eh %lf e o menor eh %lf.\n", maior, menor);
    return 0;
}