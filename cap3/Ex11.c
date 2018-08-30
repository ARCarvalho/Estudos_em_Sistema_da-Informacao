#include <stdio.h>
#include <stdlib.h>

/* Leia um valor do raio de um circulo. Calcule e imprima a area do circulo correspondente. A area do circulo eh A = PI * raio * raio, sendo PI = 3.141592. */

int main() {
    float raio, area;
    const float PI = 3.141592;

    printf("Entre com o valor para o raio de um circulo: ");
    scanf("%f", &raio);
    area = PI * (raio * raio);
    printf("A area do circulo de raio %f eh %f", raio, area);
    return 0;
}