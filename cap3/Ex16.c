#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um numero inteiro e mostre a multiplicacao e a divisao desse numero por dois. */

int main() {
    int numero, mult, div;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    mult = numero << 1;
    div = numero >> 1;
    printf("Multiplicado por 2: %d\n", mult);
    printf("Dividido por 2: %d", div);
    return 0;
}