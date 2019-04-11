#include <stdio.h>
#include <stdlib.h>

/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o numero de matricula do aluno, seu nome e as notas de tres provas. Escreva um programa que mostre o tamanho em byte dessa estrutura. */


struct aluno{
    int matricula;
    char nome[30];
    double nota1;
    double nota2;
    double nota3;
} aluno;


int main() {

    printf("O tamanho em byte da estrutura eh: %d.\n", sizeof(aluno));

    return 0;
}