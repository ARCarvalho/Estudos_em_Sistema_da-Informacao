#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que faca a leitura de varios numeros inteiros ate que se digite um numero negativo. O programa tem de retornar o maior e o menor numero lido. */

int main() {
    int numero, maior, menor;

    numero = 0;
    maior = -999999;
    menor = 9999999;
    while(numero >= 0){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        if(numero >= maior){
            maior = numero;
        }
        if((numero <= menor) && (numero >= 0)) {
            menor = numero;
        }
    }
    printf("\nO maior numero digitado eh %d e o menor digitado eh %d.\n", maior, menor);
    return 0;
}