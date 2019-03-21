#include <stdio.h>
#include <stdlib.h>

/* Excreva um programa qque contenha duas variaveis inteiras. Compare seus enderecos e exiba o maior endereco. */

int main() {
    int a = 15;
    int b = 20;
    int *pont1, *pont2;

    pont1 = &a;
    pont2 = &b;

    if(pont1 > pont2) {
        printf("\nO endereco de pont1, %p, eh maior que o de pont2, %p.\n", pont1, pont2);
    } else if(pont2 > pont1) {
        printf("\nO endereco de pont2, %p, eh maior que o de pont1, %p.\n", pont2, pont1);
    }

    return 0;
}