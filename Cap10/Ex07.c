#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Elabore uma funcao que receba duas strings como parametro e verifique se a segunda ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres das strings. */

int Compara_strings(char string1[100], char string2[100]){
    int i, contador;
    char *ponteiro1 = string1;
    char *ponteiro2 = string2;


    contador = 0;
    if (strlen(string2) <= (strlen(string1))) {
        for (i = 0; i < strlen(string2); i++) {
            if ((*ponteiro2 + i) == (*ponteiro1 + i)) {
                contador = contador + 1;
            }
        }
    } else {
        printf("\nA segunda string nao ocorre dentro da primeira string.");
    }

    if (contador == strlen(string2)) {
        printf("\nA segunda string ocorre dentro da primeira string digitada.");
    }

    return 0;
}

int main() {
    char string1[100], string2[100];


    printf("Digite uma string: ");
    scanf("%[^\n]s", string1);
    getchar();

    printf("Digite outra string: ");
    scanf("%[^\n]s", string2);

    Compara_strings(string1, string2);
    return 0;
}