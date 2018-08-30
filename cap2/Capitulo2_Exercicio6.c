#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um valor do tipo double e depois o imprima na forma de notacao cientifica. */

int main() {
    double x;

    printf("Digite um valor do tipo double: ");
    scanf("%lf", &x);
    printf("Valor digitado em notacao cientifica: %e\n", x);
    return 0;
}
