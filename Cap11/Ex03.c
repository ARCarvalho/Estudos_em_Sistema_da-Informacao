#include <stdio.h>
#include <stdlib.h>

/* Crie uma estrutura chamado Cadastro. Essa estrutura deve conter o nome, a idade e o endereco de uma pessoa. Agora, escreva uma funcao que receba um inteiro positivo N e retorne para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite tambem que o usuario digite os dados desse vetor dentro da funcao. */

struct Cadastro{
    char nome[50];
    int idade;
    char endereco[100];
} *Cadastro;


int Alocar_memo(int num) {

    Cadastro = (struct Cadastro *) malloc(sizeof(Cadastro) * num);

    return 0;

}

int main() {
    int num, i;


    printf("Digite um valor N para ser a quantidade de cadastros criados: ");
    scanf("%d", &num);
    setbuf(stdin, NULL);

    Alocar_memo(num);

    for (i = 0; i < num; i++) {
        printf("\nDigite o nome da pessoa: ");
        scanf("%[^\n]s", Cadastro->nome);
        setbuf(stdin, NULL);

        printf("\nDigite a idade da pessoa: ");
        scanf("%d", &Cadastro->idade);
        setbuf(stdin, NULL);

        printf("\nDigite o endereco da pessoa: ");
        scanf("%[^\n]s", Cadastro->endereco);
        setbuf(stdin, NULL);
    }

    free(Cadastro);

    return 0;
}