#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N em ordem decrescente. */

int main() {
    int numero, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);


    for (i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
