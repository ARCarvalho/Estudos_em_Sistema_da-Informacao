#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que informe o mes de acordo com o numero digitado pelo usuario. Exemplo: Entrada = 4, Saida = Abril. */

int main() {
    int numero;

    printf("Digite o numero do mes que deseja saber: ");
    scanf("%d", &numero);

    if(numero == 1){
        printf("\nMes referente ao numero digitado: Janeiro\n");
    } else{
        if(numero == 2){
            printf("\nMes referente ao numero digitado: Fevereiro\n");
        } else{
            if(numero == 3){
                printf("\nMes referente ao numero digitado: Marco\n");
            } else{
                if(numero == 4){
                    printf("\nMes referente ao numero digitado: Abril\n");
                } else{
                    if(numero == 5){
                        printf("\nMes referente ao numero digitado: Maio\n");
                    } else{
                        if(numero == 6){
                            printf("\nMes referente ao numero digitado: Junho\n");
                        } else{
                            if(numero == 7){
                                printf("\nMes referente ao numero digitado: Julho\n");
                            } else{
                                if(numero == 8){
                                    printf("\nMes referente ao numero digitado: Agosto\n");
                                } else{
                                    if(numero == 9){
                                        printf("\nMes referente ao numero digitado: Setembro\n");
                                    } else{
                                        if(numero == 10){
                                            printf("\nMes referente ao numero digitado: Outubro\n");
                                        } else{
                                            if(numero == 11){
                                                printf("\nMes referente ao numero digitado: Novembro\n");
                                            } else{
                                                if(numero == 12){
                                                    printf("\nMes referente ao numero digitado: Dezembro\n");
                                                } else{
                                                    printf("\nNumero invalido!\n");
                                                }
                                            }
                                        }
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