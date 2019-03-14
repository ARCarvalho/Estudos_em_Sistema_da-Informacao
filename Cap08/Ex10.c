#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Usando a estrutura "atleta" do exercicio anterior, escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade, do mais valho para o mais novo */

struct atleta {
    char nome[50];
    char esporte[50];
    int idade;
    double altura;
};

int main() {
    int i, j;

    struct atleta atl[5];
    struct atleta aux;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do atleta: ");
        scanf("%[^\n]s", atl[i].nome);
        setbuf(stdin, NULL);

        printf("Digite o esporte que o atleta pratica: ");
        scanf("%[^\n]s", atl[i].esporte);
        setbuf(stdin, NULL);


        printf("Digite a idade do atleta: ");
        scanf("%d", &atl[i].idade);

        printf("Digite a altura do atleta: ");
        scanf("%lf", &atl[i].altura);



        printf("\n");
        setbuf(stdin, NULL);
    }

    printf("\n\n");

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (atl[j].idade > atl[i].idade) {
                aux = atl[j];
                atl[j] = atl[i];
                atl[i] = aux;

            }

        }
    }

    for (i = 0; i < 5; i++) {
        printf("%s\n", atl[i].nome);

    }
    return 0;
}