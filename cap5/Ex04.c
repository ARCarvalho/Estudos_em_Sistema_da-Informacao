#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que determine e mostre os cinco primeiros multiplos de 3 considerando numeros maiores que 0. */


int main() {
    int mult, i;


    for(i = 0; i <= 4; i++){
        mult = (i + 1) * 3;
        printf("%d\n", mult);
    }
    return 0;
}