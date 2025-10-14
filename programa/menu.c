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
            confirmar();
            return;
        } else{
            printf("Lista %d criada com sucesso!",ListaQntd);
            ListaQntd++;
            confirmar();
        }

    } else {
        printf("Operação cancelada");
        confirmar();
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

    if(ListaQntd > 0){
        printf("Escolha em qual lista você deseja inserir um elemento (Digite o número): \n\n");
        for(int i = 0; i < ListaQntd; i++){
            printf("%d- Lista %d\n",i,i);
        }
        printf("\n");
        lerOp();

        if(op[0] == '\n'){
            return;
        } else if(atoi(op) < ListaQntd){

            listaSelecionada = atoi(op);

            limpar
            printf("=+----INSERIR----+=\n");
            printf("Onde quer inserir na Lista %d?\n\n",listaSelecionada);
            printf("1- Inicio\n");
            printf("2- Final\n\n");
            lerOp();
            if(atoi(op) == 1){
                printf("\nQual valor você quer inserir?\n");
                scanf("%d",&valorInserir);
                limpar_buffer();
                inserirInicio(&vetorListas[listaSelecionada],valorInserir);
            } else if(atoi(op) == 2){
                printf("\nQual valor você quer inserir?\n");
                scanf("%d",&valorInserir);
                limpar_buffer();
                inserirFinal(&vetorListas[listaSelecionada],valorInserir);   
            } else{
                limpar
                opcaoInvalida();
            }
        }

    } else {
        printf("Nenhuma lista criada ainda!");
        confirmar();
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
        printf("Digite o número da lista para ver os elementos ou <ENTER> para voltar\n");
        lerOp();

        if(atoi(op) < ListaQntd){

            listaSelecionada = atoi(op);
            imprimirLista(&vetorListas[listaSelecionada],listaSelecionada);

        } else if(strcmp(op,"\n") == 0){
            limpar
        } else {
            limpar
            opcaoInvalida();
        }

    } else {
        printf("Nenhuma lista criada ainda!");
        confirmar();
    }
    
}

void opcao_removerLista(){    
    limpar
    printf("Qual lista você deseja excluir: ");
    lerOp();
    
    if(atoi(op) < ListaQntd){
        excluirLista(atoi(op));

    } else {
        limpar
        printf("Lista não encontrada");
        confirmar();
    }
}

void opcao_removerElemento(){
    limpar
    printf("=+----INSERIR----+=\n");

    if(ListaQntd > 0){
        printf("Escolha em qual lista você deseja remover um elemento (Digite o número): \n\n");
        for(int i = 0; i < ListaQntd; i++){
            printf("%d- Lista %d\n",i,i);
        }
        printf("\n");
        lerOp();

        if(op[0] == '\n'){
            return;
        } else if(atoi(op) < ListaQntd){

            listaSelecionada = atoi(op);

            limpar
            printf("=+----INSERIR----+=\n");
            printf("Onde quer remover um elemento da Lista %d?\n\n",listaSelecionada);
            printf("1- Inicio\n");
            printf("2- Final\n\n");
            lerOp();
            if(atoi(op) == 1){
                removerInicio(&vetorListas[listaSelecionada]);
            } else if(atoi(op) == 2){
                removerFinal(&vetorListas[listaSelecionada]);   
            } else{
                limpar
                opcaoInvalida();
                return;
            }
        }

    } else {
        printf("Nenhuma lista criada ainda!");
        confirmar();
        return;
    }

}