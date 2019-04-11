#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na memoria: char, int, float, double. */

int main() {

    printf("O tamanho em byte do tipo char eh: %d\n", sizeof(char));
    printf("O tamanho em byte do tipo int eh: %d\n", sizeof(int));
    printf("O tamanho em byte do tipo float eh: %d\n", sizeof(float));
    printf("O tamanho em byte do tipo double eh: %d\n", sizeof(double));

    return 0;
}