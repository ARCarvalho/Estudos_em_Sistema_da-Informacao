#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia do teclado um vetor de 10 posicoes. Escreva na tela quantos valores pares foram armazenados. */

int main() {
    int vetor[10];
    int i, contador;

    contador = 0;
    for (i = 0; i < 10; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }

    printf("\nForam armazenados nesse vetor %d numeros pares.\n", contador);

    return 0;
}