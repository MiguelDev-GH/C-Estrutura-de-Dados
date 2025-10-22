#include "lista.h"

Lista* criarLista(){
    Lista* li = malloc(sizeof(Lista));
    if(li == NULL) printf("Erro ao criar a lista");
    *li = NULL;
    return li;
}

void inserirInicio(Lista* li, int valor){
    if(li == NULL) return;

    No* novo = malloc(sizeof(No));
    if(novo == NULL) return;
    
    novo->valor = valor;
    novo->prox = *li;
    novo->ante = NULL;

    *li = novo;

}

void inserirFInal(Lista* li, int valor){
    if(li == NULL) return;

    No* novo = malloc(sizeof(No));
    if(novo == NULL) return;

    No* aux = *li;

    novo->valor = valor;
    novo->prox = NULL;

    while(aux->prox != NULL){
        aux = aux->prox;
    }

    aux->prox = novo;
    novo->ante = aux;

}

void removerInicio(Lista* li){

    if(li == NULL) return;
    if(*li == NULL) return;

    No* no_remover = *li;

    *li = no_remover->prox;

    if(no_remover->prox != NULL){
        No* aux = no_remover->prox;

        aux->ante = *li;

        free(no_remover);
    }

}

int tamanhoLista(Lista* li){
    if(li == NULL) return 0;
    if(*li == NULL) return 0;

    No* aux = *li;

    int cont = 0;

    while(aux != NULL){
        aux = aux->prox;
        cont++;
    }

    return cont;
}

int funcSelecionado(Lista* li){
    if(li == NULL) return 0;
    if(*li == NULL) return 0;

    No* aux = *li;

    for(int i = 1; i < elemSelecionado; i++)
        aux = aux->prox;


    return aux->valor;
    
}

void imprimirLista(Lista* li){
    if(li == NULL) return;
    if(*li == NULL){
        printf("\nVAZIA\n");
    }else{

        No* aux = *li;

        for(int i = 0; i < tamanhoLista(li);i++){
            if(elemSelecionado-1 == i)
                printf(">");
            printf("%d",aux->valor);
            if(elemSelecionado-1 == i)
                printf("<");

            printf(" ");
            aux = aux->prox;
        }

        printf("\n");

    }
}

void menuAcoes(int elemValor){
    limpar
    printf("Selecionado: >%d<\n\n",elemValor);
    printf("1- Mudar valor\n");
    printf("2- Substituir por outro na lista\n");
    printf("3- Levar para frente ou trás na lista\n");
    printf("4- Remover elemento\n");

    scanf("%d",&op);

    printf("\nOUTRO - voltar");
}