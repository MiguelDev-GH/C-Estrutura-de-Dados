#include "listas.h"

//Funções de inserir

Lista criarLista(){
    void *li = malloc(sizeof(Lista));
    if(li == NULL)
        exit(1);
    else
        return li;
}

int tamanhoLista(Lista li){
    int tam = 0;
    if(li == NULL) exit(1); 

    No *aux = li;
    
    while (aux->prox != NULL){
        aux = aux->prox;
        tam++;
    }

    return tam;
}

void inserirInicio(Lista* li,int valor){
    if(li == NULL) exit(1); 

    No *novo = (No*) calloc(1,sizeof(No));
    if(novo == NULL) exit(1);
    novo->dado = valor;
    novo->prox = *li;
    *li = novo;

}

void inserirFinal(Lista* li,int valor){
    if(li == NULL) exit(1);
    
    No *novo = (No*) calloc(1,sizeof(No));
    if(novo == NULL) exit(1);

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

void imprimirLista(Lista* li, int listaNum){

    limpar

    printf("==> Lista %d\n\n",listaNum);

    if(li == NULL) exit(1);

    if(*li == NULL){
        printf("Lista vazia\n");
    } else {        
        No *aux = *li;
        int cont = 0;

        while(aux->prox != NULL){
            printf("%d- %d\n",cont,aux->dado);
            aux = aux->prox;
            cont++;
        }
    }
    confimar();

}