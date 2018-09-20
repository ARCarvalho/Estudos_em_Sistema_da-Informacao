#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que preencha um vetor com 10 numeros reais. Em seguida, calcule e mostre na tela a quantidade de numeros negativos e a soma dos numeros positivos desse vetor. */

int main() {
    double vetor[10];
    double soma;
    int i, contador_negativos;

    soma = 0;
    contador_negativos = 0;
    for (i = 0; i < 10; i++) {
        printf("Digite um valor real: ");
        scanf("%lf", &vetor[i]);

        if (vetor[i] >= 0) {
            soma = soma + vetor[i];
        } else {
            contador_negativos++;
        }
    }

    printf("\nExistem %d numeros negativos e a soma dos numeros positivos eh %lf\n", contador_negativos, soma);

    return 0;
}