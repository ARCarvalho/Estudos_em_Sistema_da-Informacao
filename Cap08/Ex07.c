#include <stdio.h>
#include <stdlib.h>

/* Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posicoes dessa estrutura e imprima a maior hora. */

struct horario {
    int horas;
    int minutos;
    int segundos;
};

int main() {
    int i, menor_hora, menor_minutos, menor_segundos, aux;
    struct horario horario[5];

    for (i = 0; i < 5; i++) {
        printf("Digite as horas desejadas: ");
        scanf("%d", &horario[i].horas);

        printf("Digite os minutos desejados: ");
        scanf("%d", &horario[i].minutos);

        printf("Digite os segundos desejados: ");
        scanf("%d", &horario[i].segundos);

        printf("\n");
    }

    menor_hora = 0;
    menor_minutos = 0;
    menor_segundos = 0;
    for (i = 0; i < 5; i++) {
        if (horario[i].horas > menor_hora) {
            aux = i;
            menor_hora = horario[i].horas;
        } else if (horario[i].horas == menor_hora) {
            if (horario[i].minutos > menor_minutos) {
                aux = i;
                menor_minutos = horario[i].minutos;
            } else if (horario[i].minutos == menor_minutos) {
                if (horario[i].segundos > menor_segundos) {
                    aux = i;
                    menor_segundos = horario[i].segundos;
                }
            }
        }
    }


    printf("O maior horario digitado foi %d horas, %d minutos e %d segundos.", horario[aux].horas, horario[aux].minutos, horario[aux].segundos);
    return 0;
}