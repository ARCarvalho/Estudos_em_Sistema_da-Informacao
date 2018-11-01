#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faca um programa que leia uma string e a imprima na tela. */

int main() {
    char str[100];

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    gets(str);
    printf("\n%s", str);

    return 0;
}