#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia uma matriz de tamanho 4x4. Imprima na tela o maior valor contido nessa matriz e a sua localizacao. */

int main() {
    double matriz[4][4];
    double maior;
    int i, j, aux1, aux2;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("\nDigite um valor para a posicao [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%lf", &matriz[i][j]);

        }
    }

    aux1 = 0;
    aux2 = 0;
    maior = -999999999;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                aux1 = i;
                aux2 = j;
            }
        }
    }


    printf("O maior valor dessa matriz eh %lf e esta na posicao [%d][%d].\n", maior, aux1 + 1, aux2 + 1);
    return 0;
}