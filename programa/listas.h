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
void limpar_buffer();

// -------------------------------------- //

//Structs
typedef struct No{
    int dado;
    struct No *prox;
}No;

typedef struct No* Lista;

// Variáveis
char op[4];

int ListaQntd;
Lista vetorListas[10];

int valorInserir;
int listaSelecionada;

int visualizarLista;

// Funções
void lowercase();
void strLer();

void confirmar();

void menu();
void menuEditar();
void menuVerListas();
void lerOp();

void finalizarPrograma();
void opcaoInvalida();

int tamanhoLista();

Lista criarLista();
void inserirInicio();
void inserirFinal();
void imprimirLista();
void excluirLista();

void opcao_inserir();
void opcao_removerElemento();

void removerInicio();
void removerFinal();

// -------------------------------------- //

#endif