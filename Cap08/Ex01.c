#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Implemente um programa que leia o nome, a idade e o endereco de uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida. */

struct cadastro {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct cadastro cad;

    printf("Digite o nome da pessoa: ");
    scanf("%[^\n]s", cad.nome);
    setbuf(stdin, NULL);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &cad.idade);
    setbuf(stdin, NULL);

    printf("Digite o endereco da pessoa: ");
    scanf("%[^\n]s", cad.endereco);
    setbuf(stdin, NULL);

    printf("\n\nNome: %s", cad.nome);
    printf("\nIdade: %d", cad.idade);
    printf("\nEndereco: %s", cad.endereco);

    return 0;
}