#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que calcule e mostre a soma dos 50 primeiros pares. */

int main() {
    int numero     = 1;
    int soma_pares = 0;
    int contador   = 0;

    while(contador < 50){

        if(numero % 2 == 0){
            soma_pares += numero;
            contador++;
        }

        numero++;
    }

    printf("A soma dos 50 primeiros numeros pares eh %d.", soma_pares);
    return 0;
}
