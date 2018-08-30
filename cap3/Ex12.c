#include <stdio.h>
#include <stdlib.h>

/* Leia a altura e raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular eh calculado por meio da seguinte formula: V = PI * raio * raio * altura, em que PI = 3.141592. */

int main() {
    float volume, altura, raio;
    const float PI = 3.141592;

    printf("Digite a altura de um cilindro circular: ");
    scanf("%f", &altura);
    printf("Digite o raio de um cilindro circular: ");
    scanf("%f", &raio);
    volume = PI * (raio * raio) * altura;
    printf("O volume do cilindro de altura %f e raio %f eh %f.", altura, raio, volume);
    return 0;
}