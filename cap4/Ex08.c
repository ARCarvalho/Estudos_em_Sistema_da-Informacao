#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que, dada a idade de um nadador, o classifique em uma das seguintes categorias:
 * Infantil A = 5-7 anos
 * Infantil B = 8-10 anos
 * Juvenil A = 11-13 anos
 * Juvenil B = 14-17 anos
 * Senioe = maiores de 18 anos */

int main() {
    int idade;

    printf("Digite a idade do nadador em anos completos: ");
    scanf("%d", &idade);

    if((idade >= 5) && (idade <= 7)){
        printf("\nCategoria: Infantil A.");
    } else{
        if((idade >= 8) && (idade <= 10)){
            printf("\nCategoria: Infantil B.");
        } else{
            if((idade >= 11) && (idade <= 13)){
                printf("\nCategoria: Juvenil A.");
            } else{
                if((idade >= 14) && (idade <= 17)) {
                    printf("\nCategoria: Juvenil B.");
                } else{
                    if(idade >= 18){
                        printf("\nCategoria: Senior.");
                    } else{
                        printf("\nPessoa nao possui idade minima para ser classificado como nadador!");
                    }
                }
            }
        }
    }
    return 0;
}