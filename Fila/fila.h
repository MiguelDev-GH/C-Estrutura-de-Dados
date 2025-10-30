#ifndef FILA_H
#define FILA_H 

#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    No* prox;
} No;

typedef struct Fila{
    No* inicio;
    No* fim;
} Fila;

Fila* criarFila();

void Enfileirar(Fila* fi, int valor);

#endif