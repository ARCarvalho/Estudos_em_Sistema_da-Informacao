#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que calcule e mostre a soma dos 50 primeiros pares. */

int main() {
    int numero, soma_pares;

    numero = 1;
    soma_pares = 0;
    while(numero <= 100){
        if(numero % 2 == 0){
            soma_pares = soma_pares + numero;
            numero++;
        }
        numero++;
    }
    printf("A soma dos 50 primeiros numeros pares eh %d.", soma_pares);
    return 0;
}