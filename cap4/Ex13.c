#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que mostre ao usuario um menu com quatro opcoes de operacoes matematicas (as operacoes basicas, por exemplo). O usuario escolhe uma das opcoes, e seu programa pede dois valores numericos e realiza a operacao, mostrando o resultado. */

int main() {
    int opcao;
    double num1, num2, operacao;

    printf("Escolha uma das operacoes matematicas abaixo:\n");
    printf("\n(1) Adicao\n"
           "\n(2) Subtracao\n"
           "\n(3) Multiplicacao\n"
           "\n(4) Divisao\n");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    printf("\nDigite dois numeros para ser realizada a operacao escolhida: ");
    scanf("%lf %lf", &num1, &num2);

    if(opcao == 1){
        operacao = num1 + num2;
        printf("Adicao: %lf + %lf = %lf", num1, num2, operacao);
    } else{
        if(opcao == 2){
            operacao = num1 - num2;
            printf("Subtracao: %lf - %lf = %lf", num1, num2, operacao);
        } else{
            if(opcao == 3){
                operacao = num1 * num2;
                printf("Multiplicacao: %lf * %lf = %lf", num1, num2, operacao);
            } else{
                if(opcao == 4){
                    operacao = num1 / num2;
                    printf("Divisao: %lf / %lf = %lf", num1, num2, operacao);
                } else{
                    printf("Valor invalido!");
                }
            }
        }
    }
    return 0;
}