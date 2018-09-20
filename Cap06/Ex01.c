#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na tela os valores lidos. */

int main() {
    int vetor[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}