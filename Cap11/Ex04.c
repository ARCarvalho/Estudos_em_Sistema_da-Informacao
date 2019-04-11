#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que leia do usuario o tamanho de um vetor a ser lido. Em seguida, faca a alocacao dinamica desse vetor. Por fim, leia o vetor do usuario e o imprima. */

int main() {
    int num;
    char *vetor;

    printf("Informe o tamanho do vetor a ser lido: ");
    scanf("%d", &num);
    setbuf(stdin, NULL);

    vetor = (char *) malloc(sizeof(char) * num);

    printf("\nEscreva uma frase do tamanho do vetor informado:");
    scanf("%[^\n]s", vetor);
    setbuf(stdin, NULL);

    printf("\nA frase digitada foi: %s", vetor);
    setbuf(stdin, NULL);

    free(vetor);
    return 0;
}