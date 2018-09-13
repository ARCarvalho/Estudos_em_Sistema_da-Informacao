#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor lido. */

int main() {
    int i;
    double maior, menor, numero;

    maior = -99999999999;
    menor = 99999999999;
    for(i = 0; i <= 9; i++) {
        printf("Digite um valor: ");
        scanf("%lf", &numero);
        if(numero >= maior){
            maior = numero;
        }
        if(numero <= menor) {
            menor = numero;
        }
    }
    printf("\nMaior valor eh %lf e o menor valor eh %lf.\n", maior, menor);
    return 0;
}