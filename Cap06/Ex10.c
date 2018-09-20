#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que preencha um vetor de tamanho 100 com os 100 primeiros numeros naturais que nao sao multiplos de 7. Ao final, imprima esse vetor na tela. */

int main() {
    int vetor[100];
    int i, contador, numero;

    numero = 0;

        for (i = 0; i < 100; i++) {
            contador = 0;
            while (contador == 0) {
                if (numero % 7 != 0) {
                    vetor[i] = numero;
                    contador++;

                }
                numero++;
            }
    }

    for (i = 0; i < 100; i++) {
        printf("%d\t", vetor[i]);
    }
    return 0;
}