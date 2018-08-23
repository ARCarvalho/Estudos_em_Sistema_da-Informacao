#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia tres variaveis: char, int e float. Em seguida, imprima-as de tres maneiras diferentes: separadas por espacos, por uma tabulacao horizontal e uma em cada linha. Use um unico comando printf() para cada operacao de escrita das tres variaveis. */

int main() {
    char x;
    int y;
    float z;

    printf("Digite uma variavel do tipo char: ");
    scanf("%c", &x);
    printf("\nDigite uma variavel do tipo int: ");
    scanf("%d", &y);
    printf("\nDigite uma variavel do tipo float: ");
    scanf("%f", &z);

    printf("\n\nVariaveis escolhidas separadas por espacos: %c %d %f\n", x, y, z);
    printf("\nVariaveis escolhidas separadas por tabulacao horizontal: %c\t%d\t%f\t\n", x, y, z);
    printf("\nVariaveis escolhidas uma em cada linha:\n %c\n %d\n %f\n", x, y, z);

    return 0;
}