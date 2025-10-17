#include "listas.h"

//Funções de inserir

Lista* criarLista(){
    void *li = calloc(1,sizeof(Lista));
    if(li == NULL)
        exit(1);
    else
        return li;
}

int tamanhoLista(Lista* li){
    int tam = 0;
    if(li == NULL) exit(1); 

    if(*li == NULL) return 0;

    No* aux = *li;
    
    while (aux != NULL){
        aux = aux->prox;
        tam++;
    }

    return tam;
}

void inserirInicio(Lista* li,int valor){
    if(li == NULL) exit(1); 

    No* novo = (No*) calloc(1,sizeof(No));
    if(novo == NULL) exit(1);
    novo->dado = valor;
    novo->prox = *li;
    *li = novo;

}

void inserirFinal(Lista* li,int valor){
    if(li == NULL) exit(1);
    
    No* novo = (No*) calloc(1,sizeof(No));
    if(novo == NULL) exit(1);

    novo->dado = valor;
    novo->prox = NULL;

    if(*li == NULL){
        *li = novo;
        return;
    }

    No* aux = *li;

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
        No* aux = *li;
        int cont = 1;

        while(aux != NULL){
            printf("%d- %d\n",cont,aux->dado);
            aux = aux->prox;
            cont++;
        }
    }
    confirmar();

}

void removerInicio(Lista* li){
    if(li == NULL) return;
    if(*li == NULL) return;

    No* remover = *li;
    *li = remover->prox;

    free(remover);

}

void removerFinal(Lista* li){
    if(li == NULL) return;
    if(*li == NULL) return;

    No* aux = *li;
    No* anterior = aux;

    while (aux->prox != NULL){
        anterior = aux;
        aux = aux->prox;
    }

    if(anterior == NULL){
        *li = NULL;
        free(*li);
    }

    anterior->prox = NULL;
    free(aux);
    
}

void removerElementoEspec(Lista* li, int posicao){
    if(li == NULL) return;
    if(*li == NULL) return;

    No* aux = *li;
    No* anterior = NULL;

    for(int i = 1; i < posicao; i++){
        anterior = aux;
        aux = aux->prox;
    }

    limpar

    anterior->prox = aux->prox;
    
    printf("Elemento %d removido com sucesso!",aux->dado);
    free(aux);

    confirmar();

    /*
    printf("Elemento %d removido com sucesso!",aux->dado);
    free(aux);
    confirmar();
    */
}

void excluirLista(Lista* vetorLista, int numLista){
    limpar
    printf("Tem certeza que deseja excluir a Lista %d (s/n)", numLista);
    lerOp();

    if(strcmp(op,"sim") == 0 || strcmp(op,"s") == 0){
        ListaQntd--;
        free(vetorLista[numLista]);
    }
}