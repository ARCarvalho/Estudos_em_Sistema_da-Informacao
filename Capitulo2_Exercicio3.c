#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um numero inteiro e depois imprima a mensagem "Valor lido:", seguido do valor inteiro. Use apenas um comando printf(). */

int main() {
    int x;

    scanf("%d", &x);
    printf("Valor lido: %d\n", x);
    return 0;
}