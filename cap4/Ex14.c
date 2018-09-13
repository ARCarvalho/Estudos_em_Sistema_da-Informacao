#include <stdio.h>
#include <stdlib.h>

/* Faca um programa para verificar se determinado numero inteiro lido eh divisivel por 3 ou 5, mas nao simultaneamente pelos dois. */

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if((numero % 3 == 0) && (numero % 5 != 0)){
        printf("\nO numero %d eh divisivel por 3 e nao por 5.\n", numero);
    } else{
        if((numero % 3 != 0) && (numero % 5 == 0)){
            printf("\nO numero %d eh divisivel por 5 e nao por 3.\n", numero);
        } else{
            printf("\nO numero %d nao eh divisivel somente por 3 ou somente por 5.\n", numero);
        }
    }
    return 0;
}