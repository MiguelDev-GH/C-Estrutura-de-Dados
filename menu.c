#include "listas.h"

void menu(){
    limpar
    printf("=+-----LISTAS-----+=\n\n");
    printf("1- Criar \n");
    printf("2- Editar\n");
    printf("3- Deletar\n");
    printf("4- Ver Listas\n\n");
    printf("SAIR para encerrar o programa\n");
}

void opcao_criarLista(){

    limpar
    printf("Você deseja criar uma nova Lista? (S/N)\n");
    printf("Listas criadas: %d/10\n\n",ListaQntd);

    lerOp();

    limpar
    if((strcmp(op,"s") == 0 || strcmp(op,"sim") == 0) && ListaQntd < 10){
        
        vetorListas[ListaQntd] = criarLista();

        if(vetorListas[ListaQntd] == NULL){
            printf("Erro na criação da lista");
            confimar();
            return;
        } else{
            printf("Lista %d criada com sucesso!",ListaQntd);
            ListaQntd++;
            confimar();
        }

    } else {
        printf("Operação cancelada");
        printf("%s",op);
        confimar();
    }
}

// 2-

void menuEditar(){
    limpar
    printf("=+-----EDITAR-----+=\n\n");
    printf("1- Inserir elemento em tal lista \n");
    printf("2- Remover elemento \n\n");
    printf("Outra opção ou enter para voltar\n");
}

void menuVerListas(){
    limpar
    printf("=+-----LISTAS----+=\n\n");
    
    for(int i = 0; i < ListaQntd; i++){
        printf("Lista %d\n",i);
    }

    printf("\n");
}

void opcao_removerLista(){
    limpar
    printf("Editar lista");
    confimar();
}