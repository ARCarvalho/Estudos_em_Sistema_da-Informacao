#include <stdio.h>
#include <stdlib.h>

/* Crie uma enumeracao representando os dias da semana. Agora, escreva um programa que leia um valor inteiro do teclado e exiba o dia da semana correspondente. */

enum semana {Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main() {
    int num;


    printf("Escolha um numero de 1 a 7: ");
    scanf("%d", &num);



    
        switch (num) {
            case Domingo:
                printf ("Domingo\n");
                break;
            case 2 : printf ("Segunda\n"); break;
            case 3 : printf ("Terca\n"); break;
            case 4 : printf ("Quarta\n"); break;
            case 5 : printf ("Quinta\n"); break;
            case 6 : printf ("Sexta\n"); break;
            case 7 : printf ("Sabado\n"); break;
            default: printf ("Valor invalido!\n");
        }
    

    return 0;
}
