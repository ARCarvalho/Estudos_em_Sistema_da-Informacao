#include <stdio.h>
#include <stdlib.h>

/* Escreva uma funcao que receba dois valores numericos e um simbolo. Esse simbolo representarah a operacao que se deseja efetuar com os numeros. Assim, se o simbolo for "+", deverah ser realizada uma adicao, se for "-", uma subtracao, se for "/", uma divisao, e, se for "*", serah efetuada uma multiplicacao. Retorne o resultado da operacao para o programa principal. */

double operacao(double num1, double num2, char simbolo) {

    if (simbolo == '+') {
        return num1 + num2;
    } else if (simbolo == '-') {
        return num1 - num2;
    } else if (simbolo == '*') {
        return num1 * num2;
    } else if (simbolo == '/') {
        return num1 / num2;
    }

}



int main() {
    double num1, num2;
    char simbolo;


    printf("Digite um numero: ");
    scanf("%lf", &num1);
    getchar();

    printf("\nDigite o simbolo da operacao que deseja realizar: ");
    scanf("%c", &simbolo);
    getchar();

    printf("\nDigite o segundo numero: ");
    scanf("%lf", &num2);
    getchar();

    printf("O resultado da operacao escolhida eh %lf", operacao(num1, num2, simbolo));
    return 0;
}