#include <stdio.h>
#include <stdlib.h>

/* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faca um programa em que o usuario entre com o valor e o estado de destino do produto e o programa retorne o preco final do produto acrescido do imposto do estado emq ue sera vendido. Se o estado digitado nao for valido, mostarara uma mensagem de erro. */

int main() {
    double valor_produto, valor_com_imposto;
    char estado1, estado2;

    printf("Digite o valor do produto: ");
    scanf("%lf", &valor_produto);
    printf("Digite o estado de destino do produto em letras maiusculas: ");
    getchar();
    scanf("%c%c", &estado1, &estado2);

    if((estado1 == 'M') && (estado2 == 'G')){
        valor_com_imposto = valor_produto * 1.07;
        printf("\nO valor do produto com imposto para o estado %c%c eh R$%0.2lf", estado1, estado2, valor_com_imposto);
    } else{
        if((estado1 == 'S') && (estado2 == 'P')) {
            valor_com_imposto = valor_produto * 1.12;
            printf("\nO valor do produto com imposto para o estado %c%c eh R$%0.2lf", estado1, estado2, valor_com_imposto);
        } else{
            if((estado1 == 'R') && (estado2 == 'J')) {
                valor_com_imposto = valor_produto * 1.15;
                printf("\nO valor do produto com imposto para o estado %c%c eh R$%0.2lf", estado1, estado2,valor_com_imposto);
            } else{
                if((estado1 == 'M') && (estado2 == 'S')) {
                    valor_com_imposto = valor_produto * 1.08;
                    printf("\nO valor do produto com imposto para o estado %c%c eh R$%0.2lf", estado1, estado2, valor_com_imposto);
                } else {
                    printf("\nVoce digitou a sigla do estado errado.");
                }

            }
        }
    }

    return 0;
}