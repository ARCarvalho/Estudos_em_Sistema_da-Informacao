#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que exiba a soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5. */

int main() {
    int soma, numero;

    soma = 0;
    numero = 0;
    while(numero < 1000){
        if((numero % 3 == 0) || (numero % 5 == 0)){
            soma = soma + numero;
        }
        numero++;
    }
    printf("\nSoma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 eh %d.\n", soma);
    return 0;
}