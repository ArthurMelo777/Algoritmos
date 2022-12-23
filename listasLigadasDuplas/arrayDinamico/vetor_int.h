#ifndef SIMPLE_VECTOR_INT_H
#define SIMPLE_VECTOR_INT_H

int * append_int (int *a, int *tamanho, int *capacidade, int x, int *erro);

int insert_int (int a[], int tamanho, int capacidade, int x, int ind);

int remove_int (int a[], int tamanho, int capacidade, int ind);

int find_int (int a[], int tamanho, int capacidade, int x);

#endif