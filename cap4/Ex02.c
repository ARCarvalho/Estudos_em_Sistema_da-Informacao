#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia dois numeros e mostre qual deles eh o maior. */

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if(num1 > num2) {
        printf("O numero %f eh maior que %f.\n", num1, num2);
    } else if(num2 > num1){
            printf("O numero %f eh maior que %f.\n", num2, num1);
    } else {
            printf("Numeros iguais\n");
    }




    return 0;
}
