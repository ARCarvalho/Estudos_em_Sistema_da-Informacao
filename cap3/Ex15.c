#include <stdio.h>
#include <stdlib.h>

/* Faca um programa para ler um numero intiero positivo de tres digitos. Em seguida, calcule e mostre o numero formado pelos digitos invertidos do numero lido. */

int main() {
    int numero, numero_invertido1, numero_invertido2, numero_invertido3;

    printf("Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d", &numero);
    numero_invertido1 = numero % 10;
    numero = numero / 10;
    numero_invertido2 = numero % 10;
    numero = numero / 10;
    numero_invertido3 = numero % 10;
    printf("Invertido: %d%d%d", numero_invertido1, numero_invertido2, numero_invertido3);
    return 0;
}