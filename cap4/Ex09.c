#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que leia a altura e o pseo de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificacao dessa pessoa. */

int main() {
    double altura, peso;

    printf("Digite a altura da pessoa: ");
    scanf("%lf", &altura);
    printf("Digite o peso da pessoa: ");
    scanf("%lf", &peso);

    if((altura < 1.20) && (peso < 60)){
        printf("Classificacao: A");
    } else{
        if((altura < 1.20) && ((peso >= 60) && (peso <= 90))) {
            printf("Classificacao: D");
        } else{
            if((altura < 1.20) && (peso > 90)) {
                printf("Classificacao: G");
            } else{
                if(((altura >= 1.20) && (altura <= 1.70)) && (peso < 60)){
                    printf("Classificacao: B");
                } else{
                    if(((altura >= 1.20) && (altura <= 1.70)) && ((peso >= 60) && (peso <= 90))) {
                        printf("Classificacao: E");
                    } else {
                        if (((altura >= 1.20) && (altura <= 1.70)) && (peso > 90)) {
                            printf("Classificacao: H");
                        } else {
                            if ((altura > 1.70) && (peso < 60)) {
                                printf("Classificacao: C");
                            } else {
                                if ((altura > 1.70) && ((peso >= 60) && (peso <= 90))) {
                                    printf("Classificacao: F");
                                } else {
                                    if ((altura > 1.70) && (peso > 90)) {
                                        printf("Classificacao: I");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}