#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Sejam a e b os catetos de um triangulo cuja hipotenusa h eh obtida pela equacao: h = sqrt((a * a) + (b * b)). Faca um programa que leia os valores de a e b, e calcule o valor da hipotenusa atraves da formula dada. Imprima o resultado. */

int main() {
    double hipotenusa, cateto_a, cateto_b, aux;

    printf("Digite o valor do cateto \"a\": ");
    scanf("%lf", &cateto_a);
    printf("Digite o valor do cateto \"b\": ");
    scanf("%lf", &cateto_b);
    aux = (cateto_a * cateto_a) + (cateto_b * cateto_b);
    hipotenusa = sqrt(aux);
    printf("A hipotenusa dos catetos \"a\" e \"b\" eh %f", hipotenusa);
    return 0;
}