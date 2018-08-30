#include <stdio.h>
#include <stdlib.h>

/* Face um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual. */

int main() {
    int ano, idade;

    printf("Digite a sua idade em anos: ");
    scanf("%d", &idade);
    ano = 2018 - idade;
    printf("O seu ano de nascimento foi %d.", ano);
    return 0;
}