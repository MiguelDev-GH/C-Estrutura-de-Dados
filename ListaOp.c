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
    if(li == NULL)
        exit; 

    No *novo = malloc(sizeof(No));
    if(novo == NULL)
        exit;

    if(*li == NULL){
        novo->prox = NULL;
        *li = novo;
    }

}