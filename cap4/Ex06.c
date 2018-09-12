#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre o seu peso ideal, utilizando as seguintes formulas (em que "h" corresponde a altura):
 * Homens: (72.7 * h) - 58
 * Mulheres: (62.1 * h) - 44.7 */

int main() {
    double altura, peso_ideal;
    char sexo;

    printf("Digite a altura da pessoa: ");
    scanf("%lf", &altura);
    printf("Digite o sexo da pessoa, com F para mulher ou M para homem: ");
    getchar();
    scanf("%c", &sexo);

    if((sexo == 'F') || (sexo == 'f')){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("\nO peso ideal da mulher descrita eh %fKg\n", peso_ideal);
    } else{
        if ((sexo == 'M') || (sexo == 'm')){
            peso_ideal = (72.7 * altura) - 58;
            printf("\nO peso ideal do homem descrito eh %fKg\n", peso_ideal);
        } else{
            printf("\nVoce digitou uma letra errada para o sexo da pessoa.\n");
        }
    }

    return 0;
}