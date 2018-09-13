#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um numero inteiro positivo N e depois imprima os N primeiros numeros naturais impares. */

int main() {
    int numero, aux;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for ( aux = 0; aux <= numero; aux++) {
        if(aux % 2 == 1){
            printf("%d\n", aux);
        }
    }

    return 0;
}