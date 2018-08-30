#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um numero inteiro e retorne seu antecessor e seu sucessor. */

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("O seu antecessor eh %d e o seu sucessor eh %d.", numero-1, numero+1);
    return 0;
}