#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um valor em reais e a cotacao do dolar. Em seguida imprima o valor correspondente em dolares. */

int main() {
    float real, cotacao_dolar, dolar;

    printf("Digite um valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);
    dolar = real / cotacao_dolar;
    printf("%f reais correspondem a %f dolares.", real, dolar);
    return 0;
}