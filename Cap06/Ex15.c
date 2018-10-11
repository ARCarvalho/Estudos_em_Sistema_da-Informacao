#include <stdio.h>
#include <stdlib.h>

/* Leia um vetor com 10 numeros de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela. */

int main() {
    double vetor[10];
    double aux;
    int i, j, k;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    for (k = 1; k < 10; k++) {
        for (j = 0; j < 10 - k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < 10; i++) {
        printf("\t%lf\t", vetor[i]);
    }

    return 0;
}