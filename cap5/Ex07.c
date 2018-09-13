#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que peca ao usuario para digitar 10 valores. Some esses valores e apresente o resultado na tela. */

int main() {
    double numero, soma;
    int i;

    soma = 0;
    for(i = 0; i <= 9; i++) {
        printf("Digite um valor: ");
        scanf("%lf", &numero);
        soma = soma + numero;

    }
    printf("\nA soma dos valores digitados eh %lf.\n", soma);
    return 0;
}