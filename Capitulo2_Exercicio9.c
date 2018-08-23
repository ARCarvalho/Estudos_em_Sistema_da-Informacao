#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia dois valores do tipo float. Use um unico comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos. */

int main() {
    float x, y;

    printf("Digite dois valores do tipo float: ");
    scanf("%f %f", &x, &y);
    printf("Ordem inversa: %f e %f", y, x);
    return 0;
}