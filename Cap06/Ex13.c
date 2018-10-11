#include <stdio.h>
#include <stdlib.h>

/* Faca um programa para ler 10 numeros diferentes a serem armazenados em um vetor. Os numeros deverao ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuario digite um numero que ja foi digitado anteriormente, o programa devera pedir a ele para digitar outro numero. Note que cada valor digitado pelo usuario deve ser pesquisado no vetor, verificando se ele existe entre os numeros que ja foram fornecidos. Exiba na tela o vetor final que foi digitado. */

int main() {
    double num[10];
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &num[i]);
        for (j = 0; j < i; j++) {
            while (num[i] == num[j]) {
                printf("\nNumero repetido!\n");
                printf("\nDigite outro numero: ");
                scanf("%lf", &num[i]);
            }
        }
    }

    printf("\n\nValores digitados:");
    for (i = 0; i < 10; i++) {
        printf("\t%lf\t", num[i]);
    }

    return 0;
}