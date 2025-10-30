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

    fi->fim->prox = novo;
    fi->fim = novo;

}

void imprimirFila(Fila* fi){
    if(fi == NULL) return;

    int cont = 0;

    No* aux = fi->inicio;
    while(aux->prox != NULL){

        printf("%d- %d\n",cont,aux->valor);
        cont++;
        aux = aux->prox;
    }
}