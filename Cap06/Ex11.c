#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia uma amtriz de tamanho 3 x 3. Imprima na tela o menor valor contido na matriz. */

int main() {
    double matriz[3][3];
    double menor;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite um valor para a matriz: ");
            scanf("%lf", &matriz[i][j]);
        }

    }

    menor = matriz[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (menor > matriz[i][j]) {
                menor = matriz[i][j];
            }
        }
    }

    printf("\nO menor numero da matriz eh %lf\n", menor);
    return 0;
}