#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que leia dois numeros inteiros e exiba o resultado das operacoes de "ou excluisivo", "ou bit a bit" e "e bit a bit" */

int main(){
    int numero1, numero2, ou_esclusivo, ou_bit_a_bit, e_bit_a_bit;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    ou_esclusivo = numero1 ^ numero2;
    ou_bit_a_bit = numero1 | numero2;
    e_bit_a_bit = numero1 & numero2;

    printf("OU EXCLUSIVO: %d\n", ou_esclusivo);
    printf("OU BIT A BIT: %d\n", ou_bit_a_bit);
    printf("E BIT A BIT: %d\n", e_bit_a_bit);
    return 0;
}