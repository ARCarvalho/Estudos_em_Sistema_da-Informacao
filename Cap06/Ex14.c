#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faca um programa que calcule o desvio-padrao d de um vetor V contendo n numeros em que m eh a media desse vetor. Considere n = 10. O vetor v deve ser lido do teclado. */

int main() {
    double vetor[10];
    double soma1, soma2, media, desvio_padrao;
    int i;

    soma1 = 0;
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
        soma1 = soma1 + vetor[i];
    }

    media = soma1 / 10.0;

    soma2 = 0;
    for (i = 0; i < 10; i++) {
        soma2 = soma2 + ((vetor[i] - media) * (vetor[i] - media));
    }

    desvio_padrao = sqrt((1.0 / 9.0) * soma2);

    printf("\n\nO valor do desvio-padrao dos numeros digitados eh: %lf", desvio_padrao);

    return 0;
}