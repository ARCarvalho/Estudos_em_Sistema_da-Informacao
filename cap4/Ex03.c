#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um numero inteiro e verifique se esse numero eh par ou impar. */

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("O numero %d eh par. \n", num);
    } else {
        printf("O numero %d eh impar.\n", num);
    }

    return 0;
}