#include <stdio.h>
#include <stdlib.h>

/* A importancia de R$780.000,00 sera dividida entre tres ganhadores de um concurso, sendo que:
 * i. O primeiro ganhador recebera 46% do total.
 * ii. O segundo recebera 32% do total.
 * iii. O terceiro recebera o restante.
 * Calcule e imprima a quantia recebida por cada um dos ganhadores. */

int main() {
    float primeiro, segundo, terceiro, premio;

    premio = 780000.00;
    primeiro = 0.46 * premio;
    segundo = 0.32 * premio;
    terceiro = premio - (primeiro + segundo);
    printf("Premio de R$%f sera dividido da seguinte maneira:"
           "\nO primeiro ganhador recebera R$%f"
           "\nO segundo ganhador recebera R$%f"
           "\nO terceiro ganhador recebera R$%f", premio ,primeiro, segundo, terceiro);
    return 0;
}