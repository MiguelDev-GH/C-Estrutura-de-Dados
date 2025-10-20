#include "lista.h"

int countDigits(int number){
    if(abs(number) < 10)
        return 1;
    return 1 + countDigits(number/10);
}

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

int funcSelecionado(Lista* li, int elemSelecionado){
    if(li == NULL) return 0;
    if(*li == NULL) return 0;

    No* aux = *li;

    for(int i = 1; i < elemSelecionado; i++){
        aux = aux->prox;
    }

    return aux->valor;
    
}

void imprimirLista(Lista* li){
    if(li == NULL) return;
    if(*li == NULL){
        printf("\nLista vazia\n");
    }else{

        No* aux = *li;
        printf("\nLista: ");

        for(int i = 0; i < tamanhoLista(li);i++){
            printf("%d ",aux->valor);
            aux = aux->prox;
        }
        printf("\n       ");

        aux = *li;
        for (int i = 1; i < elemSelecionado; i++){
            for(int J = 1; J <= countDigits(aux->valor) + 1;J++){
                printf(" ");
            }
            aux = aux->prox;
        }
        printf("^\n");


    }
}