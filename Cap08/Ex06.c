#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie uma estrutura representandoum aluno de uma disciplina. Essa estrutura deve conter o numero de matricula do aluno, seu nome e as notas de tres provas. Agora, escreva um programa que leia os dados de cinco aluno e os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior media geral dentre os cinco. */

struct aluno {
    int matricula;
    char nome[50];
    double nota[3];
};

int main() {
    int i, aux;
    double media[5];
    double menor_nota;
    struct aluno aluno[5];

    for (i = 0; i < 5 ; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%[^\n]s", aluno[i].nome);
        setbuf(stdin, NULL);

        printf("Digite a matricula do aluno: ");
        scanf("%d", &aluno[i].matricula);

        printf("Digite a nota da primeira prova: ");
        scanf("%lf", &aluno[i].nota[0]);

        printf("Digite a nota da segunda prova: ");
        scanf("%lf", &aluno[i].nota[1]);

        printf("Digite a nota da terceira prova: ");
        scanf("%lf", &aluno[i].nota[2]);

        media[i] = (aluno[i].nota[0] + aluno[i].nota[1] + aluno[i].nota[2]) / 3;

        printf("\n");
        setbuf(stdin, NULL);
    }

    menor_nota = 0;
    for (i = 0; i < 5; i++) {
        if (media[i] >= menor_nota) {
            menor_nota = media[i];
            aux = i;
        }
    }

    printf("\n\n");

    printf("O aluno %s possui a maior media entre os cinco alunos escolhidos com as notas %lf, %lf e %lf!\n", aluno[aux].nome, aluno[aux].nota[0], aluno[aux].nota[1], aluno[aux].nota[2]);
    return 0;
}