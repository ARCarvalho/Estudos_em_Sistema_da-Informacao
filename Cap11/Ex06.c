#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensoes da matriz deverao ser lidas do usuario. Em seguida, escreva uma funcao que receba uma valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrario. */

int main() {
    int **matriz;
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas da matriz desejada: ");
    scanf("%d", &linhas);

    printf("\nDigite o numero de colunas da matriz desejada: ");
    scanf("%d", &colunas);

    printf("\n\n");


    matriz = (int **) malloc(linhas * sizeof(int *));
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        for (j = 0; j < colunas; j++) {
           printf("Digite o valor para a posicao M[%d][%d]: ", i+1, j+1);
           scanf("%d", &matriz[i][j]);
           printf("\n");
        }
    }

    for (i = 0; i < linhas ; i++) {
        for (j = 0; j < colunas ; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n\n");
    }



    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}