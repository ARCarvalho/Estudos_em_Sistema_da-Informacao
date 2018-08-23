#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que solicite ao usuario entrar com o valor do dia, mes e ano (inteiros). Em seguida, imrpima os valores lidos separados por uma barra (/). */

int main() {
    int dia, mes, ano;

    printf("Por favor entre com dia, mes e ano separados por /: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data: %d/%d/%d", dia, mes, ano);
    return 0;
}