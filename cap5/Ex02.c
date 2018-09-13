#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N em ordem decrescente. */

int main() {
    int numero, aux1, aux2;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    aux2 = numero;
    for (aux1 = 0; aux1 <= numero; aux1++) {

        printf("%d\n", aux2--);
    }

    return 0;
}