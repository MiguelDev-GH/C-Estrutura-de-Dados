#include "programa/arquivos.c"

int main(){

    int rodando = 1;

    limpar

    do{
        menu();

        lerOp();

        if(atoi(op) == 1){
            opcao_criarLista();

        } else if(atoi(op) == 2){
            menuEditar();
            lerOp();

            if(atoi(op) == 1){
                opcao_inserir();

            } else if(atoi(op) == 2){
                opcao_removerElemento();
            }

        } else if(atoi(op) == 3){
            opcao_removerLista();

        } else if(atoi(op) == 4){
            
            menuVerListas();

        } else if(strcmp(op,"sair") == 0){
            finalizarPrograma();
        
        } else{
            opcaoInvalida();
        }

    }while(rodando);

    return 0;
}