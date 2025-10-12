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

void opcao_inserir(){
    limpar
    printf("=+----INSERIR----+=\n");
    printf("Escolha em qual lista você deseja inserir um elemento (Digite o número): \n\n");
    if(ListaQntd > 0){
        for(int i = 0; i < ListaQntd; i++){
            printf("%d- Lista %d\n",i,i);
        }
        printf("\n");
        lerOp();

        // Perguntar pro usuário onde que ele quer inserir o elemento na lista!!!!!!!!!!

    } else {
        printf("Nenhuma lista criada ainda!");
        confimar();
        return;
    }

}

void menuVerListas(){
    limpar
    printf("=+-----LISTAS----+=\n\n");

    if(ListaQntd > 0){
        for(int i = 0; i < ListaQntd; i++){
            printf("Lista %d",i);
            printf(" (%d elementos)\n",tamanhoLista(vetorListas[i]));
        }
        printf("\n");
    } else {
        printf("Nenhuma lista criada ainda!");
    }
    confimar();
}

void opcao_removerLista(){
    limpar
    printf("Editar lista");
    confimar();
}