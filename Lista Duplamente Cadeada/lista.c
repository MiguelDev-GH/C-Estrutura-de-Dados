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

void trocarElem(Lista* li, int valor1, int valor2){
    if(li == NULL) return;
    if(*li == NULL) return;

    No* aux1 = *li;
    No* aux2 = *li;
    No* auxAUX = *li;

    while(aux1->prox != NULL){

        if(aux1->valor == valor1){
            while(aux2->prox != NULL){
                if(aux2->valor == valor2){

                    auxAUX = aux1;

                    aux1->prox->ante = aux2;
                    aux1->ante->prox = aux2;

                    aux2->prox->ante = aux1;
                    aux2->ante->prox = aux1;

                    aux1->prox = aux2->prox;
                    aux1->ante = aux2->ante;
                    aux2->prox = auxAUX->prox;
                    aux2->ante = auxAUX->ante;

                    break;

                }

                aux2 = aux2->prox;
            }
        }

        aux1 = aux1->prox;
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