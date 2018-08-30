#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um numero real e imprima a quinta parte desse numero. */

int main() {
    float numero;

    printf("Digite um numero real: ");
    scanf("%f", &numero);
    printf("A quinta parte de %f eh %f.", numero, numero/5);
    return 0;
}