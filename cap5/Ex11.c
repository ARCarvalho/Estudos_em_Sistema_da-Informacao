#include <stdio.h>
#include <stdlib.h>

/* Faca um algoritmo que leia um numero positivo e imprima seus divisores. Exemplo: os divisores do numero 66 sao: 1, 2, 3, 6, 11, 22, 33, 66. */

int main() {
    int numero, i;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}