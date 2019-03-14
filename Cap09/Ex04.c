#include <stdio.h>
#include <stdlib.h>

/* Escreva uma funcao que receba por parametro a altura e o raio de um cilindro circular e retorne o volume desse cilindro. O volume de um cilindro circular eh calculado por meio da seguinte formula: V = PI * raio * raio * altura, em que PI = 3.1414592. */

double volume(double altura, double raio){
    double V;
    double PI = 3.1414592;

    V = PI * raio * raio * altura;
    printf("\nO volume do cilindro circular de raio %lf e altura %lf eh %lf.", raio, altura, V);

    return 0;
}


int main() {
    double altura, raio;

    printf("Digite a altura do cilindro que quer se calcular o volume: ");
    scanf("%lf", &altura);

    printf("\nDigite o raio do cilindro que quer se calcular o volume: ");
    scanf("%lf", &raio);

    volume(altura, raio);
    return 0;
}