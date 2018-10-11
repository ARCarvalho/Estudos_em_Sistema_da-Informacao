#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um vetor de 10 posicoes. Verifique se existem valores iguais e os escreva. */

int main() {
    double vetor[10], repeticoes[10];
    int i, j, k, l, contador;

    for (i = 0; i < 10; i++) {
        printf("Escreva um numero real: ");
        scanf("%lf", &vetor[i]);
    }

    contador = 0;
    k = 0;
    for (i = 0; i < 10; i++) {
        for (j = i; j < 10; j++) {
            if ((vetor[i] == vetor[j]) && (i != j)) {
                contador++;
                repeticoes[k] = vetor[i];
            }
            if (repeticoes[k] == vetor[j]) {
                k--;
            }



        }
        k++;
    }

    if (contador == 0) {
        printf("\nNao existem valores iguais!\n");
    } else {
        printf("\nOs valores iguais sao: ");
        for (i = 0; i <= k; i++) {
            printf("%lf\t", repeticoes[i]);
        }
    }
    return 0;
}
