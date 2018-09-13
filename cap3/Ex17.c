#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um numero inteiro e mostre o seu complemento bit a bit. */

int main() {
    unsigned int numero;
    unsigned int  complemento;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    complemento = ~numero;
    printf("O complemento de %d, bit a bit, eh %d", numero, complemento);
    return 0;
}
