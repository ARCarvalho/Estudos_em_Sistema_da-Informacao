#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faca um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variavel. Em seguida, imprima a string invertida. */

int main() {
    char str[100];
    char c;
    int i, tamanho;

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    gets(str);

    tamanho = strlen(str);
    for (i = 0; i < tamanho / 2 ; i++) {
        c = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = c;
    }

    printf("A string invertida eh: %s", str);

    return 0;
}