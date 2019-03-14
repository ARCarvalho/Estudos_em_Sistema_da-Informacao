#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que contenha uma estrutura representando uma data valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o numero de dias que decorreram entre as duas datas. */

struct data {
    int dia;
    int mes;
    int ano;
};

int main() {
    int i,
    struct data data[2];

    for (i = 0; i < 2; i++) {
        printf("Digite o dia: ");
        scanf("%d", &data[i].dia);

        printf("Digite o mes:");
        scanf("%d", &data[i].mes);

        printf("Digite o ano: ");
        scanf("%d", &data[i].ano);

        printf("\n");
        setbuf(stdin, NULL);
    }





    return 0;
}