#include <stdio.h>
#include <stdlib.h>

/* Escreva uma funcao para o calculo do volume de uma esfera V = (4/3) * PI * r * r * r, em que PI = 3.1414592 valor do raio r deve ser passado por parametro. */

double volume_esfera(double raio){
    double PI = 3.1414592;
    double volume;

    volume = (4.0/3.0) * PI * raio * raio * raio;

    printf("O valor do volume de uma esfera de raio %lf eh %lf.", raio, volume);

    return 0;
}

int main() {
    double raio;

    printf("Digite o valor do raio de uma esfera: ");
    scanf("%lf", &raio);

    volume_esfera(raio);
    return 0;
}