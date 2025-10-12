#ifndef LISTAS_H
#define LISTAS_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifdef _WIN64
    #define LIMPAR "cls"
#else
    #define LIMPAR "clear"
#endif

#define limpar system(LIMPAR);

// -------------------------------------- //

//Structs
typedef struct No{
    int dado;
    struct No *prox;
}No;

typedef struct No* Lista;

// Variáveis
char op[4];

// Funções
void lowercase();
void strLer();

void confimar();

void menu();
void menuEditar();
void lerOp();

void finalizarPrograma();
void opcaoInvalida();

void inserirInicio();
void inserirFinal();

// -------------------------------------- //

#endif