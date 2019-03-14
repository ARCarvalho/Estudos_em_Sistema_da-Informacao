#include <stdio.h>
#include <stdlib.h>

/* Faca uma funcao que receba um numero inteiro de 1 a 12 e imprima em tela o mes e a sua quantidade de dias de acordo com o numero digitado pelo usuario. */

int mes_e_dias(int num){
    switch (num) {
        case 1 : printf ("Janeiro 31 dias\n"); break;
        case 2 : printf ("Fevereiro 28 dias\n"); break;
        case 3 : printf ("Marco 31 dias\n"); break;
        case 4 : printf ("Abril 30 dias\n"); break;
        case 5 : printf ("Maio 31 dias\n"); break;
        case 6 : printf ("Junho 30 dias\n"); break;
        case 7 : printf ("Julho 31 dias\n"); break;
        case 8 : printf("Agosto 31 dias\n"); break;
        case 9 : printf ("Setembro 30 dias\n"); break;
        case 10 : printf ("Outubro 31 dias\n"); break;
        case 11 : printf ("Novembro 30 dias\n"); break;
        case 12 : printf ("Dezembro 31 dias\n"); break;
        default: printf ("Valor invalido!\n");
    }
    return 0;
}

int main() {
    int num;

    printf("Escolha um numero de 1 a 12: ");
    scanf("%d", &num);

    mes_e_dias(num);

    return 0;
}