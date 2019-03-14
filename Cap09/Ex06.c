#include <stdio.h>
#include <stdlib.h>

/* Escreva uma funcao que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule e retorne o IMC (indice de massa corporal) dessa pessoa: IMC = peso/(altura * altura). */

double indice_massa_corporal(double peso, double altura){
    double IMC;

    IMC = peso/(altura * altura);

    printf("\nO IMC da pessoa consultada eh %lf.", IMC);

    return 0;
}

int main() {
    double peso, altura;

    printf("Digite o peso em quilos da pessoa: ");
    scanf("%lf", &peso);
    printf("\nDigite a altura em metros da pessoa: ");
    scanf("%lf", &altura);

    indice_massa_corporal(peso, altura);

    return 0;
}