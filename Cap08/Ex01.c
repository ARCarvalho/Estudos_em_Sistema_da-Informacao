#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct cadastro cad;

    printf("Digite o nome da pessoa: ");
    setbuf(stdin, NULL);
    gets(cad.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &cad.idade);

    printf("Digite o endereco da pessoa: ");
    setbuf(stdin, NULL);
    gets(cad.endereco);

    printf("\n\nNome: %s", cad.nome);
    printf("\nIdade: %d", cad.idade);
    printf("\nEndereco: %s", cad.endereco);

    return 0;
}