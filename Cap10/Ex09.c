#include <stdio.h>
#include <stdlib.h>

/* Crie uma funcao que receba como parametro um vetor e o imprima. Nao utilize indices para percorrer o vetor, apenas aritmetica de ponteiros. */

int Imprime_vetor(int vetor[5]) {
    int *ponteiro1 = &vetor[0];
    int *ponteiro2 = &vetor[4];

    while(ponteiro1 <= ponteiro2){
        printf("\n%d", *ponteiro1);
        ponteiro1++;
    }

    return 0;
}

int main() {
    int vetor[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    Imprime_vetor(vetor);
    return 0;
}