#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        setbuf(stdin, NULL);
        gets(atl[i].nome);

        printf("Digite o esporte que o atleta pratica: ");
        setbuf(stdin, NULL);
        gets(atl[i].esporte);

        printf("Digite a idade do atleta: ");
        scanf("%d", &atl[i].idade);

        printf("Digite a altura do atleta: ");
        scanf("%lf", &atl[i].altura);



        printf("\n");
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


    printf("O atleta mais alto eh %s e o atleta mais velho eh %s.\n", atl[aux2].nome, atl[aux1].nome);
    return 0;
}