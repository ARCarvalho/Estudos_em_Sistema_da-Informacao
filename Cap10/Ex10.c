#include <stdio.h>
#include <stdlib.h>

/* Considere a seguinte delcaracao: int a, *b, **c, ***d. Escreva um programa que leia a variavel a e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o triplo, e d, o quadruplo. */

int main() {
    int a, *b, **c, ***d;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    
    b = &a;

    //*b = 2 * a;
    printf("\nO dobro de A eh %d.", (2 * (*b)) );

    c = &b;
    
    //**c = 3 * a;
    printf("\nO triplo de A eh %d.", (3 * (**c)));

    d = &c;
    
    //***d = 4 * a;
    printf("\nO quadruplo de A eh %d.", (4 * (***d)));


    return 0;
}
