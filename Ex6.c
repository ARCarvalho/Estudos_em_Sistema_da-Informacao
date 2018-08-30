#include <stdio.h>
#include <stdlib.h>

/* Leia uma velocidade em km/h (quilometros por hora) e apresente convertida em m/s (metros por segundo). A formula de conversao eh M = K/36, sendo K a velocidade em km/h e M em m/s. */

int main() {
    float velocidade_km, velocidade_m;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade_km);
    velocidade_m = velocidade_km/3.6;
    printf("A velocidade %fkm/h equivale a %fm/s", velocidade_km, velocidade_m);
    return 0;
}