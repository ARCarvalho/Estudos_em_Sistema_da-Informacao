#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que converta uma letra maiuscula em letra minuscula. Use a tabela ASCII para isso. */

int main() {
    char letra_M, letra_m;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra_M);
    letra_m = letra_M + 32;
    printf("Letra minuscula: %c", letra_m);
    return 0;
}