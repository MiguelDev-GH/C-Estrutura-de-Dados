#include "fila.h"

Fila* criarFila(){
    Fila* fi = malloc(sizeof(Fila));
    if(fi == NULL) return NULL;
    fi->inicio = NULL;
    fi->fim = NULL;
    return fi;
}

void Enfileirar(Fila* fi, int valor){

    if(fi == NULL) return;

    No* novo = malloc(sizeof(No));
    if(novo == NULL) return;

    novo->valor = valor;
    novo->prox = NULL;

    if(fi->inicio == NULL && fi->fim == NULL){
        fi->inicio = novo;
        fi->fim = novo;
        return;
    }

    novo->prox = fi->fim;
    fi->fim = novo;

}