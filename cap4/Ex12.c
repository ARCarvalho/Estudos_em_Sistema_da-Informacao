#include <stdio.h>
#include <stdlib.h>

/* Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse numero. Isto eh, domingo, se 1, segunda-feira, se 2, e assim por diante. */

int main() {
    int dia_da_semana;

    printf("Digite um numero entre 1 e 7 para ser mostrado seu correspondente dia da semana: ");
    scanf("%d", &dia_da_semana);

    switch(dia_da_semana){
        case 1: printf("\nDomingo.\n"); break;
        case 2: printf("\nSegunda-feira.\n"); break;
        case 3: printf("\nTerca-feira.\n"); break;
        case 4: printf("\nQuarta-feira.\n"); break;
        case 5: printf("\nQuinta-feira.\n"); break;
        case 6: printf("\nSexta-feira.\n"); break;
        case 7: printf("\nSabado.\n"); break;
        default: printf("\nNumero invalido!\n");
    }

    return 0;
}