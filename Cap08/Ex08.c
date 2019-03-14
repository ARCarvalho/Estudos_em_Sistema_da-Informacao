#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. Agora, escreva um programa que leia os dados de seis pessoas. CAlcule e exiba os nomes da pessoa mais nova e da mais valha. */

struct data_nascimento {
    char nome[50];
    int dia;
    int mes;
    int ano;
};

int main() {
    int i, menor_ano, menor_mes, menor_dia, aux1, aux2, maior_ano, maior_mes, maior_dia;
    struct data_nascimento nascimento[6];

    for (i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa: ");
        scanf("%[^\n]s", nascimento[i].nome);
        setbuf(stdin, NULL);

        printf("Digite o dia do nascimento: ");
        scanf("%d", &nascimento[i].dia);

        printf("Digite o mes do nascimento: ");
        scanf("%d", &nascimento[i].mes);

        printf("Digite o ano do nascimento: ");
        scanf("%d", &nascimento[i].ano);

        printf("\n");
        setbuf(stdin, NULL);
    }

    maior_dia = 0;
    maior_mes = 0;
    maior_ano = 0;
    for (i = 0; i < 6; i++) {
        if (nascimento[i].ano > maior_ano) {
            aux1 = i;
            maior_ano = nascimento[i].ano;
            maior_dia = nascimento[i].dia;
            maior_mes = nascimento[i].mes;
        } else if (nascimento[i].ano == maior_ano) {
            if (nascimento[i].mes > maior_mes) {
                aux1 = i;
                maior_ano = nascimento[i].ano;
                maior_dia = nascimento[i].dia;
                maior_mes = nascimento[i].mes;
            } else if (nascimento[i].mes == maior_mes) {
                if (nascimento[i].dia > maior_dia) {
                    aux1 = i;
                    maior_ano = nascimento[i].ano;
                    maior_dia = nascimento[i].dia;
                    maior_mes = nascimento[i].mes;
                }
            }
        }
    }

    menor_dia = 32;
    menor_mes = 13;
    menor_ano = 2020;
    for (i = 0; i < 6; i++) {
        if (nascimento[i].ano < menor_ano) {
            aux2 = i;
            menor_ano = nascimento[i].ano;
            menor_dia = nascimento[i].dia;
            menor_mes = nascimento[i].mes;
        } else if (nascimento[i].ano == menor_ano) {
            if (nascimento[i].mes < menor_mes) {
                aux2 = i;
                menor_ano = nascimento[i].ano;
                menor_dia = nascimento[i].dia;
                menor_mes = nascimento[i].mes;
            } else if (nascimento[i].mes == menor_mes) {
                if (nascimento[i].dia < menor_dia) {
                    aux2 = i;
                    menor_ano = nascimento[i].ano;
                    menor_dia = nascimento[i].dia;
                    menor_mes = nascimento[i].mes;
                }
            }
        }
    }


    printf("A pessoa mais velha eh %s e nasceu em %d/%d/%d e a mais nova eh %s e nasceu em %d/%d/%d.", nascimento[aux2].nome, nascimento[aux2].dia, nascimento[aux2].mes, nascimento[aux2].ano, nascimento[aux1].nome ,nascimento[aux1].dia, nascimento[aux1].mes, nascimento[aux1].ano);

    return 0;
}