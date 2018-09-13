#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem "FIM" apos a contagem. */

int main() {
    int contagem, i;

    for(i = 0; i <= 10; i++ ) {
        contagem = 10 - i;
        printf("%d\n", contagem);
    }
    printf("\nFIM!\n");
    return 0;
}