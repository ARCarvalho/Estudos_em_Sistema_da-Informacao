#include <stdio.h>
#include <stdlib.h>

/* Escreva uma funcao que receba por parametro dois numeros e retorne o maior deles. */

int maior_numero(int x, int y){
    if (x > y){
        return printf("\n%d eh o maior numero digitado!", x);
    } else if (y > x){
        return printf("\n%d eh o maior numero digitado!", y);
    } else
        return printf("\n4Os numeors sao iguais!");
}

int main() {
    int x, y;

    printf("Escolha um valor para x: ");
    scanf("%d", &x);

    printf("\nEscolha um valor para y: ");
    scanf("%d", &y);

    maior_numero(x, y);
    return 0;
}