#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a prestacao:
 * For maior que 20% do salario, imprima "Emprestimo nao concedido."
 * Caso contrario, imprima: "Emprestimo concedido." */

int main() {
    float salario, emprestimo;

    printf("Digite o salario do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &emprestimo);

    if(emprestimo > (0.2 * salario)) {
        printf("\nEmprestimo nao concedido.");
    } else {
        printf("\nEmprestimo concedido.");
    }

    return 0;
}