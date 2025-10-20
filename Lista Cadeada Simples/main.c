#include "programa/arquivos.c"

int main(){

    int rodando = 1;

    vetorListas[0] = criarLista();
    inserirInicio(vetorListas[0],1);
    inserirFinal(vetorListas[0],3);
    inserirFinal(vetorListas[0],2);
    inserirFinal(vetorListas[0],5);
    inserirFinal(vetorListas[0],4);
    ListaQntd++;

    limpar

    do{
        menu();

        lerOp();

        if(atoi(op) == 1){
            opcao_criarLista();

        } else if(atoi(op) == 2){
            menuEditar();

        } else if(atoi(op) == 3){
            opcao_removerLista();

        } else if(atoi(op) == 4){
            menuVerListas();

        } else if(atoi(op) == 5){
            opcao_ordenar();
        } else if(strcmp(op,"sair") == 0){
            finalizarPrograma();
        
        } else{
            opcaoInvalida();
        }

    }while(rodando);

    return 0;
}