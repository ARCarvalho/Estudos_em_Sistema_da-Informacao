#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia dois numeros inteiros e depois os imprima na ordem inversa em que eles foram lidos. */

int main() {
    int x, y;

    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Ordem inversa: %d e %d\n", y, x);
    return 0;
}