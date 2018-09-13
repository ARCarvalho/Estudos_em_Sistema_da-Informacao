#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores desse numero, com excecao dele proprio. */

int main() {
    int numero, i, soma;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    soma = 0;
    for (i = 1; i < numero; i++) {
        if(numero % i == 0) {
            soma = soma + i;
        }
    }
    printf("\nA soma de todos os divisores, com excecao dele proprio eh %d.\n", soma);
    return 0;
}