#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia tres caracteres do tipo char e depois os imprima um em cada linha. Use um unico comando printf() para isso. */

int main() {
    char x, y, z;

    printf("Digite tres caracteres: ");
    scanf("%c %c %c", &x, &y, &z);
    printf("Primeiro caracter: %c\n"
           "Segundo caracter: %c\n"
           "Terceiro caracter: %c\n", x, y, z);
    return 0;
}