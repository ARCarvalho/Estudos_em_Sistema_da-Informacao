#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faca um programa que leia uma string e imprima as 4 primeiras letras dela. */

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    gets(str);

    printf("\n\n");
    printf("As primeiras quatro letras da string digitada sao:\n");
    for (i = 0; i < 4; i++) {
        printf("%6c", str[i]);
    }


    return 0;
}