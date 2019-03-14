#include <stdio.h>
#include <stdlib.h>

/* Elabore uma funcao que receba tres numeros inteiros como parametro, representando horas, minutos e segundos. A funcao deve retornar esse horario convertido em segundos. */

int converter_em_segundos(int hora, int minuto, int segundo){
    int conversao;

    conversao = (hora * 360) + (minuto * 60) + segundo;

    printf("O horario convertido em segundos eh %d.", conversao);
}

int main() {
    int hora, minuto, segundo;

    printf("Digite quantas horas se passaram: ");
    scanf("%d", &hora);

    printf("\nDigite quantos minutos se passaram: ");
    scanf("%d", &minuto);

    printf("\nDigite quantos segundos se passaram: ");
    scanf("%d", &segundo);

    converter_em_segundos(hora, minuto, segundo);
    return 0;
}