#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um valor inteiro N nao negativo. Se o valorde N for invalido, o usuario devera digitar outro ate que ele seja valido (ou seja, positivo). Em seguida, leia um vetor V contendo N posicoes de inteiros, em que cada valor devera ser maior ou igual a 2. Esse vetor devera ser alocado dinamicamente. */

int main() {
    int *Vetor;
    int num, i, valor;

    printf("Digite um valor nao negativo: ");
    scanf("%d", &num);

    while(num <= 0) {
        printf("Valor invalido!\n\n");
        printf("Digite outro valor: ");
        scanf("%d", &num);
        printf("\n");
    }

    Vetor = (int *) malloc(sizeof(int) * num);

    for (i = 0; i < num; i++) {
        printf("Digite agora um valor maior ou igual a 2: ");
        scanf("%d", &valor);
        Vetor[i] = valor;

        while(Vetor[i] < 2){
            printf("\nValor invalido.\n");
            printf("Digite outro valor que seja maior ou igual a 2: ");
            scanf("%d", &valor);
            Vetor[i] = valor;
            printf("\n");
        }
    }

    for (i = 0; i < num; i++) {
        printf("Valor %d eh %d.\n", i + 1, Vetor[i]);
    }

    free(Vetor);

    return 0;
}