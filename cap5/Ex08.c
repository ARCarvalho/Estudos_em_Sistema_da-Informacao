#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia 10 inteiros e imprima sua media. */

int main() {
    int numero, i, soma;
    double media;

    soma = 0;
    for (i = 0; i <= 9; i++) {
        printf("Digite um valor: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }
    media = soma / 10.0;
    printf("\nA media dos valores digitados eh %lf.\n", media);
    return 0;
}