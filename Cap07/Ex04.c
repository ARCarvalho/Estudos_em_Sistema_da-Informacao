#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faca um programa que leia uma string e a imprima de tras para frente. */

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    gets(str);

    printf("\nString digitada de tras para frente: ");
    for (i = strlen(str) - 1; i > -1 ; i--) {
        printf("%c", str[i]);
    }

    return 0;
}