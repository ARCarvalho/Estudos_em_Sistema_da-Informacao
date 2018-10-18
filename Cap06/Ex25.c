#include <stdio.h>
#include <stdlib.h>

int main() {

    double notas[10][3];
    int i, j, notaruim1, notaruim2, notaruim3;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nInsira a nota do aluno %d na prova %d: ", i + 1, j + 1);
            scanf("%lf", &notas[i][j]);
        }
    }


    notaruim1 = 0;
    notaruim2 = 0;
    notaruim3 = 0;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 3; j++) {
           if ((notas[i][0] < notas[i][1]) && (notas[i][0] < notas[i][2])) {
               notaruim1++;
           } else if ((notas[i][1] < notas[i][0]) && (notas[i][1] < notas[i][2])) {
               notaruim2++;
           } else if ((notas[i][2] < notas[i][0]) && (notas[i][2] < notas[i][1])) {
               notaruim3++;
           }
        }
    }


    printf("\nTiveram %d alunos com a nota pior na primeira prova, %d com a nota pior na segunda prova e %d com a nota pior na terceira prova.\n", notaruim1, notaruim2, notaruim3);
    return 0;
}