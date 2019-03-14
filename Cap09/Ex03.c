#include <stdio.h>
#include <stdlib.h>

/* Escreva uma funcao que receba por parametro um temperatura em graus Fahrenheit e a retorne convertida em graus Celsius. A formula de conversao eh: C = (F - 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

int temperatura(int F){
    int C;

    C = (F - 32.0) * (5.0/9.0);

    printf("\nO valor de %dF eh %dC.", F, C);

    return 0;
}

int main() {
    int F;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%d", &F);

    temperatura(F);
    return 0;
}