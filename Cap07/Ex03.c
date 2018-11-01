#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Sem usar a funcao strlen(), faca um programa que leia uma string e imprima quantos caracteres ela possui. */

int main() {
    char str[100];
    int i, contador;

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    gets(str);

    contador = 0;
    i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            contador++;
            i++;
        } else {
            i++;
        }
    }

    printf("\nA string digitada possui %d caracteres.", contador);

    return 0;
}