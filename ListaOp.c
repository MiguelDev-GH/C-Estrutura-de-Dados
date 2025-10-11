#include "listas.h"

//Funções de inserir

Lista* criarLista(){
    void *li = malloc(sizeof(Lista));
    if(li == NULL)
        exit;
    else
        return li;
}

void inserirInicio(Lista* li,int valor){
    if(li == NULL) exit; 

    No *novo = malloc(sizeof(No));
    if(novo == NULL) exit;

    novo->prox = *li;
    *li = novo;

}

void inserirFinal(Lista* li,int valor){
    if(li == NULL)exit;
    
    No *novo = malloc(sizeof(No));
    if(novo == NULL) exit;

    novo->dado = valor;
    novo->prox = NULL;

    if(*li == NULL)
        *li = novo;

    No *aux = *li;

    while (aux->prox != NULL){
        aux = aux->prox;
    }
    
    aux->prox = novo;
    novo->prox = NULL;

}