#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faca um programa que leia uma string e imprima uma mensagem dizendo se ela eh um palindromo ou nao. Um palindromo eh uma palavra que tem a propriedade de poder ser lida tanto da direita para esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso, etc.. */

int main() {
    char str[100];
    char str2[100];
    int tamanho, i, j, contador;

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    gets(str);

    tamanho = strlen(str);
    j = 0;
    for (i = tamanho - 1; i > -1 ; i--) {
        str2[j] = str[i];
        j++;
    }

    str2[j] = '\0';
    contador = 0;
    for (i = 0; i < tamanho -1 ; i++) {
        if (str[i] == str2[i]) {
            contador++;
        }
    }

    if (contador == tamanho -1) {
        printf("\nA string digitada eh um palindromo!\n");
    } else {
        printf("\nA string digitada nao eh um palindromo.\n");
    }
    return 0;
}