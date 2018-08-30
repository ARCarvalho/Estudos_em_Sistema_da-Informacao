#include <stdio.h>
#include <stdlib.h>

/* Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A formula de conversao eh: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

int main() {
    float temp_F, temp_C;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &temp_C);
    temp_F = temp_C * (9.0/5.0) + 32.0;
    printf("%f graus Celsius equivale a %f graus Fahrenheit.", temp_C, temp_F);
    return 0;
}