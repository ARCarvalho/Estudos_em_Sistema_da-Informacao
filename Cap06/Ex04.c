#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que possua um array de nome que armazene seis numeros inteiros. O programa deve executar os seguintes passos:
 * a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
 * b) Armazene em uma variavel a soma dos valores das posicoes A[0], A[1] e A[5] do array e mostre na tela essa soma.
 * c) Modifique o array da posicao 4, atribuindo a essa posicao o valor 100.
 * d) Mostre na tela cada valor do array A, um em cada linha. */

int main() {
    int A[6] = {1,0,5,-2,-5,7};
    int i, soma;

    soma = A[0] + A[1] + A[5];
    printf("\nSoma dos valores de A[0] + A[1] + A[5] eh %d\n", soma);

    A[4] = 100;

    for (i = 0; i < 6; i++) {
        printf("\nO valor de A[%d] eh %d\n", i, A[i]);
    }
    return 0;
}