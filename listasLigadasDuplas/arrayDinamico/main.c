#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetor_int.h"

void printf_vector(int *a, int tamanho) {
    printf("{ ");
    for (int i = 0; i<tamanho; i++) {
        printf("%d ", *(a+i));
    }
    printf("}\n");
}

int main (){
    clock_t inicio, fim;

    int erro, *a1, capacidade=10, tamanho=0;
    a1 = (int*) malloc(sizeof(int)*capacidade);

    inicio = clock();

    for (int i = 0; i<1000; ++i) {
        a1 = append_int(a1, &tamanho, &capacidade, i*3, &erro);
        if (erro) {
            printf("Erro de memoria!\n");
            break;
        }
    }

    fim = clock();

    printf_vector(a1, tamanho);
    free(a1);

    printf("\n");

    double tempo = (fim-inicio)/(CLOCKS_PER_SEC/1000.0);
    printf("Tempo decorrido: %lfms\n", tempo);

    return 0;
}