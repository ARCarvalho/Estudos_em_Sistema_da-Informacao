#include <stdio.h>
#include <stdlib.h>

/* Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundaria. */

int main() {
    double matriz[3][3];
    int i, j;
    double soma;


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nDigite um valor para a posicao [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%lf", &matriz[i][j]);
        }
    }

    soma = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if ((i - j == 2) || (i - j == -2) || ((i == 2) && (j == 2))) {
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("\nA soma dos valores contidos na diagonal secundaria eh %lf.", soma);

    return 0;
}