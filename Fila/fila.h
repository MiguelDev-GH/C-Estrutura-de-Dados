#ifndef FILA_H
#define FILA_H 

#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No* prox;
} No;

typedef struct Fila{
    struct No* inicio;
    struct No* fim;
} Fila;

Fila* criarFila();

void Enfileirar(Fila* fi, int valor);

void imprimirFila(Fila* fi);

#endif