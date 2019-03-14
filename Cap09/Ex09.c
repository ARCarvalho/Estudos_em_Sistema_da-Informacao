#include <stdio.h>
#include <stdlib.h>

/* Elabore uma funcao que receba tres notas de um aluno como parametros e uma letra. Se a letra for "A", a funcao deverah calcular a media aritmetica das notas do aluno; se for "P", deverah calcular a media ponderada, com pesos 5, 3 e 2. Retorne a m'edia calculada para o programa principal. */

double media(double nota1, double nota2, double nota3, char letra){
    double valor_media;


    if ((letra == 'a') || (letra == 'A')) {
        valor_media = (nota1 + nota2 + nota3) / 3;
    } else if ((letra == 'p') || (letra == 'P')) {
        valor_media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
    } else {
        printf("\nLetra invalida!");
        return 0;
    }


    return valor_media;
}


int main() {
    double nota1, nota2, nota3;
    char letra;

    printf("Digite as 3 notas do aluno: ");
    scanf("%lf%lf%lf", &nota1, &nota2, &nota3);
    getchar();

    printf("\nDigite letra A para media aritmetica ou P para media ponderada: ");
    scanf("%c", &letra);

    printf("\nO valor da media escolhida eh %lf.", media(nota1, nota2, nota3, letra));
    return 0;
}