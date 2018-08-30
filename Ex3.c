#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia tres valores inteiros e mostre sua soma. */

int main() {
    int numero1, numero2, numero3, soma;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    soma = numero1 + numero2 + numero3;
    printf("A soma de %d, %d e %d eh %d", numero1, numero2, numero3, soma);
    return 0;
}