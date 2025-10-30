#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

#ifndef _WIN64
    #define LIMPAR "clear"
#else
    #define LIMPAR "cls"
#endif

#define limpar system(LIMPAR);

// Structs

typedef struct No{
    int valor;
    struct No* prox;
    struct No* ante;
} No;

typedef struct No* Lista;

// Variáveis

int rodando = 1;

int elemSelecionado = 1;

int op;

// Funções

Lista* criarLista();

int tamanhoLista();
void imprimirLista();

void inserirInicio();
void inserirFInal();
void removerInicio();

void removerEspec();

No* funcSelecionado();

void menuAcoes();
void operacoes();

void trocarElementoPosterior();

#endif