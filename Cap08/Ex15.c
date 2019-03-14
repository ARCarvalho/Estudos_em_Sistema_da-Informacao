#include <stdio.h>
#include <stdlib.h>


/* Crie uma uniao contendo dois tipos basicos diferentes. Agora, escreva um programa que inicialize um dos tipos dessa uniao e exiba em tela o valor do outro tipo. */


union uniao{
    int x;
    char y;
};

int main() {
    union uniao uniao;

    printf("Escolha um valor para x: ");
    scanf("%d", &uniao.x);

    printf("O valor de y eh: %d.", uniao.y);
    return 0;
}