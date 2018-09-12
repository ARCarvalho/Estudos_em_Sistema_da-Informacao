#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faca um programa que leia tres numeros inteiros positivos e efetue o calculode uma das seguintes medias de acordo com um valor numerico digitado pelo usuario e mostrado na tabela do livro. */

int main() {
    signed int num1, num2, num3, opcao;
    double media_geo, media_pon, media_har, media_arit;

    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Digite uma das opcoes abaixo para calcular a media desejada dos numeros digitados:\n"
           "(1) Media Geometrica\n"
           "(2) Media Ponderada\n"
           "(3) Media Harmonica\n"
           "(4) Media Aritmetica\n");
    printf("Opcao escolhida: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        media_geo = pow(num1 * num2 * num3, 1.0/3.0);
        printf("\nA media geometrica dos numeros %d, %d e %d eh %lf.\n", num1, num2, num3, media_geo);
    } else{
        if(opcao == 2){
            media_pon = (num1 + (2 * num2) + (3 * num3))/6.0;
            printf("\nA media ponderada dos numeros %d, %d e %d eh %lf.\n", num1, num2, num3, media_pon);
        } else{
            if(opcao == 3){
                media_har = 1.0 / ((1.0/num1) + (1.0/num2) + (1.0/num3));
                printf("\nA media harmonica dos numeros %d, %d e %d eh %lf.\n", num1, num2, num3, media_har);
            } else {
                if(opcao == 4){
                    media_arit = (num1 + num2 + num3) / 3.0;
                    printf("\nA media aritmetica dos numeros %d, %d e %d eh %lf.\n", num1, num2, num3, media_arit);
                } else {
                    printf("\nOpcao invalida\n.");
                }
            }
        }
    }



    return 0;
}