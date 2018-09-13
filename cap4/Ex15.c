#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faca um programa que leia os coeficientes de uma equacao do segundo grau. Em seguida, calcule e mostre as raizes dessa equacao, lembrando que as raizes sao calculadas conforme o livro, em que delta = b*b - 4*a*c. */

int main() {
    double coeficiente_a, coeficiente_b, coeficiente_c, raiz1, raiz2, delta;

    printf("Digite o valor do coeficente \"a\" da equacao de segundo grau: ");
    scanf("%lf", &coeficiente_a);
    printf("Digite o valor do coeficente \"b\" da equacao de segundo grau: ");
    scanf("%lf", &coeficiente_b);
    printf("Digite o valor do coeficente \"c\" da equacao de segundo grau: ");
    scanf("%lf", &coeficiente_c);

    delta = (coeficiente_b * coeficiente_b) - (4 * coeficiente_a * coeficiente_c);

    if(coeficiente_a == 0){
        printf("\nNao eh equacao de segundo grau\n");
    } else{
        if(delta < 0){
            printf("\nNao existe raiz.\n");
        } else{
            if(delta == 0){
                raiz1 = (-coeficiente_b) / (2 * coeficiente_a);
                printf("\nRaiz unica: %lf.\n", raiz1);
            } else {
                if(delta > 0){
                    raiz1 = (-coeficiente_b + sqrt(delta)) / (2 * coeficiente_a);
                    raiz2 = (-coeficiente_b - sqrt(delta)) / (2 * coeficiente_a);
                    printf("\nRaizes: %lf e %lf\n", raiz1, raiz2 );
                }
            }
        }
    }
    return 0;
}