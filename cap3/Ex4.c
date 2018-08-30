#include <stdio.h>
#include <stdlib.h>

/* Leia quatro valores do tipo float. Calcule e exiba a media aritmetica desses valores. */

int main() {
    float numero1, numero2, numero3, numero4, media_aritmetica;

    printf("Digite quatro valores do tipo float: ");
    scanf("%f %f %f %f", &numero1, &numero2, &numero3, &numero4);
    media_aritmetica = (numero1 + numero2 + numero3 + numero4) / 4;
    printf("A media aritmetica de %f, %f, %f e %f eh %f", numero1, numero2, numero3, numero4, media_aritmetica);
    return 0;
}