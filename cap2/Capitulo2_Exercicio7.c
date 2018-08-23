#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que leia um caractere e depois o imprima como um valor inteiro. */

int main() {
    char x;

    printf("Digite um caractere: ");
    scanf("%c", &x);
    printf("O valor inteiro do caractere \"%c\" eh %d\n", x,x);
    return 0;
}