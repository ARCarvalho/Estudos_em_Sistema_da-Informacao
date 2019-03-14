#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho. */

struct atleta {
    char nome[50];
    char esporte[50];
    int idade;
    double altura;
};

int main() {
    int i, aux1, aux2, menor_idade;
    double menor_altura;
    struct atleta atl[5];

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

    menor_idade = 0;
    for (i = 0; i < 5; i++) {
        if (atl[i].idade > menor_idade) {
            aux1 = i;
            menor_idade = atl[i].idade;
        }
    }

    menor_altura = 0;
    for (i = 0; i < 5; i++) {
        if (atl[i].altura > menor_altura) {
            aux2 = i;
            menor_altura = atl[i].altura;
        }
    }


    printf("O atleta mais alto eh %s com %lf metros de altura e o atleta mais velho eh %s com %d anos de idade.\n", atl[aux2].nome, atl[aux2].altura, atl[aux1].nome, atl[aux1].idade);
    return 0;
}