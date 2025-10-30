#include "lista.h"

void limpar_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
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

        aux->ante = NULL;

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

No* funcSelecionado(Lista* li){
    if(li == NULL) return 0;
    if(*li == NULL) return 0;

    No* aux = *li;

    for(int i = 1; i < elemSelecionado; i++)
        aux = aux->prox;


    return aux;
    
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

void removerEspec(Lista* li, No* no){
    if(no == NULL) return;

    if(no->ante == NULL) *li = no->prox;
    else no->ante->prox = no->prox;

    if(no->prox != NULL) no->prox->ante = no->ante;

    free(no);
}

void trocarElementoPosterior(Lista* li, int valor){

    if(li == NULL || *li == NULL || (*li)->prox == NULL) return;

    No* aux = *li;

    int encontrado = 0;

    while(aux->valor != valor){
        if(aux->prox == NULL && aux->valor != valor) printf("Valor não encontrado");
        aux = aux->prox;
    }

    if(aux->prox == NULL){

        (*li)->prox->ante = aux;
        aux->ante->prox = *li;

        aux->prox = (*li)->prox;
        (*li)->prox = NULL;
        (*li)->ante = aux->ante;
        aux->ante = NULL;
        *li=aux;

        encontrado = 1;
        return;

    } else {

        No* proxT = aux->prox;

        if(proxT->prox == NULL){
            aux->prox = NULL;
        } else {
            proxT->prox->ante = aux;
            proxT->ante = aux->ante;
        }

        if(aux->ante == NULL){
            *li = proxT;
            proxT->ante = NULL;
        } else {
            aux->ante->prox = proxT;
            proxT->ante = aux->ante;
        }

        aux->prox = proxT->prox;
        proxT->prox = aux;
        aux->ante = proxT;

        encontrado = 1;
        return;
    }
}

void menuAcoes(Lista* li, No* no){

    int elemValor = no->valor;

    limpar
    printf("Selecionado: >%d<\n\n",elemValor);
    printf("1- Mudar valor\n");
    printf("2- Substituir por outro na lista\n");
    printf("3- Levar para frente ou trás na lista\n");
    printf("4- Remover elemento\n");
    printf("\nOUTRO - voltar\n");

    scanf("%d",&op);
    limpar_buffer();

    if(op > 0 && op < 4) operacoes(op,no);
    else if(op == 4) {
        removerEspec(li,no);
    }
    else return;
}
 
void operacoes(int tipo, No* elem){
    if(tipo == 1){  // Mudar valor
        limpar
        printf("Digite o novo valor: ");
        scanf("%d",&elem->valor);
    }
    else if(tipo == 2){ // Substituir por outro na lista
        limpar
    } 
    else if(tipo == 3){ // Levar para frente ou trás na lista
        limpar
    } 
}