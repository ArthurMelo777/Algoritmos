#include <stdlib.h>
#include <stdio.h>
#include "vetor_int.h"

int * append_int (int *a, int *tamanho, int *capacidade, int x, int *erro) {
    *erro = 1;
    if (*tamanho==*capacidade) {
        *capacidade = *capacidade+10;
        int *novo = (int*) malloc(sizeof(int) * (*capacidade));
        int *antigo = a;
        for (int i = 0; i<*tamanho; ++i) {
            *(novo+1) = *(a+i);
        }
        a = novo;
        free(antigo);
    }
    *(a + *tamanho) = x;
    (*tamanho)++;
    *erro = 0;

    return a;
}

int insert_int (int a[], int tamanho, int capacidade, int x, int ind) {
    if (tamanho != capacidade) {
        for (int i = tamanho++; i > ind; --i) {
            a[i] = a[i-1];
        }
    }
    return tamanho;
}

int remove_int (int a[], int tamanho, int capacidade, int ind) {
    for (int i = ind; i < tamanho; ++i) {
        a[i] = a[i+1];
    }

    return --tamanho;
}

int find_int (int a[], int tamanho, int capacidade, int x) {
    while (tamanho-- && a[tamanho]!=x);
    return tamanho;
}