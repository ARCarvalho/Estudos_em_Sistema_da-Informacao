#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faca um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
 * O numero digitado ao quadrado.
 * A raiz quadrada do numero digitado. */

int main() {
    float num, quadrado, raiz_quadrada;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num >= 0){
        quadrado = powf(num, 2);
        raiz_quadrada = sqrtf(num);
        printf("O quadrado de %f eh %f.\n", num, quadrado);
        printf("A raiz quadrada de %f eh %f.\n", num, raiz_quadrada);
    } else {
        printf("O numero %f eh negativo.\n", num);
    }

    return 0;
}