#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Leia uma string do teclado e conte quantas vogais ela possui. Entre com um caractere (vogal ou consoante) e substitua todas  as vogais da palavra dada por esse caractere. Ao final, imprima a nova string e o numero de vogais que ela possui. */

int main() {
    char str[100];
    char caractere;
    int i, contador_vogais;

    printf("Digite uma string: ");
    setbuf(stdin, NULL);
    gets(str);

    contador_vogais = 0;
    for (i = 0; i < strlen(str) - 1; i++) {
        if ((str[i] == 'a') || (str[i] == 'A')) {
            contador_vogais++;
        } else if ((str[i] == 'e') || (str[i] == 'E')) {
            contador_vogais++;
        } else if ((str[i] == 'i') || (str[i] == 'I')) {
            contador_vogais++;
        } else if ((str[i] == 'o') || (str[i] == 'O')) {
            contador_vogais++;
        } else if ((str[i] == 'u') || (str[i] == 'U')) {
            contador_vogais++;
        }
    }

    printf("\n\nA string digitada possui %d vogais.\n\n", contador_vogais);

    printf("Agora escolha um caracter qualquer para substituir todas as vogais da string digitada: ");
    scanf("%c", &caractere);

    for (i = 0; i < strlen(str) - 1; i++) {
        if ((str[i] == 'a') || (str[i] == 'A')) {
            str[i] = caractere;
        } else if ((str[i] == 'e') || (str[i] == 'E')) {
            str[i] = caractere;
        } else if ((str[i] == 'i') || (str[i] == 'I')) {
            str[i] = caractere;
        } else if ((str[i] == 'o') || (str[i] == 'O')) {
            str[i] = caractere;
        } else if ((str[i] == 'u') || (str[i] == 'U')) {
            str[i] = caractere;
        }
    }

    contador_vogais = 0;
    for (i = 0; i < strlen(str) - 1; i++) {
        if ((str[i] == 'a') || (str[i] == 'A')) {
            contador_vogais++;
        } else if ((str[i] == 'e') || (str[i] == 'E')) {
            contador_vogais++;
        } else if ((str[i] == 'i') || (str[i] == 'I')) {
            contador_vogais++;
        } else if ((str[i] == 'o') || (str[i] == 'O')) {
            contador_vogais++;
        } else if ((str[i] == 'u') || (str[i] == 'U')) {
            contador_vogais++;
        }
    }

    printf("\nA nova string eh: %s\n\n", str);
    printf("A nova string possui %d vogais.", contador_vogais);
    return 0;
}