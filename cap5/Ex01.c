#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N em ordem crescente. */

int main() {
    int numero, aux;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for ( aux = 0; aux <= numero; aux++) {
        printf("%d\n", aux);
    }

    return 0;
}