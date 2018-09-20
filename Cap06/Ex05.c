#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um vetor de oito posicoes. Em seguida, leia tambem dois valores X e Y quaisquer correspondente a duas posicoes no vetor. Seu programa devera exibir a soma dos valore sencontrados nas respectivas posicoes X e Y. */

int main() {
    double vetor[8];
    double soma;
    int i, X, Y;

    for (i = 0; i < 8; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%lf", &vetor[i]);
    }

    printf("\nDigite duas posicoes do vetor criado para somar elas: ");
    scanf("%d %d", &X, &Y);

    soma = vetor[X] + vetor[Y];
    printf("\nA soma dos valores encontrados nas posicoes vetor[%d] e vetor[%d] eh %lf.\n", X, Y, soma);
    return 0;
}