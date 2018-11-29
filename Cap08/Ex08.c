#include <stdio.h>
#include <stdlib.h>

struct data_nascimento {
    int dia;
    int mes;
    int ano;
};

int main() {
    int i, menor_ano, menor_mes, menor_dia, aux1, aux2, maior_ano, maior_mes, maior_dia;
    struct data_nascimento nascimento[6];

    for (i = 0; i < 6; i++) {
        printf("Digite o dia do nascimento: ");
        scanf("%d", &nascimento[i].dia);

        printf("Digite o mes do nascimento: ");
        scanf("%d", &nascimento[i].mes);

        printf("Digite o ano do nascimento: ");
        scanf("%d", &nascimento[i].ano);

        printf("\n");
    }

    menor_dia = 0;
    menor_mes = 0;
    menor_ano = 0;
    for (i = 0; i < 6; i++) {
        if (nascimento[i].ano > menor_ano) {
            aux1 = i;
            menor_ano = nascimento[i].ano;
        } else if (nascimento[i].ano == menor_ano) {
            if (nascimento[i].mes > menor_mes) {
                aux1 = i;
                menor_mes = nascimento[i].mes;
            } else if (nascimento[i].mes == menor_mes) {
                if (nascimento[i].dia > menor_dia) {
                    aux1 = i;
                    menor_dia = nascimento[i].dia;
                }
            }
        }
    }

    maior_dia = 32;
    maior_mes = 13;
    maior_ano = 2019;
    for (i = 0; i < 6; i++) {
        if (nascimento[i].ano < maior_ano) {
            aux2 = i;
            maior_ano = nascimento[i].ano;
        } else if (nascimento[i].ano == maior_ano) {
            if (nascimento[i].mes < maior_mes) {
                aux2 = i;
                maior_mes = nascimento[i].mes;
            } else if (nascimento[i].mes == maior_mes) {
                if (nascimento[i].dia < maior_dia) {
                    aux2 = i;
                    maior_dia = nascimento[i].dia;
                }
            }
        }
    }


    printf("A pessoa mais velha nasceu em %d/%d/%d e a mais nova nasceu em %d/%d/%d.", nascimento[aux2].dia, nascimento[aux2].mes, nascimento[aux2].ano, nascimento[aux1].dia, nascimento[aux1].mes, nascimento[aux1].ano);

    return 0;
}