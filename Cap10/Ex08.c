#include <stdio.h>
#include <stdlib.h>

/* Crie uma funcao que receba dois parametros: um vetor e um valor do mesmo tipo do vetor. A funcao deverah preencher os elementos de vetor com esse valor. Nao utilize indices para percorrer o vetor, apenas aritmetica de ponteiros. */

/*int Preencher_vetor(int vetor[5], int valor){
    int *ponteiro1 = &vetor[0];
    int *ponteiro2 = &vetor[4];
    int *ponteiro3;


    while (ponteiro1 <= ponteiro2) {
        *ponteiro = valor;
        printf("\n%d", *ponteiro);
        ponteiro++;

    }

    return 0;
}*/

void Preencher_vetor(int *vetor, int tamanho, int valor){
    int* aux = vetor;
    
    for(int i = 0; i < tamanho; i++, aux++){
        *aux = valor;
    }
}


int main() {
    int vetor[5];
    int valor;

    printf("Digite um valor inteiro para preencher um vetor de 5 posicoes: ");
    scanf("%d", &valor);

    Preencher_vetor(vetor, 5, valor);
    
    
    for(int i = 0; i < 5; i++)
        printf("%d %d\n", i, vetor[i]);
    
    return 0;
}
