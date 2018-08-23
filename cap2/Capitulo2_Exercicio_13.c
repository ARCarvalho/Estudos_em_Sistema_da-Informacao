#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um caractere do tipo char e depois o imprima entre aspas dupla. Assim, se o caractere lido for a letra A, devera ser impresso "A". */

int main() {
    char x;

    printf("Escreva um caractere: ");
    scanf("%c", &x);
    printf("O caractere digitado foi: \"%c\"\n", x);
    return 0;
}