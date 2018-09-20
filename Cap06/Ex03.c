#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia 5 valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a media dos valores. */

int main() {
    double vetor[5];
    double soma, media;
    int i;

    soma = 0;
    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%lf", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma / 5.0;

    for (i = 0; i < 5; i++) {
        printf("%lf\n", vetor[i]);
    }

    printf("\nA media dos valores digitados eh: %lf.\n", media);
    return 0;
}