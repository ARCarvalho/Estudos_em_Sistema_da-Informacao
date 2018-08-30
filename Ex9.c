#include <stdio.h>
#include <stdlib.h>

/* Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao eh R = G * PI/180, sendo G o angulo em graus e R em radianos e PI = 3.141592. */

int main() {
    float angulo_graus, angulo_radianos;

    printf("Digite um angulo em graus: ");
    scanf("%f", &angulo_graus);
    angulo_radianos = angulo_graus * 3.141592/180;
    printf("Um angulo de %f graus equivale a um angulo de %f radianos", angulo_graus, angulo_radianos);
    return 0;
}