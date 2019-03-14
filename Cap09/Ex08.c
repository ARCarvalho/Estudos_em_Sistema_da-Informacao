#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Elabore uma funcao para verificar se um numero eh um quadrado perfeito. Um quadrado perfeito eh um numero inteiro nao negativo que pode ser expresso como o quadrado de outro numero inteiro. Exemplos: 1, 4, 9. */

int quadrado_perfeito(int num){
    int valor;

    valor = sqrt(num);

    if ((valor % 2 == 0) && (num % 4 == 0)) {
        printf("\nO numero %d eh quadrado perfeito.", num);
    } else if ((valor % 2 == 1) && (num % 8 == 1)){
        printf("\nO numero %d eh quadrado perfeito.", num);
    } else {
        printf("\nO numero %d nao eh quadrado perfeito.", num);
    }

    return 0;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    quadrado_perfeito(num);
    return 0;
}