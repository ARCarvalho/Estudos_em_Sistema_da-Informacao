#include <stdio.h>
#include <stdlib.h>

/* Excreva um programa qque contenha duas variaveis inteiras. Leia essas variaveis do teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco. */

int main() {
    int a, b;
    int *pont1, *pont2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("\nDigite um segundo numero inteiro: ");
    scanf("%d", &b);

    pont1 = &a;
    pont2 = &b;

    if(pont1 > pont2) {
        printf("\nO endereco do primeiro numero (%p) eh maior que o endereco do segundo numero (%p). Conteudo do primeiro numero: %d.\n", pont1, pont2, *pont1);
    } else if(pont2 > pont1) {
        printf("\nO endereco do segundo numero (%p) eh maior que o endereco do primeiro numero (%p). Conteudo do segundo numero: %d.\n",pont2, pont1, *pont2);
    }

    return 0;
}