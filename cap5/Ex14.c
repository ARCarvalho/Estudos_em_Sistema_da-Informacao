#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia um numero inteiro, maior ou igual a zero, do usuario. Imprima o enesimo termo da sequencia de Fibonacci. */

int main() {
    int numero, primeiro_termo, segundo_termo, fibonacci, i;

    printf("Digite um numero inteiro, maior ou igual a zero: ");
    scanf("%d", &numero);

    primeiro_termo = 0;
    segundo_termo = 1;

    for(i = 1; i <= (numero - 2); i++){
        fibonacci = primeiro_termo + segundo_termo;
        primeiro_termo = segundo_termo;
        segundo_termo = fibonacci;
    }
    printf("\nO numero desejado presente na serie de Fibonacci eh %d\n", fibonacci);

    return 0;
}