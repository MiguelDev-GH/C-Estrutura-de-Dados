#ifndef LISTAS_H
#define LISTAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN64
    #define LIMPAR "cls"
#else
    #define LIMPAR "clear"
#endif

#define limpar system(LIMPAR);

// -------------------------------------- //

// Variáveis
char op[10];

// Funções
void strLer();

// -------------------------------------- //

#endif